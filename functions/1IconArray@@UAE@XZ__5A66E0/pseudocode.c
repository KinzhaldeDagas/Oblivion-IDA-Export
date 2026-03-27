void __thiscall IconArray::~IconArray(IconArray *this)
{
  unsigned int i; // esi
  int *v6; // eax
  unsigned int v7; // [esp-4h] [ebp-20h]

  *(_DWORD *)this = &IconArray::`vftable';
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v6 = sub_5A5810(this, i);
    FormHeapFree((unsigned int)v6);
  }
  v7 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &NiTLargeArray<HUDEffectIcon *>::`vftable';
  FormHeapFree(v7);
}
