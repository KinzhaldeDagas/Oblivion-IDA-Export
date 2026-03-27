_DWORD *__cdecl sub_6BBDC0(_DWORD *a1, float a2, int a3, int a4, int a5, unsigned __int8 a6)
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
        sub_6BBBA0(a1, a2, a3, a4, v8, &a5, a6);
      }
      else
      {
        v7 = (_DWORD *)(a6 * (a5 - 1) + a3 + 4);
        *a1 = *v7;
        a1[1] = v7[1];
        a1[2] = v7[2];
      }
      return a1;
    }
    else
    {
      *a1 = *(_DWORD *)(a3 + 4);
      a1[1] = *(_DWORD *)(a3 + 8);
      a1[2] = *(_DWORD *)(a3 + 0xC);
      return a1;
    }
  }
  else
  {
    *a1 = qword_B3C31C;
    a1[1] = HIDWORD(qword_B3C31C);
    a1[2] = dword_B3C324;
    return a1;
  }
}
