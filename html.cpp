//
// Created by EeshvarDasIKCM on 8/8/2023.
// Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
//

#include "html.h"

namespace ayurProjectRevealedClasses23 {
    std::string html::createNewMeta(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createNewHeaderOneWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createNewHeaderTwoWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createNewHeaderThreeWithBody(const char *string) {
        return "<p>" +std::string(string) + "</p>";
    }

    std::string html::fetchFooter() {
        return "<p>©2023 EeshvarDasIKCM (Erik Douglas Ward, EeshvarDas) AyurProject Bootstrap 0.0.8.beta2</p>";
    }

    void html::printToHtmlFile(const std::string& fileNameWithoutFileExtension, const std::string& fileContents) {
        std::string filename = fileNameWithoutFileExtension + ".html";
        {
            std::ofstream outputStream(filename, std::ios::binary);
            outputStream << fileContents << '\n';
        }
    }
} // ayurProjectRevealedClasses23