//
// Created by EeshvarDasIKCM on 8/8/2023.
// Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
//

#ifndef HOLDINGS_SIMILE_THEORY_SIMILE_H
#define HOLDINGS_SIMILE_THEORY_SIMILE_H

#include <string>
#include "kshetra_simile.h"
#include "point_simile.h"
#include "dictionary.h"
#include "board.h"
#include "dictionary.h"

namespace ayurProjectRevealedClasses23 {

    class holdingsSimile {
    public:
        holdingsSimile(std::string bCorpGreenPaper, std::string ayurProjectCorpGreenPaper);

        static void energy() {

        }

        static void ledger() {

        }

        static kshetraSimile sell(pointSimile energyPoint) {
            return {};
        }
    static kshetraSimile sell(kshetraSimile energyPoint) {
        return {};
    }

        static const std::uint8_t SIX_HUNDRED_MONTHLY = 6U;
        static const std::uint8_t ONE_HUNDRED_DOLLARS_QUARTERLY = 100U;
        static const std::uint8_t TWENTY_DOLLARS_MONTHLY = 75U;
        static const std::uint8_t ONE_HUNDRED_AND_FIFTY_DOLLARS = 150U;
        static const std::uint8_t THIRTY_PERCENT_APR = 30U;
        static const std::uint8_t EIGHTY_EIGHT_DOLLARS = 88U;
        static const std::uint8_t TEN_DOLLARS_PER_MONTH = 10U;
        static const std::uint8_t FIFTY_DOLLARS_PER_MONTH = 25U;
        static const std::uint8_t TWO_HUNDRED_AND_FORTY_EIGHT_DOLLARS = 248U;
        static const std::uint8_t TWENTY_PERCENT_APR = 20U;
        static const std::uint8_t ONE_HUNDRED_AND_TWENTY_FIVE_DOLLARS = 125U;
        static const std::uint8_t FIFTY_DOLLARS = 50U;
        static const std::uint8_t FIVE_HUNDRED_DOLLARS = 50U;
        static const std::uint8_t EIGHT_THOUSAND_DOLLARS = 80U;
        static const std::uint8_t TWO_THOUSAND_DOLLARS_PER_YEAR = 25U;

        static const std::uint8_t ayurProject600BrokeSFYEnergyCashPerMo = SIX_HUNDRED_MONTHLY;
        static const std::uint8_t bVBishnuM_Q6_8_M6BishnuPGVAPHR = ONE_HUNDRED_DOLLARS_QUARTERLY;
        static const std::uint8_t cashRecreation20SplurgePerFortnight = TWENTY_DOLLARS_MONTHLY;
        static const std::uint8_t debitPlusCredit3_1_2_150PerMoQ6_8 = ONE_HUNDRED_AND_FIFTY_DOLLARS;
        static const std::uint8_t debt2Debit1Plus30Q6_8_Credit3 = THIRTY_PERCENT_APR;
        static const std::uint8_t debt2Debit2Plus29Q6_8_LoanPayoff = EIGHTY_EIGHT_DOLLARS;
        static const std::uint8_t debtCredit1_25PerMo = TEN_DOLLARS_PER_MONTH;
        static const std::uint8_t debtCredit1_50PerMo = FIFTY_DOLLARS_PER_MONTH;
        static const std::uint8_t debtCredit1_75PerMo = ONE_HUNDRED_DOLLARS_QUARTERLY;
        static const std::uint8_t debtCredit2_25PerMo = TEN_DOLLARS_PER_MONTH;
        static const std::uint8_t debtCredit3_75_Q9_11 = ONE_HUNDRED_DOLLARS_QUARTERLY;
        static const std::uint8_t debtDebit2Plus27_Q9_11_LoanPayoff = TWO_HUNDRED_AND_FORTY_EIGHT_DOLLARS;
        static const std::uint8_t debtDebit3Plus20_Q12_2_LoanPayoff = TWENTY_PERCENT_APR;
        static const std::uint8_t debtDebit4Plus18_Q3_5_LoanPayoff = TWENTY_PERCENT_APR;
        static const std::uint8_t debtDebit5Plus_00001000_Q7_9_M9 = ONE_HUNDRED_AND_TWENTY_FIVE_DOLLARS;
        static const std::uint8_t emergencyPlus_00001000_PerMo = ONE_HUNDRED_AND_TWENTY_FIVE_DOLLARS;
        static const std::uint8_t emergency_00011000_PerYr = FIVE_HUNDRED_DOLLARS;
        static const std::uint8_t GoogleFiAyurProject8000_SFY_6Mo = EIGHT_THOUSAND_DOLLARS;
        static const std::uint8_t maintainCar_SFY_Plus5000PerYr = TWO_THOUSAND_DOLLARS_PER_YEAR;
        static const std::uint8_t civilRights_5000_PerYr = TWO_THOUSAND_DOLLARS_PER_YEAR;

        static const std::string projectPhases;
        static const std::string supremeCourtStrategiesAndImportantNotes;
        static const std::string bothJurisdictionsStrategiesAndImportantNotes;
        static const std::string districtCourtStrategiesAndImportantNotes;
        static const std::string erikDouglasWardCV;

        static const std::uint8_t COLOR_PINK = 1U;
        static const std::uint8_t COLOR_PURPLE = 1U;
        static const std::uint8_t COLOR_ORANGE = 1U;
        static const std::uint8_t COLOR_LIGHT_BLUE = 1U;
        static const std::uint8_t COLOR_DARK_BLUE = 1U;
        static const std::uint8_t COLOR_LIGHT_GREY = 1U;

        static const std::uint8_t pink = COLOR_PINK;
        static const std::uint8_t purple = COLOR_PURPLE;
        static const std::uint8_t orange = COLOR_ORANGE;
        static const std::uint8_t lightBlue = COLOR_LIGHT_BLUE;
        static const std::uint8_t DarkBlue = COLOR_DARK_BLUE;

    private:
        std::string bCorpGreenPaper;
        std::string ayurProjectCorpGreenPaper;
        dictionary oneDictionary{};
        board oneBoard{};
    };

} // ayurProjectRevealedClasses23

#endif //HOLDINGS_SIMILE_THEORY_SIMILE_H