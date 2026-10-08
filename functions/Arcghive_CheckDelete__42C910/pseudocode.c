LONG __thiscall Arcghive_CheckDelete(volatile LONG *this)
{
  volatile LONG *v2; // edi
  LONG result; // eax

  v2 = this + 0x6A; /*0x42c914*/
  result = InterlockedDecrement(this + 0x6A); /*0x42c91b*/
  if ( (*(_BYTE *)(this + 0x65) & 2) != 0 ) /*0x42c928*/
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(this + 0x80), (int)&aArchiveCheckde); /*0x42c938*/
    if ( !*v2 ) /*0x42c93d*/
    {
      ArchiveManager_RemoveArchive((int)this); /*0x42c943*/
      *((_BYTE *)this + 0x1AC) = 1; /*0x42c94b*/
    }
    result = NiLeaveCriticalSection_0((LPCRITICAL_SECTION)this + 0x10); /*0x42c954*/
  }
  if ( *((_BYTE *)this + 0x1AC) ) /*0x42c95a*/
    return (**(LONG (__thiscall ***)(volatile LONG *, int))this)(this, 1); /*0x42c96b*/
  return result; /*0x42c96d*/
}
