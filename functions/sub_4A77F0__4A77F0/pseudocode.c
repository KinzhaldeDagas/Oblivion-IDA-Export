int __thiscall sub_4A77F0(_BYTE *this, int a2)
{
  int v2; // ebp
  int v4; // eax
  char v5; // cl
  double v6; // st7
  double v7; // st7
  float *v8; // edi

  v2 = a2;
  if ( !a2 )
  {
    v4 = FormHeapAlloc(0x28u);
    if ( v4 )
    {
      v5 = *(this + 0xC);
      v6 = flt_A32048;
      *(float *)(v4 + 0x14) = flt_A32048;
      *(_DWORD *)v4 = 0;
      *(float *)(v4 + 0x10) = v6;
      *(_DWORD *)(v4 + 4) = 0;
      v7 = flt_A3B888;
      *(_BYTE *)(v4 + 0xC) = v5;
      *(float *)(v4 + 0x1C) = v7;
      *(_DWORD *)(v4 + 0x20) = 0x400;
      *(float *)(v4 + 0x18) = v7;
      *(_DWORD *)(v4 + 0x24) = 0;
      *(_DWORD *)(v4 + 8) = 0;
    }
    else
    {
      v4 = 0;
    }
    v2 = v4;
  }
  for ( ; this; this = *((_BYTE **)this + 1) )
  {
    if ( *(_BYTE *)(v2 + 0xC) )
    {
      v8 = sub_4A6A20(*(float **)this, 0);
      if ( !sub_4A7710((float **)v2, (int)v8, 0.0) )
        FormHeapFree((unsigned int)v8);
    }
    else
    {
      sub_4A7710((float **)v2, *(_DWORD *)this, 0.0);
    }
  }
  return v2;
}
