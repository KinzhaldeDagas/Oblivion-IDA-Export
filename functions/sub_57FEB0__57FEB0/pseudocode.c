void __thiscall sub_57FEB0(_DWORD *this)
{
  FormHeapFree(*(this + 8)); /*0x57fed9*/
  *(this + 8) = 0; /*0x57fee0*/
  *((_WORD *)this + 0x13) = 0; /*0x57fee3*/
  *((_WORD *)this + 0x12) = 0; /*0x57fee7*/
  FormHeapFree(*(this + 6)); /*0x57feef*/
  *(this + 6) = 0; /*0x57fef7*/
  *((_WORD *)this + 0xF) = 0; /*0x57fefa*/
  *((_WORD *)this + 0xE) = 0; /*0x57fefe*/
}
