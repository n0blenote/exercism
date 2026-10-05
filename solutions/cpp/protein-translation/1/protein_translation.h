#pragma once
#include <string>
#include <vector>
#include <map>
#include <utility>

namespace protein_translation {

enum amino_acid {
  Methionine,
  Phenylalanine,
  Leucine,
  Serine,
  Tyrosine,
  Cysteine,
  Tryptophan,
  STOP,
};


// TODO: add your solution here
std::vector<std::string> proteins(std::string sequence);
}  // namespace protein_translation
