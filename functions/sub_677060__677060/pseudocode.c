// Verified: writes four-byte header globalB3BCF0, then six UInt16 list counts and Crime_SaveGame payloads, preserving list traversal order; matches manager loader6770F0. Crime order is observable through AlarmPackage category/index references.
// Verified disassembly address677070 is B3BB2C+1C4 = B3BCF0, a float storage location (name qword_B3BB2C is misleading). Manager loader consumes4 bytes then immediately calls673B10(0.0), resetting this location. Unknown reason for persisting then clearing it.
void __thiscall ActorProcessManager_SaveCrimes(ActorProcessManager *self)
{
  CrimeListNode **crimeLists; // edi
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebx
  CrimeListNode *i; // esi
  bool v6; // zf
  int Src; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h]

  SaveLoad_SaveData(g_TESSaveLoadGame, &qword_B3BB2C[0x71], 4u); /*0x677075*/
  crimeLists = self->crimeLists; /*0x67707a*/
  v8 = 6; /*0x67707d*/
  do /*0x6770e1*/
  {
    v3 = g_TESSaveLoadGame; /*0x677090*/
    Src = 0; /*0x67709c*/
    bufferCursor = v3->bufferCursor; /*0x6770a4*/
    SaveLoad_SaveData(v3, &Src, 2u); /*0x6770a8*/
    for ( i = *crimeLists; i; i = i->next ) /*0x6770ad*/
    {
      if ( !i->next && !i->crime ) /*0x6770b9*/
        break; /*0x6770bc*/
      Crime_SaveGame(i->crime); /*0x6770c0*/
      ++Src; /*0x6770c5*/
    }
    ++crimeLists; /*0x6770d6*/
    v6 = v8-- == 1; /*0x6770d9*/
    *(_WORD *)bufferCursor = Src; /*0x6770de*/
  }
  while ( !v6 ); /*0x6770e1*/
}
