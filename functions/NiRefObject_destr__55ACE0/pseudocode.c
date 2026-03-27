LONG __thiscall NiRefObject_destr(_DWORD *this)
{
  *this = &NiRefObject::`vftable';
  return InterlockedDecrement(&NiRefObject_objcount);
}
