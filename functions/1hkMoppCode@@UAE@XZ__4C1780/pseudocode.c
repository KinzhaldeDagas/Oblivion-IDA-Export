void __thiscall hkMoppCode::~hkMoppCode(hkMoppCode *this)
{
  int v2; // eax
  int v3; // ecx

  *(_DWORD *)this = &hkMoppCode::`vftable'; /*0x4c17a8*/
  v2 = *((_DWORD *)this + 0xA); /*0x4c17ae*/
  if ( v2 >= 0 ) /*0x4c17bb*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x4c17cd*/
    if ( !v3 ) /*0x4c17d5*/
      v3 = unk_BA7D9C; /*0x4c17d7*/
    sub_8A75D0(v3, *((_DWORD **)this + 8), v2 & 0x3FFFFFFF, 0x14); /*0x4c17e9*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x4c17ee*/
}
