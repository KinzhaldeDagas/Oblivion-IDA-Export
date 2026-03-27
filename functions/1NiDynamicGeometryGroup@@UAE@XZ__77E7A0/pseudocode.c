void __thiscall NiDynamicGeometryGroup::~NiDynamicGeometryGroup(NiDynamicGeometryGroup *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *v10; // ebp
  unsigned int v11; // eax
  _DWORD *v12; // ecx
  NiTMap_Entry_TESCELL *v13; // eax
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
  NiTMap_Entry_TESCELL *v26; // [esp+10h] [ebp-Ch] BYREF
  _DWORD *v27; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v28; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)this = &NiDynamicGeometryGroup::`vftable';
  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_DWORD **)this + 5);
    while ( !*v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
    v5 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 5) + 4 * v3);
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  v26 = v5;
  while ( v26 )
  {
    sub_452600((NiTMap_TESCELL *)((char *)this + 0xC), &v26, (void **)&v27, (TESObjectCELL **)&v28);
    NiTMap_RemoveAt((_DWORD *)this + 3, (int)v27);
    v6 = v28;
    if ( v28 )
    {
      v7 = v28[4];
      if ( v7 )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(v28[4]);
      v8 = v6[3];
      if ( v8 )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(v6[3]);
      FormHeapFree((unsigned int)v6);
    }
  }
  v9 = *((_DWORD *)this + 8);
  v10 = (_DWORD *)((char *)this + 0x1C);
  v11 = 0;
  if ( v9 )
  {
    v12 = *((_DWORD **)this + 9);
    while ( !*v12 )
    {
      ++v11;
      ++v12;
      if ( v11 >= v9 )
        goto LABEL_18;
    }
    v13 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 9) + 4 * v11);
  }
  else
  {
LABEL_18:
    v13 = 0;
  }
  v26 = v13;
  while ( v26 )
  {
    sub_452600((NiTMap_TESCELL *)((char *)this + 0x1C), &v26, (void **)&v28, (TESObjectCELL **)&v27);
    NiTMap_RemoveAt((_DWORD *)this + 7, (int)v28);
    v24 = (unsigned int)v27;
    v27[2] = 0;
    FormHeapFree(v24);
  }
  for ( i = 0; i < *((unsigned __int16 *)this + 0x1A); ++i )
  {
    if ( i < *((unsigned __int16 *)this + 0x1B) )
    {
      v15 = *((_DWORD *)this + 0xC);
      v16 = *(_DWORD *)(v15 + 4 * i);
      *(_DWORD *)(v15 + 4 * i) = 0;
      if ( v16 )
        --*((_WORD *)this + 0x1C);
      v17 = *((_WORD *)this + 0x1B);
      if ( i == v17 - 1 )
        *((_WORD *)this + 0x1B) = v17 - 1;
      if ( v16 )
      {
        v18 = *(_DWORD *)(v16 + 0x10);
        if ( v18 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*(_DWORD *)(v16 + 0x10));
        v19 = *(_DWORD *)(v16 + 0xC);
        if ( v19 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 8))(*(_DWORD *)(v16 + 0xC));
        FormHeapFree(v16);
      }
    }
    if ( i < *((unsigned __int16 *)this + 0x23) )
    {
      v21 = *((_DWORD *)this + 0x10);
      v20 = *(_DWORD *)(v21 + 4 * i);
      *(_DWORD *)(v21 + 4 * i) = 0;
      if ( v20 )
        --*((_WORD *)this + 0x24);
      v22 = *((_WORD *)this + 0x23);
      if ( i == v22 - 1 )
        *((_WORD *)this + 0x23) = v22 - 1;
    }
    else
    {
      v20 = 0;
    }
    *(_DWORD *)(v20 + 8) = 0;
    FormHeapFree(v20);
  }
  if ( this == (NiDynamicGeometryGroup *)dword_B428A4 )
    dword_B428A4 = 0;
  v25 = *((_DWORD *)this + 0x10);
  *((_DWORD *)this + 0xF) = &NiTArray<NiVBChip *>::`vftable';
  FormHeapFree(v25);
  v23 = *((_DWORD *)this + 0xC);
  *((_DWORD *)this + 0xB) = &NiTArray<NiVBDynamicSet *>::`vftable';
  FormHeapFree(v23);
  *v10 = &NiTPointerMap<unsigned int,NiVBChip *>::`vftable';
  NiTMap_Clear((_DWORD *)this + 7);
  *v10 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable';
  NiTMap_Clear((_DWORD *)this + 7);
  FormHeapFree(*((_DWORD *)this + 9));
  *((_DWORD *)this + 3) = &NiTPointerMap<unsigned int,NiVBDynamicSet *>::`vftable';
  NiTMap_Clear((_DWORD *)this + 3);
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBDynamicSet *>::`vftable';
  NiTMap_Clear((_DWORD *)this + 3);
  FormHeapFree(*((_DWORD *)this + 5));
  sub_7828F0((NiGeometryGroup *)this);
}
