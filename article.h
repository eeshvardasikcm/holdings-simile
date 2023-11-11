//
// Created by Erik Douglas Ward (EeshvarDasIKCM) on 6/18/2023.
//

#ifndef AYURVEDA_AND_PROJECT_MANAGEMENT_CPP23_LIB_ARTICLE_H
#define AYURVEDA_AND_PROJECT_MANAGEMENT_CPP23_LIB_ARTICLE_H

#include "board.h"
#include "html.h"
#include <array>
#include <cstdint>

namespace ayurvedaAndProjectManagement {

    class article {
        //TODO: Needs to be some loosely written c++ code here that
        // handles bootstrap html titles, headers, sentences.
        const static std::uint8_t BOOTSTRAP_ARTICLE_STRING_MAX_LENGTH = 235U;
        const static std::uint8_t BOOTSTRAP_HEAD_TOTAL_PARTS_INCLUDING_META_ZERO = 3U;
        const static std::uint8_t BOOTSTRAP_HEAD_BEGIN_PART = 1U;
        const static std::uint8_t BOOTSTRAP_HEAD_DOCUMENT_TITLE_PART = 2U;
        const static std::uint8_t BOOTSTRAP_HEAD_END_TITLE_PART = 3U;
        std::array<
        std::array<char, article::BOOTSTRAP_ARTICLE_STRING_MAX_LENGTH>,
        article::BOOTSTRAP_HEAD_TOTAL_PARTS_INCLUDING_META_ZERO>
        generateBootstrapHead(
                std::array<char, ayurvedaAndProjectManagementRevealedClasses23::html::BOOTSTRAP_SENTENCE_MAX_LENGTH>
                        title);

        //TODO: Needs to be some loosely written c++ code here that
        // handles articles composed of other things.
        //TODO: the article class need to be fashioned in such a way
        // that a board adapter specification can receive the article.
    };

} // ayurvedaAndProjectManagement

#endif //AYURVEDA_AND_PROJECT_MANAGEMENT_CPP23_LIB_ARTICLE_H