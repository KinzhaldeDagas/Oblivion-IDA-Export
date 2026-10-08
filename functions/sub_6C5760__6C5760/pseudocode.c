// Adds a controller sequence to a NiControllerManager: rejects an already-owned sequence, binds manager, optionally validates controlled blocks, stores name mapping/list membership, and balances the temporary reference.
// local variable allocation has failed, the output may be wrong!
char __thiscall NiControllerManager_AddSequence(
        NiControllerManager *this,
        NiControllerSequence *sequence,
        const char *name,
        char validateControlledBlocks)
{
  bool v5; // zf

  if ( this && *((_DWORD *)sequence + 0x10) ) /*0x6c578d*/
    return 0; /*0x6c5791*/
  v5 = *((_DWORD *)sequence + 0x17) == 0; /*0x6c5793*/
  *((_DWORD *)sequence + 0x10) = this; /*0x6c5797*/
  if ( v5 ) /*0x6c579a*/
    sub_49F4D0((unsigned int *)sequence, *(char **)(*((_DWORD *)this + 0xC) + 8)); /*0x6c57a5*/
  if ( validateControlledBlocks && !sub_6C9590(sequence, (int)this, *((Ni2DBuffer ***)this + 0xC)) ) /*0x6c57b7*/
  {
    *((_DWORD *)sequence + 0x10) = 0; /*0x6c57c0*/
    return 0; /*0x6c57db*/
  }
  if ( name ) /*0x6c57e4*/
    sub_434930((unsigned int *)sequence, name); /*0x6c57e9*/
  *(_DWORD *)&validateControlledBlocks = sequence; /*0x6c57f2*/
  InterlockedIncrement((volatile LONG *)sequence + 1); /*0x6c57f6*/
  sub_6C5240((int)this + 0x3C, (LONG *)&validateControlledBlocks); /*0x6c580c*/
  if ( !InterlockedDecrement((volatile LONG *)sequence + 1) ) /*0x6c581a*/
    (**(void (__thiscall ***)(NiControllerSequence *, int))sequence)(sequence, 1); /*0x6c582c*/
  sub_412D30((_DWORD *)this + 0x16, *((_DWORD *)sequence + 2), (TESForm *)sequence); /*0x6c5836*/
  return 1; /*0x6c57c9*/
}
