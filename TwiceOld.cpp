//Your function takes two arguments:
//1.current father's age (years)
//2.current age of his son (years)
//Сalculate how many years ago the father was twice as old as his son (or in how many years he will be twice as old). The answer is always greater or equal to 0, no matter if it was in the past or it is in the future.

//my decision


int twice_as_old(int dad, int son) {
  if (dad > son){
    int twice = (dad - son) * 2;
    return abs(dad - twice);
  }
  if (dad < son){
    int twice = (son - dad) * 2;
    return abs(son - twice);
  }
  return 0;
}
