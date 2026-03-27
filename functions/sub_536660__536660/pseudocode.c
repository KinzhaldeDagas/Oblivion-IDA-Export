void __cdecl sub_536660(int a1, float *a2)
{
  int v2; // eax
  int *v3; // ecx
  int v4; // eax
  __m128 *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int i; // eax
  __m128 v11; // [esp+10h] [ebp-20h] BYREF

  if ( a1 )
  {
    v2 = sub_47FAC0(a1);
    if ( v2 )
    {
      v3 = *(int **)(v2 + 0x10);
      if ( v3 )
      {
        v4 = v3[2];
        v11.m128_f32[0] = *a2;
        v11.m128_f32[1] = a2[1];
        v11.m128_f32[2] = a2[2];
        v11.m128_f32[3] = 0.0;
        if ( v4 )
          v5 = (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0xD0);
        else
          v5 = (__m128 *)&stru_BA7A40;
        v11 = _mm_add_ps(v11, *v5);
        sub_4D6AF0(v3, (int)&v11);
      }
    }
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(v6 + 0xB6);
      v9 = 0;
      if ( *(_WORD *)(v7 + 0xB6) )
      {
        if ( v8 )
          goto LABEL_12;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v7 + 0xB0) + 4 * v9) )
        {
          sub_536660(i, a2);
          if ( *(unsigned __int16 *)(v7 + 0xB6) <= (unsigned int)++v9 )
            break;
LABEL_12:
          ;
        }
      }
    }
  }
}
