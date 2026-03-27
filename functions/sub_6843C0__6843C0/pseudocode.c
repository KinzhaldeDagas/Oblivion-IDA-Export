char __cdecl sub_6843C0(int a1, float *a2, float *a3, _BYTE *a4)
{
  char v5; // bl
  double v6; // st7
  int *v7; // edi
  int *v8; // ebp
  unsigned int v9; // esi
  int *v10; // eax
  unsigned int v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+14h] [ebp-4h]

  if ( byte_B3C088 )
    return 0;
  v5 = 0;
  *a4 = 0;
  v6 = (double)(int)Seed;
  if ( (int)Seed < 0 )
    v6 = v6 + flt_A2FC78;
  v7 = &dword_B3C08C;
  v8 = 0;
  while ( !v5 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v12 = v6;
      if ( v12 - *(float *)(v9 + 0x1C) >= dbl_A2FC70 )
      {
        if ( v8 )
        {
          BSSimpleList_Remove(v8, *v7);
          FormHeapFree(v9);
          v7 = (int *)v8[1];
        }
        else
        {
          v10 = (int *)v7[1];
          if ( v10 )
          {
            v7[1] = v10[1];
            *v7 = *v10;
            FormHeapFree((unsigned int)v10);
            FormHeapFree(v9);
          }
          else
          {
            v11 = *v7;
            *v7 = 0;
            FormHeapFree(v11);
          }
        }
        goto LABEL_14;
      }
      if ( *(_DWORD *)v9 == a1
        && sub_47D810((float *)(v9 + 4), a2, flt_A417B4)
        && sub_47D810((float *)(v9 + 0x10), a3, flt_A417B4) )
      {
        v5 = 1;
        *a4 = *(_BYTE *)(v9 + 0x20);
      }
    }
    v8 = v7;
    v7 = (int *)v7[1];
LABEL_14:
    if ( !v7 )
      return v5;
  }
  return v5;
}
