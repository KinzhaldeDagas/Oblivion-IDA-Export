// TES4 authoritative: collects support contacts for 0x8AE100. Temporarily offsets the low-level collision object by wrapper vertical adjustment (+0x58 + +0x5C), calls object vfunc +0x34 and then all-contact collection, then restores the old value.
int __thiscall hkpCharacterProxy_CollectSupportContacts(float *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax
  int v6; // ecx
  float v7; // [esp+Ch] [ebp-1A4h]
  _DWORD v8[4]; // [esp+10h] [ebp-1A0h] BYREF
  char *v9; // [esp+20h] [ebp-190h]
  int v10; // [esp+24h] [ebp-18Ch]
  int v11; // [esp+28h] [ebp-188h]
  char v12; // [esp+30h] [ebp-180h] BYREF

  *(_DWORD *)(a2 + 0x14) = 0; /*0x8ad080*/
  *(_DWORD *)(a2 + 4) = 0x7F7FFFFF; /*0x8ad087*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0xC) + 8) + 0x74); /*0x8ad09e*/
  v7 = *(float *)(v3 + 8); /*0x8ad0a8*/
  *(float *)(v3 + 8) = *(this + 0x17) + *(this + 0x16) + v7; /*0x8ad0ac*/
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0xC) + 0x34))(*((_DWORD *)this + 0xC), a2); /*0x8ad0b4*/
  *(float *)(v3 + 8) = v7; /*0x8ad0bb*/
  v4 = *(_DWORD *)this; /*0x8ad0be*/
  v8[0] = &hkAllCdPointCollector::`vftable'; /*0x8ad0d1*/
  v9 = &v12; /*0x8ad0d5*/
  v11 = 0x80000008; /*0x8ad0d9*/
  v10 = 0; /*0x8ad0e1*/
  v8[1] = 0x7F7FFFFF; /*0x8ad0e9*/
  (*(void (__thiscall **)(float *, int, _DWORD *))(v4 + 8))(this, a2, v8); /*0x8ad0f1*/
  result = v11; /*0x8ad0f4*/
  v8[0] = &hkAllCdPointCollector::`vftable'; /*0x8ad0fa*/
  if ( v11 >= 0 ) /*0x8ad0fe*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8ad110*/
    if ( !v6 ) /*0x8ad118*/
      v6 = unk_BA7D9C; /*0x8ad11a*/
    return sub_8A75D0(v6, v9, 0x30 * (v11 & 0x3FFFFFFF), 0x14); /*0x8ad133*/
  }
  return result; /*0x8ad138*/
}
