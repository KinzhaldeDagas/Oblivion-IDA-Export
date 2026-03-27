void __thiscall sub_4E4ED0(unsigned int *this)
{
  unsigned int *v2; // eax

  while ( *(this + 0xB) || *(this + 0xA) )
  {
    FormHeapFree(*(this + 0xA));
    v2 = (unsigned int *)*(this + 0xB);
    if ( v2 )
    {
      *(this + 0xB) = v2[1];
      *(this + 0xA) = *v2;
      FormHeapFree((unsigned int)v2);
    }
    else
    {
      *(this + 0xA) = 0;
    }
  }
}
