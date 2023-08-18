//
// Created by EeshvarDasIKCM on 8/8/2023.
// Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
//

#include "html.h"
#include <array>
#include <cstring>

namespace ayurProjectRevealedClasses23 {
    std::string html::createNewMeta(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createFirstHeaderWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createSecondHeaderWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createThirdHeaderWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::fetchFooter() {
        return "<p>©2023 EeshvarDasIKCM (Erik Douglas Ward, EeshvarDas) AyurProject Bootstrap 0.1.0 (beta)</p>";
    }

    void html::printToHtmlFile(
            dictionary oneDictionary, const std::array<char,
            html::BOOTSTRAP_SENTENCE_MAX_LENGTH> fileNameWithoutFileExtension,
            board oneBard,
            const
            std::array<std::array<
                    char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                    html::BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO>
            fileContents
    ) {
        createFirstHeaderWithBody();
        createSecondHeaderWithBody();
        createThirdHeaderWithBody();
        std::array<std::array<
                char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                BOOTSTRAP_FILE_NAME_FULL_PARTS_INCLUDING_META_ZERO>
                fileName = {"", fileNameWithoutFileExtension, html::BOOTSTRAP_FILE_EXTENSION_HTML};
        {
            std::ofstream outputStream(
                    getFullFileNameAsString(fileName),
                    std::ios::binary
            );
            outputStream << getFullFileContentsAsString(fileContents) << '\n';
        }
    }

    html::html(dictionary oneDictionary, board oneBoard) {}

    const std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> html::stringToBootstrapArray(std::string source) {
            char targetAsCharArray[BOOTSTRAP_SENTENCE_MAX_LENGTH];
        for (std::uint8_t i = 0U; source.size(); ++i)
            targetAsCharArray[i] = source[i];
        std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> targetAsArray;
        std::memcpy (
                targetAsArray.data(),
                targetAsCharArray,
                BOOTSTRAP_SENTENCE_MAX_LENGTH
        );
        return targetAsArray;
    }

    const std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> html::getFullFileName(
            std::array<std::array<
                    char, BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                    BOOTSTRAP_FILE_NAME_FULL_PARTS_INCLUDING_META_ZERO>
                    fullFileName
            ) {
        std::string fileNamePart = fullFileName[BOOTSTRAP_FILE_NAME_PART].data();
        std::string fileExtensionPart = fullFileName[BOOTSTRAP_FILE_EXTENSION_PART].data();
        std::string fullFileNameAsString = fileNamePart + fileExtensionPart;
        char * fullFileNameAsCharPointer = fullFileNameAsString.data();
        //std::string fullFileNameAs = fullFileNameAsString.substr(0, fullFileNameAsString.size())
        //char fullFileNameAsCharArray [] = fullFileNameAsString.data();
        std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> fullFileNameAsArray =
                stringToBootstrapArray(fullFileNameAsString);
        return fullFileNameAsArray;
    }

    std::string html::getFullFileContentsAsString(
            const std::array<std::array<
                    char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>, 
                    html::BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO>
                    fileContents
                    ) {
        return getFileContents(fileContents).data();
    }

    std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> html::getFileContents(
            const std::array<std::array<
                    char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                    html::BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO>
                    fileContents
                    ) {
        std::string fileTitlePart = fileContents[BOOTSTRAP_FILE_NAME_PART].data();
        std::string fileBodyPart = fileContents[BOOTSTRAP_FILE_EXTENSION_PART].data();
        std::string fullFileContentsAsString = fileTitlePart + fileBodyPart;
        char fullFileContentsAsCharArray [BOOTSTRAP_SENTENCE_MAX_LENGTH];
        for (std::uint8_t i=0U; fullFileContentsAsString.size(); ++i)
            fullFileContentsAsCharArray[i] = fullFileContentsAsString[i];
        std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> fullFileContentsAsArray;
        std::memcpy (
                fullFileContentsAsArray.data(),
                fullFileContentsAsCharArray,
                BOOTSTRAP_SENTENCE_MAX_LENGTH
                );
        return fullFileContentsAsArray;
    }
} // ayurProjectRevealedClasses23