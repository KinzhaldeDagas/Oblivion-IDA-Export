int __thiscall sub_4D7820(_BYTE *this)
{
  int v2; // edi
  unsigned __int8 v4; // [esp+8h] [ebp-4h]

  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x1E )
    return 0;
  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  if ( !v2 )
    return 0;
  v4 = sub_41E990((ExtraDataList *)(this + 0x44));
  return (*(int (__thiscall **)(int, unsigned __int8))(*(_DWORD *)v2 + 0x128))(v2, v4);
}
