//
// Created by EeshvarDasIKCM on 8/8/2023.
// Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
//

#ifndef HOLDINGS_SIMILE_DEFINITION_H
#define HOLDINGS_SIMILE_DEFINITION_H

#include <cstdint>
#include "dictionary.h"
#include "super.h"
#include "triangle_simile.h"
#include "point_simile.h"
#include "modifier.h"
#include "board.h"

namespace ayurProjectRevealedClasses23 {

    class definition {
    public:
        explicit definition(uint8_t uint8);
        static ayurProjectRevealedClasses23::definition createDefinitionEntry();
        static auto createBase() -> definition;
        static auto createSuper() -> super;
        static auto createSuper(super CongruencySimileWith) -> super;
        static triangleSimile createTriangleSimile(
                dictionary oneDictionary, std::uint8_t baseLookupCode, board oneBoard, std::uint8_t superLookupCode);
        static auto createAxiologyModifier(super super1, triangleSimile super2) -> modifier;
        static auto createNewProductivityEnergyPointSimile(super super1, modifier modifier1) -> pointSimile;
        static auto createNewAyurvedaEnergyPointSimile(super super1, modifier modifier1) -> pointSimile;
        static auto createNewArthaEnergyPointSimile(
                super super1, triangleSimile triangle1, modifier modifier1) -> pointSimile;
        static auto createNewMokshaEnergyPointSimile(super super1, modifier modifier1) -> pointSimile;
        auto createSuperOnBaseDefinition(int8_t code, super congruencySimileWith) -> super;
    private:
        std::uint8_t dictionaryEntryCode{};
        [[nodiscard]] auto getDictionaryLookupCode() const -> std::uint8_t {return dictionaryEntryCode;}

        super placeholderSuper{};
    };  // namespace ayurProject
} // ayurvedaAndProjectManagementRevealedClasses23
#endif //HOLDINGS_SIMILE_DEFINITION_H