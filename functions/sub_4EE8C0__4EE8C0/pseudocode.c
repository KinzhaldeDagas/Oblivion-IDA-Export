signed int __thiscall sub_4EE8C0(unsigned int *this)
{
  double v2; // st7
  double v3; // st7

  BSStringT_Set((BSStringT *)this + 5, "Sky\\CloudsCloudy.dds", 0);
  BSStringT_Set((BSStringT *)(this + 7), "Sky\\CloudsClear.dds", 0);
  v2 = flt_A47E74;
  *((float *)this + 0x18) = flt_A47E74;
  *((_BYTE *)this + 0x48) = 0x33;
  *((float *)this + 0x16) = v2;
  *((_BYTE *)this + 0x49) = 0x33;
  v3 = flt_A3F4F0;
  *((_BYTE *)this + 0x4A) = 0x33;
  *((float *)this + 0x19) = v3;
  *((float *)this + 0x17) = v3;
  *((_BYTE *)this + 0x4B) = 0xFF;
  *((_BYTE *)this + 0x4C) = 0xFF;
  *((_BYTE *)this + 0x4D) = 0xFF;
  *((_BYTE *)this + 0x4F) = 0xFF;
  *((_BYTE *)this + 0x51) = 0xFF;
  *(this + 0x36) = (unsigned int)&off_846C66;
  *(this + 0x1A) = (unsigned int)&off_846C66;
  *(this + 0x37) = (unsigned int)byte_71533E;
  *(this + 0x1B) = (unsigned int)byte_71533E;
  *(this + 0x38) = (unsigned int)&loc_846D65 + 1;
  *(this + 0x1C) = (unsigned int)&loc_846D65 + 1;
  *(this + 0x39) = 0x100A05;
  *(this + 0x1D) = 0x100A05;
  *(this + 0x3A) = (unsigned int)&loc_5F6DB5 + 1;
  *(this + 0x1E) = (unsigned int)&loc_5F6DB5 + 1;
  *(this + 0x3B) = 0xD19A83;
  *(this + 0x1F) = 0xD19A83;
  *(this + 0x3C) = (unsigned int)&loc_5782A7 + 1;
  *(this + 0x20) = (unsigned int)&loc_5782A7 + 1;
  *(this + 0x3D) = 0x261B0F;
  *(this + 0x21) = 0x261B0F;
  *(this + 0x3E) = (unsigned int)&loc_5B4B44 + 2;
  *(this + 0x22) = (unsigned int)&loc_5B4B44 + 2;
  *(this + 0x3F) = (unsigned int)&SEH_9E4F30 + 1;
  *(this + 0x23) = (unsigned int)&SEH_9E4F30 + 1;
  *(this + 0x40) = (unsigned int)&loc_6C5952 + 1;
  *(this + 0x24) = (unsigned int)&loc_6C5952 + 1;
  *((_BYTE *)this + 0x4E) = 0;
  *((_BYTE *)this + 0x50) = 0;
  *((_BYTE *)this + 0x52) = 0x32;
  *((_BYTE *)this + 0x53) = 0;
  *(this + 0x41) = 0x1C140F;
  *(this + 0x25) = 0x1C140F;
  *(this + 0x26) = 0x252212;
  *(this + 0x27) = (unsigned int)&loc_857063 + 2;
  *(this + 0x28) = 0x35221A;
  *(this + 0x29) = 0x281C15;
  *(this + 0x2A) = (unsigned int)&loc_79A5FD + 2;
  *(this + 0x2B) = 0xCAEDFF;
  *(this + 0x2C) = 0x499AE2;
  *(this + 0x2D) = (unsigned int)&loc_764D30 + 4;
  *(this + 0x2E) = (unsigned int)&loc_779FF0 + 2;
  *(this + 0x2F) = 0xBED9DE;
  *(this + 0x30) = (unsigned int)&loc_9DBDFA + 5;
  *(this + 0x31) = 0;
  return 0x1C140F;
}
