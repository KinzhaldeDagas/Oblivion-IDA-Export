signed int __thiscall sub_8BB5A0(int *this, unsigned int a2, char a3)
{
  int *v3; // ecx

  v3 = this + 2; /*0x8bb5a4*/
  if ( a3 ) /*0x8bb5a9*/
    return sub_8B1570(v3, a2); /*0x8bb5b0*/
  else
    return sub_8B0E80((char **)v3, a2, 1); /*0x8bb5c0*/
}
