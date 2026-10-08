// Authoritative extra-data writer. Requested canonical widths: XLOC12, XTEL28, XMRK0+FNAM1+FULL(strlen/known length + NUL)+TNAM2, XSED1, XCHG4(float), XHLT4(SInt32 converted from runtime float), XLCM4, XACT4(zero-extended flag byte), XCNT4(sign-extended SInt16), XSOL1. Iterates singleton extra list; REFR emits ONAM separately afterward.
//
// 0x422F10: CELL shares this writer via0x4CA421. Audited reference cases: XLOC0x422FC1 width12; XTEL0x422FD1 helper width28; XPSN0x423130 width4; XPSL0x42329D width20 (lastdword uninitialized); XESP0x42330A width8; XRTM0x423335/XMRC0x423359/XHRS0x42337D/XTRG0x4233A1 width4. No owner-kind filtering here. Runtime may retain CELL XLOC/XTEL after link; TESCS rejects them earlier. XESP cannot survive CELL linking in either executable.
//
// 0x422F97: The XLOC writer serializes the current lock flags byte+8 unchanged at0x422F97 into byte8 of the canonical12-byte output at0x422FC1. Immediately after plugin load this byte includes the forced locked-state bit0 set at0x425B0D, if the node survives linking. Source-compatible parsing retains the original byte; loaded semantic flags expose the runtime name is_locked.
//
// 0x422F10: ExtraDataList_Save traverses the same extras regardless of owner: type4 XCLW exact4 float, type5 XCWT exact4, type8 XCLR resolved nonempty form array, type0x0B XCMT exact1, type0x0C XCCM exact4. This follows the shared loader's zero-removal and LinkFormIDs outcomes, not the record's xEdit schema declaration.
//
// 0x422F10: ExtraDataList_Save traverses the shared extra list without owner-kind filtering. Relevant writes: type4 XCLW exact4; type5 XCWT exact4; type8 XCLR resolved nonempty array; type0x0B XCMT one byte; type0x0C XCCM exact4. The newly modeled REFR/ACHR/ACRE candidates therefore share the ordinary field-specific writer paths with CELL.
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

  v2 = this; /*0x422f16*/
  v28 = this; /*0x422f22*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)"ExtraDataList::Save"); /*0x422f26*/
  m_data = v2->members.m_data; /*0x422f2b*/
  if ( m_data )
  {
    HIDWORD(v26) = a2; /*0x422f38*/
    while ( 1 )
    {
      switch ( m_data->members.type )
      {
        case 4u:
          LODWORD(v26) = 4; /*0x4231f7*/
          Src = *(float *)&m_data[1].vtbl; /*0x4231fd*/
          TESForm_PutFormRecordChunkData(0x574C4358, &Src, v26); /*0x423207*/
          break; /*0x42320f*/
        case 5u:
          LODWORD(v26) = 4; /*0x42323d*/
          CompareTo = m_data[1].vtbl[1].CompareTo; /*0x423249*/
          TESForm_PutFormRecordChunkData(0x54574358, &CompareTo, v26); /*0x42324d*/
          break; /*0x423255*/
        case 8u:
          vtbl = m_data[1].vtbl; /*0x42316e*/
          if ( vtbl ) /*0x423173*/
            p_CompareTo = &vtbl->CompareTo; /*0x423175*/
          else
            p_CompareTo = 0; /*0x42317a*/
          v10 = 0; /*0x42317c*/
          for ( i = p_CompareTo; i; i = (bool (__thiscall **)(BSExtraData *, BSExtraData *))i[1] ) /*0x423182*/
          {
            if ( *i ) /*0x423184*/
              ++v10; /*0x423188*/
          }
          if ( v10 )
          {
            v12 = (_DWORD *)FormHeapAlloc((unsigned __int64)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v10);
            for ( j = v12; p_CompareTo; ++v12 ) /*0x4231b9*/
            {
              *v12 = *((_DWORD *)*p_CompareTo + 3); /*0x4231c5*/
              p_CompareTo = (bool (__thiscall **)(BSExtraData *, BSExtraData *))p_CompareTo[1]; /*0x4231c7*/
            }
            LODWORD(v26) = 4 * v10; /*0x4231d8*/
            TESForm_PutFormRecordChunkData(0x524C4358, j, v26); /*0x4231df*/
            FormHeapFree((unsigned int)j); /*0x4231e5*/
          }
          break; /*0x4231ef*/
        case 0xBu:
          LODWORD(v26) = 1; /*0x42325a*/
          j_TESForm_PutCurrentChunkData(0x544D4358, &m_data[1], v26); /*0x423265*/
          break; /*0x42326d*/
        case 0xCu:
          LODWORD(v26) = 4; /*0x42321a*/
          v33 = m_data[1].vtbl[1].CompareTo; /*0x423226*/
          TESForm_PutFormRecordChunkData(0x4D434358, &v33, v26); /*0x42322a*/
          break; /*0x423232*/
        case 0x13u:
          LODWORD(v26) = 4; /*0x422f66*/
          LODWORD(Src) = LOBYTE(m_data[1].vtbl); /*0x422f72*/
          TESForm_PutFormRecordChunkData(0x54434158, &Src, v26); /*0x422f76*/
          break; /*0x422f7e*/
        case 0x18u:
          v17 = *(_DWORD *)&m_data[1].members.type;// Canonical XLOD writer: extant distant-data singleton always emits exact 12 bytes, including defaults created by empty input. /*0x4232ba*/
          next = m_data[1].members.next; /*0x4232bd*/
          v40[0] = m_data[1].vtbl; /*0x4232c0*/
          LODWORD(v26) = 0xC; /*0x4232c4*/
          v40[1] = v17; /*0x4232d0*/
          v40[2] = next; /*0x4232d4*/
          TESForm_PutFormRecordChunkData(0x444F4C58, v40, v26);// Verified Oblivion plugin writer emits ExtraDistantData as a 12-byte XLOD chunk from normal_00C (+0x0C..+0x17), including default values. Fallout stores the same three-float LandNormal at +0x0C but uses EType 0x13. /*0x4232d8*/
          break; /*0x4232e0*/
        case 0x19u:
          ExtraRagDollDataArray_SaveXRGD((void **)&m_data[1].vtbl->Destructor); /*0x4232ad*/
          break; /*0x4232b2*/
        case 0x1Eu:
          v14 = m_data[1].vtbl[1].CompareTo; /*0x423275*/
          v15 = m_data[1].members.next; /*0x42327b*/
          v41[1] = *(_DWORD *)&m_data[1].members.type; /*0x42327e*/
          LODWORD(v26) = 0x14; /*0x423282*/
          v41[0] = v14; /*0x423288*/
          v16 = m_data[2].vtbl; /*0x42328c*/
          v41[2] = v15; /*0x423295*/
          v41[3] = v16; /*0x423299*/
          TESForm_PutFormRecordChunkData(0x4C535058, v41, v26);// XPSL plugin writer emits exact size20 but initializes only FormID + XYZ (first16); fifth dword is indeterminate stack data. Stored runtime rotZ is never serialized. /*0x42329d*/
          break; /*0x4232a5*/
        case 0x24u:
          TESForm_PutCurrentChunkData4(0x4D434C58, (int)m_data[1].vtbl);// Write XLCM exactly 4 bytes from ExtraLevCreaModifier. /*0x4233b4*/
          break; /*0x4233b4*/
        case 0x27u:
          LODWORD(v26) = 4; /*0x422ffb*/
          v30 = m_data[1].vtbl[1].CompareTo;    // Canonical XOWN writer: extant nonzero ownership emits exact 4 bytes; zero input removed the node and is omitted. /*0x423007*/
          TESForm_PutFormRecordChunkData(0x4E574F58, &v30, v26);// Verified XOWN file writer: dereferences ExtraOwnership.ownerForm and copies the owned TESForm's 32-bit refID at TESForm+0x0C into a canonical 4-byte XOWN chunk. This is a FormID value, not the runtime pointer. TESForm_PutFormRecordChunkData then writes the supplied 4-byte payload unchanged. /*0x42300b*/
          break; /*0x423013*/
        case 0x28u:
          LODWORD(v26) = 4; /*0x42301e*/
          v31 = m_data[1].vtbl[1].CompareTo;    // Verified XGLB file writer: reads ExtraGlobal.global, dereferences the TESGlobal*, and copies that form's 32-bit refID from TESForm+0x0C into a canonical 4-byte XGLB chunk; the chunk helper itself copies raw bytes. /*0x42302a*/
          TESForm_PutFormRecordChunkData(0x424C4758, &v31, v26);// Canonical XGLB writer: extant nonzero global emits exactly 4-byte FormID; zero input removes/omits the singleton. /*0x42302e*/
          break; /*0x423036*/
        case 0x29u:
          LODWORD(v26) = 4; /*0x42303e*/
          Src = *(float *)&m_data[1].vtbl;      // Canonical XRNK writer: extant rank emits exact 4-byte signed value; -1 removes/omits, while 0 is retained. /*0x42304a*/
          TESForm_PutFormRecordChunkData(0x4B4E5258, &Src, v26);// Verified XRNK file writer: emits the ExtraRank signed 32-bit rank as exactly four bytes. ExtraDataList_SetRank removes rank -1, so extant nodes serialize all other values, including zero. /*0x42304e*/
          break; /*0x423056*/
        case 0x2Au:
          LODWORD(v26) = 4; /*0x42305f*/
          LODWORD(Src) = SLOWORD(m_data[1].vtbl); /*0x42306b*/
          TESForm_PutFormRecordChunkData(0x544E4358, &Src, v26); /*0x42306f*/
          break; /*0x423077*/
        case 0x2Bu:
          Src = COERCE_FLOAT(Double_To_SInt32(*(float *)&m_data[1].vtbl));// Write XHLT exactly 4 bytes: runtime float health is converted/truncated to SInt32 before serialization. /*0x423084*/
          LODWORD(v26) = 4; /*0x423088*/
          TESForm_PutFormRecordChunkData(0x544C4858, &Src, v26); /*0x423094*/
          break; /*0x42309c*/
        case 0x2Cu:
          LODWORD(v26) = 4; /*0x4230a5*/
          LODWORD(Src) = LOBYTE(m_data[1].vtbl);// Canonical XUSE writer (not XACT): zero-extends stored ExtraUses u8 and emits exact size4 for every extant node. /*0x4230b1*/
          TESForm_PutFormRecordChunkData(0x45535558, &Src, v26);// Canonical XUSE writer emits exact size4 with stored u8 zero-extended; malformed serialized input normalizes to bounded low byte. /*0x4230b5*/
          break; /*0x4230bd*/
        case 0x2Du:
          LODWORD(v26) = 4; /*0x4230c5*/
          Src = *(float *)&m_data[1].vtbl; /*0x4230cb*/
          TESForm_PutFormRecordChunkData(0x4D495458, &Src, v26);// Canonical XTIM writer emits exact size4 with runtime ExtraTimeLeft float32 bits, including zero/NaN. /*0x4230d5*/
          break; /*0x4230dd*/
        case 0x2Eu:
          LODWORD(v26) = 4; /*0x4230e5*/
          Src = *(float *)&m_data[1].vtbl;      // Write XCHG exactly 4 bytes as the stored float bit pattern. /*0x4230eb*/
          TESForm_PutFormRecordChunkData(0x47484358, &Src, v26); /*0x4230f5*/
          break; /*0x4230fd*/
        case 0x2Fu:
          LODWORD(v26) = 1;                     // Write XSOL exactly 1 byte. /*0x423102*/
          j_TESForm_PutCurrentChunkData(0x4C4F5358, &m_data[1], v26); /*0x42310d*/
          break; /*0x423115*/
        case 0x31u:
          v4 = m_data[1].vtbl;                  // Write XLOC exactly 12 bytes: level byte, three stack padding bytes, key FormID dword (0 if null), flags byte, three stack padding bytes. Only the two meaningful bytes and key dword are initialized here; padding is not normalized/zeroed. Writer never emits legacy 16-byte XLOC. /*0x422f83*/
          LOBYTE(v37) = 0; /*0x422f86*/
          LOBYTE(v39) = 0; /*0x422f8b*/
          v38 = 0; /*0x422f90*/
          LOBYTE(v39) = v4[1].Destructor; /*0x422f97*/
          LOBYTE(v37) = v4->Destructor; /*0x422f9d*/
          v5 = v4->CompareTo; /*0x422fa1*/
          if ( v5 ) /*0x422fa6*/
            v38 = *((_DWORD *)v5 + 3); /*0x422fab*/
          else
            v38 = 0; /*0x422fb1*/
          LODWORD(v26) = 0xC; /*0x422fb5*/
          TESForm_PutFormRecordChunkData(0x434F4C58, &v37, v26);// Verified canonical XLOC serialization: emits exactly 12 bytes containing the level byte, TESKey refID at +4 (zero when no key), and current flags byte at +8; it serializes the key's FormID rather than its pointer. Load forces runtime locked bit 0x01; LockEffect may leave marker bit 0x02, and the writer serializes current flags unchanged. Padding bytes are not explicitly initialized by this branch and remain Unknown. /*0x422fc1*/
          break; /*0x422fc9*/
        case 0x32u:
          TeleportData_SaveXTEL((TeleportData *)m_data[1].vtbl);// Write XTEL through TeleportData_SaveXTEL: exact 28 bytes only when linkedDoor is non-null; first dword is linked door FormID, followed by six transform floats. A loaded zero/empty XTEL can leave a singleton that this writer omits. /*0x422fd1*/
          break; /*0x422fd6*/
        case 0x33u:
          TESForm_AddChunk(0x4B524D58);         // Write map marker as adjacent canonical XMRK(empty), FNAM(1), FULL(NUL-terminated length+1), TNAM(2). /*0x422fe0*/
          MapMarkerData_SaveFNAM_FULL_TNAM((MapMarkerData *)m_data[1].vtbl); /*0x422feb*/
          break; /*0x422ff0*/
        case 0x38u:
          ExtraData = BaseExtraList_GetExtraData(v2, kExtraData_Seed);// Write XSED exactly 1 byte from ExtraSeed; 0xFF is the loader's remove sentinel. This extra is the per-reference TREE/SpeedTree seed selected by TESObjectREFR_SetTreeSeedByValue 0x4D7880. /*0x423141*/
          if ( ExtraData ) /*0x423148*/
            v7 = (char)ExtraData[1].vtbl; /*0x42314e*/
          else
            v7 = 0xFF; /*0x42314a*/
          HIBYTE(v27) = v7; /*0x423151*/
          LODWORD(v26) = 1; /*0x423155*/
          TESForm_PutFormRecordChunkData(0x44455358, (char *)&v27 + 3, v26); /*0x423161*/
          break; /*0x423169*/
        case 0x3Fu:
          v19 = m_data[1].vtbl;                 // Canonical XESP writer: exact 8 bytes for extant nonzero parent; byte4 preserves stored u8 flags. Bytes5..7 are indeterminate stack data. /*0x4232e5*/
          if ( v19 ) /*0x4232ea*/
          {
            type = m_data[1].members.type; /*0x4232f3*/
            LODWORD(v26) = 8; /*0x4232f6*/
            v35 = v19[1].CompareTo; /*0x423302*/
            v36 = type; /*0x423306*/
            TESForm_PutFormRecordChunkData(0x50534558, &v35, v26);// Canonical XESP writer: extant nonzero parent emits exactly 8 bytes. Parent FormID and flags byte are meaningful; bytes5..7 are uninitialized stack padding, not preserved input. /*0x42330a*/
          }
          break; /*0x423312*/
        case 0x43u:
          v21 = m_data[1].vtbl;                 // Canonical XRTM writer: exact 4 bytes only for nonzero extant reference; zero removes/omits. /*0x423317*/
          if ( v21 ) /*0x42331c*/
          {
            LODWORD(v26) = 4; /*0x423325*/
            Src = *(float *)&v21[1].CompareTo; /*0x423331*/
            TESForm_PutFormRecordChunkData(0x4D545258, &Src, v26);// Canonical XRTM writer: extant nonzero random teleport marker emits exactly 4-byte FormID; zero removes/omits. /*0x423335*/
          }
          break; /*0x42333d*/
        case 0x44u:
          v22 = m_data[1].vtbl;                 // Canonical XMRC writer: exact 4 bytes only for nonzero extant reference; zero removes/omits. /*0x42333f*/
          if ( v22 ) /*0x423344*/
          {
            LODWORD(v26) = 4; /*0x423349*/
            Src = *(float *)&v22[1].CompareTo; /*0x423355*/
            TESForm_PutFormRecordChunkData(0x43524D58, &Src, v26);// Canonical XMRC writer: extant nonzero merchant container emits exactly 4-byte FormID; zero removes/omits. /*0x423359*/
          }
          break; /*0x423361*/
        case 0x48u:
          LODWORD(v26) = 4; /*0x423120*/
          v32 = m_data[1].vtbl[1].CompareTo; /*0x42312c*/
          TESForm_PutFormRecordChunkData(0x4E535058, &v32, v26);// Canonical XPSN writer: after successful AlchemyItem link resolution, emits exact 4-byte FormID. Invalid targets were removed during post-load resolution. /*0x423130*/
          break; /*0x423138*/
        case 0x4Du:
          v24 = m_data[1].vtbl;                 // Canonical XTRG writer: exact 4 bytes only for nonzero extant reference; zero removes/omits. /*0x423387*/
          if ( v24 ) /*0x42338c*/
          {
            LODWORD(v26) = 4; /*0x423391*/
            Src = *(float *)&v24[1].CompareTo; /*0x42339d*/
            TESForm_PutFormRecordChunkData(0x47525458, &Src, v26);// Canonical XTRG writer: extant nonzero target emits exactly 4-byte FormID; zero removes/omits. /*0x4233a1*/
          }
          break; /*0x4233a9*/
        case 0x58u:
          v23 = m_data[1].vtbl;                 // Canonical XHRS writer: exact 4 bytes only for nonzero extant reference; zero removes/omits. /*0x423363*/
          if ( v23 ) /*0x423368*/
          {
            LODWORD(v26) = 4; /*0x42336d*/
            Src = *(float *)&v23[1].CompareTo; /*0x423379*/
            TESForm_PutFormRecordChunkData(0x53524858, &Src, v26);// Canonical XHRS writer: extant nonzero travel horse emits exactly 4-byte FormID; zero removes/omits. /*0x42337d*/
          }
          break; /*0x423385*/
        default:
          break;
      }
      m_data = m_data->members.next; /*0x4233bc*/
      if ( !m_data ) /*0x4233c1*/
        break; /*0x4233c1*/
      v2 = v28; /*0x422f40*/
    }
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x4233c8*/
}
