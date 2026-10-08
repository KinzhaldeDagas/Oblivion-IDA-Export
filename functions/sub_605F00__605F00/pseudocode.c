// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified: adds Actor pointer only if not already present. Actor ownership not transferred.
void __thiscall Crime_AddWitness(Crime *self, Actor *actor)
{
  bool v2; // zf
  CrimeWitnessNode *p_witnesses; // ecx
  CrimeWitnessNode *v4; // eax

  v2 = &self->witnesses == 0; /*0x605f04*/
  p_witnesses = &self->witnesses; /*0x605f04*/
  v4 = p_witnesses; /*0x605f07*/
  if ( v2 ) /*0x605f09*/
  {
LABEL_4:
    BSSimpleList_PushFront(p_witnesses, (int)actor); /*0x605f1b*/
  }
  else
  {
    while ( v4->actor != actor ) /*0x605f12*/
    {
      v4 = v4->next; /*0x605f14*/
      if ( !v4 ) /*0x605f19*/
        goto LABEL_4; /*0x605f19*/
    }
  }
}
