unsigned int *__cdecl sub_493BD0(unsigned int *a1, unsigned int a2)
{
  unsigned int *v2; // ebx
  unsigned int v3; // ebp
  unsigned int v4; // edi
  int v5; // esi
  unsigned int *v6; // eax
  unsigned int *v7; // edi
  int v8; // edx
  unsigned int v9; // eax
  float *v10; // ecx
  unsigned int v11; // eax
  float *v12; // ecx
  int v14; // [esp+14h] [ebp-14h]
  unsigned int v15; // [esp+18h] [ebp-10h]

  v2 = a1;
  if ( a1 )
  {
    if ( a2 >= 4 )
    {
      v3 = *a1;
      v15 = *a1;
      if ( *a1 <= 0xF4240 && a2 >= 8 )
      {
        v4 = a1[1];
        v5 = 2;
        v6 = (unsigned int *)FormHeapAlloc(0x10u);
        if ( v6 )
          v7 = sub_493AD0(v6, v3, v4);
        else
          v7 = 0;
        v8 = 0;
        if ( !v3 )
          return v7;
        v14 = 4 - (_DWORD)a1;
LABEL_11:
        v9 = 0;
        v10 = (float *)&v2[v5];
        while ( (unsigned int)v10 + v14 <= a2 )
        {
          *(float *)(v9 + *(_DWORD *)(v7[2] + 4 * v8)) = *v10;
          v9 += 4;
          ++v5;
          ++v10;
          if ( v9 >= 0x40 )
          {
            v11 = 0;
            v12 = (float *)&a1[v5];
            while ( (unsigned int)v12 + v14 <= a2 )
            {
              *(float *)(v11 + *(_DWORD *)(v7[3] + 4 * v8)) = *v12;
              v11 += 4;
              ++v5;
              ++v12;
              if ( v11 >= 0x44 )
              {
                if ( ++v8 < v15 )
                {
                  v2 = a1;
                  goto LABEL_11;
                }
                return v7;
              }
            }
            goto LABEL_20;
          }
        }
        if ( !v7 )
          return 0;
LABEL_20:
        FormHeapFree(*(_DWORD *)v7[2]);
        FormHeapFree(v7[2]);
        FormHeapFree(v7[3]);
        FormHeapFree((unsigned int)v7);
      }
    }
  }
  return 0;
}
