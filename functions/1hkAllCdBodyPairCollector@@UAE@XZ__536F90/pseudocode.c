void __thiscall hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(hkAllCdBodyPairCollector *this)
{
  int v2; // eax
  int v3; // ecx

  *(_DWORD *)this = &hkAllCdBodyPairCollector::`vftable'; /*0x536fb8*/
  v2 = *((_DWORD *)this + 4); /*0x536fbe*/
  if ( v2 >= 0 ) /*0x536fcb*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x536fdd*/
    if ( !v3 ) /*0x536fe5*/
      v3 = unk_BA7D9C; /*0x536fe7*/
    sub_8A75D0(v3, *((_DWORD **)this + 2), 0x10 * v2, 0x14); /*0x536ffc*/
  }
  *(_DWORD *)this = &hkCdBodyPairCollector::`vftable'; /*0x537001*/
}
