void __thiscall sub_65D620(_DWORD *this, char a2)
{
  if ( !a2 )
  {
    FormHeapFree(*(this + 0x16C));
    *(this + 0x16C) = 0;
  }
  *((_BYTE *)this + 0x6E5) = a2;
}
