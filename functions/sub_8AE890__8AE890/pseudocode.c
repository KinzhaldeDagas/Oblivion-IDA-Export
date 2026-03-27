int __thiscall sub_8AE890(__m128 *this, __m128 *a2, __m128 *a3)
{
  int result; // eax
  int v4; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-1A0h] BYREF
  char *v6; // [esp+10h] [ebp-190h]
  int v7; // [esp+14h] [ebp-18Ch]
  int v8; // [esp+18h] [ebp-188h]
  char v9; // [esp+20h] [ebp-180h] BYREF

  v6 = &v9;
  v5[0] = &hkAllCdPointCollector::`vftable';
  v8 = 0x80000008;
  v7 = 0;
  v5[1] = 0x7F7FFFFF;
  sub_8AE100(this, a2, a3, (int)v5);
  result = v8;
  v5[0] = &hkAllCdPointCollector::`vftable';
  if ( v8 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    return sub_8A75D0(v4, v6, 0x30 * (v8 & 0x3FFFFFFF), 0x14);
  }
  return result;
}
