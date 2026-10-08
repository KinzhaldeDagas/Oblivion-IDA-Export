void __thiscall hkAllCdPointCollector::~hkAllCdPointCollector(hkAllCdPointCollector *this)
{
  int v2; // eax
  int v3; // ecx

  *(_DWORD *)this = &hkAllCdPointCollector::`vftable'; /*0x532308*/
  v2 = *((_DWORD *)this + 6); /*0x53230e*/
  if ( v2 >= 0 ) /*0x53231b*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x53232d*/
    if ( !v3 ) /*0x532335*/
      v3 = unk_BA7D9C; /*0x532337*/
    sub_8A75D0(v3, *((_DWORD **)this + 4), 0x30 * (v2 & 0x3FFFFFFF), 0x14); /*0x53234f*/
  }
  *(_DWORD *)this = &hkCdPointCollector::`vftable'; /*0x532354*/
}
