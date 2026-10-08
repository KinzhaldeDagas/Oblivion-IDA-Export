signed int __thiscall sub_8989E0(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x35); /*0x8989e1*/
  result = 0; /*0x8989e7*/
  if ( v2 <= 0 ) /*0x8989ec*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x34) - 4) = 0; /*0x898a04*/
    return 0xFFFFFFFF; /*0x898a0b*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x34); /*0x8989ee*/
    while ( *v4 != a2 ) /*0x8989fa*/
    {
      ++result; /*0x8989fc*/
      ++v4; /*0x8989fd*/
      if ( result >= v2 ) /*0x898a02*/
        goto LABEL_5; /*0x898a02*/
    }
    *(_DWORD *)(*(this + 0x34) + 4 * result) = 0; /*0x898a21*/
  }
  return result; /*0x898a0a*/
}
