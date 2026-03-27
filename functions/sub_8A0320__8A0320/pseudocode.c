int __thiscall sub_8A0320(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax

  v2 = a2;
  sub_7124D0(a2);
  v4 = sub_7124A0(v2);
  v5 = sub_7124A0(v2);
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 0x74))(this, &a2);
  if ( v6 )
  {
    v7 = v6 - 4;
    if ( v7 )
    {
      if ( v4 )
      {
        *(_DWORD *)(v7 + 0xC) = *(_DWORD *)(v4 + 8);
        if ( v5 )
        {
          *(_DWORD *)(v7 + 0x10) = *(_DWORD *)(v5 + 8);
          return sub_89D6C0(this, (int)v2);
        }
        *(_DWORD *)(v7 + 0x10) = 0;
      }
    }
  }
  return sub_89D6C0(this, (int)v2);
}
