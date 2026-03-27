void __thiscall sub_663980(unsigned int *this)
{
  unsigned int *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // ecx

  if ( *(this + 0x16D) )
  {
    do
    {
      v2 = (unsigned int *)*(this + 0x16D);
      if ( !v2[1] && !*v2 )
        break;
      FormHeapFree(*v2);
      v3 = (_DWORD *)*(this + 0x16D);
      v4 = (_DWORD *)v3[1];
      if ( v4 )
      {
        v3[1] = v4[1];
        *v3 = *v4;
        FormHeapFree((unsigned int)v4);
      }
      else
      {
        *v3 = 0;
      }
    }
    while ( *(this + 0x16D) );
    FormHeapFree(*(this + 0x16D));
    *(this + 0x16D) = 0;
  }
}
