char __thiscall sub_6C42B0(float *this, int a2)
{
  int v2; // ebp
  unsigned int i; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // [esp+8h] [ebp-Ch] BYREF
  TESObjectCELL *v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  if ( !sub_715820(this, a2) || *((_WORD *)this + 0x23) != *(_WORD *)(v2 + 0x46) )
    return 0;
  a2 = sub_6A9030((unsigned int *)this + 0x16);
  if ( a2 )
  {
    while ( 1 )
    {
      sub_452600((NiTMap_TESCELL *)(this + 0x16), (NiTMap_Entry_TESCELL **)&a2, (void **)&v8, &v9);
      if ( !NiTMap_GetAt((_DWORD *)(v2 + 0x58), v8, &v10)
        || !((unsigned __int8 (__thiscall *)(TESObjectCELL *, int))v9->vtbl->Unk_0B)(v9, v10) )
      {
        return 0;
      }
      if ( !a2 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i )
    {
      v6 = *(_DWORD *)(*((_DWORD *)this + 0x10) + 4 * i);
      v7 = *(_DWORD *)(*(_DWORD *)(v2 + 0x40) + 4 * i);
      if ( v6 && v7 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) )
          return 0;
      }
      else if ( v6 != v7 )
      {
        return 0;
      }
    }
    return 1;
  }
}
