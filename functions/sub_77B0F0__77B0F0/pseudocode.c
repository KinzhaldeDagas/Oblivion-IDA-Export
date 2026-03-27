int __thiscall sub_77B0F0(int *this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( *(this + 0x3FA) == a2 )
  {
    v3 = *(this + 0x3FE);
    *(this + 0x3FA) = 0;
    result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 0x1AC))(v3, 0);
  }
  if ( *(this + 0x3FB) == a2 )
    *(this + 0x3FB) = 0;
  return result;
}
