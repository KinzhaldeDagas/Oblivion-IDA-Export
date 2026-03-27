void __thiscall sub_6B3500(unsigned int **this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi

  v2 = (unsigned int)*(this + 1);
  if ( v2 )
  {
    sub_6AF6D0(*(this + 1));
    FormHeapFree(v2);
    *(this + 1) = 0;
  }
  if ( *(this + 2) )
  {
    FormHeapFree((unsigned int)*(this + 2));
    *(this + 2) = 0;
  }
  v3 = (unsigned int)*(this + 3);
  if ( v3 )
  {
    sub_732A20(*(this + 3));
    FormHeapFree(v3);
    *(this + 3) = 0;
  }
}
