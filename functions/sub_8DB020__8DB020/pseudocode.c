const void *__thiscall sub_8DB020(const void **this, int a2, int a3)
{
  int i; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  char *v8; // eax
  int j; // ecx
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  const void **v15; // esi
  const void *v16; // eax
  _DWORD *v17; // ecx
  const void *result; // eax

  for ( i = 0; i < (int)*(this + 0x702); ++i ) /*0x8db037*/
  {
    v5 = (int)*(this + 0x701); /*0x8db040*/
    v6 = *(_DWORD *)(v5 + 8 * i); /*0x8db046*/
    v7 = v5 + 8 * i; /*0x8db04b*/
    if ( v6 == a2 && *(_DWORD *)(v7 + 4) == a3 ) /*0x8db053*/
    {
      v8 = (char *)*(this + 0x702) + 0xFFFFFFFF; /*0x8db05b*/
      *(this + 0x702) = v8; /*0x8db05e*/
      for ( j = i; j < (int)*(this + 0x702); ++j ) /*0x8db066*/
      {
        v10 = (int)*(this + 0x701); /*0x8db070*/
        v11 = *(_DWORD *)(v10 + 8 * j + 8); /*0x8db076*/
        v12 = (_DWORD *)(v10 + 8 * j); /*0x8db07a*/
        *v12 = v11; /*0x8db07d*/
        v12[1] = v12[3]; /*0x8db082*/
      }
      --i; /*0x8db090*/
    }
  }
  sub_8DA800(this, a2, a3, 0); /*0x8db0a3*/
  v13 = (int)*(this + 0x703); /*0x8db0a8*/
  v14 = (int)*(this + 0x702); /*0x8db0ae*/
  v15 = this + 0x701; /*0x8db0b4*/
  if ( v14 == (v13 & 0x3FFFFFFF) ) /*0x8db0c2*/
    sub_8A6EE0(v15, 8); /*0x8db0c7*/
  v16 = v15[1]; /*0x8db0cf*/
  v17 = (char *)*v15 + 8 * (_DWORD)v16; /*0x8db0d4*/
  result = (char *)v16 + 1; /*0x8db0d7*/
  v15[1] = result; /*0x8db0d8*/
  *v17 = a2; /*0x8db0db*/
  v17[1] = a3; /*0x8db0df*/
  return result; /*0x8db0dd*/
}
