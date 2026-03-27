int __thiscall sub_77D390(_DWORD *this)
{
  int result; // eax
  int v2; // esi

  *this = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 1) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  for ( result = 0; (unsigned __int16)result < *((_WORD *)this + 0x1B); *(_DWORD *)(*(this + 0xC) + 4 * v2) = 0 )
    v2 = (unsigned __int16)result++;
  *((_WORD *)this + 0x1B) = 0;
  *((_WORD *)this + 0x1C) = 0;
  *(this + 0xF) = 0;
  *(this + 0x10) = 0;
  return result;
}
