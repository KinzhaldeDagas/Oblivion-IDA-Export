char __thiscall sub_7636F0(_BYTE *this, int a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  signed int v8; // eax
  void *v9; // ecx
  int v10; // eax
  signed int v11; // eax
  void *v12; // ecx

  if ( !a2 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x2C))(v4) )
    return 0;
  v5 = *(_DWORD *)v4;
  if ( *(this + 0x6E9) )
    v6 = (*(int (__fastcall **)(int))(v5 + 0x14))(v4);
  else
    v6 = (*(int (__fastcall **)(int))(v5 + 0x28))(v4);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v6 + 0x50))(v6, 0);
  if ( v8 < 0 )
  {
    sub_7736F0(v8);
    TESTexture::ClearComponentReferences(v9);
    return 0;
  }
  if ( !*(this + 0x6E9) )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x14))(v4);
    if ( !v10 )
      return 0;
    v11 = (*(int (__stdcall **)(_DWORD, int, int))(**((_DWORD **)this + 0xA0) + 0x7C))(
            *((_DWORD *)this + 0xA0),
            v7,
            v10);
    if ( v11 < 0 )
    {
      sub_7736F0(v11);
      TESTexture::ClearComponentReferences(v12);
      return 0;
    }
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x30))(v4, 0);
  return 1;
}
