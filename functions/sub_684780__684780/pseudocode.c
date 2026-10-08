bool __thiscall sub_684780(char **this)
{
  char *v1; // ecx
  bool result; // al
  int v3; // eax

  v1 = *(this + 0xC); /*0x684780*/
  result = 0; /*0x684783*/
  if ( v1 ) /*0x684787*/
  {
    v3 = sub_680CB0(v1); /*0x68478c*/
    return v3 && v3 != 7; /*0x68479e*/
  }
  return result; /*0x68479d*/
}
