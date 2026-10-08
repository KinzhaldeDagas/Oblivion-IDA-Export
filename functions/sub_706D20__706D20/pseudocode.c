// Pass223: Default NiZBufferProperty producer for global 0x00B3F998, consumed by NiPropertyState slot 9.
LONG sub_706D20()
{
  NiObjectNET *v0; // eax
  int v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x706d45*/
  v1 = (int)v0; /*0x706d4a*/
  if ( v0 ) /*0x706d5d*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x706d61*/
    *(_DWORD *)v1 = &NiZBufferProperty::`vftable'; /*0x706d66*/
    *(_WORD *)(v1 + 0x18) = 0xF; /*0x706d6c*/
  }
  else
  {
    v1 = 0; /*0x706d74*/
  }
  result = unk_B3F998; /*0x706d76*/
  if ( unk_B3F998 != v1 ) /*0x706d85*/
  {
    if ( result ) /*0x706d89*/
    {
      v3 = (int (__thiscall ***)(_DWORD, int))unk_B3F998; /*0x706d8b*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x706d91*/
      if ( !result ) /*0x706d99*/
        result = (**v3)(v3, 1); /*0x706da7*/
    }
    unk_B3F998 = v1; /*0x706dab*/
    if ( v1 ) /*0x706db1*/
      return InterlockedIncrement((volatile LONG *)(v1 + 4)); /*0x706db7*/
  }
  return result; /*0x706dbd*/
}
