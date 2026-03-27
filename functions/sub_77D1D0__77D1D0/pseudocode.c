int __thiscall sub_77D1D0(_DWORD *this)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
    *(this + 4) = 0;
  }
  return result;
}
