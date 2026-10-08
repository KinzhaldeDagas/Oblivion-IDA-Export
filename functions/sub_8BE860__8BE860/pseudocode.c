float *__thiscall sub_8BE860(__m128 **this, int a2)
{
  __m128 *v4; // eax
  __m128 *v5; // eax
  float *result; // eax
  double v7; // st7
  int v8; // esi
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  sub_89E060(this, (_DWORD *)a2); /*0x8be869*/
  *(_BYTE *)(a2 + 0x28) = 1; /*0x8be870*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8be87b*/
    v5 = v4 + 2; /*0x8be87d*/
  else
    v5 = (__m128 *)&unk_BA7A40; /*0x8be882*/
  result = sub_47DCD0((float *)(a2 + 0x10), v5); /*0x8be88b*/
  v7 = 0.0; /*0x8be890*/
  if ( this && (result = (float *)*(this + 2)) != 0 ) /*0x8be89b*/
    v9 = result[0xD]; /*0x8be8a0*/
  else
    v9 = 0.0; /*0x8be8a6*/
  *(float *)(a2 + 0x24) = v9; /*0x8be8b0*/
  if ( this ) /*0x8be8b3*/
  {
    v8 = (int)*(this + 2); /*0x8be8b5*/
    if ( v8 ) /*0x8be8ba*/
      v7 = *(float *)(v8 + 0x30); /*0x8be8be*/
  }
  v10 = v7; /*0x8be8c1*/
  *(float *)(a2 + 0x20) = v10; /*0x8be8c9*/
  return result; /*0x8be8cc*/
}
