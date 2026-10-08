// Pass223: Default NiVertexColorProperty producer for global 0x00B3F980, consumed by NiPropertyState slot 7.
LONG sub_7065A0()
{
  NiObjectNET *v0; // eax
  int v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7065c5*/
  v1 = (int)v0; /*0x7065ca*/
  if ( v0 ) /*0x7065dd*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x7065e1*/
    *(_DWORD *)v1 = &NiVertexColorProperty::`vftable'; /*0x7065e6*/
    *(_WORD *)(v1 + 0x18) = 8; /*0x7065ec*/
  }
  else
  {
    v1 = 0; /*0x7065f4*/
  }
  result = unk_B3F980; /*0x7065f6*/
  if ( unk_B3F980 != v1 ) /*0x706605*/
  {
    if ( result ) /*0x706609*/
    {
      v3 = (int (__thiscall ***)(_DWORD, int))unk_B3F980; /*0x70660b*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x706611*/
      if ( !result ) /*0x706619*/
        result = (**v3)(v3, 1); /*0x706627*/
    }
    unk_B3F980 = v1; /*0x70662b*/
    if ( v1 ) /*0x706631*/
      return InterlockedIncrement((volatile LONG *)(v1 + 4)); /*0x706637*/
  }
  return result; /*0x70663d*/
}
