_DWORD *__thiscall sub_571D40(_DWORD *this)
{
  int v2; // edi
  double v3; // st7

  *(this + 3) = 0;
  *(this + 4) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((_WORD *)this + 0xB) = 0;
  *(float *)this = 0.0;
  *(this + 2) = 0;
  *((float *)this + 1) = 0.0;
  v2 = *(this + 3);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 3) = 0;
  }
  FormHeapFree(*(this + 4));
  v3 = flt_A30634;
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((float *)this + 6) = v3;
  return this;
}
