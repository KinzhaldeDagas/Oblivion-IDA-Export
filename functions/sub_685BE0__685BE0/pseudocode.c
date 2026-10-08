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

  v4 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x685be5*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x685bf4*/
    v4 = v4 + flt_A2FC78; /*0x685bf6*/
  v12 = v4; /*0x685c00*/
  v13 = 0; /*0x685c04*/
  v5 = &unk_B3C08C; /*0x685c0c*/
  v6 = 0; /*0x685c11*/
  do /*0x685c7e*/
  {
    v7 = *v5; /*0x685c13*/
    if ( !*v5 ) /*0x685c17*/
      goto LABEL_10; /*0x685c17*/
    if ( v12 - *(float *)(v7 + 0x1C) < dbl_A2FC70 ) /*0x685c2b*/
    {
      if ( *(_DWORD *)v7 == a1 /*0x685c67*/
        && sub_47D810((float *)(v7 + 4), a2, flt_A417B4)
        && sub_47D810((float *)(v7 + 0x10), a3, flt_A417B4) )
      {
        v13 = v7; /*0x685c73*/
      }
LABEL_10:
      v6 = v5; /*0x685c77*/
      v5 = (int *)v5[1]; /*0x685c79*/
      continue; /*0x685c79*/
    }
    if ( v6 ) /*0x685ce6*/
    {
      BSSimpleList_Remove(v6, *v5); /*0x685ceb*/
      FormHeapFree(v7); /*0x685cf1*/
      v5 = (int *)v6[1]; /*0x685cf6*/
    }
    else
    {
      v10 = (int *)v5[1]; /*0x685d01*/
      if ( v10 ) /*0x685d06*/
      {
        v5[1] = v10[1]; /*0x685d0b*/
        *v5 = *v10; /*0x685d11*/
        FormHeapFree((unsigned int)v10); /*0x685d13*/
        FormHeapFree(v7); /*0x685d1c*/
      }
      else
      {
        v11 = *v5; /*0x685d29*/
        *v5 = 0; /*0x685d2a*/
        FormHeapFree(v11); /*0x685d30*/
      }
    }
  }
  while ( v5 ); /*0x685c7e*/
  if ( v13 ) /*0x685c86*/
  {
    *(float *)(v13 + 0x1C) = v12; /*0x685d46*/
    *(_BYTE *)(v13 + 0x20) = a4; /*0x685d4b*/
  }
  else
  {
    v8 = FormHeapAlloc(0x24u); /*0x685c8e*/
    *(_DWORD *)v8 = a1; /*0x685c9f*/
    *(float *)(v8 + 4) = *a2; /*0x685ca3*/
    *(float *)(v8 + 8) = a2[1]; /*0x685ca9*/
    *(float *)(v8 + 0xC) = a2[2]; /*0x685caf*/
    *(float *)(v8 + 0x10) = *a3; /*0x685cb5*/
    *(float *)(v8 + 0x14) = a3[1]; /*0x685cbb*/
    v9 = *((_DWORD *)a3 + 2); /*0x685cbe*/
    *(float *)(v8 + 0x1C) = v12; /*0x685cc1*/
    *(_BYTE *)(v8 + 0x20) = a4; /*0x685ccb*/
    *(_DWORD *)(v8 + 0x18) = v9; /*0x685cd4*/
    BSSimpleList_PushFront(&unk_B3C08C, v8); /*0x685cd7*/
  }
}
