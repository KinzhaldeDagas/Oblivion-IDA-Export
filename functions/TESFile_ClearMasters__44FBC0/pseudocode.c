void __thiscall TESFile_ClearMasters(unsigned int *this)
{
  unsigned int *v2; // eax
  unsigned int *v3; // eax

  while ( *(this + 0xF8) )
  {
    FormHeapFree(*(this + 0xF8));
    v2 = (unsigned int *)*(this + 0xF9);
    if ( v2 )
    {
      *(this + 0xF9) = v2[1];
      *(this + 0xF8) = *v2;
      FormHeapFree((unsigned int)v2);
    }
    else
    {
      *(this + 0xF8) = 0;
    }
  }
  while ( *(this + 0xFA) )
  {
    FormHeapFree(*(this + 0xFA));
    v3 = (unsigned int *)*(this + 0xFB);
    if ( v3 )
    {
      *(this + 0xFB) = v3[1];
      *(this + 0xFA) = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *(this + 0xFA) = 0;
    }
  }
  *(this + 0xFC) = 0;
}
