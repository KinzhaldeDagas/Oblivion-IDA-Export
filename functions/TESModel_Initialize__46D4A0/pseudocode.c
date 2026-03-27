int __thiscall TESModel_Initialize(_DWORD *this)
{
  FormHeapFree(*(this + 1));
  *(this + 1) = 0;
  *((_WORD *)this + 5) = 0;
  *((_WORD *)this + 4) = 0;
  *((float *)this + 3) = 0.0;
  return 0;
}
