char __thiscall sub_8ECE60(_DWORD *this, int a2)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD **v5; // esi
  int v6; // ebp
  int v7; // eax
  int v9; // [esp+4h] [ebp-Ch]
  _DWORD *v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  v2 = **(_DWORD **)(*(this + 2) + 0x74);
  v11 = *(_DWORD *)(*(this + 2) + 0x74);
  v3 = *(this + 0x49) - 1;
  v10 = this;
  v9 = v3;
  if ( v3 >= 0 )
  {
    v4 = this + 5;
    while ( 1 )
    {
      v5 = (_DWORD **)(*(this + 0x48) + 4 * v3);
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)**v5 + 8))(**v5);
      v7 = v6 + 0x20 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
      (*(void (__cdecl **)(_DWORD *, _DWORD, int, int))(v2 + 0x14 * *(unsigned __int8 *)(v7 + v2 + 0x190) + 0x994))(
        v4,
        *v5,
        v11,
        a2);
      LOBYTE(v3) = *(_BYTE *)(a2 + 4);
      if ( (_BYTE)v3 )
        break;
      if ( --v9 < 0 )
        break;
      v3 = v9;
      this = v10;
    }
  }
  return v3;
}
