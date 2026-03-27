void __thiscall TESTexture_destr(_DWORD *this)
{
  *this = &TESTexture::`vftable';
  FormHeapFree(*(this + 1));
  *(this + 1) = 0;
  *((_WORD *)this + 5) = 0;
  *((_WORD *)this + 4) = 0;
}
