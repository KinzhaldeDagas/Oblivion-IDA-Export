_WORD *__thiscall sub_8C3640(int *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  _WORD *result; // eax
  _WORD *v5; // esi
  _WORD *v6; // ecx
  _WORD *v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_8A1DB0(this, a2);
  result = (_WORD *)(*(int (__thiscall **)(int *, unsigned int **))(*this + 0x74))(this, &a2);
  v5 = result;
  if ( result )
  {
    v7 = 0;
    result = (_WORD *)sub_8E84B0((int)v2, (int)&v7);
    if ( v2[1] >= 2 )
    {
      *((_DWORD *)v5 + 2) = v7;
    }
    else
    {
      result = v7;
      *((_DWORD *)v5 + 2) = 0;
      v6 = result;
      if ( result[2] )
      {
        --result[3];
        result += 3;
        if ( !*result )
          return (**(_WORD *(__thiscall ***)(_WORD *, int))v6)(v6, 1);
      }
    }
  }
  return result;
}
