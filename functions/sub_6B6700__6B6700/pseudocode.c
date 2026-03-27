void __thiscall sub_6B6700(unsigned int *this)
{
  if ( (*this & 0x4000) != 0 )
    --dword_B3C20C;
  --dword_B3C210;
  if ( *(this + 0x13) )
    FormHeapFree(*(this + 0x13));
  if ( *(this + 0x14) )
  {
    while ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 0x14) + 8))(*(this + 0x14)) )
      ;
    *(this + 0x14) = 0;
  }
  if ( *(this + 0x15) )
  {
    while ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 0x15) + 8))(*(this + 0x15)) )
      ;
    *(this + 0x15) = 0;
  }
}
