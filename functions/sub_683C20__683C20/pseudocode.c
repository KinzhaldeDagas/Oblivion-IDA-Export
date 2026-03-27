void __thiscall sub_683C20(unsigned int *this)
{
  unsigned int *v2; // eax

  while ( *(this + 0xE) || *(this + 0xD) )
  {
    FormHeapFree(*(this + 0xD));
    v2 = (unsigned int *)*(this + 0xE);
    if ( v2 )
    {
      *(this + 0xE) = v2[1];
      *(this + 0xD) = *v2;
      FormHeapFree((unsigned int)v2);
    }
    else
    {
      *(this + 0xD) = 0;
    }
  }
}
