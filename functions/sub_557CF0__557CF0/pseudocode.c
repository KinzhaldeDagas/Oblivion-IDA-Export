void __thiscall sub_557CF0(_DWORD *this)
{
  int v2; // eax
  unsigned int *v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = *(this + 0x25);
  v3 = this + 0x24;
  if ( v2 )
  {
    sub_5570D0(v2, *(this + 0x26));
    FormHeapFree(v3[1]);
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v4 = *(this + 0x21);
  if ( v4 )
  {
    sub_5573D0(v4, *(this + 0x22));
    FormHeapFree(*(this + 0x21));
  }
  *(this + 0x21) = 0;
  *(this + 0x22) = 0;
  *(this + 0x23) = 0;
  v5 = *(this + 0x1D);
  if ( v5 )
  {
    sub_557080(v5, *(this + 0x1E));
    FormHeapFree(*(this + 0x1D));
  }
  *(this + 0x1D) = 0;
  *(this + 0x1E) = 0;
  *(this + 0x1F) = 0;
  v6 = *(this + 0x19);
  if ( v6 )
  {
    sub_557030(v6, *(this + 0x1A));
    FormHeapFree(*(this + 0x19));
  }
  *(this + 0x19) = 0;
  *(this + 0x1A) = 0;
  *(this + 0x1B) = 0;
  if ( *(this + 0x15) )
    FormHeapFree(*(this + 0x15));
  *(this + 0x15) = 0;
  *(this + 0x16) = 0;
  *(this + 0x17) = 0;
  if ( *(this + 0x11) )
    FormHeapFree(*(this + 0x11));
  *(this + 0x11) = 0;
  *(this + 0x12) = 0;
  *(this + 0x13) = 0;
  if ( *(this + 0xD) )
    FormHeapFree(*(this + 0xD));
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *(this + 0xF) = 0;
  if ( *(this + 9) )
    FormHeapFree(*(this + 9));
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  *(this + 0xB) = 0;
  if ( *(this + 5) )
    FormHeapFree(*(this + 5));
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  if ( *(this + 1) )
    FormHeapFree(*(this + 1));
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
}
