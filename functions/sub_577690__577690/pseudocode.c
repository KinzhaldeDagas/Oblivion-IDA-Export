void __thiscall sub_577690(float *this)
{
  float v2; // ecx
  double v3; // st7
  float v4; // [esp+Ch] [ebp-8h]

  v2 = flt_A68A8C;
  v3 = flt_A68A88;
  *(this + 2) = flt_A68A90;
  v4 = v3;
  *(this + 3) = v2;
  *(this + 4) = v4;
  *this = 0.0;
  *(this + 5) = 1.0;
  *((_DWORD *)this + 6) = 1;
  FormHeapFree(*((_DWORD *)this + 7));
  *(this + 7) = 0.0;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x10) = 0;
  sub_577120((int *)this, 0x20);
}
