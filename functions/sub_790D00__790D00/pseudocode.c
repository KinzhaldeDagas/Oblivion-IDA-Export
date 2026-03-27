void __thiscall sub_790D00(unsigned int *this)
{
  unsigned int v2; // edi
  int i; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax

  FormHeapFree(*(this + 6));
  v2 = 0;
  *(this + 6) = 0;
  for ( i = 0; ; i += 0xC )
  {
    v4 = *(this + 3);
    if ( !v4 || v2 >= (int)(*(this + 4) - v4) / 0xC )
      break;
    v5 = *(this + 3);
    if ( !v5 || v2 >= (int)(*(this + 4) - v5) / 0xC )
      _invalid_parameter_noinfo();
    v6 = *(this + 3);
    v7 = *(_DWORD *)(v6 + i + 8);
    if ( v7 )
    {
      sub_790D00(*(_DWORD **)(v6 + i + 8));
      FormHeapFree(v7);
    }
    v8 = *(this + 3);
    if ( !v8 || v2 >= (int)(*(this + 4) - v8) / 0xC )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*(this + 3) + i + 8) = 0;
    ++v2;
  }
  if ( *(this + 0xD) )
    FormHeapFree(*(this + 0xD));
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *(this + 0xF) = 0;
  if ( *(this + 3) )
    FormHeapFree(*(this + 3));
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
}
