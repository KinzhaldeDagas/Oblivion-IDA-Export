void __thiscall sub_7A14E0(unsigned int *this)
{
  unsigned int *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  v2 = (unsigned int *)*(this + 0xC);
  if ( v2 )
  {
    sub_784B60(v2);
    FormHeapFree((unsigned int)v2);
  }
  *(this + 0xC) = 0;
  v3 = (_DWORD *)*(this + 0x11);
  if ( v3 )
  {
    sub_79B120(v3, (_DWORD *)*(this + 0x12));
    FormHeapFree(*(this + 0x11));
  }
  *(this + 0x11) = 0;
  *(this + 0x12) = 0;
  *(this + 0x13) = 0;
  v4 = (_DWORD *)*(this + 7);
  if ( v4 )
  {
    sub_7A0CD0(v4, (_DWORD *)*(this + 8));
    FormHeapFree(*(this + 7));
  }
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  v5 = (_DWORD *)*(this + 3);
  if ( v5 )
  {
    sub_79E150(v5, (_DWORD *)*(this + 4));
    FormHeapFree(*(this + 3));
  }
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
}
