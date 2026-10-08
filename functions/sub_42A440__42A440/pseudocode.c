void __thiscall sub_42A440(int **this, int a2, char a3)
{
  int *v4; // eax
  int *i; // eax
  int v6; // ecx
  int v7; // esi

  if ( !*(this + 3) ) /*0x42a443*/
  {
    v4 = (int *)FormHeapAlloc(8u); /*0x42a44c*/
    if ( v4 ) /*0x42a456*/
    {
      *v4 = 0; /*0x42a458*/
      v4[1] = 0; /*0x42a45e*/
    }
    else
    {
      v4 = 0; /*0x42a467*/
    }
    *(this + 3) = v4; /*0x42a469*/
  }
  for ( i = *(this + 3); i; i = (int *)i[1] ) /*0x42a475*/
  {
    v6 = *i; /*0x42a477*/
    if ( !*i ) /*0x42a477*/
      break; /*0x42a477*/
    if ( *(_DWORD *)v6 == a2 ) /*0x42a47f*/
    {
      *(_DWORD *)v6 = a2; /*0x42a4b1*/
      *(_BYTE *)(v6 + 4) = a3; /*0x42a4b4*/
      return; /*0x42a4b4*/
    }
  }
  v7 = FormHeapAlloc(8u); /*0x42a488*/
  BSSimpleList_PushFront(*(this + 3), v7); /*0x42a499*/
  *(_DWORD *)v7 = a2; /*0x42a4a2*/
  *(_BYTE *)(v7 + 4) = a3; /*0x42a4a4*/
}
