void __thiscall sub_8B6950(unsigned int *this, char a2)
{
  if ( a2 )
  {
    FormHeapFree(*(this + 3));
    *(this + 3) = 0;
  }
}
