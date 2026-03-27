int __thiscall sub_89FDA0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  v2 = a2;
  v4 = sub_7124A0(a2);
  v5 = sub_7124A0(v2);
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 0x74))(this, &a2);
  if ( v6 && v4 )
  {
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(v4 + 8);
    if ( v5 )
    {
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v5 + 8);
      return sub_89D6C0(this, (int)v2);
    }
    *(_DWORD *)(v6 + 8) = 0;
  }
  return sub_89D6C0(this, (int)v2);
}
