// Pass223: Default NiWireframeProperty producer for global 0x00B3F984, consumed by NiPropertyState slot 8.
LONG sub_706A40()
{
  NiObjectNET *v0; // eax
  int v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x706a65*/
  v1 = (int)v0; /*0x706a6a*/
  if ( v0 ) /*0x706a7d*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x706a81*/
    *(_DWORD *)v1 = &NiWireframeProperty::`vftable'; /*0x706a86*/
    *(_WORD *)(v1 + 0x18) = 0; /*0x706a8c*/
  }
  else
  {
    v1 = 0; /*0x706a94*/
  }
  result = unk_B3F984; /*0x706a96*/
  if ( unk_B3F984 != v1 ) /*0x706aa5*/
  {
    if ( result ) /*0x706aa9*/
    {
      v3 = (int (__thiscall ***)(_DWORD, int))unk_B3F984; /*0x706aab*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x706ab1*/
      if ( !result ) /*0x706ab9*/
        result = (**v3)(v3, 1); /*0x706ac7*/
    }
    unk_B3F984 = v1; /*0x706acb*/
    if ( v1 ) /*0x706ad1*/
      return InterlockedIncrement((volatile LONG *)(v1 + 4)); /*0x706ad7*/
  }
  return result; /*0x706add*/
}
