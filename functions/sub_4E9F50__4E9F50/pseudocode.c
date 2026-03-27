_DWORD *__thiscall sub_4E9F50(_WORD *this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax

  v2 = (_DWORD *)FormHeapAlloc(0x60u);
  if ( v2 )
    result = sub_4EC650(v2, (int)this);
  else
    result = 0;
  *(_DWORD *)this = result;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return result;
}
