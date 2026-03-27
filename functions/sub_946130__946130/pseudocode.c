signed int __thiscall sub_946130(void **this, int a2, _DWORD *a3)
{
  char v4; // bl
  char v5; // di
  int v6; // eax

  sub_918440(*(this + 5), 0x11);
  v4 = (char)a3;
  v5 = (char)a3;
  if ( *((_DWORD *)*(this + 0xB) + 0x12) )
  {
    if ( *sub_90D380(a3, (bool *)&a3) )
    {
      v6 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)*(this + 0xB) + 0x12) + 0xC))(
             *((_DWORD *)*(this + 0xB) + 0x12),
             a2);
      v5 = v6;
      if ( !v6 )
        v5 = v4;
    }
  }
  sub_9181B0((_DWORD **)*(this + 5), 0x21);
  sub_918460(*(this + 5), a2, 0);
  sub_918460(*(this + 5), v5, 0);
  return 0x11;
}
