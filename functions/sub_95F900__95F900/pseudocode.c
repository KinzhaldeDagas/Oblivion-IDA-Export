int __thiscall sub_95F900(_WORD *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int result; // eax
  int v5; // edx

  for ( i = 0; i < (unsigned __int16)*(this + 7); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i);
    if ( v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 1);
  }
  for ( result = 0; (unsigned __int16)result < *(this + 7); *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v5) = 0 )
    v5 = (unsigned __int16)result++;
  *(this + 8) = 0;
  *(this + 7) = 0;
  return result;
}
