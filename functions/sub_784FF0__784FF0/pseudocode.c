void __stdcall sub_784FF0(unsigned int *a1)
{
  unsigned int *v1; // esi
  unsigned int *i; // edi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 0x2D); v1 = i )
  {
    sub_784FF0((_DWORD *)i[2]);
    i = (unsigned int *)*i;
    if ( v1[9] >= 0x10 )
      FormHeapFree(v1[4]);
    v1[9] = 0xF;
    v1[8] = 0;
    *((_BYTE *)v1 + 0x10) = 0;
    FormHeapFree((unsigned int)v1);
  }
}
