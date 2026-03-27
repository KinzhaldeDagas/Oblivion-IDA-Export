void __thiscall sub_4E8E80(_DWORD *this)
{
  unsigned int v1; // edx
  NiTMap_TESCELL *v2; // edi
  unsigned int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *i; // esi
  TESObjectCELL *v8; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v9; // [esp+Ch] [ebp-8h] BYREF
  void *v10; // [esp+10h] [ebp-4h] BYREF

  v1 = *(this + 8);
  v2 = (NiTMap_TESCELL *)(this + 7);
  v3 = 0;
  if ( v1 )
  {
    v4 = (_DWORD *)*(this + 9);
    v5 = v4;
    while ( !*v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= v1 )
        goto LABEL_5;
    }
    v6 = (NiTMap_Entry_TESCELL *)v4[v3];
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  v9 = v6;
  while ( v9 )
  {
    v8 = 0;
    sub_452600(v2, &v9, &v10, &v8);
    for ( i = v8; i; i = *(TESObjectCELL **)&i->members.super.type )
    {
      if ( !*(_DWORD *)&i->members.super.type && !i->vtbl )
        break;
      sub_67EDA0(i->vtbl);
    }
  }
}
