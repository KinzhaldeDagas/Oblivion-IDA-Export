void __usercall sub_4F2630(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // ecx
  NiTMap_Entry_TESCELL *v10; // eax
  NiTMap_TESCELL *v11; // ecx
  TESObjectCELL *v12; // ecx
  TESObjectCELL *v13; // [esp+Ch] [ebp-28h] BYREF
  NiTMap_Entry_TESCELL *v14; // [esp+10h] [ebp-24h] BYREF
  void *v15; // [esp+14h] [ebp-20h] BYREF
  unsigned int v16[4]; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v17; // [esp+30h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 0x5C) & 4) != 0 )
  {
    sub_432860((volatile LONG *)ioManager);
    sub_447DB0((char *)TESDataHandler, 0xFFFFFFFD);
    sub_4426F0((int)TES, a2, a3, a4, (TESWorldSpace *)a1);
    sub_459F80((NiTMap_TESCELL **)SaveLoad_CurrentSavegame, a1);
    sub_4B8420(v16, 0x25u);
    v5 = *(_DWORD *)(a1 + 0x30);
    v6 = *(_DWORD *)(v5 + 4);
    v7 = 0;
    v17 = 0;
    if ( v6 )
    {
      v8 = *(_DWORD **)(v5 + 8);
      v9 = v8;
      while ( !*v9 )
      {
        ++v7;
        ++v9;
        if ( v7 >= v6 )
          goto LABEL_6;
      }
      v10 = (NiTMap_Entry_TESCELL *)v8[v7];
    }
    else
    {
LABEL_6:
      v10 = 0;
    }
    v14 = v10;
    while ( v14 )
    {
      v11 = *(NiTMap_TESCELL **)(a1 + 0x30);
      v13 = 0;
      sub_452600(v11, &v14, &v15, &v13);
      if ( v13 )
        sub_4CBE50(v13, a2, a3, a4, v16);
    }
    v12 = *(TESObjectCELL **)(a1 + 0x34);
    if ( v12 )
      sub_4CBE50(v12, a2, a3, a4, v16);
    sub_447DB0((char *)TESDataHandler, 0xFFFFFFFF);
    sub_432890((volatile LONG *)ioManager);
    NiTMap_Clear(v16);
    v17 = 0xFFFFFFFF;
    NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(v16);
  }
}
