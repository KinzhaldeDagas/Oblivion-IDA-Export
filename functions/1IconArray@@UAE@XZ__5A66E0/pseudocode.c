void __thiscall IconArray::~IconArray(IconArray *this)
{
  unsigned int i; // esi
  int *v3; // eax
  unsigned int v4; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &IconArray::`vftable'; /*0x5a6709*/
  for ( i = 0; i < *((_DWORD *)this + 3); ++i ) /*0x5a670f*/
  {
    v3 = sub_5A5810(this, i); /*0x5a6723*/
    FormHeapFree((unsigned int)v3); /*0x5a672c*/
  }
  v4 = *((_DWORD *)this + 1); /*0x5a673c*/
  *(_DWORD *)this = &NiTLargeArray<HUDEffectIcon *>::`vftable'; /*0x5a673d*/
  FormHeapFree(v4); /*0x5a6743*/
}
