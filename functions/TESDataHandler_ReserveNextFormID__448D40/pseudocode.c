int __thiscall TESDataHandler_ReserveNextFormID(int *this)
{
  int v2; // ebp
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edi
  MEF_U32PointerMapEntry32 *v6; // esi
  int v8; // [esp+10h] [ebp-4h] BYREF

  do
  {
    v2 = *(this + 0x230); /*0x448d50*/
    do
    {
      while ( 1 )
      {
        v3 = *(this + 0x230); /*0x448d60*/
        v4 = (v3 & 0xFFFFFF) == 0xFFFFFF ? (v3 & 0xFF000000) + 0x800 : v3 + 1;
        *(this + 0x230) = v4; /*0x448d85*/
        v5 = v4; /*0x448d91*/
        v6 = TESForm_FormIDMap.buckets[(*((int (__thiscall **)(MEF_U32PointerMapLayout32 *, unsigned int))TESForm_FormIDMap.vtable /*0x448da4*/
                                        + 1))(
                                         &TESForm_FormIDMap,
                                         v4)];
        if ( !v6 ) /*0x448da9*/
          break; /*0x448da9*/
        while ( !(*((unsigned __int8 (__thiscall **)(MEF_U32PointerMapLayout32 *, unsigned int, unsigned int))TESForm_FormIDMap.vtable /*0x448dc6*/
                  + 2))(
                   &TESForm_FormIDMap,
                   v5,
                   v6->key) )
        {
          v6 = v6->next; /*0x448dc8*/
          if ( !v6 ) /*0x448dcc*/
            goto LABEL_8; /*0x448dcc*/
        }
      }
LABEL_8:
      ; /*0x448dce*/
    }
    while ( sub_453450(g_TESSaveLoadGame, *(this + 0x230)) );
  }
  while ( NiTMap_GetAt(&TESForm_FormIDMap, v2, &v8) || sub_453450(g_TESSaveLoadGame, v2) );
  return v2; /*0x448e14*/
}
