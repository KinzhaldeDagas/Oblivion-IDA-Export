void __thiscall NiDynamicGeometryGroup::~NiDynamicGeometryGroup(NiDynamicGeometryGroup *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  MEF_U32PointerMapEntry32 *v5; // eax
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *v10; // ebp
  unsigned int v11; // eax
  _DWORD *v12; // ecx
  MEF_U32PointerMapEntry32 *v13; // eax
  unsigned int i; // edi
  int v15; // edx
  unsigned int v16; // ebx
  unsigned __int16 v17; // ax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  unsigned __int16 v22; // cx
  unsigned int v23; // [esp-8h] [ebp-24h]
  unsigned int v24; // [esp-4h] [ebp-20h]
  unsigned int v25; // [esp-4h] [ebp-20h]
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-8h] BYREF
  void *valueOut; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)this = &NiDynamicGeometryGroup::`vftable'; /*0x77e7a8*/
  v2 = *((_DWORD *)this + 4); /*0x77e7ae*/
  v3 = 0; /*0x77e7b3*/
  if ( v2 ) /*0x77e7b8*/
  {
    v4 = *((_DWORD **)this + 5); /*0x77e7bd*/
    while ( !*v4 ) /*0x77e7c2*/
    {
      ++v3; /*0x77e7c8*/
      ++v4; /*0x77e7cb*/
      if ( v3 >= v2 ) /*0x77e7d0*/
        goto LABEL_5; /*0x77e7d0*/
    }
    v5 = *(MEF_U32PointerMapEntry32 **)(*((_DWORD *)this + 5) + 4 * v3); /*0x77e923*/
  }
  else
  {
LABEL_5:
    v5 = 0; /*0x77e7d2*/
  }
  position = v5; /*0x77e7d6*/
  while ( position ) /*0x77e7da*/
  {
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)((char *)this + 0xC), &position, &keyOut, &valueOut); /*0x77e7f4*/
    NiTMap_RemoveAt((_DWORD *)this + 3, keyOut); /*0x77e800*/
    v6 = valueOut; /*0x77e805*/
    if ( valueOut ) /*0x77e80b*/
    {
      v7 = *((_DWORD *)valueOut + 4); /*0x77e80d*/
      if ( v7 ) /*0x77e812*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*((_DWORD *)valueOut + 4)); /*0x77e81a*/
      v8 = v6[3]; /*0x77e81c*/
      if ( v8 ) /*0x77e821*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(v6[3]); /*0x77e829*/
      FormHeapFree((unsigned int)v6); /*0x77e82c*/
    }
  }
  v9 = *((_DWORD *)this + 8); /*0x77e83a*/
  v10 = (_DWORD *)((char *)this + 0x1C); /*0x77e83d*/
  v11 = 0; /*0x77e840*/
  if ( v9 ) /*0x77e844*/
  {
    v12 = *((_DWORD **)this + 9); /*0x77e849*/
    while ( !*v12 ) /*0x77e852*/
    {
      ++v11; /*0x77e858*/
      ++v12; /*0x77e85b*/
      if ( v11 >= v9 ) /*0x77e860*/
        goto LABEL_18; /*0x77e860*/
    }
    v13 = *(MEF_U32PointerMapEntry32 **)(*((_DWORD *)this + 9) + 4 * v11); /*0x77e92b*/
  }
  else
  {
LABEL_18:
    v13 = 0; /*0x77e862*/
  }
  position = v13; /*0x77e866*/
  while ( position ) /*0x77e86a*/
  {
    NiTMap_U32Pointer_GetNextEntry( /*0x77e881*/
      (MEF_U32PointerMapLayout32 *)((char *)this + 0x1C),
      &position,
      (unsigned int *)&valueOut,
      (void **)&keyOut);
    NiTMap_RemoveAt((_DWORD *)this + 7, (int)valueOut); /*0x77e88d*/
    v24 = keyOut; /*0x77e896*/
    *(_DWORD *)(keyOut + 8) = 0; /*0x77e897*/
    FormHeapFree(v24); /*0x77e89a*/
  }
  for ( i = 0; i < *((unsigned __int16 *)this + 0x1A); ++i ) /*0x77e8aa*/
  {
    if ( i < *((unsigned __int16 *)this + 0x1B) ) /*0x77e8ba*/
    {
      v15 = *((_DWORD *)this + 0xC); /*0x77e8bc*/
      v16 = *(_DWORD *)(v15 + 4 * i); /*0x77e8bf*/
      *(_DWORD *)(v15 + 4 * i) = 0; /*0x77e8c7*/
      if ( v16 ) /*0x77e8cd*/
        --*((_WORD *)this + 0x1C); /*0x77e8cf*/
      v17 = *((_WORD *)this + 0x1B); /*0x77e8d5*/
      if ( i == v17 - 1 ) /*0x77e8e1*/
        *((_WORD *)this + 0x1B) = v17 - 1; /*0x77e8e6*/
      if ( v16 ) /*0x77e8ec*/
      {
        v18 = *(_DWORD *)(v16 + 0x10); /*0x77e8ee*/
        if ( v18 ) /*0x77e8f3*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*(_DWORD *)(v16 + 0x10)); /*0x77e8fb*/
        v19 = *(_DWORD *)(v16 + 0xC); /*0x77e8fd*/
        if ( v19 ) /*0x77e902*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 8))(*(_DWORD *)(v16 + 0xC)); /*0x77e90a*/
        FormHeapFree(v16); /*0x77e90d*/
      }
    }
    if ( i < *((unsigned __int16 *)this + 0x23) ) /*0x77e91d*/
    {
      v21 = *((_DWORD *)this + 0x10); /*0x77e933*/
      v20 = *(_DWORD *)(v21 + 4 * i); /*0x77e936*/
      *(_DWORD *)(v21 + 4 * i) = 0; /*0x77e93e*/
      if ( v20 ) /*0x77e940*/
        --*((_WORD *)this + 0x24); /*0x77e942*/
      v22 = *((_WORD *)this + 0x23); /*0x77e948*/
      if ( i == v22 - 1 ) /*0x77e954*/
        *((_WORD *)this + 0x23) = v22 - 1; /*0x77e959*/
    }
    else
    {
      v20 = 0; /*0x77e91f*/
    }
    *(_DWORD *)(v20 + 8) = 0; /*0x77e95e*/
    FormHeapFree(v20); /*0x77e961*/
  }
  if ( this == (NiDynamicGeometryGroup *)unk_B428A4 ) /*0x77e97e*/
    unk_B428A4 = 0; /*0x77e980*/
  v25 = *((_DWORD *)this + 0x10); /*0x77e989*/
  *((_DWORD *)this + 0xF) = &NiTArray<NiVBChip *>::`vftable'; /*0x77e98a*/
  FormHeapFree(v25); /*0x77e991*/
  v23 = *((_DWORD *)this + 0xC); /*0x77e999*/
  *((_DWORD *)this + 0xB) = &NiTArray<NiVBDynamicSet *>::`vftable'; /*0x77e99a*/
  FormHeapFree(v23); /*0x77e9a1*/
  *v10 = &NiTPointerMap<unsigned int,NiVBChip *>::`vftable'; /*0x77e9ab*/
  NiTMap_Clear((_DWORD *)this + 7); /*0x77e9b2*/
  *v10 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable'; /*0x77e9b9*/
  NiTMap_Clear((_DWORD *)this + 7); /*0x77e9c0*/
  FormHeapFree(*((_DWORD *)this + 9)); /*0x77e9c9*/
  *((_DWORD *)this + 3) = &NiTPointerMap<unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77e9d6*/
  NiTMap_Clear((_DWORD *)this + 3); /*0x77e9dc*/
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77e9e3*/
  NiTMap_Clear((_DWORD *)this + 3); /*0x77e9e9*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x77e9f2*/
  sub_7828F0((NiGeometryGroup *)this); /*0x77ea03*/
}
