char __cdecl sub_685D60(int a1, float *a2, _DWORD *a3, _BYTE *a4)
{
  double v5; // st7
  int *v6; // ebp
  int *v7; // esi
  unsigned int v8; // edi
  float *v9; // eax
  int *v10; // eax
  float v11; // [esp+0h] [ebp-1Ch]
  char v12; // [esp+17h] [ebp-5h]
  float v13; // [esp+18h] [ebp-4h]

  if ( byte_B3C088 )
    return 0;
  *a4 = 0;
  v5 = (double)(int)Seed;
  v12 = 0;
  if ( (int)Seed < 0 )
    v5 = v5 + flt_A2FC78;
  v6 = &dword_B3C094;
  v7 = 0;
  while ( !v12 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      v13 = v5;
      if ( v13 - *(float *)(v8 + 0x18) >= dbl_A74C98 )
      {
        if ( v7 )
        {
          BSSimpleList_Remove(v7, *v6);
          TESTexture::ClearComponentReferences((void *)(v8 + 4));
          FormHeapFree(v8);
          v6 = (int *)v7[1];
        }
        else
        {
          v10 = (int *)v6[1];
          if ( v10 )
          {
            v6[1] = v10[1];
            *v6 = *v10;
            FormHeapFree((unsigned int)v10);
          }
          else
          {
            *v6 = 0;
          }
          TESTexture::ClearComponentReferences((void *)(v8 + 4));
          FormHeapFree(v8);
        }
        goto LABEL_13;
      }
      if ( *(_DWORD *)v8 == a1 )
      {
        v11 = flt_A417B4;
        v9 = (float *)sub_6899C0((char *)(v8 + 4));
        if ( sub_47D890(v9, a2, v11) )
        {
          *a4 = *(_BYTE *)(v8 + 0x1C);
          *a3 = *(_DWORD *)(v8 + 4);
          a3[1] = *(_DWORD *)(v8 + 8);
          a3[2] = *(_DWORD *)(v8 + 0xC);
          a3[3] = *(_DWORD *)(v8 + 0x10);
          v12 = 1;
          a3[4] = *(_DWORD *)(v8 + 0x14);
        }
      }
    }
    v7 = v6;
    v6 = (int *)v6[1];
LABEL_13:
    if ( !v6 )
      return v12;
  }
  return v12;
}
