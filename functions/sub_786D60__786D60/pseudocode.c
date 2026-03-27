char **__thiscall sub_786D60(char **this, _DWORD *a2)
{
  int v3; // edi
  char **v4; // eax
  int v5; // eax

  v3 = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *(this + 0x10) = 0;
  *(this + 0x11) = 0;
  *(this + 0x12) = 0;
  *(this + 0x14) = 0;
  *(this + 0x15) = 0;
  *(this + 0x16) = 0;
  v4 = (char **)*sub_786C60((int *)&dword_B4296C, a2);
  if ( v4 )
  {
    sub_785C50(this, v4);
  }
  else
  {
    sub_786AF0((float *)this, (int)a2);
    sub_786350(this, 0x1F4);
    v5 = FormHeapAlloc(0x5Cu);
    if ( v5 )
      v3 = sub_785CB0(v5, this);
    *sub_786C60((int *)&dword_B4296C, a2) = v3;
  }
  return this;
}
