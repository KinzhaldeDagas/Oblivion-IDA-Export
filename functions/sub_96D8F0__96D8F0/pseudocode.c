void __thiscall sub_96D8F0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x4C))(this, *a2);
  *(this + 9) = a2[1];
  if ( a2[2] )
  {
    v3 = sub_95DB10(a2[3]);
    sub_96D890(this, v3);
  }
}
