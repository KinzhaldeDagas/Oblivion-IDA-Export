int __thiscall sub_8F5D90(int *this)
{
  int result; // eax

  sub_8F5C80(this);
  result = *(this + 2);
  if ( result )
    return (*(int (**)(void))(*(_DWORD *)result + 0x10))();
  return result;
}
