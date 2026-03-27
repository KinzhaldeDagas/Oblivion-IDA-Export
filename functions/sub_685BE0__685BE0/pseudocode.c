void __cdecl sub_685BE0(int a1, float *a2, float *a3, char a4)
{
  double v4; // st7
  int *v5; // esi
  int *v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  int *v10; // eax
  unsigned int v11; // [esp+0h] [ebp-1Ch]
  float v12; // [esp+14h] [ebp-8h]
  unsigned int v13; // [esp+18h] [ebp-4h]

  v4 = (double)(int)Seed;
  if ( (int)Seed < 0 )
    v4 = v4 + flt_A2FC78;
  v12 = v4;
  v13 = 0;
  v5 = &dword_B3C08C;
  v6 = 0;
  do
  {
    v7 = *v5;
    if ( !*v5 )
      goto LABEL_10;
    if ( v12 - *(float *)(v7 + 0x1C) < dbl_A2FC70 )
    {
      if ( *(_DWORD *)v7 == a1
        && sub_47D810((float *)(v7 + 4), a2, flt_A417B4)
        && sub_47D810((float *)(v7 + 0x10), a3, flt_A417B4) )
      {
        v13 = v7;
      }
LABEL_10:
      v6 = v5;
      v5 = (int *)v5[1];
      continue;
    }
    if ( v6 )
    {
      BSSimpleList_Remove(v6, *v5);
      FormHeapFree(v7);
      v5 = (int *)v6[1];
    }
    else
    {
      v10 = (int *)v5[1];
      if ( v10 )
      {
        v5[1] = v10[1];
        *v5 = *v10;
        FormHeapFree((unsigned int)v10);
        FormHeapFree(v7);
      }
      else
      {
        v11 = *v5;
        *v5 = 0;
        FormHeapFree(v11);
      }
    }
  }
  while ( v5 );
  if ( v13 )
  {
    *(float *)(v13 + 0x1C) = v12;
    *(_BYTE *)(v13 + 0x20) = a4;
  }
  else
  {
    v8 = FormHeapAlloc(0x24u);
    *(_DWORD *)v8 = a1;
    *(float *)(v8 + 4) = *a2;
    *(float *)(v8 + 8) = a2[1];
    *(float *)(v8 + 0xC) = a2[2];
    *(float *)(v8 + 0x10) = *a3;
    *(float *)(v8 + 0x14) = a3[1];
    v9 = *((_DWORD *)a3 + 2);
    *(float *)(v8 + 0x1C) = v12;
    *(_BYTE *)(v8 + 0x20) = a4;
    *(_DWORD *)(v8 + 0x18) = v9;
    BSSimpleList_PushFront(&dword_B3C08C, v8);
  }
}
