unsigned int *__thiscall sub_71FB00(unsigned int *this, char a2)
{
  unsigned int *v3; // ecx

  FormHeapFree(*this);
  v3 = (unsigned int *)*(this + 4);
  if ( v3 )
    sub_71FB00(v3, 1);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
