float *__thiscall sub_8B6730(__m128 **this, int a2)
{
  __m128 *v3; // eax
  __m128 *v4; // eax
  __m128 *v5; // esi
  __m128 *v6; // eax

  sub_8AEA60(this, a2); /*0x8b6739*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8b6747*/
    v4 = v3 + 1; /*0x8b6749*/
  else
    v4 = (__m128 *)&unk_BA7A40; /*0x8b674e*/
  sub_47DCD0((float *)(a2 + 0x10), v4); /*0x8b6757*/
  if ( !this || (v5 = *(this + 2), v6 = v5 + 2, !v5) ) /*0x8b6768*/
    v6 = (__m128 *)&unk_BA7A40; /*0x8b676a*/
  return sub_47DCD0((float *)(a2 + 0x20), v6); /*0x8b6778*/
}
