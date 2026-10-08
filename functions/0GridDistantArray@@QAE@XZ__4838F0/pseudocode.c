GridDistantArray *__thiscall GridDistantArray::GridDistantArray(GridDistantArray *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ebp
  unsigned int i; // ebp
  unsigned int j; // edi
  int v10; // edi
  double v11; // st7
  double v12; // st6
  double v14; // st7
  float v15; // [esp+10h] [ebp-14h]

  sub_481DE0(this); /*0x48391c*/
  *(_DWORD *)this = &GridDistantArray::`vftable'; /*0x483929*/
  sub_483320(); /*0x48392f*/
  v2 = dword_B06A98; /*0x48393f*/
  v3 = uGridsToLoad + 2 * GridDistantCount; /*0x483945*/
  *(_DWORD *)&MEMORY[0xB33E90][0x588] = GridDistantCount; /*0x483948*/
  *(_DWORD *)&MEMORY[0xB33E90][0x58C] = v2; /*0x48394d*/
  *((_DWORD *)this + 3) = v3; /*0x483953*/
  v4 = v3 * v3; /*0x483956*/
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  if ( v6 ) /*0x48398b*/
  {
    v7 = v6 + 4; /*0x483998*/
    *(_DWORD *)v6 = v4; /*0x48399e*/
    ArrayConstructor( /*0x4839a0*/
      (char *)(v6 + 4),
      0x10u,
      v4,
      (void (__thiscall *)(char *))NiTextKey_Construct,
      (void (__thiscall *)(void *))sub_483600);
  }
  else
  {
    v7 = 0; /*0x4839a7*/
  }
  *((_DWORD *)this + 4) = v7; /*0x4839a9*/
  for ( i = 0; i < *((_DWORD *)this + 3); ++i ) /*0x4839ae*/
  {
    for ( j = 0; j < *((_DWORD *)this + 3); ++j ) /*0x4839ba*/
      GridDistantArray_UnloadCell(this, i, j); /*0x4839c4*/
  }
  v10 = *(_DWORD *)&MEMORY[0xB33E90][0x594]; /*0x4839d9*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0x4839d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x4839e7*/
    {
      if ( v10 ) /*0x4839f3*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x4839fd*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x594] = 0; /*0x4839ff*/
  }
  v11 = (double)(uGridsToLoad << 0xC); /*0x483a18*/
  if ( (uGridsToLoad & 0x80000) != 0 ) /*0x483a1c*/
    v11 = v11 + flt_A2FC78; /*0x483a1e*/
  v12 = (double)(int)(*(_DWORD *)&MEMORY[0xB33E90][0x588] << 0xC); /*0x483a41*/
  if ( (*(_DWORD *)&MEMORY[0xB33E90][0x588] & 0x80000) != 0 ) /*0x483a45*/
    v12 = v12 + flt_A2FC78; /*0x483a47*/
  v15 = v11 * dbl_A2FAA0; /*0x483a35*/
  *(float *)&MEMORY[0xB33E90][0x584] = v15 + v12; /*0x483a51*/
  v14 = flt_B06AB0; /*0x483a67*/
  *(float *)&MEMORY[0xB33E90][0x580] = *(float *)&MEMORY[0xB33E90][0x584] - v14; /*0x483a69*/
  flt_B2C334 = *(float *)&MEMORY[0xB33E90][0x580]; /*0x483a75*/
  flt_B2C338 = v14; /*0x483a7b*/
  return this; /*0x483a81*/
}
