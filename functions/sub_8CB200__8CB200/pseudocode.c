int *__thiscall sub_8CB200(int *this, char a2)
{
  sub_8CB180(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
