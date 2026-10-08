// positive sp value has been detected, the output may be wrong!
NiObjectNET *__thiscall sub_706942(int this, int a2)
{
  NiObjectNET *v3; // eax
  NiObjectNET *v4; // esi

  v3 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x706957*/
  v4 = v3; /*0x70695c*/
  if ( v3 ) /*0x70696f*/
  {
    NiObjectNET::NiObjectNET(v3); /*0x706973*/
    v4->vtbl = (NiObjectVtbl **)&NiWireframeProperty::`vftable'; /*0x706978*/
    LOWORD(v4[1].vtbl) = 0; /*0x70697e*/
  }
  else
  {
    v4 = 0; /*0x706986*/
  }
  sub_700A60((char **)this, v4, a2); /*0x706998*/
  LOWORD(v4[1].vtbl) = *(_WORD *)(this + 0x18); /*0x7069a1*/
  return v4; /*0x7069b8*/
}
