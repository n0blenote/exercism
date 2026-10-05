#include "protein_translation.h"

namespace protein_translation {
    const std::multimap<const std::string, amino_acid> codon_map{
        {"AUG", amino_acid::Methionine},
        {"UUU", amino_acid::Phenylalanine},
        {"UUC", amino_acid::Phenylalanine},
        {"UCU", amino_acid::Serine},
        {"UCC", amino_acid::Serine},
        {"UCA", amino_acid::Serine},
        {"UCG", amino_acid::Serine},
        {"UAU", amino_acid::Tyrosine},
        {"UAC", amino_acid::Tyrosine},
        {"UGU", amino_acid::Cysteine},
        {"UGC", amino_acid::Cysteine},
        {"UGG", amino_acid::Tryptophan},
        {"UAA", amino_acid::STOP},
        {"UAG", amino_acid::STOP},
        {"UGA", amino_acid::STOP},
    };

    // TODO: add your solution here
    std::vector<std::string> proteins(std::string sequence) {
        std::vector<std::string> result{};
        for (int i = 0; i < sequence.size(); i += 3) {
            // iterates over every three chars in std::string
            std::string codon = sequence.substr(i,3);
            auto found_codon = codon_map.find(codon);
            if (found_codon != codon_map.end()) {
                if (found_codon->second == amino_acid::STOP) {
                    break;
                }
                result.push_back(to_string(found_codon->second));
            }

        }
        return result;
    };
}  // namespace protein_translation
