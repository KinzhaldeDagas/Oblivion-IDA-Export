int __cdecl sub_6BE280(int a1, float a2, int a3, int a4, int a5, unsigned __int8 a6)
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
        sub_6BE040((float *)a1, a2, a3, a4, v8, &a5, a6);
      }
      else
      {
        v7 = (_DWORD *)(a6 * (a5 - 1) + a3 + 4);
        *(_DWORD *)a1 = *v7;
        *(_DWORD *)(a1 + 4) = v7[1];
        *(_DWORD *)(a1 + 8) = v7[2];
        *(_DWORD *)(a1 + 0xC) = v7[3];
      }
      return a1;
    }
    else
    {
      *(_DWORD *)a1 = *(_DWORD *)(a3 + 4);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 0xC);
      *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a3 + 0x10);
      return a1;
    }
  }
  else
  {
    *(_DWORD *)a1 = dword_B3C4E8;
    *(_DWORD *)(a1 + 4) = dword_B3C4EC;
    *(_DWORD *)(a1 + 8) = dword_B3C4F0;
    *(_DWORD *)(a1 + 0xC) = dword_B3C4F4;
    return a1;
  }
}
