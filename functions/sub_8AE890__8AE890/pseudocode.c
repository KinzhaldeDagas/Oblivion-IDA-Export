// Wrapper around 0x8AE100 using a stack hkAllCdPointCollector; caller passes output block at proxy+0x260.
int __thiscall bhkCharacterProxy_CheckSupportWithCollector(__m128 *this, __m128 *a2, __m128 *a3)
{
  int result; // eax
  int v4; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-1A0h] BYREF
  char *v6; // [esp+10h] [ebp-190h]
  int v7; // [esp+14h] [ebp-18Ch]
  int v8; // [esp+18h] [ebp-188h]
  char v9; // [esp+20h] [ebp-180h] BYREF

  v6 = &v9; /*0x8ae8a7*/
  v5[0] = &hkAllCdPointCollector::`vftable'; /*0x8ae8b0*/
  v8 = 0x80000008; /*0x8ae8b8*/
  v7 = 0; /*0x8ae8c0*/
  v5[1] = 0x7F7FFFFF; /*0x8ae8c8*/
  bhkCharacterProxy_CheckSupport(this, a2, a3, (int)v5); /*0x8ae8d0*/
  result = v8; /*0x8ae8d5*/
  v5[0] = &hkAllCdPointCollector::`vftable'; /*0x8ae8db*/
  if ( v8 >= 0 ) /*0x8ae8e2*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8ae8f4*/
    if ( !v4 ) /*0x8ae8fc*/
      v4 = unk_BA7D9C; /*0x8ae8fe*/
    return sub_8A75D0(v4, v6, 0x30 * (v8 & 0x3FFFFFFF), 0x14); /*0x8ae917*/
  }
  return result; /*0x8ae91c*/
}
