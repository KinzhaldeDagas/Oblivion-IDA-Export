void __thiscall sub_96E140(_DWORD *this, int *a2, _DWORD **a3)
{
  int v4; // eax

  sub_733850(this, (int)a2, a3);
  a2[9] = *(this + 9);
  a2[0xA] = *(this + 0xA);
  if ( *(this + 0xB) )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x1C))(*(this + 0xB));
    sub_96D890(a2, v4);
  }
  if ( *(this + 0xD) )
  {
    if ( !a2[0x10] )
    {
      sub_96DCD0(a2);
      sub_96DD40(a2);
    }
    sub_96DEF0(a2, 1);
  }
}
