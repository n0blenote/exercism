#include "protein_translation.h"

namespace protein_translation {
    const std::multimap<const char *, amino_acid> codon_map{
        {"AUG", Methionine},
        {"UUU", Phenylalanine},
        {"UUC", Phenylalanine},
        {"UCU", Serine},
        {"UCC", Serine},
        {"UCA", Serine},
        {"UCG", Serine},
        {"UAU", Tyrosine},
        {"UAC", Tyrosine},
        {"UGU", Cysteine},
        {"UGC", Cysteine},
        {"UGG", Tryptophan},
        {"UAA", STOP},
        {"UAG", STOP},
        {"UGA", STOP},
    };

    // TODO: add your solution here
    std::vector<std::string> proteins(std::string sequence) {
        for (int i = 0; i < sequence.size(); i += 3) {

        }
        return {};
    };
}  // namespace protein_translation
