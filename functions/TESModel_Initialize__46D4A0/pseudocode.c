int __thiscall TESModel_Initialize(_DWORD *this)
{
  FormHeapFree(*(this + 1)); /*0x46d4a7*/
  *(this + 1) = 0; /*0x46d4b0*/
  *((_WORD *)this + 5) = 0; /*0x46d4b3*/
  *((_WORD *)this + 4) = 0; /*0x46d4b7*/
  *((float *)this + 3) = 0.0; /*0x46d4bb*/
  return 0; /*0x46d4c1*/
}
