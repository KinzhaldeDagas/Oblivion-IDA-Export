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

  v2 = a1; /*0x493bf7*/
  if ( a1 ) /*0x493bfd*/
  {
    if ( a2 >= 4 ) /*0x493c09*/
    {
      v3 = *a1; /*0x493c18*/
      v15 = *a1; /*0x493c20*/
      if ( *a1 <= 0xF4240 && a2 >= 8 ) /*0x493c2d*/
      {
        v4 = a1[1]; /*0x493c33*/
        v5 = 2; /*0x493c38*/
        v6 = (unsigned int *)FormHeapAlloc(0x10u); /*0x493c3d*/
        if ( v6 ) /*0x493c53*/
          v7 = sub_493AD0(v6, v3, v4); /*0x493c5e*/
        else
          v7 = 0; /*0x493c62*/
        v8 = 0; /*0x493c64*/
        if ( !v3 ) /*0x493c68*/
          return v7; /*0x493cf3*/
        v14 = 4 - (_DWORD)a1; /*0x493c71*/
LABEL_11:
        v9 = 0; /*0x493c7b*/
        v10 = (float *)&v2[v5]; /*0x493c7d*/
        while ( (unsigned int)v10 + v14 <= a2 ) /*0x493c8a*/
        {
          *(float *)(v9 + *(_DWORD *)(v7[2] + 4 * v8)) = *v10; /*0x493c94*/
          v9 += 4; /*0x493c97*/
          ++v5; /*0x493c9a*/
          ++v10; /*0x493c9d*/
          if ( v9 >= 0x40 ) /*0x493ca3*/
          {
            v11 = 0; /*0x493ca9*/
            v12 = (float *)&a1[v5]; /*0x493cab*/
            while ( (unsigned int)v12 + v14 <= a2 ) /*0x493cba*/
            {
              *(float *)(v11 + *(_DWORD *)(v7[3] + 4 * v8)) = *v12; /*0x493cc4*/
              v11 += 4; /*0x493cc7*/
              ++v5; /*0x493cca*/
              ++v12; /*0x493ccd*/
              if ( v11 >= 0x44 ) /*0x493cd3*/
              {
                if ( ++v8 < v15 ) /*0x493cdc*/
                {
                  v2 = a1; /*0x493c77*/
                  goto LABEL_11; /*0x493c77*/
                }
                return v7; /*0x493cdc*/
              }
            }
            goto LABEL_20; /*0x493cba*/
          }
        }
        if ( !v7 ) /*0x493cf6*/
          return 0; /*0x493cf6*/
LABEL_20:
        FormHeapFree(*(_DWORD *)v7[2]); /*0x493cf8*/
        FormHeapFree(v7[2]); /*0x493d07*/
        FormHeapFree(v7[3]); /*0x493d10*/
        FormHeapFree((unsigned int)v7); /*0x493d16*/
      }
    }
  }
  return 0; /*0x493ce0*/
}
