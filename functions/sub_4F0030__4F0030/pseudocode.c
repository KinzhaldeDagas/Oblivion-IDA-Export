int __thiscall sub_4F0030(NiTMap_TESCELL **this)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  NiTMap_Entry_TESCELL *v7; // eax
  NiTMap_TESCELL *v8; // ecx
  TESForm *v10; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+8h] [ebp-8h] BYREF
  void *v12; // [esp+Ch] [ebp-4h] BYREF

  if ( ((unsigned int)*(this + 2) & 0x4000) == 0 )
  {
    v2 = (int)*(this + 0xC);
    v3 = *(_DWORD *)(v2 + 4);
    v4 = 0;
    if ( v3 )
    {
      v5 = *(_DWORD **)(v2 + 8);
      v6 = v5;
      while ( !*v6 )
      {
        ++v4;
        ++v6;
        if ( v4 >= v3 )
          goto LABEL_6;
      }
      v7 = (NiTMap_Entry_TESCELL *)v5[v4];
    }
    else
    {
LABEL_6:
      v7 = 0;
    }
    v11 = v7;
    while ( v11 )
    {
      v8 = *(this + 0xC);
      v10 = 0;
      sub_452600(v8, &v11, &v12, (TESObjectCELL **)&v10);
      if ( v10 )
        v10->vtbl->Destroy(v10, 1);
    }
  }
  return NiTMap_Clear(*(this + 0xC));
}
