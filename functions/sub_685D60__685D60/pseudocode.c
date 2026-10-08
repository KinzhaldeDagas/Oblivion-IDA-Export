char __cdecl sub_685D60(int a1, float *a2, _DWORD *a3, _BYTE *a4)
{
  double v5; // st7
  int *v6; // ebp
  int *v7; // esi
  unsigned int v8; // edi
  float *Head; // eax
  int *v10; // eax
  float v11; // [esp+0h] [ebp-1Ch]
  char v12; // [esp+17h] [ebp-5h]
  float v13; // [esp+18h] [ebp-4h]

  if ( unk_B3C088 ) /*0x685d63*/
    return 0; /*0x685d71*/
  *a4 = 0; /*0x685d78*/
  v5 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x685d7b*/
  v12 = 0; /*0x685d8b*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x685d90*/
    v5 = v5 + flt_A2FC78; /*0x685d92*/
  v6 = dword_B3C094; /*0x685da0*/
  v7 = 0; /*0x685da5*/
  while ( !v12 ) /*0x685db5*/
  {
    v8 = *v6; /*0x685dbb*/
    if ( *v6 ) /*0x685dbb*/
    {
      v13 = v5; /*0x685d9c*/
      if ( v13 - *(float *)(v8 + 0x18) >= dbl_A74C98 ) /*0x685dd4*/
      {
        if ( v7 ) /*0x685e49*/
        {
          BSSimpleList_Remove(v7, *v6); /*0x685e4e*/
          Shared_NoOpVirtual_60D0A0((void *)(v8 + 4)); /*0x685e56*/
          FormHeapFree(v8); /*0x685e5c*/
          v6 = (int *)v7[1]; /*0x685e61*/
        }
        else
        {
          v10 = (int *)v6[1]; /*0x685e69*/
          if ( v10 ) /*0x685e6e*/
          {
            v6[1] = v10[1]; /*0x685e73*/
            *v6 = *v10; /*0x685e79*/
            FormHeapFree((unsigned int)v10); /*0x685e7c*/
          }
          else
          {
            *v6 = 0; /*0x685e86*/
          }
          Shared_NoOpVirtual_60D0A0((void *)(v8 + 4)); /*0x685e90*/
          FormHeapFree(v8); /*0x685e96*/
        }
        goto LABEL_13; /*0x685e67*/
      }
      if ( *(_DWORD *)v8 == a1 ) /*0x685ddc*/
      {
        v11 = flt_A417B4; /*0x685de9*/
        Head = (float *)EmbeddedList_GetHead((char *)(v8 + 4)); /*0x685df2*/
        if ( sub_47D890(Head, a2, v11) ) /*0x685df8*/
        {
          *a4 = *(_BYTE *)(v8 + 0x1C); /*0x685e0b*/
          *a3 = *(_DWORD *)(v8 + 4); /*0x685e0f*/
          a3[1] = *(_DWORD *)(v8 + 8); /*0x685e14*/
          a3[2] = *(_DWORD *)(v8 + 0xC); /*0x685e1a*/
          a3[3] = *(_DWORD *)(v8 + 0x10); /*0x685e20*/
          v12 = 1; /*0x685e26*/
          a3[4] = *(_DWORD *)(v8 + 0x14); /*0x685e2b*/
        }
      }
    }
    v7 = v6; /*0x685e2e*/
    v6 = (int *)v6[1]; /*0x685e30*/
LABEL_13:
    if ( !v6 ) /*0x685e35*/
      return v12; /*0x685e35*/
  }
  return v12; /*0x685d6e*/
}
