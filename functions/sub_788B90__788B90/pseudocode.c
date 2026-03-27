void __thiscall sub_788B90(_DWORD *this)
{
  unsigned int v2; // [esp-Ch] [ebp-14h]
  unsigned int v3; // [esp-8h] [ebp-10h]

  FormHeapFree(*(this + 1));
  v3 = *(this + 3);
  *(this + 1) = 0;
  FormHeapFree(v3);
  v2 = *(this + 5);
  *(this + 3) = 0;
  FormHeapFree(v2);
  *(this + 5) = 0;
  if ( *(this + 0xC) >= 0x10u )
    FormHeapFree(*(this + 7));
  *(this + 0xB) = 0;
  *(this + 0xC) = 0xF;
  *((_BYTE *)this + 0x1C) = 0;
}
