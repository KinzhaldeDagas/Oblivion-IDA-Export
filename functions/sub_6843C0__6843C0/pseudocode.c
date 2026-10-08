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

  if ( unk_B3C088 ) /*0x6843c1*/
    return 0; /*0x6843cd*/
  v5 = 0; /*0x6843d3*/
  *a4 = 0; /*0x6843d6*/
  v6 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x6843d8*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x6843e8*/
    v6 = v6 + flt_A2FC78; /*0x6843ea*/
  v7 = &unk_B3C08C; /*0x6843f4*/
  v8 = 0; /*0x6843f9*/
  while ( !v5 ) /*0x684402*/
  {
    v9 = *v7; /*0x684404*/
    if ( *v7 ) /*0x684404*/
    {
      v12 = v6; /*0x6843f0*/
      if ( v12 - *(float *)(v9 + 0x1C) >= dbl_A2FC70 ) /*0x68441c*/
      {
        if ( v8 ) /*0x684482*/
        {
          BSSimpleList_Remove(v8, *v7); /*0x684487*/
          FormHeapFree(v9); /*0x68448d*/
          v7 = (int *)v8[1]; /*0x684492*/
        }
        else
        {
          v10 = (int *)v7[1]; /*0x68449a*/
          if ( v10 ) /*0x68449f*/
          {
            v7[1] = v10[1]; /*0x6844a4*/
            *v7 = *v10; /*0x6844aa*/
            FormHeapFree((unsigned int)v10); /*0x6844ac*/
            FormHeapFree(v9); /*0x6844b5*/
          }
          else
          {
            v11 = *v7; /*0x6844bf*/
            *v7 = 0; /*0x6844c0*/
            FormHeapFree(v11); /*0x6844c6*/
          }
        }
        goto LABEL_14; /*0x684498*/
      }
      if ( *(_DWORD *)v9 == a1 /*0x684458*/
        && sub_47D810((float *)(v9 + 4), a2, flt_A417B4)
        && sub_47D810((float *)(v9 + 0x10), a3, flt_A417B4) )
      {
        v5 = 1; /*0x68446b*/
        *a4 = *(_BYTE *)(v9 + 0x20); /*0x68446d*/
      }
    }
    v8 = v7; /*0x68446f*/
    v7 = (int *)v7[1]; /*0x684471*/
LABEL_14:
    if ( !v7 ) /*0x684476*/
      return v5; /*0x684476*/
  }
  return v5; /*0x6843cd*/
}
