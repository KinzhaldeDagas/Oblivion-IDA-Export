int __thiscall sub_8DBBE0(_DWORD *this, const void **a2)
{
  int result; // eax
  int i; // edi

  result = *(this + 1);
  for ( i = 0; i < result; ++i )
  {
    if ( *(_BYTE *)(i + *this) != 0xFF )
    {
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a2, 2);
      *((_WORD *)*a2 + (_DWORD)a2[1]) = i;
      a2[1] = (char *)a2[1] + 1;
    }
    result = *(this + 1);
  }
  return result;
}
