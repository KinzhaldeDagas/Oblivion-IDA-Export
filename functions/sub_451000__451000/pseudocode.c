void __thiscall sub_451000(int this)
{
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  NiTMap_Entry_TESCELL *v8; // eax
  NiTMap_TESCELL *v9; // ecx
  TESObjectCELL *v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  TESObjectCELL *v12; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v13; // [esp+8h] [ebp-8h] BYREF
  void *v14; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 8);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = 0;
    if ( v4 )
    {
      v6 = *(_DWORD **)(v3 + 8);
      v7 = v6;
      while ( !*v7 )
      {
        ++v5;
        ++v7;
        if ( v5 >= v4 )
          goto LABEL_6;
      }
      v8 = (NiTMap_Entry_TESCELL *)v6[v5];
    }
    else
    {
LABEL_6:
      v8 = 0;
    }
    v13 = v8;
    while ( v13 )
    {
      v9 = *(NiTMap_TESCELL **)(this + 8);
      v12 = 0;
      sub_452600(v9, &v13, &v14, &v12);
      v10 = v12;
      if ( v12 )
      {
        TESFile_destr((CHAR *)v12);
        FormHeapFree((unsigned int)v10);
      }
    }
    NiTMap_Clear(*(_DWORD **)(this + 8));
    v11 = *(void (__thiscall ****)(_DWORD, int))(this + 8);
    if ( v11 )
      (**v11)(v11, 1);
    *(_DWORD *)(this + 8) = 0;
  }
}
