// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
void __thiscall Crime_RemoveWitness(Crime *self, Actor *actor)
{
  BSSimpleList_Remove((int *)&self->witnesses, (int)actor); /*0x607113*/
}
