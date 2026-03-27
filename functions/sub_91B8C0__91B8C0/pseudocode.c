int __thiscall sub_91B8C0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int result; // eax

  if ( this )
    v3 = this + 0xA;
  else
    v3 = 0;
  sub_8989E0(**(int ***)(*(this + 0xC) + 4 * a2), (int)v3);
  sub_898A80(**(int ***)(*(this + 0xC) + 4 * a2), (int)(this + 0xB));
  sub_91B5E0(this, a2);
  v4 = *(_DWORD *)(*(this + 0xC) + 4 * a2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 0xC);
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v6 )
        v6 = dword_BA7D9C;
      sub_8A75D0(v6, *(_DWORD **)(v4 + 4), 4 * v5, 0x14);
    }
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v4, 0x10, 0x32);
  }
  result = *(this + 0xD) - 1;
  *(this + 0xD) = result;
  *(_DWORD *)(*(this + 0xC) + 4 * a2) = *(_DWORD *)(*(this + 0xC) + 4 * result);
  return result;
}
