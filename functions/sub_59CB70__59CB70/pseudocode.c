BOOL __thiscall sub_59CB70(unsigned int *this, BSStringT *a2)
{
  int v2; // ebp
  char v3; // dl
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // eax
  char v9[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = *(this + 0xE); /*0x59cb89*/
  v3 = *(_BYTE *)(*(this + 0xC) + v2); /*0x59cb8f*/
  v4 = 0; /*0x59cb99*/
  while ( v3 != 0xD ) /*0x59cb9e*/
  {
    if ( v3 == 0x3C ) /*0x59cba4*/
      break; /*0x59cba4*/
    if ( v3 == 0x3E ) /*0x59cba9*/
      break; /*0x59cba9*/
    if ( v3 == 0x2A ) /*0x59cbae*/
      break; /*0x59cbae*/
    v5 = *(this + 0xD); /*0x59cbb0*/
    v6 = *(this + 0xC); /*0x59cbb3*/
    if ( v6 >= v5 ) /*0x59cbb8*/
      break; /*0x59cbb8*/
    v7 = v6 + 1; /*0x59cbba*/
    v9[v4++] = v3; /*0x59cbbd*/
    *(this + 0xC) = v7; /*0x59cbc6*/
    if ( v7 < v5 ) /*0x59cbc9*/
      v3 = *(_BYTE *)(v7 + v2); /*0x59cbcb*/
  }
  v9[v4] = 0; /*0x59cbdb*/
  return BSStringT_Set(a2, v9, 0); /*0x59cbe5*/
}
