int __thiscall TESDataHandler_ReserveNextFormID(int *this)
{
  int v2; // ebp
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // esi
  int v8; // [esp+10h] [ebp-4h] BYREF

  do
  {
    v2 = *(this + 0x230);
    do
    {
      while ( 1 )
      {
        v3 = *(this + 0x230);
        v4 = (v3 & 0xFFFFFF) == 0xFFFFFF ? (v3 & 0xFF000000) + 0x800 : v3 + 1;
        *(this + 0x230) = v4;
        v5 = v4;
        v6 = *(_DWORD **)(dword_B06144
                        + 4
                        * (*(int (__thiscall **)(_DWORD *, unsigned int))(TESForm_FormIDMap + 4))(
                            &TESForm_FormIDMap,
                            v4));
        if ( !v6 )
          break;
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, unsigned int, _DWORD))(TESForm_FormIDMap + 8))(
                   &TESForm_FormIDMap,
                   v5,
                   v6[1]) )
        {
          v6 = (_DWORD *)*v6;
          if ( !v6 )
            goto LABEL_8;
        }
      }
LABEL_8:
      ;
    }
    while ( sub_453450(SaveLoad_CurrentSavegame, *(this + 0x230)) );
  }
  while ( NiTMap_GetAt(&TESForm_FormIDMap, v2, &v8) || sub_453450(SaveLoad_CurrentSavegame, v2) );
  return v2;
}
