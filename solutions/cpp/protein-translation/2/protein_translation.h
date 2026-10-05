#pragma once
#include <string>
#include <vector>
#include <map>
#include <utility>

namespace protein_translation {

enum class amino_acid {
  Methionine,
  Phenylalanine,
  Leucine,
  Serine,
  Tyrosine,
  Cysteine,
  Tryptophan,
  STOP,
};

std::string to_string(amino_acid aa) {
    switch (aa) {
        case amino_acid::Methionine: return "Methionine";
        case amino_acid::Phenylalanine: return "Phenylalanine";
        case amino_acid::Leucine: return "Leucine";
        case amino_acid::Serine: return "Serine";
        case amino_acid::Tyrosine: return "Tyrosine";
        case amino_acid::Cysteine: return "Cysteine";
        case amino_acid::Tryptophan: return "Tryptophan";
            default: return {};
    };


// TODO: add your solution here
std::vector<std::string> proteins(std::string sequence);
}  // namespace protein_translation
