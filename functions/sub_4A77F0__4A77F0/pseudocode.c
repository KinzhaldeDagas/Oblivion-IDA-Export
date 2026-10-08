int __thiscall sub_4A77F0(_BYTE *this, int a2)
{
  int v2; // ebp
  int v4; // eax
  char v5; // cl
  double v6; // st7
  double v7; // st7
  float *v8; // edi

  v2 = a2; /*0x4a77f1*/
  if ( !a2 ) /*0x4a77fa*/
  {
    v4 = FormHeapAlloc(0x28u); /*0x4a77fe*/
    if ( v4 ) /*0x4a7808*/
    {
      v5 = *(this + 0xC); /*0x4a780a*/
      v6 = flt_A32048; /*0x4a780d*/
      *(float *)(v4 + 0x14) = flt_A32048; /*0x4a7813*/
      *(_DWORD *)v4 = 0; /*0x4a7816*/
      *(float *)(v4 + 0x10) = v6; /*0x4a7818*/
      *(_DWORD *)(v4 + 4) = 0; /*0x4a781b*/
      v7 = flt_A3B888; /*0x4a781e*/
      *(_BYTE *)(v4 + 0xC) = v5; /*0x4a7824*/
      *(float *)(v4 + 0x1C) = v7; /*0x4a7827*/
      *(_DWORD *)(v4 + 0x20) = 0x400; /*0x4a782a*/
      *(float *)(v4 + 0x18) = v7; /*0x4a7831*/
      *(_DWORD *)(v4 + 0x24) = 0; /*0x4a7834*/
      *(_DWORD *)(v4 + 8) = 0; /*0x4a7837*/
    }
    else
    {
      v4 = 0; /*0x4a783c*/
    }
    v2 = v4; /*0x4a783e*/
  }
  for ( ; this; this = *((_BYTE **)this + 1) ) /*0x4a7842*/
  {
    if ( *(_BYTE *)(v2 + 0xC) ) /*0x4a7845*/
    {
      v8 = sub_4A6A20(*(float **)this, 0); /*0x4a785a*/
      if ( !sub_4A7710((float **)v2, (int)v8, 0.0) ) /*0x4a785f*/
        FormHeapFree((unsigned int)v8); /*0x4a7869*/
    }
    else
    {
      sub_4A7710((float **)v2, *(_DWORD *)this, 0.0); /*0x4a787e*/
    }
  }
  return v2; /*0x4a788b*/
}
