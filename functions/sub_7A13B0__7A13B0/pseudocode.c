_DWORD *__thiscall sub_7A13B0(_DWORD *this)
{
  char v2; // bl
  double v3; // st7
  char **v4; // edi
  char **v5; // eax
  rsize_t v7; // [esp-4h] [ebp-48h]
  int v8; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v9; // [esp+20h] [ebp-24h]
  int v10; // [esp+30h] [ebp-14h]
  unsigned int v11; // [esp+34h] [ebp-10h]
  int v12; // [esp+40h] [ebp-4h]

  v2 = 0;
  *this = 0;
  *(this + 1) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  v12 = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 1;
  *(this + 0xB) = 2;
  *(this + 0xD) = 4;
  *(this + 0xE) = 1;
  *((_BYTE *)this + 0x3C) = 0;
  *(this + 0x11) = 0;
  *(this + 0x12) = 0;
  *(this + 0x13) = 0;
  *((float *)this + 0x15) = 1.0;
  LOBYTE(v12) = 2;
  *((float *)this + 0x16) = 0.0;
  *(this + 0x14) = 4;
  *((float *)this + 0x17) = 0.0;
  *(this + 0x19) = 2;
  v3 = flt_A43328;
  *(this + 0x1A) = 1;
  *((float *)this + 0x18) = v3;
  v4 = (char **)FormHeapAlloc(0x5Cu);
  LOBYTE(v12) = 3;
  if ( v4 )
  {
    LODWORD(v7) = 0x99;
    v11 = 0xF;
    v10 = 0;
    LOBYTE(v9) = 0;
    sub_414500(
      &v8,
      (int)v4,
      "BezierSpline 0.0 1.0 0.0 { 3 0 0.00138887 0.337009 0.941501 0.132767 0.493215 0.998903 1 0.00102074 0.23702 1 -6.2"
      "4607e-008 0.307222 -0.951638 0.126974 }",
      v7);
    v2 = 1;
    LOBYTE(v12) = 4;
    v5 = sub_786D60(v4, &v8);
  }
  else
  {
    v5 = 0;
  }
  *(this + 0xC) = v5;
  if ( (v2 & 1) != 0 && v11 >= 0x10 )
    FormHeapFree(v9);
  return this;
}
