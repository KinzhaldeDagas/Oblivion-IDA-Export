char __thiscall sub_6DF090(unsigned int *this)
{
  if ( *(_DWORD *)(*(this + 4) + 8) )
  {
    sub_6DF010(this, *(char **)(*(this + 4) + 8));
    *(this + 4) = 0;
    return 1;
  }
  else
  {
    FormHeapFree(*(this + 5));
    *(this + 5) = 0;
    return 0;
  }
}
