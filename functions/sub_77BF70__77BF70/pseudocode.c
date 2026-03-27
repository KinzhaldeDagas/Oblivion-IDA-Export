void __thiscall sub_77BF70(_DWORD *this, int a2)
{
  int (*v3)(void); // edx
  int i; // eax

  if ( *(this + 5) != a2 )
  {
    v3 = *(int (**)(void))(*this + 0x34);
    *(this + 5) = a2;
    for ( i = v3(); i; i = (*(int (__thiscall **)(_DWORD *))(*this + 0x38))(this) )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)i + 0x10))(i, a2);
  }
}
