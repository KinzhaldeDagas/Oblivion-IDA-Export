int __thiscall sub_77B0F0(int *this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( *(this + 0x3FA) == a2 ) /*0x77b0fe*/
  {
    v3 = *(this + 0x3FE); /*0x77b100*/
    *(this + 0x3FA) = 0; /*0x77b106*/
    result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 0x1AC))(v3, 0); /*0x77b11b*/
  }
  if ( *(this + 0x3FB) == a2 ) /*0x77b123*/
    *(this + 0x3FB) = 0; /*0x77b125*/
  return result; /*0x77b12f*/
}
