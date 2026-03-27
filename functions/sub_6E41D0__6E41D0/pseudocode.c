int __thiscall sub_6E41D0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int v5; // eax
  char v6; // al

  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3E2D0 )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_6;
      }
      v6 = 1;
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    v4 = v6 != 0 ? (_DWORD *)a2 : 0;
  }
  else
  {
    v4 = 0;
  }
  return sub_6E3AA0(
           v4,
           *(_DWORD *)(*(this + 0x11) + 0xC),
           *(_DWORD *)(*(this + 0x11) + 0x10),
           *(_DWORD *)(*(this + 0x11) + 0x14),
           *(_DWORD *)(*(this + 0x11) + 0x18));
}
