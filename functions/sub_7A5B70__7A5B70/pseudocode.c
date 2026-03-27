void __thiscall sub_7A5B70(unsigned int *this)
{
  bool v2; // zf
  signed int i; // edi
  int v4; // eax
  _DWORD *v5; // esi

  FormHeapFree(*(this + 0x13));
  v2 = *(this + 0x11) == 0;
  *(this + 0x13) = 0;
  if ( !v2 )
  {
    for ( i = 0; i < (int)*(this + 0xF); ++i )
      FormHeapFree(*(_DWORD *)(*(this + 0x11) + 4 * i));
    FormHeapFree(*(this + 0x11));
    *(this + 0x11) = 0;
  }
  FormHeapFree(*(this + 0x12));
  *(this + 0x12) = 0;
  v4 = *(this + 5);
  v5 = this + 4;
  if ( v4 )
  {
    sub_7A36B0(v4, v5[2]);
    FormHeapFree(v5[1]);
  }
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
}
