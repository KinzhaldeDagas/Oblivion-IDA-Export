void __thiscall sub_6A9B40(int this)
{
  bool v2; // zf
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  NiTMap_Entry_TESCELL *v8; // eax
  TESObjectCELL *v9; // esi
  TESObjectCELL *v10; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+8h] [ebp-8h] BYREF
  void *v12; // [esp+Ch] [ebp-4h] BYREF

  *(_BYTE *)(this + 0xA4) = 1;
  v2 = bSoundEnabled_Audio == 0;
  v10 = 0;
  if ( !v2 )
  {
    v3 = *(_DWORD *)(this + 0x300);
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
    v11 = v8;
    while ( v11 )
    {
      sub_452600(*(NiTMap_TESCELL **)(this + 0x300), &v11, &v12, &v10);
      v9 = v10;
      if ( sub_6B6AF0((int)v10) )
      {
        if ( ((int)v9->vtbl & 0x20) == 0 )
        {
          v9->vtbl = (TESFormVtbl *)((int)v9->vtbl | 0x200);
          if ( (unsigned __int8)sub_6B7120(v9) && ((int)v9->vtbl & 1) != 0 )
            sub_6B7130((int)v9, 1);
          else
            sub_6B6AA0(v9);
        }
      }
    }
  }
}
