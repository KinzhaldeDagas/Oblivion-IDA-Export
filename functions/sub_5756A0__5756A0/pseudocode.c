void __thiscall sub_5756A0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 9) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 9) + 4);
      FormHeapFree(*(this + 9));
      *(this + 9) = v2;
    }
    while ( v2 );
  }
  *(this + 8) = 0;
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
