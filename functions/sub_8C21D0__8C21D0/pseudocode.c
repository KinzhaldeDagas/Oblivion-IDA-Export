int __thiscall sub_8C21D0(char **this, __m128 *a2)
{
  int v3; // ebx
  char *v5[7]; // [esp+1Ch] [ebp-ACh] BYREF
  __m128 v6[3]; // [esp+38h] [ebp-90h] BYREF
  __int128 v7; // [esp+68h] [ebp-60h] BYREF
  __m128 v8[3]; // [esp+78h] [ebp-50h] BYREF
  __int128 v9; // [esp+A8h] [ebp-20h] BYREF

  (*((void (__thiscall **)(char **))*this + 4))(this);
  sub_9132A0(v5, *(this + 1));
  v3 = (int)*(this + 4);
  sub_8B1FF0(v6, (__m128 *)(*((_DWORD *)*(this + 3) + 0x14) + 0x10), a2);
  sub_8B1FF0(v8, (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0x10), a2);
  sub_9135E0(v5, &v7);
  sub_913370(v5, v6);
  *(this + 5) = (char *)sub_913660(v5, &v9);
  *(this + 6) = (char *)sub_913460(v5, v8);
  sub_9132E0(v5);
  sub_913550(v5);
  sub_9136E0(v5, SLODWORD(flt_A2FAAC), COERCE_UNSIGNED_INT(1.0));
  sub_9137B0(v5);
  return sub_913810(v5);
}
