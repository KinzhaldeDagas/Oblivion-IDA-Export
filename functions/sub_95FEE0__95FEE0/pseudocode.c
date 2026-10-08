void __thiscall sub_95FEE0(int this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // edx

  if ( a2 ) /*0x95fee7*/
  {
    v2 = 0; /*0x95feee*/
    if ( *(_WORD *)(this + 0xE) ) /*0x95feea*/
    {
      v3 = *(_DWORD **)(this + 8); /*0x95fef4*/
      while ( a2 != *v3 ) /*0x95fef9*/
      {
        ++v2; /*0x95fefb*/
        ++v3; /*0x95fefe*/
        if ( v2 >= *(unsigned __int16 *)(this + 0xE) ) /*0x95ff03*/
          goto LABEL_6; /*0x95ff03*/
      }
    }
    else
    {
LABEL_6:
      sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(this + 4), &a2); /*0x95ff05*/
    }
  }
}
