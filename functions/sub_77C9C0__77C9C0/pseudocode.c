unsigned int __thiscall sub_77C9C0(unsigned int **this)
{
  _DWORD *v2; // ecx
  unsigned int result; // eax
  unsigned int v4; // esi
  _DWORD *v5; // edx
  unsigned int *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  unsigned int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = *(this + 8);
  result = 0;
  if ( v2 )
  {
    v4 = v2[1];
    if ( v4 )
    {
      v5 = (_DWORD *)v2[2];
      while ( !*v5 )
      {
        ++result;
        ++v5;
        if ( result >= v4 )
          goto LABEL_6;
      }
      v6 = *(unsigned int **)(v2[2] + 4 * result);
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    *(this + 7) = v6;
    if ( v6 )
    {
      v8 = 0;
      sub_7B2600(v2, this + 7, &v9, &v8);
      v7 = (void (__thiscall ***)(_DWORD, int))v8;
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          (**v7)(v7, 1);
      }
      return (unsigned int)v7;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
