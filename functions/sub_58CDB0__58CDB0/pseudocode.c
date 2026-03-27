void __thiscall sub_58CDB0(unsigned int **this)
{
  unsigned int *v2; // edi
  bool v3; // zf
  unsigned int **v4; // edi
  unsigned int *v5; // ebp
  unsigned int *v6; // edi

  v2 = *this;
  if ( *this )
  {
    sub_5852C0(*this);
    FormHeapFree((unsigned int)v2);
  }
  v3 = *((_BYTE *)this + 0x10) == 0;
  *(this + 3) = 0;
  if ( !v3 )
  {
    v4 = this + 1;
    if ( this != (unsigned int **)0xFFFFFFFC )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          sub_5852C0(*v4);
          FormHeapFree((unsigned int)v5);
        }
        v4 = (unsigned int **)v4[1];
      }
      while ( v4 );
    }
  }
  if ( *(this + 2) )
  {
    do
    {
      v6 = (unsigned int *)(*(this + 2))[1];
      FormHeapFree((unsigned int)*(this + 2));
      *(this + 2) = v6;
    }
    while ( v6 );
  }
  *(this + 1) = 0;
}
