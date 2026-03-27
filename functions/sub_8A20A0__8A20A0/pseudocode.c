float *__thiscall sub_8A20A0(__m128 **this, int a2)
{
  int v3; // eax
  int v4; // eax
  __m128 *v5; // esi
  __m128 *v6; // eax
  __m128 v8; // [esp+10h] [ebp-50h] BYREF
  __m128 v9; // [esp+20h] [ebp-40h] BYREF
  __m128 v10; // [esp+30h] [ebp-30h] BYREF
  __m128 v11; // [esp+40h] [ebp-20h] BYREF

  sub_8A2690(this, (_DWORD *)a2);
  if ( this && (v3 = (int)*(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0xC);
  else
    v4 = 0;
  *(_DWORD *)(a2 + 4) = v4;
  if ( !this || (v5 = *(this + 2), v6 = v5 + 2, !v5) )
    v6 = (__m128 *)xmmword_B2F090;
  v8 = *v6;
  v9 = v6[1];
  v10 = v6[2];
  v11 = v6[3];
  sub_47DCD0((float *)(a2 + 0x10), &v8);
  sub_47DCD0((float *)(a2 + 0x20), &v9);
  sub_47DCD0((float *)(a2 + 0x30), &v10);
  return sub_47DCD0((float *)(a2 + 0x40), &v11);
}
