void __usercall sub_4F2630(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // ecx
  MEF_U32PointerMapEntry32 *v10; // eax
  MEF_U32PointerMapLayout32 *v11; // ecx
  TESObjectCELL *v12; // ecx
  void *valueOut; // [esp+Ch] [ebp-28h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-24h] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-20h] BYREF
  unsigned int v16[4]; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v17; // [esp+30h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 0x5C) & 4) != 0 ) /*0x4f265b*/
  {
    sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x4f2667*/
    sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFD); /*0x4f2674*/
    sub_4426F0((int)MEMORY[0xB333A0], a2, a3, a4, (TESWorldSpace *)a1); /*0x4f2680*/
    sub_459F80(&g_TESSaveLoadGame->currentChangesMap, a1); /*0x4f268c*/
    sub_4B8420(v16, 0x25u); /*0x4f2697*/
    v5 = *(_DWORD *)(a1 + 0x30); /*0x4f269c*/
    v6 = *(_DWORD *)(v5 + 4); /*0x4f269f*/
    v7 = 0; /*0x4f26a2*/
    v17 = 0; /*0x4f26a6*/
    if ( v6 ) /*0x4f26ae*/
    {
      v8 = *(_DWORD **)(v5 + 8); /*0x4f26b0*/
      v9 = v8; /*0x4f26b3*/
      while ( !*v9 ) /*0x4f26b8*/
      {
        ++v7; /*0x4f26be*/
        ++v9; /*0x4f26c1*/
        if ( v7 >= v6 ) /*0x4f26c6*/
          goto LABEL_6; /*0x4f26c6*/
      }
      v10 = (MEF_U32PointerMapEntry32 *)v8[v7]; /*0x4f275f*/
    }
    else
    {
LABEL_6:
      v10 = 0; /*0x4f26c8*/
    }
    position = v10; /*0x4f26cc*/
    while ( position ) /*0x4f26d0*/
    {
      v11 = *(MEF_U32PointerMapLayout32 **)(a1 + 0x30); /*0x4f26dc*/
      valueOut = 0; /*0x4f26e4*/
      NiTMap_U32Pointer_GetNextEntry(v11, &position, &keyOut, &valueOut); /*0x4f26ec*/
      if ( valueOut ) /*0x4f26f7*/
        sub_4CBE50((TESObjectCELL *)valueOut, a2, a3, a4, v16); /*0x4f26fe*/
    }
    v12 = *(TESObjectCELL **)(a1 + 0x34); /*0x4f270a*/
    if ( v12 ) /*0x4f270f*/
      sub_4CBE50(v12, a2, a3, a4, v16); /*0x4f2716*/
    sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFF); /*0x4f2723*/
    sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x4f272e*/
    NiTMap_Clear(v16); /*0x4f2737*/
    v17 = 0xFFFFFFFF; /*0x4f2740*/
    NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(v16); /*0x4f2748*/
  }
}
