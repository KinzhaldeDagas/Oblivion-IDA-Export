void __thiscall sub_4F04D0(NiTMap_TESCELL **this)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  NiTMap_Entry_TESCELL *v7; // eax
  NiTMap_TESCELL *v8; // ecx
  TESObjectCELL *v9; // esi
  int v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  TESObjectCELL *v12; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v13; // [esp+8h] [ebp-8h] BYREF
  void *v14; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int)*(this + 0x18);
  if ( v2 )
  {
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
    v13 = v7;
    while ( v13 )
    {
      v8 = *(this + 0x18);
      v12 = 0;
      sub_452600(v8, &v13, &v14, &v12);
      v9 = v12;
      if ( v12 )
      {
        if ( *(_DWORD *)&v12->members.super.type )
        {
          do
          {
            v10 = *(_DWORD *)(*(_DWORD *)&v9->members.super.type + 4);
            FormHeapFree(*(_DWORD *)&v9->members.super.type);
            *(_DWORD *)&v9->members.super.type = v10;
          }
          while ( v10 );
        }
        v9->vtbl = 0;
        FormHeapFree((unsigned int)v9);
      }
    }
    NiTMap_Clear(*(this + 0x18));
    v11 = (void (__thiscall ***)(_DWORD, int))*(this + 0x18);
    if ( v11 )
      (**v11)(v11, 1);
    *(this + 0x18) = 0;
  }
}
