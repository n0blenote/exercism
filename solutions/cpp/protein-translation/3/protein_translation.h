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

std::string to_string(amino_acid aa);
std::vector<std::string> proteins(std::string sequence);  // namespace protein_translation

}
