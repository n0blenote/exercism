#include <functional>
#include <numeric>
namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum class AccountStatus {
  troll,
  guest,
  user,
  mod,
};
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum class Action {
  read,
  write,
  remove
};
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post(AccountStatus poster, AccountStatus viewer) {
  switch(poster) {
    case AccountStatus::troll:
      if (viewer == AccountStatus::troll) {
        return true;
      } else { return false;}
    default:
      return true;
  }
}
// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action desired_action, AccountStatus account) {
  switch(account) {
    case AccountStatus::guest:
      switch(desired_action) {
        case Action::read:
          return true;
        default:
          return false;
      }
    case AccountStatus::troll:
    case AccountStatus::user:
      switch (desired_action) {
        case Action::read:
        case Action:: write:
          return true;
        case Action::remove:
        default:
          return false;
      }
    case AccountStatus::mod:
      switch (desired_action) {
        case Action::read:
        case Action::write:
        case Action::remove:
          return true;
        default:
          return false;
      } 
  }
  return false;
}
// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus player_one,AccountStatus player_two) {
  if (player_one == AccountStatus::guest || player_two == AccountStatus::guest) {
    return false;
  }
  switch (player_one) {
    case AccountStatus::troll:
      switch(player_two) {
        case AccountStatus::troll:
          return true;
        default:
          return false;
      }
    default:
      if (player_two == AccountStatus::troll) {
        return false;
      }
      return true;
      }
  }


// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus player_one, AccountStatus player_two) {
 // enums go from 0 to n-1, so we can directly compare.
 return int(player_one) > int(player_two);
 }
}  // namespace hellmath
