double __thiscall sub_54E770(_DWORD *this)
{
  unsigned int i; // edi
  float *v3; // ecx
  float v5; // [esp+8h] [ebp-4h]

  v5 = 0.0;
  for ( i = 0; i < *(this + 4); ++i )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, unsigned int))(*this + 0x54))(this, i) )
    {
      v3 = (float *)(*(this + 3) + 4 * i);
      if ( v5 < (double)*v3 )
        v5 = *v3;
    }
  }
  return v5;
}
