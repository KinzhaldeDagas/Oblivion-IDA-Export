unsigned int __thiscall sub_46E600(unsigned int *this)
{
  unsigned int result; // eax
  unsigned int *v3; // eax

  for ( result = *(this + 1); result; result = *(this + 1) )
  {
    FormHeapFree(result);
    v3 = (unsigned int *)*(this + 2);
    if ( v3 )
    {
      *(this + 2) = v3[1];
      *(this + 1) = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *(this + 1) = 0;
    }
  }
  return result;
}
