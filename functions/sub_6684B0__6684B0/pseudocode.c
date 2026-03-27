void __thiscall sub_6684B0(TESObjectREFR *this)
{
  _DWORD *v2; // eax
  int v3; // ebx
  _BYTE *v4; // esi
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  int v6; // eax
  bool v7; // zf
  char *Name; // eax
  char *m_data; // eax
  const char *next; // eax
  const char *v11; // eax
  unsigned __int16 Level; // ax
  TESForm::ModReferenceList *BaseClass; // eax
  unsigned int v14; // eax
  const char *v15; // eax
  int v16; // ebx
  int v17; // eax
  int i; // ebx
  int BaseCalcAVi; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
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

  _sprintf((char *)v40, "%sLevelUpData_1.txt", off_B14EB8[0]);
  v2 = (_DWORD *)FormHeapAlloc(0x154u);
  LODWORD(v39[0]) = v2;
  v3 = 0;
  v42 = 0;
  if ( v2 )
    v4 = BSFile_constr(v2, (const char *)v40, 1, 0x2800, 0);
  else
    v4 = 0;
  v42 = 0xFFFFFFFF;
  if ( v4 )
  {
    if ( v4[0x24] )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v4 + 0xC))(v4, 0, BSFile_FilePos_End);
      v37.m_data = 0;
      v37.m_dataLen = 0;
      v37.m_bufLen = 0;
      GetBaseForm = this->vtbl->GetBaseForm;
      v42 = 1;
      v6 = (int)GetBaseForm(this);
      v7 = byte_B34190[0] == 0;
      LODWORD(v39[0]) = v6;
      if ( v7 )
        BSStringT_Static_Format(&v37, "%s\t", "UNKNOWN");
      else
        BSStringT_Static_Format(&v37, "%s\t", byte_B34190);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      Name = TESObjectREFR_GetName(this);
      BSStringT_Static_Format(&v37, "%s\t", Name);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      m_data = Actor::GetRaceIfNPC((Actor *)this)->name.name.m_data;
      if ( !m_data )
        m_data = EmptyString;
      BSStringT_Static_Format(&v37, "%s\t", m_data);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      next = (const char *)Actor_GetBaseClass((Actor *)this)[3].next;
      if ( !next )
        next = EmptyString;
      BSStringT_Static_Format(&v37, "%s\t", next);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_30)(this) )
      {
        v11 = *(const char **)(((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_30)(this) + 0x1C);
        if ( !v11 )
          v11 = EmptyString;
        BSStringT_Static_Format(&v37, "%s\t", v11);
      }
      else
      {
        BSStringT_Set(&v37, "\t", 0);
      }
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      Level = Actor_GetLevel((Actor *)this);
      BSStringT_Static_Format(&v37, "%i\t", Level);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      do
      {
        BaseClass = Actor_GetBaseClass((Actor *)this);
        v14 = sub_51BF00(BaseClass, v3);
        v15 = (const char *)ActorValue_GetName(v14);
        BSStringT_Static_Format(&v37, "%s\t", v15);
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
        ++v3;
      }
      while ( v3 < 7 );
      v16 = 0xC;
      do
      {
        v17 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, v16);
        BSStringT_Static_Format(&v37, "%i\t", v17);
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
        v38 = 0.0;
        if ( (unsigned int)(v16 - 0xC) <= 0x14 )
          v38 = *((float *)this + ActorValue_GetGroupOffsetFromAV(2, v16) + 0x4C);
        BSStringT_Static_Format(&v37, "%.4f\t", v38);
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
        ++v16;
      }
      while ( v16 - 0xC < 0x15 );
      for ( i = 0; i < 8; ++i )
      {
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, i);
        BSStringT_Static_Format(&v37, "%i\t", BaseCalcAVi);
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
        v20 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, i);
        BSStringT_Static_Format(&v37, "%i\t", v20);
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      }
      v21 = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, 8);
      BSStringT_Static_Format(&v37, "%i\t", v21);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      v22 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 8);
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v22);
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      v23 = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, 0xA);
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v23);
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      v24 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0xA);
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v24);
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      v25 = Actor_GetBaseCalcAVi((int *)this, i, (int)this, (int)v4, 9);
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v25);
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      v26 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 9);
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v26);
      v27 = ((double (__thiscall *)(_BYTE *, __int16 *))*(_DWORD *)(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      sub_65DFA0((int)this, v27, v40, v39);
      BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%.2f\t%.2f\t", v40[0], v39[0]);
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      TESObjectREFR_GetContainer(this);
      ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
      if ( ContainerExtraDataForRef )
      {
        sub_488100((int)ContainerExtraDataForRef, 0, 0);
        BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", v29);
      }
      else
      {
        BSStringT_Static_Format((BSStringT *)&v37.m_dataLen, "%i\t", 0);
      }
      (*(void (__thiscall **)(_BYTE *, __int16 *))(*(_DWORD *)v4 + 0x2C))(v4, &v37.m_dataLen);
      Gold = Actor_GetGold(this);
      BSStringT_Static_Format(&v37, "%i\t", Gold);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      v31 = ((double (__thiscall *)(TESObjectREFR *))this->vtbl[1].HasFatigue)(this);
      BSStringT_Static_Format(&v37, "%.2f\t", v31);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      BSStringT_Set(&v37, "\"", 0);
      v32 = (int *)(LODWORD(v39[0]) + 0x58);
      if ( LODWORD(v39[0]) != 0xFFFFFFA8 )
      {
        do
        {
          v33 = *v32;
          if ( *v32 )
          {
            v34 = *(_DWORD *)(v33 + 0xC);
            v35 = *(const char **)(v33 + 0x1C);
            if ( !v35 )
              v35 = EmptyString;
            _sprintf(v41, "%s (%08X),", v35, v34);
            BSStringT_Append(&v37, v41);
          }
          v32 = (int *)v32[1];
        }
        while ( v32 );
      }
      BSStringT_Append(&v37, "\"\t");
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      for ( j = 0x658; j < 0x6C8; j += 4 )
      {
        BSStringT_Static_Format(&v37, "%i\t", *(PlayerCharacterVtbl **)((char *)&TESDataHandler_g_PlayerRef->vtbl + j));
        (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      }
      BSStringT_Static_Format(&v37, word_A3D9B0);
      (*(void (__thiscall **)(_BYTE *, BSStringT *))(*(_DWORD *)v4 + 0x2C))(v4, &v37);
      BSFile_Flush((int)v4);
      (**(void (__thiscall ***)(_BYTE *, int))v4)(v4, 1);
      FormHeapFree((unsigned int)v37.m_data);
    }
  }
}
