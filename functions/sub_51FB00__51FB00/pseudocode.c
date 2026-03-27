void __thiscall sub_51FB00(int *this)
{
  unsigned int v2; // edi
  int *v3; // eax

  while ( *(this + 0x10) || *(this + 0xF) )
  {
    v2 = *(this + 0xF);
    if ( v2 )
    {
      sub_51F2D0(*(this + 0xF));
      FormHeapFree(v2);
    }
    v3 = (int *)*(this + 0x10);
    if ( v3 )
    {
      *(this + 0x10) = v3[1];
      *(this + 0xF) = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *(this + 0xF) = 0;
    }
  }
}
