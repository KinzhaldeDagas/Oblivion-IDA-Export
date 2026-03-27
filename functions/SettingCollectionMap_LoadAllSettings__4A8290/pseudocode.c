char __thiscall SettingCollectionMap_LoadAllSettings(_DWORD *this)
{
  char v2; // bl
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  NiTMap_Entry_TESCELL *v8; // [esp+8h] [ebp-Ch] BYREF
  TESObjectCELL *v9; // [esp+Ch] [ebp-8h] BYREF
  void *v10; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0x42) != 0;
  if ( !*(this + 0x42) )
    return 0;
  v3 = *(this + 0x44);
  v4 = 0;
  if ( v3 )
  {
    v5 = (_DWORD *)*(this + 0x45);
    while ( !*v5 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    v6 = *(NiTMap_Entry_TESCELL **)(*(this + 0x45) + 4 * v4);
  }
  else
  {
LABEL_6:
    v6 = 0;
  }
  v8 = v6;
  while ( v8 )
  {
    sub_452600((NiTMap_TESCELL *)(this + 0x43), &v8, &v10, &v9);
    if ( v9 )
      v2 &= (*(int (__thiscall **)(_DWORD *, TESObjectCELL *))(*this + 0x10))(this, v9);
  }
  return v2;
}
