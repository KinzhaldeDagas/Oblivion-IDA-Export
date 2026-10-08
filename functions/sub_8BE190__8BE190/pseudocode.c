float *__thiscall sub_8BE190(__m128 **this, int a2)
{
  __m128 *v3; // eax
  float *result; // eax
  double v5; // st7
  int v6; // esi
  float v7; // [esp+Ch] [ebp-34h]
  float v8; // [esp+Ch] [ebp-34h]
  __m128 v9; // [esp+10h] [ebp-30h] BYREF
  __m128 v10; // [esp+20h] [ebp-20h] BYREF

  sub_89FD10(this, (_DWORD *)a2); /*0x8be1ad*/
  if ( this ) /*0x8be1b4*/
  {
    v3 = *(this + 2); /*0x8be1b6*/
    if ( v3 ) /*0x8be1bb*/
    {
      v9 = v3[2]; /*0x8be1c1*/
      v10 = v3[3]; /*0x8be1ca*/
    }
  }
  sub_47DCD0((float *)(a2 + 0x10), &v9); /*0x8be1d9*/
  result = sub_47DCD0((float *)(a2 + 0x10), &v10); /*0x8be1e5*/
  v5 = 0.0; /*0x8be1ea*/
  if ( this && (result = (float *)*(this + 2)) != 0 ) /*0x8be1f5*/
    v7 = result[0x10]; /*0x8be1fa*/
  else
    v7 = 0.0; /*0x8be200*/
  *(float *)(a2 + 0x30) = v7; /*0x8be20a*/
  if ( this ) /*0x8be20d*/
  {
    v6 = (int)*(this + 2); /*0x8be20f*/
    if ( v6 ) /*0x8be214*/
      v5 = *(float *)(v6 + 0x44); /*0x8be218*/
  }
  v8 = v5; /*0x8be21f*/
  *(float *)(a2 + 0x34) = v8; /*0x8be227*/
  return result; /*0x8be22a*/
}
