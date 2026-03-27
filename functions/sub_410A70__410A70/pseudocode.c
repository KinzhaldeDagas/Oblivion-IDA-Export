char __thiscall sub_410A70(_DWORD *this, const char *ArgList, char a3, char a4, char a5, char a6, float a7)
{
  void *sound; // edi
  char result; // al
  bool v13; // bl

  *(this + 8) = 1;
  sound = OSGlobals->sound;
  if ( sound )
    sub_6A9B40((int)OSGlobals->sound);
  *((_BYTE *)this + 0x24) = 1;
  result = sub_4104C0((signed int **)this, ArgList, a4, a6, a7);
  *((_BYTE *)this + 0x24) = 0;
  if ( result )
  {
    while ( VideoPass(this, a3, a5) )
      ;
    v13 = *(this + 3) >= *(_DWORD *)(*this + 8);
    sub_4102C0((float *)this);
    if ( sound )
    {
      sub_6A9C00((int)sound);
      sub_6A9C00((int)sound);
    }
    return v13;
  }
  return result;
}
