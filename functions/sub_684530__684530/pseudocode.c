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
  float *Head; // [esp-4h] [ebp-30h]
  float v13; // [esp+0h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-14h]
  unsigned int v15; // [esp+1Ch] [ebp-10h]

  v3 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x68455c*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x684564*/
    v3 = v3 + flt_A2FC78; /*0x684566*/
  v14 = v3; /*0x684570*/
  v15 = 0; /*0x684574*/
  v4 = dword_B3C094; /*0x68457c*/
  v5 = 0; /*0x684581*/
  do /*0x6845db*/
  {
    v6 = *v4; /*0x684583*/
    if ( !*v4 ) /*0x684587*/
      goto LABEL_9; /*0x684587*/
    if ( v14 - *(float *)(v6 + 0x18) < dbl_A74C98 ) /*0x68459b*/
    {
      if ( *(_DWORD *)v6 == a1 ) /*0x6845a7*/
      {
        v13 = flt_A417B4; /*0x6845b2*/
        Head = (float *)EmbeddedList_GetHead((char *)a2); /*0x6845ba*/
        v7 = (float *)EmbeddedList_GetHead((char *)(v6 + 4)); /*0x6845be*/
        if ( sub_47D810(v7, Head, v13) ) /*0x6845c4*/
          v15 = v6; /*0x6845d0*/
      }
LABEL_9:
      v5 = v4; /*0x6845d4*/
      v4 = (int *)v4[1]; /*0x6845d6*/
      continue; /*0x6845d6*/
    }
    if ( v5 ) /*0x684668*/
    {
      BSSimpleList_Remove(v5, *v4); /*0x68466d*/
      Shared_NoOpVirtual_60D0A0((void *)(v6 + 4)); /*0x684675*/
      FormHeapFree(v6); /*0x68467b*/
      v4 = (int *)v5[1]; /*0x684680*/
    }
    else
    {
      v11 = (int *)v4[1]; /*0x68468b*/
      if ( v11 ) /*0x684690*/
      {
        v4[1] = v11[1]; /*0x684695*/
        *v4 = *v11; /*0x68469b*/
        FormHeapFree((unsigned int)v11); /*0x68469d*/
      }
      else
      {
        *v4 = 0; /*0x6846a7*/
      }
      Shared_NoOpVirtual_60D0A0((void *)(v6 + 4)); /*0x6846b0*/
      FormHeapFree(v6); /*0x6846b6*/
    }
  }
  while ( v4 ); /*0x6845db*/
  if ( v15 ) /*0x6845e3*/
  {
    *(float *)(v15 + 0x18) = v14; /*0x6846c7*/
    *(_DWORD *)(v15 + 4) = *(_DWORD *)a2; /*0x6846cd*/
    *(_DWORD *)(v15 + 8) = *(_DWORD *)(a2 + 4); /*0x6846d3*/
    *(_DWORD *)(v15 + 0xC) = *(_DWORD *)(a2 + 8); /*0x6846d9*/
    *(_DWORD *)(v15 + 0x10) = *(_DWORD *)(a2 + 0xC); /*0x6846df*/
    *(_DWORD *)(v15 + 0x14) = *(_DWORD *)(a2 + 0x10); /*0x6846e9*/
    *(_BYTE *)(v15 + 0x1C) = a3; /*0x6846ec*/
  }
  else
  {
    v8 = FormHeapAlloc(0x20u); /*0x6845f0*/
    v9 = 0; /*0x6845f9*/
    if ( v8 ) /*0x684601*/
    {
      sub_68CB30((_DWORD *)(v8 + 4)); /*0x684606*/
      v9 = v8; /*0x68460b*/
    }
    *(_DWORD *)v9 = a1; /*0x684615*/
    *(_DWORD *)(v9 + 4) = *(_DWORD *)a2; /*0x68461a*/
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(a2 + 4); /*0x684620*/
    *(_DWORD *)(v9 + 0xC) = *(_DWORD *)(a2 + 8); /*0x684626*/
    *(_DWORD *)(v9 + 0x10) = *(_DWORD *)(a2 + 0xC); /*0x68462c*/
    v10 = *(_DWORD *)(a2 + 0x10); /*0x68462f*/
    *(float *)(v9 + 0x18) = v14; /*0x684632*/
    *(_DWORD *)(v9 + 0x14) = v10; /*0x684639*/
    *(_BYTE *)(v9 + 0x1C) = a3; /*0x68464a*/
    BSSimpleList_PushFront(dword_B3C094, v9); /*0x68464d*/
  }
}
