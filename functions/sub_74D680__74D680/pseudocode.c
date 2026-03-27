int __thiscall sub_74D680(_DWORD *this, int a2)
{
  int result; // eax
  unsigned int i; // edi
  int v5; // ecx

  result = sub_752D80(this, a2);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x11); ++i )
  {
    result = *(this + 7);
    v5 = *(_DWORD *)(result + 4 * i);
    if ( v5 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2);
  }
  return result;
}
