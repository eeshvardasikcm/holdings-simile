//
// Created by User on 11/26/2023.
//

#ifndef HOLDINGS_SIMILE_SENTENCE_H
#define HOLDINGS_SIMILE_SENTENCE_H

#include "html.h"
#include <array>

namespace ayurvedaAndProjectManagementRevealedClasses23 {

    class sentence {
    public:
        sentence(std::array<char, ayurvedaAndProjectManagementRevealedClasses23::html::BOOTSTRAP_SENTENCE_MAX_LENGTH>
                s);
        sentence(std::string s);
        void setBootstrapSentence(
                std::array<char, ayurvedaAndProjectManagementRevealedClasses23::html::BOOTSTRAP_SENTENCE_MAX_LENGTH>);
        std::array<char, ayurvedaAndProjectManagementRevealedClasses23::html::BOOTSTRAP_SENTENCE_MAX_LENGTH>
        getBootstrapSentence();
    private:
        std::array<char, ayurvedaAndProjectManagementRevealedClasses23::html::BOOTSTRAP_SENTENCE_MAX_LENGTH> bootstrap;
    };

} // ayurvedaAndProjectManagementRevealedClasses23

#endif //HOLDINGS_SIMILE_SENTENCE_H