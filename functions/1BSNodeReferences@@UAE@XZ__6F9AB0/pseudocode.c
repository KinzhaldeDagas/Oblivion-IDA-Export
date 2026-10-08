void __thiscall BSNodeReferences::~BSNodeReferences(BSNodeReferences *this)
{
  int i; // eax
  int v3; // edx
  unsigned int v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &BSNodeReferences::`vftable'; /*0x6f9ab5*/
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 9); *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v3) = 0 ) /*0x6f9abd*/
    v3 = (unsigned __int16)i++; /*0x6f9ac7*/
  *((_WORD *)this + 9) = 0; /*0x6f9ad7*/
  *((_WORD *)this + 0xA) = 0; /*0x6f9adb*/
  v4 = *((_DWORD *)this + 3); /*0x6f9ae2*/
  *((_DWORD *)this + 2) = &NiTArray<NiAVObject *>::`vftable'; /*0x6f9ae3*/
  FormHeapFree(v4); /*0x6f9aea*/
  NiRefObject_destr(this); /*0x6f9af5*/
}
