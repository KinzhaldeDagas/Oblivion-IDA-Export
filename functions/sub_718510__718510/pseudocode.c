NiObjectNET *__thiscall sub_718510(char **this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v4 = v3;
  if ( v3 )
  {
    NiObjectNET::NiObjectNET(v3);
    v4->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
    LOWORD(v4[1].vtbl) = 0xEC;
    BYTE2(v4[1].vtbl) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_700A60(this, v4, a2);
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0xC);
  BYTE2(v4[1].vtbl) = *((_BYTE *)this + 0x1A);
  return v4;
}
