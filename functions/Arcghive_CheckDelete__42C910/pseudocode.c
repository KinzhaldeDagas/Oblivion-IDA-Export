LONG __thiscall Arcghive_CheckDelete(volatile LONG *this)
{
  volatile LONG *v2; // edi
  LONG result; // eax

  v2 = this + 0x6A;
  result = InterlockedDecrement(this + 0x6A);
  if ( (*(_BYTE *)(this + 0x65) & 2) != 0 )
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(this + 0x80), (int)&aArchiveCheckde);
    if ( !*v2 )
    {
      ArchiveManager_RemoveArchive((int)this);
      *((_BYTE *)this + 0x1AC) = 1;
    }
    result = NiLeaveCriticalSection_0((LPCRITICAL_SECTION)this + 0x10);
  }
  if ( *((_BYTE *)this + 0x1AC) )
    return (**(LONG (__thiscall ***)(volatile LONG *, int))this)(this, 1);
  return result;
}
