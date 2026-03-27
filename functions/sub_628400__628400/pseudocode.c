void __thiscall sub_628400(int *this, int a2)
{
  bool v3; // zf
  int v4; // eax

  if ( *(this + 0xB) )
  {
    v3 = (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x198))(*(this + 0xB), 0) == 0;
    v4 = *this;
    if ( v3 )
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int))(v4 + 0x228))(
        this,
        a2,
        *(this + 0xB),
        0,
        0,
        1,
        1,
        0,
        0,
        0,
        1);
    else
      (*(void (__thiscall **)(int *, int, _DWORD))(v4 + 0x51C))(this, a2, 0);
  }
}
