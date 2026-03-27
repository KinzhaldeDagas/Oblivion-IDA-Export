void __cdecl sub_684530(int a1, int a2, char a3)
{
  double v3; // st7
  int *v4; // esi
  int *v5; // ebx
  unsigned int v6; // edi
  float *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  float *v12; // [esp-4h] [ebp-30h]
  float v13; // [esp+0h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-14h]
  unsigned int v15; // [esp+1Ch] [ebp-10h]

  v3 = (double)(int)Seed;
  if ( (int)Seed < 0 )
    v3 = v3 + flt_A2FC78;
  v14 = v3;
  v15 = 0;
  v4 = &dword_B3C094;
  v5 = 0;
  do
  {
    v6 = *v4;
    if ( !*v4 )
      goto LABEL_9;
    if ( v14 - *(float *)(v6 + 0x18) < dbl_A74C98 )
    {
      if ( *(_DWORD *)v6 == a1 )
      {
        v13 = flt_A417B4;
        v12 = (float *)sub_6899C0((char *)a2);
        v7 = (float *)sub_6899C0((char *)(v6 + 4));
        if ( sub_47D810(v7, v12, v13) )
          v15 = v6;
      }
LABEL_9:
      v5 = v4;
      v4 = (int *)v4[1];
      continue;
    }
    if ( v5 )
    {
      BSSimpleList_Remove(v5, *v4);
      TESTexture::ClearComponentReferences((void *)(v6 + 4));
      FormHeapFree(v6);
      v4 = (int *)v5[1];
    }
    else
    {
      v11 = (int *)v4[1];
      if ( v11 )
      {
        v4[1] = v11[1];
        *v4 = *v11;
        FormHeapFree((unsigned int)v11);
      }
      else
      {
        *v4 = 0;
      }
      TESTexture::ClearComponentReferences((void *)(v6 + 4));
      FormHeapFree(v6);
    }
  }
  while ( v4 );
  if ( v15 )
  {
    *(float *)(v15 + 0x18) = v14;
    *(_DWORD *)(v15 + 4) = *(_DWORD *)a2;
    *(_DWORD *)(v15 + 8) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(v15 + 0xC) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(v15 + 0x10) = *(_DWORD *)(a2 + 0xC);
    *(_DWORD *)(v15 + 0x14) = *(_DWORD *)(a2 + 0x10);
    *(_BYTE *)(v15 + 0x1C) = a3;
  }
  else
  {
    v8 = FormHeapAlloc(0x20u);
    v9 = 0;
    if ( v8 )
    {
      sub_68CB30((_DWORD *)(v8 + 4));
      v9 = v8;
    }
    *(_DWORD *)v9 = a1;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)a2;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(v9 + 0xC) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(v9 + 0x10) = *(_DWORD *)(a2 + 0xC);
    v10 = *(_DWORD *)(a2 + 0x10);
    *(float *)(v9 + 0x18) = v14;
    *(_DWORD *)(v9 + 0x14) = v10;
    *(_BYTE *)(v9 + 0x1C) = a3;
    BSSimpleList_PushFront(&dword_B3C094, v9);
  }
}
