#include <string>


namespace log_line {
std::string message(std::string line) {
    return line.substr(line.find(':')+2);
    // return the message
}

std::string log_level(std::string line) {

    return line.substr(line.find('[')+1,line.find(']')-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string message = line.substr(line.find('['),line.find(']'));
    message.replace(0,1,"(");
    message.replace(message.find(']'),1,")");
    return message + line.substr(line.find(':')+2);
}
}  // namespace log_line
