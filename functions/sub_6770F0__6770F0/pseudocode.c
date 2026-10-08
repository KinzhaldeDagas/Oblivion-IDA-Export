// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified: loads one4-byte global header then exactly six category lists at manager28..3C. Each list has UInt16 count; allocates30-byte Crime, constructs and loads, appends in serialized order. Contrasts Fallout five-list update path.
void __thiscall ActorProcessManager_LoadCrimes(ActorProcessManager *self)
{
  CrimeListNode **crimeLists; // esi
  CrimeListNode *v3; // eax
  unsigned int i; // ebp
  Crime *v5; // eax
  Crime *v6; // edi
  CrimeListNode *j; // esi
  Crime **v8; // eax
  bool v9; // zf
  unsigned __int16 Dst; // [esp+18h] [ebp-1Ch] BYREF
  CrimeListNode **v11; // [esp+1Ch] [ebp-18h]
  int v12; // [esp+20h] [ebp-14h]
  Crime *v13; // [esp+24h] [ebp-10h]
  unsigned int v14; // [esp+30h] [ebp-4h]

  SaveLoad_LoadData(g_TESSaveLoadGame, &qword_B3BB2C[0x71], 4u); /*0x677126*/
  sub_673B10(0.0); /*0x677133*/
  crimeLists = self->crimeLists; /*0x677138*/
  v11 = crimeLists; /*0x67713b*/
  v12 = 6; /*0x67713f*/
  do /*0x677219*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 2u); /*0x67715d*/
    if ( Dst ) /*0x677167*/
    {
      if ( !*crimeLists ) /*0x67716d*/
      {
        v3 = (CrimeListNode *)FormHeapAlloc(8u); /*0x677173*/
        if ( v3 ) /*0x67717d*/
        {
          v3->crime = 0; /*0x67717f*/
          v3->next = 0; /*0x677181*/
        }
        else
        {
          v3 = 0; /*0x677186*/
        }
        *crimeLists = v3; /*0x677188*/
      }
      for ( i = 0; i < Dst; ++i ) /*0x677191*/
      {
        v5 = (Crime *)FormHeapAlloc(0x30u); /*0x677195*/
        v13 = v5; /*0x67719d*/
        v14 = 0; /*0x6771a3*/
        if ( v5 ) /*0x6771a7*/
          v6 = Crime_Constructor(v5); /*0x6771b0*/
        else
          v6 = 0; /*0x6771b4*/
        v14 = 0xFFFFFFFF; /*0x6771b8*/
        Crime_LoadGame(v6); /*0x6771c0*/
        if ( v6 ) /*0x6771c7*/
        {
          for ( j = *crimeLists; j->next; j = j->next ) /*0x6771cb*/
            ; /*0x6771d0*/
          if ( j->crime ) /*0x6771d8*/
          {
            v8 = (Crime **)FormHeapAlloc(8u); /*0x6771de*/
            if ( v8 ) /*0x6771e8*/
            {
              *v8 = v6; /*0x6771ea*/
              v8[1] = 0; /*0x6771ec*/
              j->next = (CrimeListNode *)v8; /*0x6771ef*/
            }
            else
            {
              j->next = 0; /*0x6771f6*/
            }
          }
          else
          {
            j->crime = v6; /*0x6771fb*/
          }
        }
        crimeLists = v11; /*0x677202*/
      }
    }
    ++crimeLists; /*0x67720d*/
    v9 = v12-- == 1; /*0x677210*/
    v11 = crimeLists; /*0x677215*/
  }
  while ( !v9 ); /*0x677219*/
}
