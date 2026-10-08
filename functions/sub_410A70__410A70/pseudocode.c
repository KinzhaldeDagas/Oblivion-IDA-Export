char __thiscall sub_410A70(_DWORD *this, const char *ArgList, char a3, char a4, char a5, char a6, float a7)
{
  void *sound; // edi
  char result; // al
  bool v10; // bl

  *(this + 8) = 1; /*0x410a79*/
  sound = MEMORY[0xB33398]->sound; /*0x410a82*/
  if ( sound ) /*0x410a87*/
    sub_6A9B40((int)MEMORY[0xB33398]->sound); /*0x410a8b*/
  *((_BYTE *)this + 0x24) = 1; /*0x410aa6*/
  result = sub_4104C0((signed int **)this, ArgList, a4, a6, a7); /*0x410aa9*/
  *((_BYTE *)this + 0x24) = 0; /*0x410ab0*/
  if ( result ) /*0x410ab4*/
  {
    while ( VideoPass(this, a3, a5) ) /*0x410ac9*/
      ; /*0x410ac5*/
    v10 = *(this + 3) >= *(_DWORD *)(*this + 8); /*0x410adc*/
    sub_4102C0((float *)this); /*0x410adf*/
    if ( sound ) /*0x410ae7*/
    {
      sub_6A9C00((int)sound); /*0x410aeb*/
      sub_6A9C00((int)sound); /*0x410af2*/
    }
    return v10; /*0x410af9*/
  }
  return result; /*0x410ab6*/
}
