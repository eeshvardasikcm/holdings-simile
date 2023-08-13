//
// Created by EeshvarDasIKCM on 8/8/2023.
// Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
//

#ifndef HOLDINGS_SIMILE_HTML_H
#define HOLDINGS_SIMILE_HTML_H

#include "board.h"
#include "dictionary.h"
#include <cstdint>
#include <string>
#include <fstream>

namespace ayurProjectRevealedClasses23 {

    class html {
    public:
        html(dictionary oneDictionary, board oneBoard);
        static std::string createNewMeta(const char *string);
        static std::string createNewHeaderOneWithBody(const char *string);
        static std::string createNewHeaderTwoWithBody(const char *string);
        static std::string createNewHeaderThreeWithBody(const char *string);
        static std::string fetchFooter();
        static void printToHtmlFile(dictionary oneDictionary, const std::string& fileNameWithoutFileExtension,
                                    board oneBard, const std::string& fileContents);
    };

} // ayurProjectRevealedClasses23

#endif //HOLDINGS_SIMILE_HTML_H