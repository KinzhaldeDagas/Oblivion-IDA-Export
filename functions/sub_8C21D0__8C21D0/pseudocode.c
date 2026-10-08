int __thiscall sub_8C21D0(char **this, __m128 *a2)
{
  int v3; // ebx
  char *v5[7]; // [esp+1Ch] [ebp-ACh] BYREF
  __m128 v6[3]; // [esp+38h] [ebp-90h] BYREF
  __int128 v7; // [esp+68h] [ebp-60h] BYREF
  __m128 v8[3]; // [esp+78h] [ebp-50h] BYREF
  __int128 v9; // [esp+A8h] [ebp-20h] BYREF

  (*((void (__thiscall **)(char **))*this + 4))(this); /*0x8c21f7*/
  sub_9132A0(v5, *(this + 1)); /*0x8c2201*/
  v3 = (int)*(this + 4); /*0x8c220c*/
  sub_8B1FF0(v6, (__m128 *)(*((_DWORD *)*(this + 3) + 0x14) + 0x10), a2); /*0x8c2218*/
  sub_8B1FF0(v8, (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0x10), a2); /*0x8c2229*/
  sub_9135E0(v5, &v7); /*0x8c2237*/
  sub_913370(v5, v6); /*0x8c2245*/
  *(this + 5) = (char *)sub_913660(v5, &v9); /*0x8c2264*/
  *(this + 6) = (char *)sub_913460(v5, v8); /*0x8c2270*/
  sub_9132E0(v5); /*0x8c2273*/
  sub_913550(v5); /*0x8c227c*/
  sub_9136E0(v5, SLODWORD(kFaceEarNormalMatchRadius), COERCE_UNSIGNED_INT(1.0)); /*0x8c2297*/
  sub_9137B0(v5); /*0x8c22a0*/
  return sub_913810(v5); /*0x8c22ae*/
}
