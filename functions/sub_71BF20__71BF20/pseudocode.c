void *__thiscall sub_71BF20(void *this, int a2, _DWORD *a3, int a4, int a5)
{
  void *result; // eax
  int v6; // ecx

  result = 0;
  if ( a2 )
  {
    if ( a2 == 4 )
      return (*(void *(__thiscall **)(void *, _DWORD *, int, int))(*(_DWORD *)this + 0x44))(this, a3, a4, a5);
  }
  else
  {
    result = (void *)a5;
    v6 = *(_DWORD *)(a5 + 4);
    if ( (v6 == 2 || v6 == 3 || *(_BYTE *)(a5 + 1) == 0x10) && *a3 == 4 )
      return &unk_B25E00;
  }
  return result;
}
