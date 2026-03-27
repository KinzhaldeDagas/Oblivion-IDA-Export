int __usercall ExtraDataList_Save@<eax>(ExtraDataList *this@<ecx>, int a2@<ebx>)
{
  ExtraDataList *v2; // edi
  BSExtraData *m_data; // esi
  BSExtraDataVtbl *v4; // eax
  bool (__thiscall *v5)(BSExtraData *, BSExtraData *); // eax
  BSExtraData *ExtraData; // eax
  char v7; // al
  BSExtraDataVtbl *vtbl; // edi
  bool (__thiscall **p_CompareTo)(BSExtraData *, BSExtraData *); // edi
  unsigned int v10; // ebx
  bool (__thiscall **i)(BSExtraData *, BSExtraData *); // eax
  _DWORD *v12; // eax
  void *j; // ebp
  bool (__thiscall *v14)(BSExtraData *, BSExtraData *); // ecx
  BSExtraData *v15; // eax
  BSExtraDataVtbl *v16; // ecx
  int v17; // ecx
  BSExtraData *next; // edx
  BSExtraDataVtbl *v19; // eax
  UInt8 type; // dl
  BSExtraDataVtbl *v21; // eax
  BSExtraDataVtbl *v22; // eax
  BSExtraDataVtbl *v23; // eax
  BSExtraDataVtbl *v24; // eax
  size_t v26; // [esp-8h] [ebp-68h]
  int v27; // [esp+Ch] [ebp-54h] BYREF
  ExtraDataList *v28; // [esp+10h] [ebp-50h]
  float Src; // [esp+14h] [ebp-4Ch] BYREF
  bool (__thiscall *v30)(BSExtraData *, BSExtraData *); // [esp+18h] [ebp-48h] BYREF
  bool (__thiscall *v31)(BSExtraData *, BSExtraData *); // [esp+1Ch] [ebp-44h] BYREF
  bool (__thiscall *v32)(BSExtraData *, BSExtraData *); // [esp+20h] [ebp-40h] BYREF
  bool (__thiscall *v33)(BSExtraData *, BSExtraData *); // [esp+24h] [ebp-3Ch] BYREF
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+28h] [ebp-38h] BYREF
  bool (__thiscall *v35)(BSExtraData *, BSExtraData *); // [esp+2Ch] [ebp-34h] BYREF
  UInt8 v36; // [esp+30h] [ebp-30h]
  int v37; // [esp+34h] [ebp-2Ch] BYREF
  int v38; // [esp+38h] [ebp-28h]
  int v39; // [esp+3Ch] [ebp-24h]
  _DWORD v40[3]; // [esp+40h] [ebp-20h] BYREF
  _DWORD v41[5]; // [esp+4Ch] [ebp-14h] BYREF

  v2 = this;
  v28 = this;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)"ExtraDataList::Save");
  m_data = v2->members.m_data;
  if ( m_data )
  {
    HIDWORD(v26) = a2;
    while ( 1 )
    {
      switch ( m_data->members.type )
      {
        case 4u:
          LODWORD(v26) = 4;
          Src = *(float *)&m_data[1].vtbl;
          TESForm_PutFormRecordChunkData(0x574C4358, &Src, v26);
          break;
        case 5u:
          LODWORD(v26) = 4;
          CompareTo = m_data[1].vtbl[1].CompareTo;
          TESForm_PutFormRecordChunkData(0x54574358, &CompareTo, v26);
          break;
        case 8u:
          vtbl = m_data[1].vtbl;
          if ( vtbl )
            p_CompareTo = &vtbl->CompareTo;
          else
            p_CompareTo = 0;
          v10 = 0;
          for ( i = p_CompareTo; i; i = (bool (__thiscall **)(BSExtraData *, BSExtraData *))i[1] )
          {
            if ( *i )
              ++v10;
          }
          if ( v10 )
          {
            v12 = (_DWORD *)FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
            for ( j = v12; p_CompareTo; ++v12 )
            {
              *v12 = *((_DWORD *)*p_CompareTo + 3);
              p_CompareTo = (bool (__thiscall **)(BSExtraData *, BSExtraData *))p_CompareTo[1];
            }
            LODWORD(v26) = 4 * v10;
            TESForm_PutFormRecordChunkData(0x524C4358, j, v26);
            FormHeapFree((unsigned int)j);
          }
          break;
        case 0xBu:
          j_TESForm_PutCurrentChunkData(0x544D4358, &m_data[1], 1);
          break;
        case 0xCu:
          LODWORD(v26) = 4;
          v33 = m_data[1].vtbl[1].CompareTo;
          TESForm_PutFormRecordChunkData(0x4D434358, &v33, v26);
          break;
        case 0x13u:
          LODWORD(v26) = 4;
          LODWORD(Src) = LOBYTE(m_data[1].vtbl);
          TESForm_PutFormRecordChunkData(0x54434158, &Src, v26);
          break;
        case 0x18u:
          v17 = *(_DWORD *)&m_data[1].members.type;
          next = m_data[1].members.next;
          v40[0] = m_data[1].vtbl;
          LODWORD(v26) = 0xC;
          v40[1] = v17;
          v40[2] = next;
          TESForm_PutFormRecordChunkData(0x444F4C58, v40, v26);
          break;
        case 0x19u:
          sub_497240((void **)&m_data[1].vtbl->Destructor);
          break;
        case 0x1Eu:
          v14 = m_data[1].vtbl[1].CompareTo;
          v15 = m_data[1].members.next;
          v41[1] = *(_DWORD *)&m_data[1].members.type;
          LODWORD(v26) = 0x14;
          v41[0] = v14;
          v16 = m_data[2].vtbl;
          v41[2] = v15;
          v41[3] = v16;
          TESForm_PutFormRecordChunkData(0x4C535058, v41, v26);
          break;
        case 0x24u:
          TESForm_PutCurrentChunkData4(0x4D434C58, (int)m_data[1].vtbl);
          break;
        case 0x27u:
          LODWORD(v26) = 4;
          v30 = m_data[1].vtbl[1].CompareTo;
          TESForm_PutFormRecordChunkData(0x4E574F58, &v30, v26);
          break;
        case 0x28u:
          LODWORD(v26) = 4;
          v31 = m_data[1].vtbl[1].CompareTo;
          TESForm_PutFormRecordChunkData(0x424C4758, &v31, v26);
          break;
        case 0x29u:
          LODWORD(v26) = 4;
          Src = *(float *)&m_data[1].vtbl;
          TESForm_PutFormRecordChunkData(0x4B4E5258, &Src, v26);
          break;
        case 0x2Au:
          LODWORD(v26) = 4;
          LODWORD(Src) = SLOWORD(m_data[1].vtbl);
          TESForm_PutFormRecordChunkData(0x544E4358, &Src, v26);
          break;
        case 0x2Bu:
          Src = COERCE_FLOAT(Double_To_SInt32(*(float *)&m_data[1].vtbl));
          LODWORD(v26) = 4;
          TESForm_PutFormRecordChunkData(0x544C4858, &Src, v26);
          break;
        case 0x2Cu:
          LODWORD(v26) = 4;
          LODWORD(Src) = LOBYTE(m_data[1].vtbl);
          TESForm_PutFormRecordChunkData(0x45535558, &Src, v26);
          break;
        case 0x2Du:
          LODWORD(v26) = 4;
          Src = *(float *)&m_data[1].vtbl;
          TESForm_PutFormRecordChunkData(0x4D495458, &Src, v26);
          break;
        case 0x2Eu:
          LODWORD(v26) = 4;
          Src = *(float *)&m_data[1].vtbl;
          TESForm_PutFormRecordChunkData(0x47484358, &Src, v26);
          break;
        case 0x2Fu:
          j_TESForm_PutCurrentChunkData(0x4C4F5358, &m_data[1], 1);
          break;
        case 0x31u:
          v4 = m_data[1].vtbl;
          LOBYTE(v37) = 0;
          LOBYTE(v39) = 0;
          v38 = 0;
          LOBYTE(v39) = v4[1].Destructor;
          LOBYTE(v37) = v4->Destructor;
          v5 = v4->CompareTo;
          if ( v5 )
            v38 = *((_DWORD *)v5 + 3);
          else
            v38 = 0;
          LODWORD(v26) = 0xC;
          TESForm_PutFormRecordChunkData(0x434F4C58, &v37, v26);
          break;
        case 0x32u:
          sub_42B9A0((int *)m_data[1].vtbl);
          break;
        case 0x33u:
          sub_46BA10(0x4B524D58);
          sub_42B380((int)m_data[1].vtbl);
          break;
        case 0x38u:
          ExtraData = BaseExtraList_GetExtraData(v2, kExtraData_Seed);
          if ( ExtraData )
            v7 = (char)ExtraData[1].vtbl;
          else
            v7 = 0xFF;
          HIBYTE(v27) = v7;
          LODWORD(v26) = 1;
          TESForm_PutFormRecordChunkData(0x44455358, (char *)&v27 + 3, v26);
          break;
        case 0x3Fu:
          v19 = m_data[1].vtbl;
          if ( v19 )
          {
            type = m_data[1].members.type;
            LODWORD(v26) = 8;
            v35 = v19[1].CompareTo;
            v36 = type;
            TESForm_PutFormRecordChunkData(0x50534558, &v35, v26);
          }
          break;
        case 0x43u:
          v21 = m_data[1].vtbl;
          if ( v21 )
          {
            LODWORD(v26) = 4;
            Src = *(float *)&v21[1].CompareTo;
            TESForm_PutFormRecordChunkData(0x4D545258, &Src, v26);
          }
          break;
        case 0x44u:
          v22 = m_data[1].vtbl;
          if ( v22 )
          {
            LODWORD(v26) = 4;
            Src = *(float *)&v22[1].CompareTo;
            TESForm_PutFormRecordChunkData(0x43524D58, &Src, v26);
          }
          break;
        case 0x48u:
          LODWORD(v26) = 4;
          v32 = m_data[1].vtbl[1].CompareTo;
          TESForm_PutFormRecordChunkData(0x4E535058, &v32, v26);
          break;
        case 0x4Du:
          v24 = m_data[1].vtbl;
          if ( v24 )
          {
            LODWORD(v26) = 4;
            Src = *(float *)&v24[1].CompareTo;
            TESForm_PutFormRecordChunkData(0x47525458, &Src, v26);
          }
          break;
        case 0x58u:
          v23 = m_data[1].vtbl;
          if ( v23 )
          {
            LODWORD(v26) = 4;
            Src = *(float *)&v23[1].CompareTo;
            TESForm_PutFormRecordChunkData(0x53524858, &Src, v26);
          }
          break;
        default:
          break;
      }
      m_data = m_data->members.next;
      if ( !m_data )
        break;
      v2 = v28;
    }
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
