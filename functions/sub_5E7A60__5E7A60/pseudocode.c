void __thiscall sub_5E7A60(int *this, float a2)
{
  int *v2; // ebx
  int *v3; // eax
  int *v4; // esi
  int v5; // edi
  bool v6; // zf
  int *v7; // eax
  int *i; // edi
  int v9; // edi
  int *v10; // [esp+Ch] [ebp-4h]

  v10 = this + 0x27; /*0x5e7a6c*/
  v2 = this + 0x27; /*0x5e7a70*/
  v3 = (int *)FormHeapAlloc(8u); /*0x5e7a72*/
  if ( v3 ) /*0x5e7a7c*/
  {
    *v3 = 0; /*0x5e7a7e*/
    v3[1] = 0; /*0x5e7a84*/
    v4 = v3; /*0x5e7a8b*/
  }
  else
  {
    v4 = 0; /*0x5e7a8f*/
  }
  while ( v2 ) /*0x5e7a93*/
  {
    v5 = *v2; /*0x5e7a95*/
    v6 = *v2 == 0; /*0x5e7a97*/
    v2 = (int *)v2[1]; /*0x5e7a99*/
    if ( !v6 ) /*0x5e7a9c*/
    {
      if ( *(float *)(v5 + 4) > 0.0 ) /*0x5e7aa8*/
      {
        *(float *)(v5 + 4) = *(float *)(v5 + 4) - a2; /*0x5e7aeb*/
        continue; /*0x5e7aeb*/
      }
      if ( !*v4 ) /*0x5e7aad*/
        goto LABEL_11; /*0x5e7aad*/
      v7 = (int *)FormHeapAlloc(8u); /*0x5e7ab1*/
      if ( !v7 ) /*0x5e7abb*/
      {
        *(_DWORD *)4 = v4[1]; /*0x5e7ada*/
        v4[1] = 0; /*0x5e7add*/
LABEL_11:
        *v4 = v5; /*0x5e7ae0*/
        continue; /*0x5e7ae2*/
      }
      *v7 = *v4; /*0x5e7abf*/
      v7[1] = 0; /*0x5e7ac1*/
      v7[1] = v4[1]; /*0x5e7acb*/
      v4[1] = (int)v7; /*0x5e7ace*/
      *v4 = v5; /*0x5e7ad1*/
    }
  }
  for ( i = v4; i; i = (int *)i[1] ) /*0x5e7af6*/
  {
    if ( !*i ) /*0x5e7af8*/
      break; /*0x5e7afc*/
    BSSimpleList_Remove(v10, *i); /*0x5e7b03*/
  }
  if ( v4[1] ) /*0x5e7b0f*/
  {
    do /*0x5e7b29*/
    {
      v9 = *(_DWORD *)(v4[1] + 4); /*0x5e7b18*/
      FormHeapFree(v4[1]); /*0x5e7b1c*/
      v4[1] = v9; /*0x5e7b26*/
    }
    while ( v9 ); /*0x5e7b29*/
  }
  *v4 = 0; /*0x5e7b2c*/
  FormHeapFree((unsigned int)v4); /*0x5e7b32*/
}
