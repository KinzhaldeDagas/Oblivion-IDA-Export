_DWORD *__cdecl sub_6BD1F0(_DWORD *a1, float a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  _DWORD *v7; // ecx
  int v8; // [esp+Ch] [ebp-14h]

  if ( a5 )
  {
    if ( *(float *)a3 <= (double)a2 )
    {
      if ( *(float *)(a6 * (a5 - 1) + a3) >= (double)a2 )
      {
        v8 = a5;
        a5 = 0;
        sub_6BCF70(a1, a2, a3, a4, v8, &a5, a6);
      }
      else
      {
        v7 = (_DWORD *)(a6 * (a5 - 1) + a3 + 4);
        *a1 = *v7;
        a1[1] = v7[1];
        a1[2] = v7[2];
        a1[3] = v7[3];
      }
      return a1;
    }
    else
    {
      *a1 = *(_DWORD *)(a3 + 4);
      a1[1] = *(_DWORD *)(a3 + 8);
      a1[2] = *(_DWORD *)(a3 + 0xC);
      a1[3] = *(_DWORD *)(a3 + 0x10);
      return a1;
    }
  }
  else
  {
    *a1 = dword_B3C3A4;
    a1[1] = dword_B3C3A8;
    a1[2] = dword_B3C3AC;
    a1[3] = dword_B3C3B0;
    return a1;
  }
}
