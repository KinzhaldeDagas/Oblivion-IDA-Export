0x421A00: sub     esp, 0A8h; Verified save-game block writer handles dynamic ExtraData records but has no ExtraDistantData/XLOD case. This is distinct from plugin-record serialization, whose ExtraDataList_Save case writes XLOD (12 bytes). Whether omitting it from save-game blocks is intentional static-data policy is Probable, not directly stated.
0x421A06: push    ebx
0x421A07: push    ebp
0x421A08: push    esi
0x421A09: xor     ebp, ebp
0x421A0B: cmp     Global_DebugSaveBuffer, 0
0x421A12: mov     esi, ecx
0x421A14: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x421A1A: mov     dword ptr [esp+0B4h+self.currentVersion], ebp
0x421A21: mov     ebx, [ecx+14h]
0x421A24: push    edi
0x421A25: mov     dword ptr [esp+0B8h+self.unknown48+4], ebp
0x421A29: mov     [esp+0B8h+self.resetSelector], ebx
0x421A2D: jz      short loc_421A33
0x421A2F: mov     [esp+0B8h+self.resetSelector], ebx
0x421A33: call    TESSaveLoadGame_UseSaveGameBlocks
0x421A38: test    al, al
0x421A3A: jz      short loc_421A72
0x421A3C: mov     ecx, g_TESSaveLoadGame; self
0x421A42: push    4; byteCount
0x421A44: lea     eax, [esp+0BCh+self.exteriorCellChangesMap]
0x421A48: push    eax; source
0x421A49: mov     [esp+0C0h+self.exteriorCellChangesMap], 4B4F4C42h
0x421A51: call    SaveLoad_SaveData
0x421A56: mov     ecx, g_TESSaveLoadGame; self
0x421A5C: mov     edx, [ecx+14h]
0x421A5F: push    2; byteCount
0x421A61: lea     eax, [esp+0BCh+self.currentVersion]
0x421A68: push    eax; source
0x421A69: mov     dword ptr [esp+0C0h+self.unknown48+4], edx
0x421A6D: call    SaveLoad_SaveData
0x421A72: push    offset aExtradatalis_8; lpCriticalSection
0x421A77: mov     ecx, 0B33800h
0x421A7C: call    NiEnterCriticalSection
0x421A81: mov     ecx, g_TESSaveLoadGame; self
0x421A87: mov     [esp+0B8h+self.interiorNewReferencesMap], ebp
0x421A8B: mov     edx, [ecx+14h]
0x421A8E: push    2; byteCount
0x421A90: lea     eax, [esp+0BCh+self.interiorNewReferencesMap]
0x421A94: push    eax; source
0x421A95: mov     [esp+0C0h+var_4], edx
0x421A9C: call    SaveLoad_SaveData
0x421AA1: mov     esi, [esi+4]
0x421AA4: cmp     esi, ebp
0x421AA6: jz      loc_42293C
0x421AAC: lea     esp, [esp+0]
0x421AB0: mov     cl, [esi+4]
0x421AB3: mov     edi, [esp+0B8h+arg_4]
0x421ABA: mov     byte ptr [esp+0B8h+source+2], cl
0x421ABE: mov     ecx, g_TESSaveLoadGame; self
0x421AC4: mov     eax, [ecx+14h]
0x421AC7: mov     [esp+0B8h+var_C], eax
0x421ACE: movzx   eax, byte ptr [esi+4]
0x421AD2: add     eax, 0FFFFFFEFh; switch 76 cases
0x421AD5: cmp     eax, 4Bh
0x421AD8: mov     edx, 200000h
0x421ADD: ja      def_421AEA; jumptable 00421AEA default case
0x421AE3: movzx   eax, ds:byte_422AC0[eax]
0x421AEA: jmp     ds:jpt_421AEA[eax*4]; switch jump
0x421AF1: test    byte ptr [esp+0B8h+arg_0], 20h
0x421AF9: jz      def_421AEA; jumptable 00421AEA default case
0x421AFF: push    1; byteCount
0x421B01: lea     edx, [esp+0BCh+source+2]
0x421B05: push    edx; source
0x421B06: call    SaveLoad_SaveData
0x421B0B: movzx   eax, word ptr [esi+0Ch]
0x421B0F: push    2
0x421B11: lea     ecx, [esp+0BCh+var_8]; self
0x421B18: mov     [esp+0BCh+var_8], eax
0x421B1F: push    ecx
0x421B20: jmp     loc_42290B
0x421B25: test    byte ptr [esp+0B8h+arg_0], 20h
0x421B2D: jz      def_421AEA; jumptable 00421AEA default case
0x421B33: push    1; byteCount
0x421B35: lea     edx, [esp+0BCh+source+2]
0x421B39: push    edx; source
0x421B3A: call    SaveLoad_SaveData
0x421B3F: fld     dword ptr [esi+0Ch]
0x421B42: fstp    dword ptr [esp+0B8h+self.unknown48+14h]
0x421B46: lea     eax, [esp+0B8h+self.unknown48+14h]
0x421B4A: jmp     loc_422908
0x421B4F: test    byte ptr [esp+0B8h+arg_0], 20h
0x421B57: jz      def_421AEA; jumptable 00421AEA default case
0x421B5D: push    1; byteCount
0x421B5F: lea     edx, [esp+0BCh+source+2]
0x421B63: push    edx; source
0x421B64: call    SaveLoad_SaveData
0x421B69: mov     al, [esi+0Ch]
0x421B6C: push    1
0x421B6E: lea     ecx, [esp+0BCh+self.currentChangesMap+1]; self
0x421B72: mov     byte ptr [esp+0BCh+self.currentChangesMap+1], al
0x421B76: push    ecx
0x421B77: jmp     loc_42290B
0x421B7C: test    byte ptr [esp+0B8h+arg_0], 20h
0x421B84: jz      def_421AEA; jumptable 00421AEA default case
0x421B8A: push    1; byteCount
0x421B8C: lea     edx, [esp+0BCh+source+2]
0x421B90: push    edx; source
0x421B91: call    SaveLoad_SaveData
0x421B96: fld     dword ptr [esi+0Ch]
0x421B99: fstp    dword ptr [esp+0B8h+self.unknown48+8]
0x421B9D: lea     eax, [esp+0B8h+self.unknown48+8]
0x421BA1: jmp     loc_422908
0x421BA6: test    byte ptr [esp+0B8h+arg_0], 20h
0x421BAE: jz      def_421AEA; jumptable 00421AEA default case
0x421BB4: push    1; byteCount
0x421BB6: lea     edx, [esp+0BCh+source+2]
0x421BBA: push    edx; source
0x421BBB: call    SaveLoad_SaveData
0x421BC0: fld     dword ptr [esi+0Ch]
0x421BC3: fstp    dword ptr [esp+0B8h+self.unknown48+1Ch]
0x421BCA: lea     eax, [esp+0B8h+self.unknown48+1Ch]
0x421BD1: jmp     loc_422908
0x421BD6: test    byte ptr [esp+0B8h+arg_0], 20h
0x421BDE: jz      def_421AEA; jumptable 00421AEA default case
0x421BE4: push    1; byteCount
0x421BE6: lea     edx, [esp+0BCh+source+2]
0x421BEA: push    edx; source
0x421BEB: call    SaveLoad_SaveData
0x421BF0: mov     al, [esi+0Ch]
0x421BF3: push    1
0x421BF5: lea     ecx, [esp+0BCh+self.currentChangesMap+2]; self
0x421BF9: mov     byte ptr [esp+0BCh+self.currentChangesMap+2], al
0x421BFD: push    ecx
0x421BFE: jmp     loc_42290B
0x421C03: test    byte ptr [esp+0B8h+arg_0], 40h
0x421C0B: jz      def_421AEA; jumptable 00421AEA default case
0x421C11: push    1; byteCount
0x421C13: lea     edx, [esp+0BCh+source+2]
0x421C17: push    edx; source
0x421C18: call    SaveLoad_SaveData
0x421C1D: mov     edi, [esi+0Ch]
0x421C20: mov     dword ptr [esp+0B8h+self.unknown1C+10h], ebp
0x421C24: mov     eax, [edi+4]
0x421C27: cmp     eax, ebp
0x421C29: jz      short loc_421C32
0x421C2B: mov     eax, [eax+0Ch]
0x421C2E: mov     dword ptr [esp+0B8h+self.unknown1C+10h], eax
0x421C32: mov     ecx, g_TESSaveLoadGame; self
0x421C38: push    1; byteCount
0x421C3A: push    edi; source
0x421C3B: call    SaveLoad_SaveData
0x421C40: push    4; byteCount
0x421C42: lea     ecx, [esp+0BCh+self.unknown1C+10h]
0x421C46: push    ecx; source
0x421C47: mov     ecx, g_TESSaveLoadGame; self
0x421C4D: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421C52: push    1
0x421C54: add     edi, 8
0x421C57: push    edi
0x421C58: jmp     loc_42290B
0x421C5D: test    byte ptr [esp+0B8h+arg_0], 20h
0x421C65: jz      def_421AEA; jumptable 00421AEA default case
0x421C6B: push    1; byteCount
0x421C6D: lea     edx, [esp+0BCh+source+2]
0x421C71: push    edx; source
0x421C72: call    SaveLoad_SaveData
0x421C77: fld     dword ptr [esi+0Ch]
0x421C7A: fstp    [esp+0B8h+var_10]
0x421C81: lea     eax, [esp+0B8h+var_10]
0x421C88: jmp     loc_422908
0x421C8D: test    [esp+0B8h+arg_0], 2000h
0x421C98: jz      def_421AEA; jumptable 00421AEA default case
0x421C9E: push    1; byteCount
0x421CA0: lea     edx, [esp+0BCh+source+2]
0x421CA4: push    edx; source
0x421CA5: call    SaveLoad_SaveData
0x421CAA: mov     eax, [esi+0Ch]
0x421CAD: push    4
0x421CAF: lea     ecx, [esp+0BCh+self.unknown48+24h]; self
0x421CB6: mov     dword ptr [esp+0BCh+self.unknown48+24h], eax
0x421CBD: push    ecx
0x421CBE: jmp     loc_42290B
0x421CC3: test    byte ptr [esp+0B8h+arg_0], 80h
0x421CCB: jz      def_421AEA; jumptable 00421AEA default case
0x421CD1: push    1; byteCount
0x421CD3: lea     edx, [esp+0BCh+source+2]
0x421CD7: push    edx; source
0x421CD8: call    SaveLoad_SaveData
0x421CDD: fld     dword ptr [esi+0Ch]
0x421CE0: fstp    [esp+0B8h+self.currentlySavingFormHeader]
0x421CE7: lea     eax, [esp+0B8h+self.currentlySavingFormHeader]
0x421CEE: jmp     loc_422908
0x421CF3: test    byte ptr [esp+0B8h+arg_0], 0A0h
0x421CFB: jz      def_421AEA; jumptable 00421AEA default case
0x421D01: push    1; byteCount
0x421D03: lea     edx, [esp+0BCh+source+2]
0x421D07: push    edx; source
0x421D08: call    SaveLoad_SaveData
0x421D0D: mov     eax, [esi+0Ch]
0x421D10: mov     ecx, [eax+0Ch]
0x421D13: push    4; byteCount
0x421D15: lea     edx, [esp+0BCh+self.irefTable]
0x421D1C: mov     [esp+0BCh+self.irefTable], ecx
0x421D23: mov     ecx, g_TESSaveLoadGame; self
0x421D29: push    edx; source
0x421D2A: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421D2F: jmp     def_421AEA; jumptable 00421AEA default case
0x421D34: test    [esp+0B8h+arg_0], 120h
0x421D3F: jz      def_421AEA; jumptable 00421AEA default case
0x421D45: push    1; byteCount
0x421D47: lea     eax, [esp+0BCh+source+2]
0x421D4B: push    eax; source
0x421D4C: call    SaveLoad_SaveData
0x421D51: mov     ecx, [esi+0Ch]
0x421D54: mov     edx, [ecx+0Ch]
0x421D57: mov     ecx, g_TESSaveLoadGame; self
0x421D5D: push    4; byteCount
0x421D5F: lea     eax, [esp+0BCh+self.unknown48+0Ch]
0x421D63: push    eax; source
0x421D64: mov     dword ptr [esp+0C0h+self.unknown48+0Ch], edx
0x421D68: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421D6D: jmp     def_421AEA; jumptable 00421AEA default case
0x421D72: test    [esp+0B8h+arg_0], 220h
0x421D7D: jz      def_421AEA; jumptable 00421AEA default case
0x421D83: push    1; byteCount
0x421D85: lea     edx, [esp+0BCh+source+2]
0x421D89: push    edx; source
0x421D8A: call    SaveLoad_SaveData
0x421D8F: mov     eax, [esi+0Ch]
0x421D92: push    4
0x421D94: lea     ecx, [esp+0BCh+self.unknown48+10h]
0x421D98: mov     dword ptr [esp+0BCh+self.unknown48+10h], eax
0x421D9C: push    ecx
0x421D9D: jmp     loc_42290B
0x421DA2: test    byte ptr [esp+0B8h+arg_0], 20h
0x421DAA: jz      def_421AEA; jumptable 00421AEA default case
0x421DB0: push    1
0x421DB2: lea     edx, [esp+0BCh+source+2]
0x421DB6: push    edx
0x421DB7: jmp     loc_422911
0x421DBC: test    [esp+0B8h+arg_0], 4000020h; jumptable 00421AEA case 18
0x421DC7: jz      def_421AEA; jumptable 00421AEA default case
0x421DCD: push    1; byteCount
0x421DCF: lea     edx, [esp+0BCh+source+2]
0x421DD3: push    edx; source
0x421DD4: call    SaveLoad_SaveData
0x421DD9: mov     eax, [esi+0Ch]
0x421DDC: mov     ecx, [eax+0Ch]
0x421DDF: mov     edi, [esi+10h]
0x421DE2: push    4; byteCount
0x421DE4: lea     edx, [esp+0BCh+self.unknown48+18h]
0x421DEB: mov     dword ptr [esp+0BCh+self.unknown48+18h], ecx
0x421DF2: mov     ecx, g_TESSaveLoadGame; self
0x421DF8: push    edx; source
0x421DF9: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421DFE: mov     ecx, edi
0x421E00: call    ScriptEventList_Save?
0x421E05: jmp     def_421AEA; jumptable 00421AEA default case
0x421E0A: test    byte ptr [esp+0B8h+arg_0], 20h
0x421E12: jz      def_421AEA; jumptable 00421AEA default case
0x421E18: push    1; byteCount
0x421E1A: lea     eax, [esp+0BCh+source+2]
0x421E1E: push    eax; source
0x421E1F: call    SaveLoad_SaveData
0x421E24: push    ebp; int
0x421E25: push    offset ??_R0?AVExtraLeveledItem@@@8; struct TypeDescriptor *
0x421E2A: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421E2F: push    ebp; int
0x421E30: push    esi; void *
0x421E31: call    OblivionDynamicCast
0x421E36: add     esp, 14h
0x421E39: mov     edi, eax
0x421E3B: push    4; byteCount
0x421E3D: lea     ecx, [edi+0Ch]
0x421E40: push    ecx; source
0x421E41: mov     ecx, g_TESSaveLoadGame; self
0x421E47: call    SaveLoad_SaveData
0x421E4C: push    1
0x421E4E: add     edi, 10h
0x421E51: push    edi
0x421E52: jmp     loc_42290B
0x421E57: push    1; byteCount
0x421E59: lea     edx, [esp+0BCh+source+2]
0x421E5D: push    edx; source
0x421E5E: call    SaveLoad_SaveData
0x421E63: push    ebp; int
0x421E64: push    offset ??_R0?AVExtraPackage@@@8; struct TypeDescriptor *
0x421E69: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421E6E: push    ebp; int
0x421E6F: push    esi; void *
0x421E70: call    OblivionDynamicCast
0x421E75: mov     edi, eax
0x421E77: mov     eax, [edi+0Ch]
0x421E7A: mov     ecx, [eax+0Ch]
0x421E7D: mov     dword ptr [esp+0CCh+self.unknown38+4], ecx
0x421E81: mov     [esp+0CCh+self.deferredDeleteList.next], ebp
0x421E85: mov     eax, [edi+14h]
0x421E88: add     esp, 14h
0x421E8B: cmp     eax, ebp
0x421E8D: jz      short loc_421E96
0x421E8F: mov     edx, [eax+0Ch]
0x421E92: mov     [esp+0B8h+self.deferredDeleteList.next], edx
0x421E96: mov     ecx, g_TESSaveLoadGame; self
0x421E9C: push    4; byteCount
0x421E9E: lea     eax, [esp+0BCh+self.unknown38+4]
0x421EA2: push    eax; source
0x421EA3: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421EA8: push    4; byteCount
0x421EAA: lea     ecx, [edi+10h]
0x421EAD: push    ecx; source
0x421EAE: mov     ecx, g_TESSaveLoadGame; self
0x421EB4: call    SaveLoad_SaveData
0x421EB9: mov     ecx, g_TESSaveLoadGame; self
0x421EBF: push    4; byteCount
0x421EC1: lea     edx, [esp+0BCh+self.deferredDeleteList.next]
0x421EC5: push    edx; source
0x421EC6: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421ECB: mov     ecx, g_TESSaveLoadGame; self
0x421ED1: push    1; byteCount
0x421ED3: lea     eax, [edi+18h]
0x421ED6: push    eax; source
0x421ED7: call    SaveLoad_SaveData
0x421EDC: push    1; byteCount
0x421EDE: lea     ecx, [edi+19h]
0x421EE1: push    ecx; source
0x421EE2: mov     ecx, g_TESSaveLoadGame; self
0x421EE8: call    SaveLoad_SaveData
0x421EED: mov     edx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x421EF3: cmp     byte ptr [edx+7Ch], 40h ; '@'
0x421EF7: jb      def_421AEA; jumptable 00421AEA default case
0x421EFD: mov     eax, dword ptr [esp+0B8h+self.unknown38+4]
0x421F01: mov     ecx, g_TESDataHandler; Verified singleton pointer: allocated as TESDataHandler (0xCE0 bytes) and published at TES_constr 441B8A; passed to LoadFiles and form APIs; TES_destr 446915 destroys and clears it. Field +0x74 is the Global list head used by TESSaveLoadGame_LoadGlobalValues; surrounding layout remains Unknown.
0x421F07: push    eax; _DWORD
0x421F08: call    TESDataHandler_IsFormIDCreated?
0x421F0D: test    al, al
0x421F0F: jz      def_421AEA; jumptable 00421AEA default case
0x421F15: mov     ecx, [edi+0Ch]
0x421F18: mov     dl, [ecx+20h]
0x421F1B: mov     ecx, g_TESSaveLoadGame; self
0x421F21: push    1; byteCount
0x421F23: lea     eax, [esp+0BCh+self.currentChangesMap+3]
0x421F27: push    eax; source
0x421F28: mov     byte ptr [esp+0C0h+self.currentChangesMap+3], dl
0x421F2C: call    SaveLoad_SaveData
0x421F31: mov     ecx, [edi+0Ch]
0x421F34: mov     edx, [ecx]
0x421F36: mov     eax, [edx+0E0h]
0x421F3C: call    eax
0x421F3E: jmp     def_421AEA; jumptable 00421AEA default case
0x421F43: test    [esp+0B8h+arg_0], 40000h
0x421F4E: jz      def_421AEA; jumptable 00421AEA default case
0x421F54: push    1; byteCount
0x421F56: lea     edx, [esp+0BCh+source+2]
0x421F5A: push    edx; source
0x421F5B: call    SaveLoad_SaveData
0x421F60: push    ebp; int
0x421F61: push    offset ??_R0?AVExtraTresPassPackage@@@8; struct TypeDescriptor *
0x421F66: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421F6B: push    ebp; int
0x421F6C: push    esi; void *
0x421F6D: call    OblivionDynamicCast
0x421F72: mov     edi, eax
0x421F74: mov     dword ptr [esp+0CCh+self.unknown38], ebp
0x421F78: mov     eax, [edi+0Ch]
0x421F7B: add     esp, 14h
0x421F7E: cmp     eax, ebp
0x421F80: jz      short loc_421F89
0x421F82: mov     eax, [eax+0Ch]
0x421F85: mov     dword ptr [esp+0B8h+self.unknown38], eax
0x421F89: push    4; byteCount
0x421F8B: lea     ecx, [esp+0BCh+self.unknown38]
0x421F8F: push    ecx; source
0x421F90: mov     ecx, g_TESSaveLoadGame; self
0x421F96: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x421F9B: cmp     [edi+0Ch], ebp
0x421F9E: jz      def_421AEA; jumptable 00421AEA default case
0x421FA4: mov     ecx, [edi+0Ch]
0x421FA7: mov     edx, [ecx]
0x421FA9: mov     eax, [edx+0E0h]
0x421FAF: call    eax
0x421FB1: jmp     def_421AEA; jumptable 00421AEA default case
0x421FB6: test    byte ptr [esp+0B8h+arg_0], 20h
0x421FBE: jz      def_421AEA; jumptable 00421AEA default case
0x421FC4: push    1; byteCount
0x421FC6: lea     edx, [esp+0BCh+source+2]
0x421FCA: push    edx; source
0x421FCB: call    SaveLoad_SaveData
0x421FD0: push    ebp; int
0x421FD1: push    offset ??_R0?AVExtraReferencePointer@@@8; struct TypeDescriptor *
0x421FD6: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421FDB: push    ebp; int
0x421FDC: push    esi; void *
0x421FDD: call    OblivionDynamicCast
0x421FE2: mov     eax, [eax+0Ch]
0x421FE5: mov     ecx, [eax+0Ch]
0x421FE8: add     esp, 14h
0x421FEB: push    4; byteCount
0x421FED: lea     edx, [esp+0BCh+self.unknown48+20h]
0x421FF4: mov     dword ptr [esp+0BCh+self.unknown48+20h], ecx
0x421FFB: mov     ecx, g_TESSaveLoadGame; self
0x422001: push    edx; source
0x422002: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422007: jmp     def_421AEA; jumptable 00421AEA default case
0x42200C: test    [esp+0B8h+arg_0], 10000000h
0x422017: jz      def_421AEA; jumptable 00421AEA default case
0x42201D: push    1
0x42201F: lea     eax, [esp+0BCh+source+2]
0x422023: push    eax
0x422024: jmp     loc_422911
0x422029: push    1; byteCount
0x42202B: lea     edx, [esp+0BCh+source+2]
0x42202F: push    edx; source
0x422030: call    SaveLoad_SaveData
0x422035: mov     ecx, g_TESSaveLoadGame; self
0x42203B: push    2; byteCount
0x42203D: lea     eax, [esp+0BCh+self.incomingChangesMap]
0x422041: mov     [esp+0BCh+self.incomingChangesMap], ebp
0x422045: mov     ebx, [ecx+14h]
0x422048: push    eax; source
0x422049: call    SaveLoad_SaveData
0x42204E: push    ebp; int
0x42204F: push    offset ??_R0?AVExtraRunOncePacks@@@8; struct TypeDescriptor *
0x422054: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422059: push    ebp; int
0x42205A: push    esi; void *
0x42205B: call    OblivionDynamicCast
0x422060: mov     edi, [eax+0Ch]
0x422063: add     esp, 14h
0x422066: cmp     edi, ebp
0x422068: jz      short loc_4220C0
0x42206A: lea     ebx, [ebx+0]
0x422070: cmp     [edi+4], ebp
0x422073: jnz     short loc_422079
0x422075: cmp     [edi], ebp
0x422077: jz      short loc_4220C0
0x422079: mov     ebp, [edi]
0x42207B: test    ebp, ebp
0x42207D: jz      short loc_4220B7
0x42207F: mov     ecx, [ebp+0]
0x422082: mov     edx, [ecx+0Ch]
0x422085: mov     ecx, g_TESSaveLoadGame; self
0x42208B: push    4; byteCount
0x42208D: lea     eax, [esp+0BCh+self.unknown48+28h]
0x422094: push    eax; source
0x422095: mov     dword ptr [esp+0C0h+self.unknown48+28h], edx
0x42209C: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x4220A1: mov     ecx, g_TESSaveLoadGame; self
0x4220A7: push    1; byteCount
0x4220A9: add     ebp, 4
0x4220AC: push    ebp; source
0x4220AD: call    SaveLoad_SaveData
0x4220B2: add     [esp+0B8h+self.incomingChangesMap], 1
0x4220B7: mov     edi, [edi+4]
0x4220BA: xor     ebp, ebp
0x4220BC: test    edi, edi
0x4220BE: jnz     short loc_422070
0x4220C0: mov     cx, word ptr [esp+0B8h+self.incomingChangesMap]; self
0x4220C5: mov     [ebx], cx
0x4220C8: jmp     def_421AEA; jumptable 00421AEA default case
0x4220CD: push    1; byteCount
0x4220CF: lea     edx, [esp+0BCh+source+2]
0x4220D3: push    edx; source
0x4220D4: call    SaveLoad_SaveData
0x4220D9: push    ebp; int
0x4220DA: push    offset ??_R0?AVExtraPackageStartLocation@@@8; struct TypeDescriptor *
0x4220DF: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4220E4: push    ebp; int
0x4220E5: push    esi; void *
0x4220E6: call    OblivionDynamicCast
0x4220EB: mov     edi, eax
0x4220ED: mov     dword ptr [esp+0CCh+self.unknown1C+0Ch], ebp
0x4220F1: mov     eax, [edi+0Ch]
0x4220F4: add     esp, 14h
0x4220F7: cmp     eax, ebp
0x4220F9: jz      short loc_422104
0x4220FB: mov     eax, [eax+0Ch]
0x4220FE: mov     dword ptr [esp+0B8h+self.unknown1C+0Ch], eax
0x422102: jmp     short loc_422129
0x422104: mov     ecx, [esp+0B8h+arg_4]
0x42210B: mov     edx, [ecx]
0x42210D: mov     eax, [edx+0D4h]
0x422113: mov     ebp, [ecx+0Ch]
0x422116: call    eax
0x422118: push    eax
0x422119: push    ebp; ArgList
0x42211A: push    offset aSavingPackageS; "Saving package start location on %08X %"...
0x42211F: call    PrintError
0x422124: add     esp, 0Ch
0x422127: xor     ebp, ebp
0x422129: push    4; byteCount
0x42212B: lea     ecx, [esp+0BCh+self.unknown1C+0Ch]
0x42212F: push    ecx; source
0x422130: mov     ecx, g_TESSaveLoadGame; self
0x422136: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x42213B: mov     ecx, g_TESSaveLoadGame; self
0x422141: push    0Ch; byteCount
0x422143: lea     edx, [edi+10h]
0x422146: push    edx; source
0x422147: call    SaveLoad_SaveData
0x42214C: push    4
0x42214E: add     edi, 1Ch
0x422151: push    edi
0x422152: jmp     loc_42290B
0x422157: mov     ebx, 1
0x42215C: push    ebx; byteCount
0x42215D: lea     eax, [esp+0BCh+source+2]
0x422161: push    eax; source
0x422162: call    SaveLoad_SaveData
0x422167: push    0; int
0x422169: push    offset ??_R0?AVExtraFollower@@@8; struct TypeDescriptor *
0x42216E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422173: push    0; int
0x422175: push    esi; void *
0x422176: call    OblivionDynamicCast
0x42217B: mov     ecx, g_TESSaveLoadGame; self
0x422181: add     esp, 14h
0x422184: push    2; byteCount
0x422186: lea     edx, [esp+0BCh+self.exteriorNewReferencesMap]
0x42218A: mov     [esp+0BCh+self.exteriorNewReferencesMap], 0
0x422192: mov     ebp, [ecx+14h]
0x422195: push    edx; source
0x422196: mov     edi, eax
0x422198: call    SaveLoad_SaveData
0x42219D: mov     edi, [edi+0Ch]
0x4221A0: test    edi, edi
0x4221A2: jz      short loc_4221D9
0x4221A4: cmp     dword ptr [edi+4], 0
0x4221A8: jnz     short loc_4221AF
0x4221AA: cmp     dword ptr [edi], 0
0x4221AD: jz      short loc_4221D9
0x4221AF: mov     eax, [edi]
0x4221B1: test    eax, eax
0x4221B3: jz      short loc_4221D2
0x4221B5: mov     eax, [eax+0Ch]
0x4221B8: push    4; byteCount
0x4221BA: lea     ecx, [esp+0BCh+self.flags]
0x4221BE: push    ecx; source
0x4221BF: mov     ecx, g_TESSaveLoadGame; self
0x4221C5: mov     [esp+0C0h+self.flags], eax
0x4221C9: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x4221CE: add     [esp+0B8h+self.exteriorNewReferencesMap], ebx
0x4221D2: mov     edi, [edi+4]
0x4221D5: test    edi, edi
0x4221D7: jnz     short loc_4221A4
0x4221D9: mov     dx, word ptr [esp+0B8h+self.exteriorNewReferencesMap]
0x4221DE: mov     [ebp+0], dx
0x4221E2: xor     ebp, ebp
0x4221E4: jmp     def_421AEA; jumptable 00421AEA default case
0x4221E9: test    [esp+0B8h+arg_0], edx
0x4221F0: jz      def_421AEA; jumptable 00421AEA default case
0x4221F6: push    1; byteCount
0x4221F8: lea     eax, [esp+0BCh+source+2]
0x4221FC: push    eax; source
0x4221FD: call    SaveLoad_SaveData
0x422202: push    ebp; int
0x422203: push    offset ??_R0?AVNonActorMagicCaster@@@8; struct TypeDescriptor *
0x422208: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42220D: push    ebp; int
0x42220E: push    esi; void *
0x42220F: call    OblivionDynamicCast
0x422214: lea     edi, [eax+0Ch]
0x422217: mov     dword ptr [esp+0CCh+self.unknown48], ebp
0x42221B: mov     edx, [edi]
0x42221D: mov     eax, [edx+30h]
0x422220: add     esp, 14h
0x422223: mov     ecx, edi
0x422225: call    eax
0x422227: test    eax, eax
0x422229: jz      short loc_42223F
0x42222B: mov     edx, [edi]
0x42222D: mov     eax, [edx+30h]
0x422230: mov     ecx, edi
0x422232: call    eax
0x422234: mov     ecx, eax; int
0x422236: call    MagicItem_GetFormID
0x42223B: mov     dword ptr [esp+0B8h+self.unknown48], eax
0x42223F: push    4; byteCount
0x422241: lea     ecx, [esp+0BCh+self.unknown48]
0x422245: push    ecx; source
0x422246: mov     ecx, g_TESSaveLoadGame; self
0x42224C: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422251: mov     [esp+0B8h+self.deferredDeleteList.form], ebp
0x422255: mov     edx, [edi]
0x422257: mov     eax, [edx+38h]
0x42225A: mov     ecx, edi
0x42225C: call    eax
0x42225E: test    eax, eax
0x422260: jz      short loc_422276
0x422262: mov     edx, [edi]
0x422264: mov     eax, [edx+38h]
0x422267: mov     ecx, edi
0x422269: call    eax
0x42226B: mov     ecx, eax
0x42226D: call    MagicTarget_GetParentFormID
0x422272: mov     [esp+0B8h+self.deferredDeleteList.form], eax
0x422276: push    4; byteCount
0x422278: lea     ecx, [esp+0BCh+self.deferredDeleteList]
0x42227C: push    ecx; source
0x42227D: mov     ecx, g_TESSaveLoadGame; self
0x422283: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422288: mov     dword ptr [esp+0B8h+self.unknown38+8], ebp
0x42228C: mov     edx, [edi]
0x42228E: mov     eax, [edx+20h]
0x422291: mov     ecx, edi
0x422293: call    eax
0x422295: test    eax, eax
0x422297: jz      short loc_4222A9
0x422299: mov     edx, [edi]
0x42229B: mov     eax, [edx+20h]
0x42229E: mov     ecx, edi
0x4222A0: call    eax
0x4222A2: mov     ecx, [eax+0Ch]
0x4222A5: mov     dword ptr [esp+0B8h+self.unknown38+8], ecx
0x4222A9: mov     ecx, g_TESSaveLoadGame; self
0x4222AF: push    4; byteCount
0x4222B1: lea     edx, [esp+0BCh+self.unknown38+8]
0x4222B5: push    edx; source
0x4222B6: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x4222BB: jmp     def_421AEA; jumptable 00421AEA default case
0x4222C0: test    [esp+0B8h+arg_0], edx
0x4222C7: jz      def_421AEA; jumptable 00421AEA default case
0x4222CD: push    1; byteCount
0x4222CF: lea     eax, [esp+0BCh+source+2]
0x4222D3: push    eax; source
0x4222D4: call    SaveLoad_SaveData
0x4222D9: push    ebp; int
0x4222DA: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x4222DF: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4222E4: push    ebp; int
0x4222E5: push    esi; void *
0x4222E6: call    OblivionDynamicCast
0x4222EB: lea     edi, [eax+0Ch]
0x4222EE: mov     dword ptr [esp+0CCh+self.unknown1C+4], ebp
0x4222F2: mov     edx, [edi]
0x4222F4: mov     eax, [edx+4]
0x4222F7: add     esp, 14h
0x4222FA: mov     ecx, edi
0x4222FC: call    eax
0x4222FE: test    eax, eax
0x422300: jz      short loc_422312
0x422302: mov     edx, [edi]
0x422304: mov     eax, [edx+4]
0x422307: mov     ecx, edi
0x422309: call    eax
0x42230B: mov     ecx, [eax+0Ch]
0x42230E: mov     dword ptr [esp+0B8h+self.unknown1C+4], ecx
0x422312: mov     ecx, g_TESSaveLoadGame; self
0x422318: push    4; byteCount
0x42231A: lea     edx, [esp+0BCh+self.unknown1C+4]
0x42231E: push    edx; source
0x42231F: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422324: mov     eax, [edi]
0x422326: mov     edx, [eax+8]
0x422329: push    ebp
0x42232A: mov     ecx, edi
0x42232C: call    edx
0x42232E: push    eax
0x42232F: call    ActiveEffect_Base_SaveAEList; Verified active-effect list save layout: TESSaveLoadGame_UseSaveGameBlocks controls whether the list emits a BLOK header and reserves/backpatches a block size. The list always reserves and patches a UInt16 effect count. Per-effect records separately use the save version threshold 0x2A to include a UInt16 record-size field.
0x422334: add     esp, 8
0x422337: jmp     def_421AEA; jumptable 00421AEA default case
0x42233C: test    [esp+0B8h+arg_0], 100000h
0x422347: jz      def_421AEA; jumptable 00421AEA default case
0x42234D: push    1; byteCount
0x42234F: lea     eax, [esp+0BCh+source+2]
0x422353: push    eax; source
0x422354: call    SaveLoad_SaveData
0x422359: push    ebp; int
0x42235A: push    offset ??_R0?AVExtraTeleport@@@8; struct TypeDescriptor *
0x42235F: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422364: push    ebp; int
0x422365: push    esi; void *
0x422366: call    OblivionDynamicCast
0x42236B: mov     ecx, [eax+0Ch]
0x42236E: add     esp, 14h
0x422371: call    sub_42B950
0x422376: jmp     def_421AEA; jumptable 00421AEA default case
0x42237B: test    [esp+0B8h+arg_0], 4000h
0x422386: jz      def_421AEA; jumptable 00421AEA default case
0x42238C: push    1; byteCount
0x42238E: lea     edx, [esp+0BCh+source+2]
0x422392: push    edx; source
0x422393: call    SaveLoad_SaveData
0x422398: push    ebp; int
0x422399: push    offset ??_R0?AVExtraOblivionEntry@@@8; struct TypeDescriptor *
0x42239E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4223A3: push    ebp; int
0x4223A4: push    esi; void *
0x4223A5: call    OblivionDynamicCast
0x4223AA: mov     edi, eax
0x4223AC: mov     eax, [edi+18h]
0x4223AF: mov     ecx, [eax+0Ch]
0x4223B2: add     esp, 14h
0x4223B5: push    4; byteCount
0x4223B7: lea     edx, [esp+0BCh+self.worldspaceIDArray]
0x4223BE: mov     [esp+0BCh+self.worldspaceIDArray], ecx
0x4223C5: mov     ecx, g_TESSaveLoadGame; self
0x4223CB: push    edx; source
0x4223CC: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x4223D1: push    0Ch
0x4223D3: add     edi, 0Ch
0x4223D6: push    edi
0x4223D7: jmp     loc_42290B
0x4223DC: test    [esp+0B8h+arg_0], 1000h
0x4223E7: jz      def_421AEA; jumptable 00421AEA default case
0x4223ED: push    1; byteCount
0x4223EF: lea     eax, [esp+0BCh+source+2]
0x4223F3: push    eax; source
0x4223F4: call    SaveLoad_SaveData
0x4223F9: push    ebp; int
0x4223FA: push    offset ??_R0?AVExtraPersuasionPercent@@@8; struct TypeDescriptor *
0x4223FF: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422404: push    ebp; int
0x422405: push    esi; void *
0x422406: call    OblivionDynamicCast
0x42240B: add     esp, 14h
0x42240E: mov     edi, eax
0x422410: push    4; byteCount
0x422412: lea     ecx, [edi+0Ch]
0x422415: push    ecx; source
0x422416: mov     ecx, g_TESSaveLoadGame; self
0x42241C: call    SaveLoad_SaveData
0x422421: mov     ecx, g_TESSaveLoadGame; self
0x422427: push    4; byteCount
0x422429: lea     edx, [edi+10h]
0x42242C: push    edx; source
0x42242D: call    SaveLoad_SaveData
0x422432: mov     ecx, g_TESSaveLoadGame; self
0x422438: push    1; byteCount
0x42243A: lea     eax, [edi+14h]
0x42243D: push    eax; source
0x42243E: call    SaveLoad_SaveData
0x422443: push    4
0x422445: add     edi, 18h
0x422448: push    edi
0x422449: jmp     loc_42290B
0x42244E: test    byte ptr [esp+0B8h+arg_0], 20h
0x422456: jz      def_421AEA; jumptable 00421AEA default case
0x42245C: push    1; byteCount
0x42245E: lea     edx, [esp+0BCh+source+2]
0x422462: push    edx; source
0x422463: call    SaveLoad_SaveData
0x422468: push    ebp; int
0x422469: push    offset ??_R0?AVExtraPoison@@@8; struct TypeDescriptor *
0x42246E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422473: push    ebp; int
0x422474: push    esi; void *
0x422475: call    OblivionDynamicCast
0x42247A: mov     eax, [eax+0Ch]
0x42247D: mov     ecx, [eax+0Ch]
0x422480: add     esp, 14h
0x422483: push    4; byteCount
0x422485: lea     edx, [esp+0BCh+self.currentlyLoadingFormHeader]
0x42248C: mov     [esp+0BCh+self.currentlyLoadingFormHeader], ecx
0x422493: mov     ecx, g_TESSaveLoadGame; self
0x422499: push    edx; source
0x42249A: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x42249F: jmp     def_421AEA; jumptable 00421AEA default case
0x4224A4: test    [esp+0B8h+arg_0], 2000000h
0x4224AF: jz      def_421AEA; jumptable 00421AEA default case
0x4224B5: push    1; byteCount
0x4224B7: lea     eax, [esp+0BCh+source+2]
0x4224BB: push    eax; source
0x4224BC: call    SaveLoad_SaveData
0x4224C1: push    ebp; int
0x4224C2: push    offset ??_R0?AVExtraLastFinishedSequence@@@8; struct TypeDescriptor *
0x4224C7: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4224CC: push    ebp; int
0x4224CD: push    esi; void *
0x4224CE: call    OblivionDynamicCast
0x4224D3: mov     edi, eax
0x4224D5: mov     eax, [edi+0Ch]
0x4224D8: add     esp, 14h
0x4224DB: lea     ecx, [eax+1]
0x4224DE: mov     edi, edi
0x4224E0: mov     dl, [eax]
0x4224E2: add     eax, 1
0x4224E5: test    dl, dl
0x4224E7: jnz     short loc_4224E0
0x4224E9: sub     eax, ecx
0x4224EB: push    1; byteCount
0x4224ED: lea     ecx, [esp+0BCh+source+3]
0x4224F1: push    ecx; source
0x4224F2: mov     ecx, g_TESSaveLoadGame; self
0x4224F8: mov     byte ptr [esp+0C0h+source+3], al
0x4224FC: call    SaveLoad_SaveData
0x422501: movzx   edx, byte ptr [esp+0B8h+source+3]
0x422506: mov     eax, [edi+0Ch]
0x422509: push    edx
0x42250A: jmp     loc_42290A
0x42250F: test    [esp+0B8h+arg_0], 400h
0x42251A: jz      def_421AEA; jumptable 00421AEA default case
0x422520: push    1; byteCount
0x422522: lea     edx, [esp+0BCh+source+2]
0x422526: push    edx; source
0x422527: call    SaveLoad_SaveData
0x42252C: push    ebp; int
0x42252D: push    offset ??_R0?AVExtraMapMarker@@@8; struct TypeDescriptor *
0x422532: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422537: push    ebp; int
0x422538: push    esi; void *
0x422539: call    OblivionDynamicCast
0x42253E: mov     eax, [eax+0Ch]
0x422541: mov     cl, [eax+0Ch]
0x422544: add     esp, 14h
0x422547: push    1
0x422549: lea     edx, [esp+0BCh+self]
0x42254D: mov     byte ptr [esp+0BCh+self.currentChangesMap], cl; Verified: pre-load/current ChangeData map. Existing entries are consulted and reconciled during loading; sub464440 replaces this pointer with the incoming map after finalization.
0x422551: push    edx
0x422552: jmp     loc_42290B
0x422557: cmp     edi, ebp; jumptable 00421AEA case 17
0x422559: jz      def_421AEA; jumptable 00421AEA default case
0x42255F: mov     eax, [edi]
0x422561: mov     edx, [eax+190h]
0x422567: mov     ecx, edi
0x422569: call    edx
0x42256B: test    al, al
0x42256D: jz      def_421AEA; jumptable 00421AEA default case
0x422573: cmp     edi, dword ptr reference
0x422579: jz      def_421AEA; jumptable 00421AEA default case
0x42257F: mov     ecx, g_TESSaveLoadGame; self
0x422585: push    1; byteCount
0x422587: lea     eax, [esp+0BCh+source+2]
0x42258B: push    eax; source
0x42258C: call    SaveLoad_SaveData
0x422591: push    ebp; int
0x422592: push    offset ??_R0?AVExtraPersistentCell@@@8; struct TypeDescriptor *
0x422597: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42259C: push    ebp; int
0x42259D: push    esi; void *
0x42259E: call    OblivionDynamicCast
0x4225A3: mov     dword ptr [esp+0CCh+self.unknown1C+8], ebp
0x4225A7: mov     ecx, [eax+0Ch]; this
0x4225AA: add     esp, 14h
0x4225AD: cmp     ecx, ebp
0x4225AF: jz      short loc_4225BD
0x4225B1: call    TESObjectCELL_GetWorldSpace
0x4225B6: mov     ecx, [eax+0Ch]
0x4225B9: mov     dword ptr [esp+0B8h+self.unknown1C+8], ecx
0x4225BD: mov     ecx, g_TESSaveLoadGame; self
0x4225C3: push    4; byteCount
0x4225C5: lea     edx, [esp+0BCh+self.unknown1C+8]
0x4225C9: push    edx; source
0x4225CA: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x4225CF: jmp     def_421AEA; jumptable 00421AEA default case
0x4225D4: push    1; byteCount
0x4225D6: lea     eax, [esp+0BCh+source+2]
0x4225DA: push    eax; source
0x4225DB: call    SaveLoad_SaveData
0x4225E0: push    ebp; int
0x4225E1: push    offset ??_R0?AVExtraItemDropper@@@8; struct TypeDescriptor *
0x4225E6: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4225EB: push    ebp; int
0x4225EC: push    esi; void *
0x4225ED: call    OblivionDynamicCast
0x4225F2: mov     dword ptr [esp+0CCh+self.unknown1C], ebp
0x4225F6: mov     eax, [eax+0Ch]
0x4225F9: add     esp, 14h
0x4225FC: cmp     eax, ebp
0x4225FE: jz      short loc_422607
0x422600: mov     ecx, [eax+0Ch]
0x422603: mov     dword ptr [esp+0B8h+self.unknown1C], ecx
0x422607: mov     ecx, g_TESSaveLoadGame; self
0x42260D: push    4; byteCount
0x42260F: lea     edx, [esp+0BCh+self.unknown1C]
0x422613: push    edx; source
0x422614: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422619: jmp     def_421AEA; jumptable 00421AEA default case
0x42261E: test    [esp+0B8h+arg_0], 1000000h
0x422629: jz      def_421AEA; jumptable 00421AEA default case
0x42262F: push    1; byteCount
0x422631: lea     eax, [esp+0BCh+source+2]
0x422635: push    eax; source
0x422636: call    SaveLoad_SaveData
0x42263B: push    ebp; int
0x42263C: push    offset ??_R0?AVExtraSavedMovementData@@@8; struct TypeDescriptor *
0x422641: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422646: push    ebp; int
0x422647: push    esi; void *
0x422648: call    OblivionDynamicCast
0x42264D: mov     edi, eax
0x42264F: mov     [esp+0CCh+var_A4], ebp
0x422653: mov     ecx, [edi+10h]
0x422656: add     esp, 14h
0x422659: push    ecx
0x42265A: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x422660: call    sub_4522F0
0x422665: mov     ecx, g_TESSaveLoadGame; self
0x42266B: movzx   edx, ax
0x42266E: push    2; byteCount
0x422670: lea     eax, [esp+0BCh+var_A4]
0x422674: push    eax; source
0x422675: mov     [esp+0C0h+var_A4], edx
0x422679: call    SaveLoad_SaveData
0x42267E: mov     eax, [edi+10h]
0x422681: cmp     eax, ebp
0x422683: jz      short loc_422697
0x422685: movzx   ecx, word ptr [esp+0B8h+var_A4]
0x42268A: push    ecx; byteCount
0x42268B: mov     ecx, g_TESSaveLoadGame; self
0x422691: push    eax; source
0x422692: call    SaveLoad_SaveData
0x422697: mov     edx, [edi+14h]
0x42269A: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x4226A0: push    edx
0x4226A1: call    sub_4522F0
0x4226A6: movzx   eax, ax
0x4226A9: push    2; byteCount
0x4226AB: lea     ecx, [esp+0BCh+var_A4]
0x4226AF: push    ecx; source
0x4226B0: mov     ecx, g_TESSaveLoadGame; self
0x4226B6: mov     [esp+0C0h+var_A4], eax
0x4226BA: call    SaveLoad_SaveData
0x4226BF: mov     eax, [edi+14h]
0x4226C2: cmp     eax, ebp
0x4226C4: jz      short loc_4226D8
0x4226C6: movzx   edx, word ptr [esp+0B8h+var_A4]
0x4226CB: mov     ecx, g_TESSaveLoadGame; self
0x4226D1: push    edx; byteCount
0x4226D2: push    eax; source
0x4226D3: call    SaveLoad_SaveData
0x4226D8: mov     eax, [edi+18h]
0x4226DB: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x4226E1: push    eax
0x4226E2: call    sub_4522F0
0x4226E7: movzx   ecx, ax
0x4226EA: push    2; byteCount
0x4226EC: lea     edx, [esp+0BCh+var_A4]
0x4226F0: mov     [esp+0BCh+var_A4], ecx
0x4226F4: mov     ecx, g_TESSaveLoadGame; self
0x4226FA: push    edx; source
0x4226FB: call    SaveLoad_SaveData
0x422700: mov     edi, [edi+18h]
0x422703: cmp     edi, ebp
0x422705: jz      def_421AEA; jumptable 00421AEA default case
0x42270B: movzx   eax, word ptr [esp+0B8h+var_A4]
0x422710: push    eax
0x422711: push    edi
0x422712: jmp     loc_42290B
0x422717: push    1; byteCount
0x422719: lea     edx, [esp+0BCh+source+2]
0x42271D: push    edx; source
0x42271E: call    SaveLoad_SaveData
0x422723: mov     ecx, g_TESSaveLoadGame; self
0x422729: push    2; byteCount
0x42272B: lea     eax, [esp+0BCh+self.bufferCursor]
0x42272F: mov     [esp+0BCh+self.bufferCursor], ebp
0x422733: mov     ebx, [ecx+14h]
0x422736: push    eax; source
0x422737: call    SaveLoad_SaveData
0x42273C: push    ebp; int
0x42273D: push    offset ??_R0?AVExtraFriendHitList@@@8; struct TypeDescriptor *
0x422742: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x422747: push    ebp; int
0x422748: push    esi; void *
0x422749: call    OblivionDynamicCast
0x42274E: mov     edi, [eax+0Ch]
0x422751: add     esp, 14h
0x422754: cmp     edi, ebp
0x422756: jz      short loc_4227BF
0x422758: cmp     [edi+4], ebp
0x42275B: jnz     short loc_422761
0x42275D: cmp     [edi], ebp
0x42275F: jz      short loc_4227BF
0x422761: mov     ebp, [edi]
0x422763: test    ebp, ebp
0x422765: jz      short loc_4227B6
0x422767: mov     eax, [ebp+0]
0x42276A: test    eax, eax
0x42276C: mov     [esp+0B8h+self.flags], 0
0x422774: jz      short loc_42277D
0x422776: mov     ecx, [eax+0Ch]
0x422779: mov     [esp+0B8h+self.flags], ecx
0x42277D: mov     ecx, g_TESSaveLoadGame; self
0x422783: push    4; byteCount
0x422785: lea     edx, [esp+0BCh+self.flags]
0x422789: push    edx; source
0x42278A: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x42278F: mov     ecx, g_TESSaveLoadGame; self
0x422795: push    2; byteCount
0x422797: lea     eax, [ebp+4]
0x42279A: push    eax; source
0x42279B: call    SaveLoad_SaveData
0x4227A0: mov     ecx, g_TESSaveLoadGame; self
0x4227A6: push    4; byteCount
0x4227A8: add     ebp, 8
0x4227AB: push    ebp; source
0x4227AC: call    SaveLoad_SaveData
0x4227B1: add     [esp+0B8h+self.bufferCursor], 1
0x4227B6: mov     edi, [edi+4]
0x4227B9: xor     ebp, ebp
0x4227BB: test    edi, edi
0x4227BD: jnz     short loc_422758
0x4227BF: mov     cx, word ptr [esp+0B8h+self.bufferCursor]; self
0x4227C4: mov     [ebx], cx
0x4227C7: jmp     def_421AEA; jumptable 00421AEA default case
0x4227CC: push    1; byteCount
0x4227CE: lea     edx, [esp+0BCh+source+2]
0x4227D2: push    edx; source
0x4227D3: call    SaveLoad_SaveData
0x4227D8: push    ebp; int
0x4227D9: push    offset ??_R0?AVExtraHeadingTarget@@@8; struct TypeDescriptor *
0x4227DE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4227E3: push    ebp; int
0x4227E4: push    esi; void *
0x4227E5: call    OblivionDynamicCast
0x4227EA: mov     [esp+0CCh+self.exteriorCellChangesMap], ebp
0x4227EE: mov     eax, [eax+0Ch]
0x4227F1: add     esp, 14h
0x4227F4: cmp     eax, ebp
0x4227F6: jz      short loc_4227FF
0x4227F8: mov     eax, [eax+0Ch]
0x4227FB: mov     [esp+0B8h+self.exteriorCellChangesMap], eax
0x4227FF: push    4; byteCount
0x422801: lea     ecx, [esp+0BCh+self.exteriorCellChangesMap]
0x422805: push    ecx; source
0x422806: mov     ecx, g_TESSaveLoadGame; self
0x42280C: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422811: jmp     def_421AEA; jumptable 00421AEA default case
0x422816: test    byte ptr [esp+0B8h+arg_0], 20h
0x42281E: jz      def_421AEA; jumptable 00421AEA default case
0x422824: push    1; byteCount
0x422826: lea     edx, [esp+0BCh+source+2]
0x42282A: push    edx; source
0x42282B: call    SaveLoad_SaveData
0x422830: mov     eax, [esi+0Ch]
0x422833: mov     ecx, [eax+0Ch]
0x422836: push    4; byteCount
0x422838: lea     edx, [esp+0BCh+var_14]
0x42283F: mov     [esp+0BCh+var_14], ecx
0x422846: mov     ecx, g_TESSaveLoadGame; self
0x42284C: push    edx; source
0x42284D: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x422852: jmp     def_421AEA; jumptable 00421AEA default case
0x422857: test    byte ptr [esp+0B8h+arg_0], 20h
0x42285F: jz      def_421AEA; jumptable 00421AEA default case
0x422865: push    1; byteCount
0x422867: lea     eax, [esp+0BCh+source+2]
0x42286B: push    eax; source
0x42286C: call    SaveLoad_SaveData
0x422871: mov     cl, [esi+0Ch]
0x422874: push    1
0x422876: lea     edx, [esp+0BCh+anonymous_1+3]
0x42287A: mov     byte ptr [esp+0BCh+anonymous_1+3], cl
0x42287E: push    edx
0x42287F: jmp     loc_42290B
0x422884: push    ebp; ExtraDataList save case 0x59 (ExtraInfoGeneralTopic): serialize the cache only when menuTopic is non-null. A null cache writes neither the extra-type byte nor a MenuTopic payload.
0x422885: push    offset ??_R0?AVExtraInfoGeneralTopic@@@8; struct TypeDescriptor *
0x42288A: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42288F: push    ebp; int
0x422890: push    esi; void *
0x422891: call    OblivionDynamicCast
0x422896: mov     edi, eax
0x422898: add     esp, 14h
0x42289B: cmp     [edi+0Ch], ebp; Null ExtraInfoGeneralTopic.menuTopic skips this extra entirely; the surrounding saved-extra count increases only when bytes were emitted.
0x42289E: jz      short def_421AEA; jumptable 00421AEA default case
0x4228A0: mov     ecx, g_TESSaveLoadGame; self
0x4228A6: push    1; byteCount
0x4228A8: lea     eax, [esp+0BCh+source+2]
0x4228AC: push    eax; source
0x4228AD: call    SaveLoad_SaveData
0x4228B2: mov     ecx, [edi+0Ch]; this
0x4228B5: call    MenuTopic__SaveGame; Save actor-cached Rumors MenuTopic display/flags and ownerQuest/topic/INFO FormIDs. Runtime DialogueResponses and response cursors are not serialized.
0x4228BA: jmp     short def_421AEA; jumptable 00421AEA default case
0x4228BC: push    1; byteCount
0x4228BE: lea     edx, [esp+0BCh+source+2]
0x4228C2: push    edx; source
0x4228C3: call    SaveLoad_SaveData
0x4228C8: push    ebp; int
0x4228C9: push    offset ??_R0?AVExtraHasNoRumors@@@8; struct TypeDescriptor *
0x4228CE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4228D3: push    ebp; int
0x4228D4: push    esi; void *
0x4228D5: call    OblivionDynamicCast
0x4228DA: add     esp, 14h
0x4228DD: push    1
0x4228DF: add     eax, 0Ch
0x4228E2: jmp     short loc_42290A
0x4228E4: push    1; byteCount
0x4228E6: lea     eax, [esp+0BCh+source+2]
0x4228EA: push    eax; source
0x4228EB: call    SaveLoad_SaveData
0x4228F0: push    ebp; int
0x4228F1: push    offset ??_R0?AVExtraHaggleAmount@@@8; struct TypeDescriptor *
0x4228F6: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4228FB: push    ebp; int
0x4228FC: push    esi; void *
0x4228FD: call    OblivionDynamicCast
0x422902: add     esp, 14h
0x422905: add     eax, 0Ch
0x422908: push    4; byteCount
0x42290A: push    eax; source
0x42290B: mov     ecx, g_TESSaveLoadGame; self
0x422911: call    SaveLoad_SaveData
0x422916: mov     ecx, [esp+0B8h+var_C]; jumptable 00421AEA default case
0x42291D: mov     edx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x422923: cmp     ecx, [edx+14h]
0x422926: jz      short loc_42292D
0x422928: add     [esp+0B8h+self.interiorNewReferencesMap], 1
0x42292D: mov     esi, [esi+8]
0x422930: cmp     esi, ebp
0x422932: jnz     loc_421AB0
0x422938: mov     ebx, [esp+0B8h+self.resetSelector]
0x42293C: mov     ax, word ptr [esp+0B8h+self.interiorNewReferencesMap]
0x422941: mov     ecx, [esp+0B8h+var_4]
0x422948: mov     [ecx], ax
0x42294B: cmp     Global_DebugSaveBuffer, 0
0x422952: jz      short loc_4229BB
0x422954: mov     eax, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x422959: mov     edi, [eax+84h]
0x42295F: cmp     edi, ebp
0x422961: mov     esi, [eax+14h]
0x422964: jz      short loc_4229A1
0x422966: mov     edx, [edi]
0x422968: push    edx; a1
0x422969: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x42296E: mov     ecx, [edi+5]
0x422971: mov     edx, [eax]
0x422973: add     esp, 4
0x422976: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x42297B: push    1B62h
0x422980: push    ecx
0x422981: mov     ecx, eax
0x422983: mov     eax, [edx+0D4h]
0x422989: call    eax
0x42298B: mov     ecx, [edi]
0x42298D: push    eax
0x42298E: push    ecx
0x42298F: sub     esi, ebx
0x422991: push    esi; ArgList
0x422992: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x422997: call    sub_40FEC0
0x42299C: add     esp, 1Ch
0x42299F: jmp     short loc_4229BB
0x4229A1: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x4229A6: push    1B62h
0x4229AB: sub     esi, ebx
0x4229AD: push    esi; ArgList
0x4229AE: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x4229B3: call    sub_40FEC0
0x4229B8: add     esp, 10h
0x4229BB: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x4229C1: call    TESSaveLoadGame_UseSaveGameBlocks
0x4229C6: test    al, al
0x4229C8: jz      short loc_4229FD
0x4229CA: mov     edx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x4229D0: mov     edi, dword ptr [esp+0B8h+self.unknown48+4]
0x4229D4: mov     esi, [edx+14h]
0x4229D7: lea     eax, [edi+0FFFFh]
0x4229DD: cmp     esi, eax
0x4229DF: jbe     short loc_4229F8
0x4229E1: push    1B62h
0x4229E6: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x4229EB: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x4229F0: call    PrintError
0x4229F5: add     esp, 0Ch
0x4229F8: sub     esi, edi
0x4229FA: mov     [edi], si
0x4229FD: mov     ecx, 0B33800h; lpCriticalSection
0x422A02: call    NiLeaveCriticalSection_0
0x422A07: pop     edi
0x422A08: pop     esi
0x422A09: pop     ebp
0x422A0A: pop     ebx
0x422A0B: add     esp, 0A8h
0x422A11: retn    8
