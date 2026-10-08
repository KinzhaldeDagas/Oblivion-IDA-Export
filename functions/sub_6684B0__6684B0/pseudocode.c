// When bTrackLevelUps is enabled, append an Oblivion-native diagnostic snapshot: player identity/level, exactly seven class major-skill names, then all 21 skill values and skillExp entries, attributes, inventory data, and advancement counters. There is no serialized minor-skill name list.
void __thiscall Player_AppendLevelUpTrackingRecord(PlayerCharacter *this)
{
  _DWORD *v2; // eax
  signed int v3; // ebx
  _BYTE *v4; // esi
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  int v6; // eax
  bool v7; // zf
  char *Name; // eax
  char *m_data; // eax
  const char *next; // eax
  const char *v11; // eax
  unsigned __int16 Level; // ax
  TESClass *BaseClass; // eax
  SkillActorValue MajorSkillAV; // eax
  const char *v15; // eax
  AVCode v16; // ebx
  SInt32 v17; // eax
  AVCode i; // ebx
  int BaseCalcAVi; // eax
  SInt32 v20; // eax
  int v21; // eax
  SInt32 v22; // eax
  int v23; // eax
  SInt32 v24; // eax
  int v25; // eax
  SInt32 v26; // eax
  double v27; // st7
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  int v29; // eax
  UInt32 Gold; // eax
  double v31; // st7
  int *v32; // edi
  int v33; // eax
  int v34; // ecx
  const char *v35; // eax
  int j; // edi
  BSStringT v37; // [esp+8Ch] [ebp-26Ch] BYREF
  float v38; // [esp+94h] [ebp-264h]
  float v39[2]; // [esp+98h] [ebp-260h] BYREF
  float v40[66]; // [esp+A0h] [ebp-258h] BYREF
  char v41[268]; // [esp+1A8h] [ebp-150h] BYREF
  int v42; // [esp+2F4h] [ebp-4h]

  _sprintf((char *)v40, "%sLevelUpData_1.txt", off_B14EB8[0]); /*0x668502*/
  v2 = (_DWORD *)FormHeapAlloc(0x154u); /*0x66850c*/
  LODWORD(v39[0]) = v2; /*0x668514*/
  v3 = 0; /*0x668518*/
  v42 = 0; /*0x66851c*/
  if ( v2 ) /*0x668523*/
    v4 = BSFile_constr(v2, (const char *)v40, 1, 0x2800, 0); /*0x668539*/
  else
    v4 = 0; /*0x66853d*/
  v42 = 0xFFFFFFFF; /*0x668541*/
  if ( v4 ) /*0x66854c*/
  {
    if ( v4[0x24] ) /*0x668552*/
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v4 + 0xC))(v4, 0, BSFile_FilePos_End); /*0x66856a*/
      v37.m_data = 0; /*0x66856c*/
      v37.m_dataLen = 0; /*0x668570*/
      v37.m_bufLen = 0; /*0x668575*/
      GetBaseForm = this->vtbl->super.super.super.GetBaseForm; /*0x66857c*/
      v42 = 1; /*0x668584*/
      v6 = (int)GetBaseForm((TESObjectREFR *)this); /*0x66858f*/
      v7 = MEMORY[0xB33E90][0x300] == 0; /*0x668591*/
      LODWORD(v39[0]) = v6; /*0x668598*/
      if ( v7 ) /*0x66859c*/
        BSStringT_Static_Format(&v37, "%s\t", "UNKNOWN"); /*0x6685be*/
      else
        BSStringT_Static_Format(&v37, "%s\t", &MEMORY[0xB33E90][0x300]); /*0x6685ad*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6685d2*/
      Name = TESObjectREFR_GetName((TESObjectREFR *)this); /*0x6685d6*/
      BSStringT_Static_Format(&v37, "%s\t", Name); /*0x6685e6*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6685fa*/
      m_data = Actor::GetRaceIfNPC((Actor *)this)->name.name.m_data; /*0x668606*/
      if ( !m_data ) /*0x66860b*/
        m_data = EmptyString; /*0x66860d*/
      BSStringT_Static_Format(&v37, "%s\t", m_data); /*0x66861d*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668631*/
      next = (const char *)Actor_GetBaseClass((Actor *)this)[3].next; /*0x66863d*/
      if ( !next ) /*0x668642*/
        next = EmptyString; /*0x668644*/
      BSStringT_Static_Format(&v37, "%s\t", next); /*0x668654*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668668*/
      if ( ((int (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_9A)(this) ) /*0x668674*/
      {
        v11 = *(const char **)(((int (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_9A)(this) + 0x1C); /*0x66869a*/
        if ( !v11 ) /*0x66869f*/
          v11 = EmptyString; /*0x6686a1*/
        BSStringT_Static_Format(&v37, "%s\t", v11); /*0x6686b1*/
      }
      else
      {
        BSStringT_Set(&v37, "\t", 0); /*0x668684*/
      }
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6686c5*/
      Level = Actor_GetLevel((Actor *)this); /*0x6686c9*/
      BSStringT_Static_Format(&v37, "%i\t", Level); /*0x6686dc*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6686f0*/
      do /*0x66872e*/
      {
        BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)this); /*0x6686f5*/
        MajorSkillAV = TESClass_GetMajorSkillAV(BaseClass, v3);// Fetch one of exactly seven stored class major SkillActorValues. The diagnostic header preserves slot order. /*0x6686fc*/
        v15 = (const char *)ActorValue_GetName(MajorSkillAV); /*0x668702*/
        BSStringT_Static_Format(&v37, "%s\t", v15); /*0x668712*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668726*/
        ++v3; /*0x668728*/
      }
      while ( v3 < 7 ); /*0x66872e*/
      v16 = kActorVal_Armorer;                  // After the seven major names, enumerate all 21 native SkillActorValues 0x0C..0x20 and append each current value plus raw skillExp. /*0x668730*/
      do /*0x6687bd*/
      {
        v17 = this->vtbl->super.GetActorValue((Actor *)this, v16); /*0x668740*/
        BSStringT_Static_Format(&v37, "%i\t", v17); /*0x66874d*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668761*/
        v38 = 0.0; /*0x668768*/
        if ( (unsigned int)(v16 - 0xC) <= 0x14 ) /*0x66876f*/
          v38 = this->skillExp[ActorValue_GetGroupOffsetFromAV(2, v16)];// Oblivion group 2 converts SkillActorValue 0x0C..0x20 to the 0..20 index used by PlayerCharacter::skillExp. /*0x668786*/
        BSStringT_Static_Format(&v37, "%.4f\t", v38); /*0x66879e*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6687b2*/
        ++v16; /*0x6687b4*/
      }
      while ( v16 - 0xC < 0x15 ); /*0x6687bd*/
      for ( i = kActorVal_Strength; i < kActorVal_Health; ++i )// After all skill values/progress entries, begin the eight primary-attribute snapshot. /*0x6687c3*/
      {
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, i); /*0x6687c8*/
        BSStringT_Static_Format(&v37, "%i\t", BaseCalcAVi); /*0x6687d8*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6687ec*/
        v20 = this->vtbl->super.GetActorValue((Actor *)this, i); /*0x6687f9*/
        BSStringT_Static_Format(&v37, "%i\t", v20); /*0x668806*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x66881a*/
      }
      v21 = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, 8); /*0x668828*/
      BSStringT_Static_Format(&v37, "%i\t", v21); /*0x668838*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x66884c*/
      v22 = this->vtbl->super.GetActorValue((Actor *)this, kActorVal_Health); /*0x66885a*/
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v22); /*0x668867*/
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x66887b*/
      v23 = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, 0xA); /*0x668881*/
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v23); /*0x668891*/
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x6688a5*/
      v24 = this->vtbl->super.GetActorValue((Actor *)this, kActorVal_Fatigue); /*0x6688b3*/
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v24); /*0x6688c0*/
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x6688d4*/
      v25 = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, 9); /*0x6688da*/
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v25); /*0x6688ea*/
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x6688fe*/
      v26 = this->vtbl->super.GetActorValue((Actor *)this, kActorVal_Magicka); /*0x66890c*/
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v26); /*0x668919*/
      v27 = ((double (__thiscall *)(_BYTE *, __int16 *))*(_DWORD *)(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x66892d*/
      sub_65DFA0((int)this, v27, v40, v39); /*0x66893b*/
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%.2f\t%.2f\t", v40[0], v39[0]); /*0x66895c*/
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x668970*/
      TESObjectREFR_GetContainer((TESObjectREFR *)this); /*0x668974*/
      ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x66897b*/
      if ( ContainerExtraDataForRef ) /*0x668987*/
      {
        sub_488100((int)ContainerExtraDataForRef, 0, 0); /*0x66898d*/
        BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v29); /*0x66899d*/
      }
      else
      {
        BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", 0); /*0x6689a9*/
      }
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen); /*0x6689bd*/
      Gold = Actor_GetGold((TESObjectREFR *)this); /*0x6689c1*/
      BSStringT_Static_Format(&v37, "%i\t", Gold); /*0x6689d1*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x6689e5*/
      v31 = ((double (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_D2)(this); /*0x6689f1*/
      BSStringT_Static_Format(&v37, "%.2f\t", v31); /*0x668a03*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668a17*/
      BSStringT_Set(&v37, "\"", 0); /*0x668a24*/
      v32 = (int *)(LODWORD(v39[0]) + 0x58); /*0x668a2d*/
      if ( LODWORD(v39[0]) != 0xFFFFFFA8 ) /*0x668a30*/
      {
        do /*0x668a74*/
        {
          v33 = *v32; /*0x668a32*/
          if ( *v32 ) /*0x668a32*/
          {
            v34 = *(_DWORD *)(v33 + 0xC); /*0x668a38*/
            v35 = *(const char **)(v33 + 0x1C); /*0x668a3b*/
            if ( !v35 ) /*0x668a40*/
              v35 = EmptyString; /*0x668a42*/
            _sprintf(v41, "%s (%08X),", v35, v34); /*0x668a56*/
            BSStringT_Append(&v37, v41); /*0x668a6a*/
          }
          v32 = (int *)v32[1]; /*0x668a6f*/
        }
        while ( v32 ); /*0x668a74*/
      }
      BSStringT_Append(&v37, "\"\t"); /*0x668a7f*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668a90*/
      for ( j = 0x658; j < 0x6C8; j += 4 ) /*0x668a92*/
      {
        BSStringT_Static_Format(&v37, "%i\t", *(PlayerCharacterVtbl **)((char *)&reference->vtbl + j)); /*0x668aaa*/
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668abe*/
      }
      BSStringT_Static_Format(&v37, word_A3D9B0); /*0x668ad5*/
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37); /*0x668ae9*/
      BSFile_Flush((int)v4); /*0x668aed*/
      (**(void (__thiscall ***)(_BYTE *, int))v4)(v4, 1); /*0x668afa*/
      FormHeapFree((unsigned int)v37.m_data); /*0x668b01*/
    }
  }
}
