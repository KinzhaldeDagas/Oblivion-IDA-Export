// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
unsigned __int16 __thiscall ActorProcessManager_GetCrimeSaveSize(ActorProcessManager *self)
{
  CrimeListNode **crimeLists; // edi
  int v2; // ebx
  CrimeListNode *v3; // esi
  unsigned __int16 SaveSize; // ax
  unsigned __int16 v6; // [esp+Ch] [ebp-4h]

  v6 = 4; /*0x677014*/
  crimeLists = self->crimeLists; /*0x67701c*/
  v2 = 6; /*0x67701f*/
  do /*0x677054*/
  {
    v3 = *crimeLists; /*0x677024*/
    v6 += 2; /*0x677026*/
    if ( *crimeLists ) /*0x677024*/
    {
      do /*0x67704c*/
      {
        if ( !v3->next && !v3->crime ) /*0x677036*/
          break; /*0x677039*/
        SaveSize = Crime_GetSaveSize(v3->crime); /*0x67703d*/
        v3 = v3->next; /*0x677042*/
        v6 += SaveSize; /*0x677045*/
      }
      while ( v3 ); /*0x67704c*/
    }
    ++crimeLists; /*0x67704e*/
    --v2; /*0x677051*/
  }
  while ( v2 ); /*0x677054*/
  return v6; /*0x67705b*/
}
