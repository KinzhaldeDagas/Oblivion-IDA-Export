char __thiscall sub_749710(_BYTE *this, int a2)
{
  int v2; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // ebx
  int *v7; // esi
  char v8; // al
  _DWORD *v9; // edi
  NiTMap_Entry_TESCELL *v10; // [esp+8h] [ebp-Ch] BYREF
  TESObjectCELL *v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  if ( !sub_722710(this, a2) || *(this + 0xC0) != *(_BYTE *)(v2 + 0xC0) )
    return 0;
  v5 = *((_DWORD **)this + 0x32);
  if ( v5 )
  {
    v6 = (_DWORD *)(v2 + 0xD4);
    while ( 1 )
    {
      v7 = (int *)v5[2];
      v5 = (_DWORD *)*v5;
      v8 = NiTMap_GetAt(v6, v7[2], &v10);
      if ( !(*(unsigned __int8 (__thiscall **)(int *, NiTMap_Entry_TESCELL *))(*v7 + 0x2C))(v7, v8 != 0 ? v10 : 0) )
        break;
      if ( !v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v10 = (NiTMap_Entry_TESCELL *)sub_6A9030((unsigned int *)this + 0x35);
    if ( !v10 )
      return 1;
    v9 = (_DWORD *)(a2 + 0xD4);
    while ( 1 )
    {
      sub_452600((NiTMap_TESCELL *)(this + 0xD4), &v10, (void **)&a2, &v11);
      if ( !NiTMap_GetAt(v9, a2, &v12)
        || !((unsigned __int8 (__thiscall *)(TESObjectCELL *, int))v11->vtbl->Unk_0B)(v11, v12) )
      {
        break;
      }
      if ( !v10 )
        return 1;
    }
  }
  return 0;
}
