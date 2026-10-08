int __thiscall sub_75AC80(signed __int16 *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x20u); /*0x75ac86*/
  v4 = (int)v3; /*0x75ac8b*/
  if ( v3 ) /*0x75ac92*/
  {
    sub_752BF0(v3); /*0x75ac96*/
    *(_DWORD *)v4 = &NiPSysBoundUpdateModifier::`vftable'; /*0x75ac9b*/
    *(_WORD *)(v4 + 0x18) = 0; /*0x75aca1*/
    *(_WORD *)(v4 + 0x1A) = 0; /*0x75aca7*/
    *(_DWORD *)(v4 + 0x1C) = 0; /*0x75acad*/
  }
  else
  {
    v4 = 0; /*0x75acb6*/
  }
  sub_752C40((const char **)this, v4, a2); /*0x75acc0*/
  sub_75A870(v4, *(this + 0xC)); /*0x75accc*/
  return v4; /*0x75acd1*/
}
