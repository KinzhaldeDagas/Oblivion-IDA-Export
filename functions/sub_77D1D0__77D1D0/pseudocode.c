int __thiscall sub_77D1D0(_DWORD *this)
{
  int result; // eax

  result = *(this + 4); /*0x77d1d3*/
  if ( result ) /*0x77d1d8*/
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x77d1e0*/
    *(this + 4) = 0; /*0x77d1e2*/
  }
  return result; /*0x77d1e9*/
}
