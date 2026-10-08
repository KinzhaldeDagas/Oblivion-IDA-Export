// LockFreeMap scan helper: iterates buckets and invokes vtable +0x14 predicate until match.
char __thiscall sub_55E810(_DWORD *this, int a2)
{
  int v3; // edi

  v3 = 0; /*0x55e815*/
  if ( !*(this + 2) ) /*0x55e817*/
    return 0; /*0x55e837*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 0x14))(this, v3, a2) ) /*0x55e82d*/
  {
    if ( (unsigned int)++v3 >= *(this + 2) ) /*0x55e835*/
      return 0; /*0x55e835*/
  }
  return 1; /*0x55e837*/
}
