int __thiscall sub_6ED260(char **this, int a2)
{
  if ( (unsigned __int16)a2 >= (*((unsigned __int16 (__thiscall **)(char **))*this + 0x26))(this) /*0x6ed28e*/
    || !*(this + 5)
    || (*((int (__thiscall **)(char **, int))*this + 0x2D))(this, a2) == 0xFFFF )
  {
    return 0; /*0x6ed29e*/
  }
  else
  {
    return *(_DWORD *)sub_6E78D0(*(this + 6)); /*0x6ed298*/
  }
}
