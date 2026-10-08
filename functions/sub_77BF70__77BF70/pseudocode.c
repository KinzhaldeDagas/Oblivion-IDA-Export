void __thiscall sub_77BF70(_DWORD *this, int a2)
{
  int (*v3)(void); // edx
  int i; // eax

  if ( *(this + 5) != a2 ) /*0x77bf7b*/
  {
    v3 = *(int (**)(void))(*this + 0x34); /*0x77bf7f*/
    *(this + 5) = a2; /*0x77bf82*/
    for ( i = v3(); i; i = (*(int (__thiscall **)(_DWORD *))(*this + 0x38))(this) ) /*0x77bf89*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)i + 0x10))(i, a2); /*0x77bf98*/
  }
}
