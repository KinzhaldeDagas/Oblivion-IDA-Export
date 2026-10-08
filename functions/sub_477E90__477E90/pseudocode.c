int __thiscall sub_477E90(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *i; // edx

  result = 0; /*0x477e95*/
  if ( a2 ) /*0x477e99*/
  {
    for ( i = this + 0x13; *i != a2; i += 4 ) /*0x477e9b*/
    {
      if ( ++result >= 0x10 ) /*0x477ead*/
        return 0; /*0x477eaf*/
    }
    return (int)(this + 4 * result + 0x13); /*0x477eb8*/
  }
  return result; /*0x477eb1*/
}
