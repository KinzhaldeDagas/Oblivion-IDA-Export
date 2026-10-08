int __thiscall sub_75BE50(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x20u); /*0x75be56*/
  v4 = (int)v3; /*0x75be5b*/
  if ( v3 ) /*0x75be62*/
  {
    sub_752BF0(v3); /*0x75be66*/
    *(_DWORD *)v4 = &NiPSysAgeDeathModifier::`vftable'; /*0x75be6b*/
    *(_BYTE *)(v4 + 0x18) = 0; /*0x75be71*/
    *(_DWORD *)(v4 + 0x1C) = 0; /*0x75be75*/
  }
  else
  {
    v4 = 0; /*0x75be7e*/
  }
  sub_752C40(this, v4, a2); /*0x75be88*/
  *(_BYTE *)(v4 + 0x18) = *((_BYTE *)this + 0x18); /*0x75be91*/
  return v4; /*0x75be90*/
}
