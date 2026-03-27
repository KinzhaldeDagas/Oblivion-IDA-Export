BOOL __thiscall sub_59CB70(unsigned int *this, BSStringT *a2)
{
  int v2; // ebp
  char v3; // dl
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // eax
  char v9[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = *(this + 0xE);
  v3 = *(_BYTE *)(*(this + 0xC) + v2);
  v4 = 0;
  while ( v3 != 0xD )
  {
    if ( v3 == 0x3C )
      break;
    if ( v3 == 0x3E )
      break;
    if ( v3 == 0x2A )
      break;
    v5 = *(this + 0xD);
    v6 = *(this + 0xC);
    if ( v6 >= v5 )
      break;
    v7 = v6 + 1;
    v9[v4++] = v3;
    *(this + 0xC) = v7;
    if ( v7 < v5 )
      v3 = *(_BYTE *)(v7 + v2);
  }
  v9[v4] = 0;
  return BSStringT_Set(a2, v9, 0);
}
