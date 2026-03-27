void __thiscall sub_497220(_DWORD *this)
{
  FormHeapFree(*(this + 1));
  *(_BYTE *)this = 0;
  *(this + 1) = 0;
}
