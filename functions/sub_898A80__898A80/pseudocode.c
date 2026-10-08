signed int __thiscall sub_898A80(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x44); /*0x898a81*/
  result = 0; /*0x898a87*/
  if ( v2 <= 0 ) /*0x898a8c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x43) - 4) = 0; /*0x898aa4*/
    return 0xFFFFFFFF; /*0x898aab*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x43); /*0x898a8e*/
    while ( *v4 != a2 ) /*0x898a9a*/
    {
      ++result; /*0x898a9c*/
      ++v4; /*0x898a9d*/
      if ( result >= v2 ) /*0x898aa2*/
        goto LABEL_5; /*0x898aa2*/
    }
    *(_DWORD *)(*(this + 0x43) + 4 * result) = 0; /*0x898ac1*/
  }
  return result; /*0x898aaa*/
}
