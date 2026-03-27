void __thiscall sub_4BD1F0(int *this)
{
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // eax

  if ( *(this + 3) != 6 )
  {
    sub_4BCEF0(*(this + 0xB));
    v2 = (_DWORD *)*(this + 0xB);
    v3 = *(this + 0xA);
    v4 = sub_4EF1D0(*v2, v2[1]);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, v4);
  }
}
