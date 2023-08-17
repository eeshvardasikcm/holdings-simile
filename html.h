//
// Created by EeshvarDasIKCM on 8/8/2023.
// Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
//

#ifndef HOLDINGS_SIMILE_HTML_H
#define HOLDINGS_SIMILE_HTML_H

#include "board.h"
#include "dictionary.h"
#include <cstdio>
#include <fstream>
#include <array>

namespace ayurProjectRevealedClasses23 {

    class html {
    public:
        html(dictionary oneDictionary, board oneBoard);
        static const std::uint8_t BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO = 14U;
        static const std::uint8_t BOOTSTRAP_SENTENCE_MAX_LENGTH = 235U;
        constexpr static const
        std::array<char, BOOTSTRAP_SENTENCE_MAX_LENGTH> BOOTSTRAP_FILE_EXTENSION_HTML = {".html"};
        static const std::uint8_t BOOTSTRAP_FILE_NAME_FULL_PARTS_INCLUDING_META_ZERO = 3U;
        static const std::array<char, BOOTSTRAP_SENTENCE_MAX_LENGTH> getFullFileName(
                std::array<std::array<
                        char, BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                        html::BOOTSTRAP_FILE_NAME_FULL_PARTS_INCLUDING_META_ZERO>
                fullFileName
                );
        static std::string getFullFileNameAsString(
                std::array<std::array<
                        char, BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                        html::BOOTSTRAP_FILE_NAME_FULL_PARTS_INCLUDING_META_ZERO>
                fullFileName
                ) {
            return getFullFileName(fullFileName).data();
        }
        static std::string createNewMeta(const char *string);
        static std::string createNewHeaderOneWithBody(const char *string);
        static std::string createNewHeaderTwoWithBody(const char *string);
        static std::string createNewHeaderThreeWithBody(const char *string);
        static std::string fetchFooter();
        static void printToHtmlFile(
                dictionary oneDictionary, const std::array<char,
                html::BOOTSTRAP_SENTENCE_MAX_LENGTH> fileNameWithoutFileExtension,
                                    board oneBard,
                                    const
                                    std::array<std::array<
                                            char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                                            html::BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO>
                                    fileContents
                                    );
    private:
        static const std::uint8_t BOOTSTRAP_FILE_NAME_PART = 1U;
        static const std::uint8_t BOOTSTRAP_FILE_EXTENSION_PART = 2U;
        std::string AYURPROJECT_SYNC_SPECIFICATION_PUBLISHING_BETA =
                "ayurproject_sync_specification_publishing_beta";
        static const std::uint8_t BOOTSTRAP_DOCUMENT_TITLE_PART = 1U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_SUB_TITLE_PART = 2U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_FIRST_HEADER_PART = 3U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_FIRST_HEADER_FIRST_SENTENCE_PART = 4U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_FIRST_HEADER_SECOND_SENTENCE_PART = 5U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_FIRST_HEADER_THIRD_SENTENCE_PART = 6U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_SECOND_HEADER_PART = 7U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_SECOND_HEADER_FIRST_SENTENCE_PART = 8U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_SECOND_HEADER_SECOND_SENTENCE_PART = 9U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_SECOND_HEADER_THIRD_SENTENCE_PART = 10U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_THIRD_HEADER_PART = 11U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_THIRD_HEADER_FIRST_SENTENCE_PART = 12U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_THIRD_HEADER_SECOND_SENTENCE_PART = 13U;
        static const std::uint8_t BOOTSTRAP_DOCUMENT_THIRD_HEADER_THIRD_SENTENCE_PART = 14U;

        static std::string getFullFileContentsAsString(
                const std::array<std::array<
                        char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                        html::BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO>
                fileContents);

        static std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> getFileContents(
                const std::array<std::array<
                        char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH>,
                        html::BOOTSTRAP_DOCUMENT_TOTAL_PARTS_INCLUDING_META_ZERO>
                fileContents);

        static const std::array<char, html::BOOTSTRAP_SENTENCE_MAX_LENGTH> stringToBootstrapArray(std::string source);
    };

} // ayurProjectRevealedClasses23

#endif //HOLDINGS_SIMILE_HTML_H