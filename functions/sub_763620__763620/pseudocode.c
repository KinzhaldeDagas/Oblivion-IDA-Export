int __thiscall sub_763620(_BYTE *this, int a2, _DWORD *a3)
{
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  signed int v9; // eax
  void *v10; // ecx
  int v11; // edi
  _DWORD v12[2]; // [esp+14h] [ebp-8h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2);
  if ( !v5 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 0x2C))(v5) )
    return 0;
  v6 = *(_DWORD *)v5;
  v7 = 0;
  if ( *(this + 0x6E9) )
  {
    v8 = (*(int (__thiscall **)(int))(v6 + 0x14))(v5);
    v7 = 0x2000;
  }
  else
  {
    v8 = (*(int (__thiscall **)(int))(v6 + 0x28))(v5);
  }
  if ( !v8 )
    return 0;
  v9 = (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)v8 + 0x4C))(v8, 0, v12, 0, v7);
  if ( v9 < 0 )
  {
    sub_7736F0(v9);
    TESTexture::ClearComponentReferences(v10);
    return 0;
  }
  v11 = v12[1];
  *a3 = v12[0];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x30))(v5, 1);
  return v11;
}
