void __thiscall sub_96D890(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  v3 = *(this + 0xB);
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 1);
  v4 = *(this + 0xC);
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, 1);
  *(this + 0xB) = a2;
  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2);
    v6 = *(this + 2);
    *(this + 0xC) = v5;
    if ( v6 )
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 0x14))(v5, *(this + 0xB), v6 + 0x64);
  }
  else
  {
    *(this + 0xC) = 0;
  }
}
