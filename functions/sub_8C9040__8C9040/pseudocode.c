void __thiscall sub_8C9040(unsigned int *this, char a2)
{
  unsigned int v3; // esi

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      sub_8C8DB0((int *)*(this + 3));
      FormHeapFree(v3);
    }
    *(this + 3) = 0;
  }
}
