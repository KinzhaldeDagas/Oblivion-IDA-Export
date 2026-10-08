// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified wire order: bytes10/11/2C; dwords category4,value18,crimeNumber28; four FormIDs from08/0C/14/24; UInt16 witness count then witness FormIDs. No runtime unknown00 serialized. Fixed emitted payload is33 bytes plus4 per witness, separate optional6-byte envelope.
void __thiscall Crime_SaveGame(Crime *self)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESObjectREFR *target; // eax
  Actor *criminal; // eax
  TESBoundObject *object14; // eax
  TESForm *form24; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  unsigned __int8 *v11; // edi
  CrimeWitnessNode *i; // esi
  TESSaveLoadGame_SerializationView *v13; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  unsigned __int8 *v18; // edi
  unsigned __int8 *v19; // esi
  int v20; // [esp-Ch] [ebp-3Ch]
  int v21; // [esp-8h] [ebp-38h]
  const char *v22; // [esp-4h] [ebp-34h]
  int v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int refID; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v25; // [esp+18h] [ebp-18h] BYREF
  unsigned int v26; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v27; // [esp+20h] [ebp-10h] BYREF
  unsigned __int8 *v28; // [esp+24h] [ebp-Ch]
  UInt32 Src; // [esp+28h] [ebp-8h] BYREF
  int source; // [esp+2Ch] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x6062b8*/
  source = 0; /*0x6062c0*/
  bufferCursor = v2->bufferCursor; /*0x6062c4*/
  v28 = 0; /*0x6062c8*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6062cc*/
  {
    v4 = g_TESSaveLoadGame; /*0x6062d5*/
    Src = 0x4B4F4C42; /*0x6062e2*/
    SaveLoad_SaveData(v4, &Src, 4u); /*0x6062ea*/
    v5 = g_TESSaveLoadGame; /*0x6062ef*/
    v28 = g_TESSaveLoadGame->bufferCursor; /*0x6062ff*/
    SaveLoad_SaveData(v5, &source, 2u); /*0x606303*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->flag10, 1u); /*0x606314*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->flag11, 1u); /*0x606325*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->flag2C, 1u); /*0x606336*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->category, 4u); /*0x606347*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->value18, 4u); /*0x606358*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->crimeNumber, 4u); /*0x606369*/
  target = self->target; /*0x60636e*/
  refID = 0; /*0x606373*/
  if ( target ) /*0x606377*/
    refID = target->member.super.refID; /*0x60637c*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &refID, 4u); /*0x60638d*/
  criminal = self->criminal; /*0x606392*/
  v25 = 0; /*0x606397*/
  if ( criminal ) /*0x60639b*/
    v25 = criminal->members.super.super.super.refID; /*0x6063a0*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v25, 4u); /*0x6063b1*/
  object14 = self->object14; /*0x6063b6*/
  v26 = 0; /*0x6063bb*/
  if ( object14 ) /*0x6063bf*/
    v26 = object14->member.super.refID; /*0x6063c4*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v26, 4u); /*0x6063d5*/
  form24 = self->form24; /*0x6063da*/
  v27 = 0; /*0x6063df*/
  if ( form24 ) /*0x6063e3*/
    v27 = form24->member.refID; /*0x6063e8*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v27, 4u); /*0x6063f9*/
  v10 = g_TESSaveLoadGame; /*0x6063fe*/
  v23 = 0; /*0x60640a*/
  v11 = v10->bufferCursor; /*0x60640e*/
  SaveLoad_SaveData(v10, &v23, 2u); /*0x606412*/
  for ( i = &self->witnesses; i; i = i->next ) /*0x60641c*/
  {
    if ( !i->next && !i->actor ) /*0x606425*/
      break; /*0x606427*/
    v13 = g_TESSaveLoadGame; /*0x60642e*/
    Src = i->actor->members.super.super.super.refID; /*0x60643b*/
    SaveLoad_SaveFormID(v13, &Src, 4u); /*0x60643f*/
    ++v23; /*0x606444*/
  }
  *(_WORD *)v11 = v23; /*0x606455*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x606465*/
    v15 = g_TESSaveLoadGame->bufferCursor; /*0x60646d*/
    if ( currentlySavingFormHeader )
    {
      v16 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x606475*/
      v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v16->vtbl->GetEditorName)( /*0x606495*/
                            v16,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x132,
                            ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15 - bufferCursor,
        *currentlySavingFormHeader,
        v17,
        v20,
        v21,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v15 - bufferCursor, 0x132, ".\\AI\\AlarmPackage.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6064cd*/
  {
    v18 = v28; /*0x6064dc*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x6064e0*/
    if ( v19 > v28 + 0xFFFF ) /*0x6064eb*/
      PrintError( /*0x6064fc*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\AlarmPackage.cpp",
        0x132);
    *(_WORD *)v18 = (_WORD)v19 - (_WORD)v18; /*0x606506*/
  }
}
