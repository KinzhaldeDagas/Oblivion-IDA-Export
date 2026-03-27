void __thiscall sub_557B30(int *this)
{
  int v2; // eax

  v2 = *(this + 1);
  if ( v2 )
  {
    sub_557740(v2, *(this + 2));
    FormHeapFree(*(this + 1));
  }
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
}
