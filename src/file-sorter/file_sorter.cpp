//
// Created by azaka on 2/19/26.
//

#include <iostream>
#include <filesystem>

#include "file_sorter.h"

namespace fs = std::filesystem;

int sort_files() {
    const std::string path = "./Downloads";

    if (!fs::exists(path)) {
        std::cout << "Folder not found!" << std::endl;
        return 1;
    }

    for (const auto& entry : fs::directory_iterator(path)) {
        if (entry.is_regular_file()) {
            auto extension = entry.path().extension().string();

            std::string target_folder = "Other";
            if (extension == ".jpg" || extension == ".png") {
                target_folder = "Images";
            } else if (extension == ".pdf" || extension == ".docx") {
                target_folder = "Documents";
            }

            fs::create_directory(fs::path(path) / target_folder);

            fs::path old_path = entry.path();
            fs::path new_path = fs::path(path) / target_folder / old_path.filename();

            fs::rename(old_path, new_path);
            std::cout << "Moved: " << old_path.filename() << " -> " << target_folder << std::endl;
        }
    }

    return 0;
}