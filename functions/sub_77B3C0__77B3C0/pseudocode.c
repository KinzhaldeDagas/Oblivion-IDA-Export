int __thiscall sub_77B3C0(int *this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( *(this + 0x3F8) == a2 )
  {
    v3 = *(this + 0x3FE);
    *(this + 0x3F8) = 0;
    result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 0x170))(v3, 0);
  }
  if ( *(this + 0x3F9) == a2 )
    *(this + 0x3F9) = 0;
  return result;
}
