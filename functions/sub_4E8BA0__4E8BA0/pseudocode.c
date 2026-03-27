_DWORD *__thiscall sub_4E8BA0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax

  result = a2;
  if ( a2 )
  {
    *a2 = 0;
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 0xC) && *(_DWORD *)(a3 + 8) == dword_B06084 )
      {
        *a2 = dword_B05E20;
        a2[3] = 1;
        a2[2] = *(_DWORD *)(*(this + 0xB) + 0xC);
        a2[1] = 0;
        a2[4] = 0;
      }
    }
  }
  return result;
}
