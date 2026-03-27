int __thiscall sub_7C6740(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax
  int v3; // edx

  v1 = (_DWORD *)*(this + 0x3A);
  result = 0;
  while ( v1 )
  {
    v3 = v1[2];
    v1 = (_DWORD *)*v1;
    if ( v3 )
    {
      if ( *(_WORD *)(v3 + 0x118) != 0xFF )
        ++result;
    }
  }
  return result;
}
