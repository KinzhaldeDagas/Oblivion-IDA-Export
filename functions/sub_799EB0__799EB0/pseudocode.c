void __thiscall sub_799EB0(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // esi

  v3 = *(this + 0xC);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      sub_784B60((unsigned int *)*(this + 0xC));
      FormHeapFree(v3);
    }
    *(this + 0xC) = a2;
  }
}
