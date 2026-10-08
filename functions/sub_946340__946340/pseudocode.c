signed int __thiscall sub_946340(void **this, int a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD *i; // edx
  void *v7; // ecx
  int v8; // esi

  sub_918440(*(this + 5), 9); /*0x946349*/
  sub_9181B0((_DWORD **)*(this + 5), 0x22); /*0x946353*/
  sub_918460(*(this + 5), a2, 0); /*0x946362*/
  v3 = (int)*(this + 9); /*0x946367*/
  v4 = 0; /*0x94636a*/
  if ( v3 > 0 ) /*0x94636e*/
  {
    for ( i = *(this + 8); *i != a2; i += 2 ) /*0x946370*/
    {
      if ( ++v4 >= v3 ) /*0x94637d*/
        return 9; /*0x946386*/
    }
    v7 = (char *)*(this + 9) + 0xFFFFFFFF; /*0x94638c*/
    *(this + 9) = v7; /*0x94638d*/
    v8 = (int)*(this + 8); /*0x946390*/
    *(_DWORD *)(v8 + 8 * v4) = *(_DWORD *)(v8 + 8 * (_DWORD)v7); /*0x946396*/
    *(_DWORD *)(v8 + 8 * v4 + 4) = *(_DWORD *)(v8 + 8 * (_DWORD)v7 + 4); /*0x94639d*/
  }
  return 9; /*0x94637f*/
}
