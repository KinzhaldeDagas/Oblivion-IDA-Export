_DWORD *__thiscall sub_70A310(_DWORD *this, float a2)
{
  _DWORD *result; // eax
  unsigned int i; // edi
  int v5; // ecx

  result = sub_47C930(this, a2, 1);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i )
  {
    result = (_DWORD *)*(this + 0x2C);
    v5 = result[i];
    if ( v5 )
      result = (_DWORD *)(*(int (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 0x4C))(LODWORD(a2));
  }
  return result;
}
