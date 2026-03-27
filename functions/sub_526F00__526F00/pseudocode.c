void __thiscall sub_526F00(_WORD *this)
{
  unsigned __int16 v2; // ax
  int *v3; // edi
  bool v4; // zf
  int v5; // eax

  v2 = *(this + 0xFD);
  if ( v2 )
  {
    v3 = *(int **)(*((_DWORD *)this + 0x7D) + 4 * v2 - 4);
    sub_5528F0(v3, *((_DWORD *)this + 0x3A) + 0x29C);
    v4 = (*(int (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 0x128))(this, 0x45) == 0;
    v5 = (int)(this + 0xB4);
    if ( v4 )
      v5 = (int)(this + 0x84);
    sub_5528F0(v3 + 0x18, v5);
    sub_405020((int)(this + 0xF8), (unsigned __int16)*(this + 0xFD) - 1);
    if ( v3 )
    {
      sub_526E70((char *)v3);
      FormHeapFree((unsigned int)v3);
    }
    sub_521BE0(this + 0xF8);
  }
}
