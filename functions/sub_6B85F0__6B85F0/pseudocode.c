BOOL __thiscall sub_6B85F0(void *this)
{
  _DWORD *v1; // eax
  BOOL result; // eax

  result = 0;
  if ( *(_DWORD *)this )
  {
    v1 = *(_DWORD **)(*(_DWORD *)this + 4);
    *(_DWORD *)this = v1;
    if ( v1 )
    {
      if ( *v1 )
        return 1;
    }
  }
  return result;
}
