//
// Created by Erik Douglas Ward (EeshvarDasIKCM) on 6/18/2023.
//

#ifndef AYURVEDA_AND_PROJECT_MANAGEMENT_CPP23_LIB_ARTICLE_H
#define AYURVEDA_AND_PROJECT_MANAGEMENT_CPP23_LIB_ARTICLE_H

#include "board.h"
#include "html.h"
#include "sentence.h"
#include "head.h"
#include "body.h"
#include "footer.h"
#include <array>
#include <cstdint>

namespace ayurvedaAndProjectManagementRevealedClasses23 {

    class article {
    public:
        article(head title, body threeHeadingsWithSentences, footer f);
        const static std::uint8_t BOOTSTRAP_ARTICLE_STRING_MAX_LENGTH = 235U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_HEAD_TOTAL_PARTS_INCLUDING_META_ZERO = 3U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_BODY_TOTAL_PARTS_INCLUDING_META_ZERO = 3U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_FOOTER_TOTAL_PARTS_INCLUDING_META_ZERO = 1U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_HEAD_BEGIN_PART = 1U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_HEAD_DOCUMENT_TITLE_PART = 2U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_HEAD_END_TITLE_PART = 3U;
        const static std::uint8_t BOOTSTRAP_ARTICLE_FOOTER = 5U;
        std::array<sentence, article::BOOTSTRAP_ARTICLE_HEAD_TOTAL_PARTS_INCLUDING_META_ZERO>
        generateBootstrapHead(sentence title);
        std::array<sentence, article::BOOTSTRAP_ARTICLE_BODY_TOTAL_PARTS_INCLUDING_META_ZERO>
        generateBootstrapBodyHeadingWithSentences(
                sentence heading, sentence firstSentence, sentence secondSentence, sentence thirdSentence);
        std::array<sentence, article::BOOTSTRAP_ARTICLE_FOOTER_TOTAL_PARTS_INCLUDING_META_ZERO>
        generateBootstrapFooter();

        //TODO: Needs to be some c++ code here that
        // handles articles composed of other things.

        //TODO: the article class need to be fashioned in such a way
        // that a board adapter specification can receive the article.
    };

} // ayurvedaAndProjectManagementRevealedClasses23

#endif //AYURVEDA_AND_PROJECT_MANAGEMENT_CPP23_LIB_ARTICLE_H