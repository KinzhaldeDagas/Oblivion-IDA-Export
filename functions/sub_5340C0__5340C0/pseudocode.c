signed int __thiscall sub_5340C0(int *this, unsigned int a2, char a3)
{
  int *v3; // ecx

  v3 = this + 5; /*0x5340c0*/
  if ( a3 ) /*0x5340c8*/
    return sub_8B1570(v3, a2); /*0x5340cf*/
  else
    return sub_8B0E80((char **)v3, a2, 1); /*0x5340df*/
}
