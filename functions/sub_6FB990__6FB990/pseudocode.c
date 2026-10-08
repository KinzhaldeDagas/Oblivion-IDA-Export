bool __thiscall sub_6FB990(const char **this, float *a2)
{
  bool result; // al
  bool v4; // cl

  result = sub_721570(this, (int)a2); /*0x6fb999*/
  if ( result ) /*0x6fb9a0*/
  {
    v4 = a2[3] == *((float *)this + 3) && a2[4] == *((float *)this + 4) && a2[5] == *((float *)this + 5); /*0x6fb9cf*/
    return a2[6] == *((float *)this + 6) && a2[7] == *((float *)this + 7) && a2[8] == *((float *)this + 8) && v4; /*0x6fba0a*/
  }
  return result; /*0x6fba09*/
}
