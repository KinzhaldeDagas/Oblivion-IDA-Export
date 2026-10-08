// TES4 authoritative: bhkCharacterPointCollector constructor. Base all-contact collector starts with inline 0x30-byte hit storage at this+0x20, initial capacity 8; this+0x1A0 links back to proxy+0x10 collector state.
bhkCharacterPointCollector *__thiscall bhkCharacterPointCollector::bhkCharacterPointCollector(
        bhkCharacterPointCollector *this,
        int a2)
{
  double v2; // st7

  v2 = flt_A99DCC; /*0x8cea54*/
  *((_DWORD *)this + 6) = 0x80000008;           // TES4 authoritative: collector inline hit capacity/flags = 8 entries. /*0x8cea5c*/
  *((_DWORD *)this + 4) = (char *)this + 0x20;  // TES4 authoritative: collector hit array pointer = this+0x20 inline storage. /*0x8cea66*/
  *((float *)this + 1) = v2; /*0x8cea69*/
  *((_DWORD *)this + 0x68) = a2; /*0x8cea6e*/
  *((_DWORD *)this + 5) = 0;                    // TES4 authoritative: collector hit count initialized to 0. /*0x8cea74*/
  *(_DWORD *)this = &bhkCharacterPointCollector::`vftable'; /*0x8cea77*/
  *((_DWORD *)this + 0x69) = 0; /*0x8cea7d*/
  *((_DWORD *)this + 0x6B) = 0x80000000; /*0x8cea88*/
  *((_DWORD *)this + 0x6C) = 0; /*0x8cea8e*/
  *((_DWORD *)this + 0x6E) = 0x80000000; /*0x8cea94*/
  *((_DWORD *)this + 0x6F) = 0; /*0x8cea9a*/
  *((_DWORD *)this + 0x71) = 0x80000000; /*0x8ceaa0*/
  *((_DWORD *)this + 0x6A) = 0; /*0x8ceaa6*/
  *((_DWORD *)this + 0x70) = 0; /*0x8ceaac*/
  *((_DWORD *)this + 0x6D) = 0; /*0x8ceab2*/
  return this; /*0x8ceab8*/
}
