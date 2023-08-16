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

    std::string html::createNewHeaderOneWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createNewHeaderTwoWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::createNewHeaderThreeWithBody(const char *string) {
        return "<p>" + std::string(string) + "</p>";
    }

    std::string html::fetchFooter() {
        return "<p>©2023 EeshvarDasIKCM (Erik Douglas Ward, EeshvarDas) AyurProject Bootstrap 0.0.8.beta3</p>";
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
        std::array<std::array<
                char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                3U>
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
        for (std::uint8_t i = 0; source.size(); ++i)
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
        for (std::uint8_t i=0; fullFileContentsAsString.size(); ++i)
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