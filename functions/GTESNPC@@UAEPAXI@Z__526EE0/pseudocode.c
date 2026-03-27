TESNPC *__thiscall TESNPC::`scalar deleting destructor'(TESNPC *this, char a2)
{
  TESNPC::~TESNPC(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
