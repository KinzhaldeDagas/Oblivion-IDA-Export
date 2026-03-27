char __thiscall sub_4F2770(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  NiTMap_Entry_TESCELL *v7; // eax
  NiTMap_TESCELL *v8; // ecx
  TESObjectCELL *v9; // ecx
  char v10; // bl
  char v12; // [esp+13h] [ebp-29h]
  TESObjectCELL *v13; // [esp+14h] [ebp-28h] BYREF
  NiTMap_Entry_TESCELL *v14; // [esp+18h] [ebp-24h] BYREF
  void *v15; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v16[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  unsigned int v19; // [esp+38h] [ebp-4h]

  v16[1] = 0x25;
  v12 = 0;
  v18 = 0;
  v17 = FormHeapAlloc(0x94u);
  _memset(v17, 0, 0x94);
  v16[0] = (unsigned int)&NiTPointerMap<TESObjectCELL *,bool>::`vftable';
  v2 = *(this + 0xC);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = 0;
  v19 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD **)(v2 + 8);
    v6 = v5;
    while ( !*v6 )
    {
      ++v4;
      ++v6;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v7 = (NiTMap_Entry_TESCELL *)v5[v4];
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  v14 = v7;
  while ( v14 )
  {
    v8 = (NiTMap_TESCELL *)*(this + 0xC);
    v13 = 0;
    sub_452600(v8, &v14, &v15, &v13);
    if ( v13 )
    {
      if ( sub_4CC070(v13, v16) )
        v12 = 1;
    }
  }
  v9 = (TESObjectCELL *)*(this + 0xD);
  if ( !v9 || (v10 = 1, !sub_4CC070(v9, v16)) )
    v10 = v12;
  NiTMap_Clear(v16);
  v19 = 0xFFFFFFFF;
  NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(v16);
  return v10;
}
