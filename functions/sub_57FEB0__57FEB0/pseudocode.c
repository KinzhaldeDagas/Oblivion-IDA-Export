void __thiscall sub_57FEB0(_DWORD *this)
{
  FormHeapFree(*(this + 8));
  *(this + 8) = 0;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x12) = 0;
  FormHeapFree(*(this + 6));
  *(this + 6) = 0;
  *((_WORD *)this + 0xF) = 0;
  *((_WORD *)this + 0xE) = 0;
}
