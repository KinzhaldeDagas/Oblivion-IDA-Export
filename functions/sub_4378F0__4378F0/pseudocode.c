int __thiscall sub_4378F0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ecx
  char v6; // al
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 0xA);
  v3 = this + 0xA;
  if ( v2 )
  {
    if ( (*(_BYTE *)(this + 0xB) & 1) == 0
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)ModelLoaderPtr + 1) + 0xC))(
            *((_DWORD *)ModelLoaderPtr + 1),
            *(this + 8),
            v2,
            0) )
    {
      v4 = *(this + 8);
      v5 = *((_DWORD *)ModelLoaderPtr + 1);
      v8 = 0;
      v6 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v5 + 4))(v5, v4, &v8);
      sub_435B10(v3, v6 != 0 ? v8 : 0);
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x28))(this);
}
