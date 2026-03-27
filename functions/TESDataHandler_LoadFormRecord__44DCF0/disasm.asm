0x44DCF0: push    ebp
0x44DCF1: lea     ebp, [esp-108h]
0x44DCF8: sub     esp, 108h
0x44DCFE: push    0FFFFFFFFh
0x44DD00: push    offset TESDataHandler_LoadFormRecord_SEH
0x44DD05: mov     eax, large fs:0
0x44DD0B: push    eax
0x44DD0C: sub     esp, 1Ch
0x44DD0F: mov     eax, ds:0B30AACh
0x44DD14: xor     eax, ebp
0x44DD16: mov     [ebp+108h+var_4], eax
0x44DD1C: push    ebx
0x44DD1D: push    esi
0x44DD1E: push    edi
0x44DD1F: push    eax; ArgList
0x44DD20: lea     eax, [ebp+108h+var_114]
0x44DD23: mov     large fs:0, eax
0x44DD29: mov     edi, [ebp+108h+a1]
0x44DD2F: mov     [ebp+108h+var_11C], ecx
0x44DD32: mov     ecx, edi
0x44DD34: mov     [ebp+108h+var_115], 1
0x44DD38: call    TESFile_GetRecordType
0x44DD3D: xor     esi, esi
0x44DD3F: cmp     byte ptr [ebp+108h+arg_4], 0
0x44DD46: mov     ebx, eax
0x44DD48: jz      short TESDataHandler_LoadFormRecord___CheckFormIDZero
0x44DD4A: mov     eax, [edi+248h]
0x44DD50: push    eax
0x44DD51: call    TESForm_IsFormIDBuiltin
0x44DD56: add     esp, 4
0x44DD59: test    al, al
0x44DD5B: jz      short TESDataHandler_LoadFormRecord___CheckTemporary
0x44DD5D: mov     eax, [edi+248h]
0x44DD63: test    eax, eax
0x44DD65: jnz     short loc_44DDA9
0x44DD67: xor     esi, esi
0x44DD69: mov     eax, [edi+244h]
0x44DD6F: test    eax, 4000h
0x44DD74: jz      TESDataHandler_LoadFormRecord___ResetForm
0x44DD7A: and     dword ptr [edi+244h], 0FFFFBFFFh
0x44DD84: test    esi, esi
0x44DD86: jnz     TESDataHandler_LoadFormRecord___SwitchFormType
0x44DD8C: mov     ecx, [edi+248h]
0x44DD92: lea     eax, [edi+1Ch]
0x44DD95: push    eax
0x44DD96: push    ecx; ArgList
0x44DD97: push    offset aPartialForm08x; "Partial Form (%08X) in file \"%s\" coul"...
0x44DD9C: call    PrintError
0x44DDA1: add     esp, 0Ch
0x44DDA4: jmp     TESDataHandler_LoadFormRecord___Return_0
0x44DDA9: lea     ecx, [ebp+108h+var_124]
0x44DDAC: push    ecx
0x44DDAD: push    eax
0x44DDAE: mov     ecx, offset TESForm_FormIDMap
0x44DDB3: mov     [ebp+108h+var_124], esi
0x44DDB6: call    NiTMap_GetAt
0x44DDBB: test    al, al
0x44DDBD: jz      short loc_44DD67
0x44DDBF: mov     esi, [ebp+108h+var_124]
0x44DDC2: test    esi, esi
0x44DDC4: jz      short TESDataHandler_LoadFormRecord___CheckTemporary
0x44DDC6: movzx   eax, byte ptr [esi+4]
0x44DDCA: cmp     eax, ebx
0x44DDCC: jz      short TESDataHandler_LoadFormRecord___CheckTemporary
0x44DDCE: lea     edx, [ebx+ebx*2]
0x44DDD1: mov     ecx, ds:0B05E04h[edx*4]
0x44DDD8: push    ecx
0x44DDD9: lea     edx, [eax+eax*2]
0x44DDDC: mov     eax, ds:0B05E04h[edx*4]
0x44DDE3: mov     edx, [edi+248h]
0x44DDE9: push    eax
0x44DDEA: lea     ecx, [edi+1Ch]
0x44DDED: push    ecx
0x44DDEE: push    edx; ArgList
0x44DDEF: push    offset aForm08xInFileS; "Form (%08X) in file \"%s\" has wrong ty"...
0x44DDF4: call    PrintError
0x44DDF9: add     esp, 14h
0x44DDFC: jmp     TESDataHandler_LoadFormRecord___Return_0
0x44DE01: test    esi, esi
0x44DE03: jz      short TESDataHandler_LoadFormRecord___SwitchFormType
0x44DE05: test    al, 20h
0x44DE07: jnz     short TESDataHandler_LoadFormRecord___SwitchFormType
0x44DE09: mov     edx, [esi]
0x44DE0B: mov     eax, [edx+18h]
0x44DE0E: mov     ecx, esi
0x44DE10: call    eax
0x44DE12: mov     edx, [esi]
0x44DE14: mov     eax, [edx+14h]
0x44DE17: mov     ecx, esi
0x44DE19: call    eax
0x44DE1B: lea     eax, [ebx-1]; switch 67 cases
0x44DE1E: cmp     eax, 42h
0x44DE21: ja      TESDataHandler_LoadFormRecord___TESDataHandler_LoadFormRecord_LoadObject; jumptable 0044DE2E default case, cases 2,18-44,55,64
0x44DE27: movzx   ecx, ds:byte_44E6DC[eax]
0x44DE2E: jmp     ds:jpt_44DE2E[ecx*4]; switch jump
0x44DE35: mov     ecx, edi; jumptable 0044DE2E case 1
0x44DE37: call    TESFile_GetChunkType
0x44DE3C: test    eax, eax
0x44DE3E: jz      short loc_44DE79
0x44DE40: cmp     eax, 454C4544h
0x44DE45: mov     ecx, edi; a1
0x44DE47: jz      short loc_44DE63
0x44DE49: call    TESFile_GetNextChunk
0x44DE4E: mov     ecx, edi
0x44DE50: call    TESFile_GetChunkType
0x44DE55: test    eax, eax
0x44DE57: jnz     short loc_44DE40
0x44DE59: mov     eax, 1
0x44DE5E: jmp     TESDataHandler_LoadFormRecord___Done
0x44DE63: push    8; a4
0x44DE65: lea     edx, [ebp+108h+Dst]
0x44DE68: push    edx; Dst
0x44DE69: call    TESFile_GetChunkData
0x44DE6E: lea     eax, [ebp+108h+Dst]
0x44DE71: push    eax
0x44DE72: mov     ecx, edi
0x44DE74: call    sub_44FA50
0x44DE79: mov     eax, 1
0x44DE7E: jmp     TESDataHandler_LoadFormRecord___Done
0x44DE83: xor     bl, bl; jumptable 0044DE2E case 56
0x44DE85: test    esi, esi
0x44DE87: jnz     short loc_44DEB3
0x44DE89: push    30h ; '0'; Size
0x44DE8B: call    FormHeapAlloc
0x44DE90: add     esp, 4
0x44DE93: mov     dword ptr [ebp+108h+ArgList], eax
0x44DE96: test    eax, eax
0x44DE98: mov     [ebp+108h+var_10C], esi
0x44DE9B: jz      short loc_44DEA6
0x44DE9D: mov     ecx, eax; this
0x44DE9F: call    ??0TESRoad@@QAE@XZ; TESRoad::TESRoad(void)
0x44DEA4: jmp     short loc_44DEA8
0x44DEA6: xor     eax, eax
0x44DEA8: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44DEAF: mov     esi, eax
0x44DEB1: mov     bl, 1
0x44DEB3: push    edi
0x44DEB4: push    esi
0x44DEB5: call    TESDataHandler_LoadForm
0x44DEBA: add     esp, 8
0x44DEBD: test    bl, bl
0x44DEBF: jz      short loc_44DEE6
0x44DEC1: mov     ecx, ds:0B33AA0h
0x44DEC7: test    ecx, ecx
0x44DEC9: jnz     short loc_44DED7
0x44DECB: mov     ecx, [ebp+108h+var_11C]
0x44DECE: mov     ecx, [ecx+0Ch]
0x44DED1: mov     ds:0B33AA0h, ecx
0x44DED7: push    esi
0x44DED8: call    sub_4EF100
0x44DEDD: mov     edx, ds:0B33AA0h
0x44DEE3: mov     [esi+2Ch], edx
0x44DEE6: mov     eax, 1
0x44DEEB: jmp     TESDataHandler_LoadFormRecord___Done
0x44DEF0: xor     bl, bl; jumptable 0044DE2E case 48
0x44DEF2: test    esi, esi
0x44DEF4: mov     [ebp+108h+var_124], esi
0x44DEF7: jnz     short loc_44DF2A
0x44DEF9: push    58h ; 'X'; Size
0x44DEFB: call    FormHeapAlloc
0x44DF00: add     esp, 4
0x44DF03: mov     dword ptr [ebp+108h+ArgList], eax
0x44DF06: test    eax, eax
0x44DF08: mov     [ebp+108h+var_10C], 1
0x44DF0F: jz      short loc_44DF1A
0x44DF11: mov     ecx, eax
0x44DF13: call    TESObjectCELL_constr
0x44DF18: jmp     short loc_44DF1C
0x44DF1A: xor     eax, eax
0x44DF1C: mov     esi, eax
0x44DF1E: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44DF25: mov     [ebp+108h+var_124], esi
0x44DF28: mov     bl, 1
0x44DF2A: push    edi
0x44DF2B: push    esi
0x44DF2C: call    TESDataHandler_LoadForm
0x44DF31: mov     eax, [ebp+108h+var_11C]
0x44DF34: add     esp, 8
0x44DF37: cmp     byte ptr [eax+0CD1h], 0
0x44DF3E: jz      short loc_44DF4E
0x44DF40: mov     edx, [esi]
0x44DF42: mov     eax, [edx+90h]
0x44DF48: push    1
0x44DF4A: mov     ecx, esi
0x44DF4C: call    eax
0x44DF4E: push    1; a2
0x44DF50: mov     ecx, esi; this
0x44DF52: call    TESForm_SetIsFromMaster
0x44DF57: test    bl, bl
0x44DF59: jz      loc_44DFF1
0x44DF5F: mov     ecx, esi; this
0x44DF61: call    TESObjectCELL_IsInterior
0x44DF66: test    al, al
0x44DF68: jz      short loc_44DF93
0x44DF6A: mov     eax, [ebp+108h+var_11C]
0x44DF6D: mov     edx, [eax+0CCh]
0x44DF73: lea     ecx, [ebp+108h+var_124]
0x44DF76: push    ecx
0x44DF77: push    edx
0x44DF78: lea     ecx, [eax+0C0h]
0x44DF7E: call    sub_52ED80
0x44DF83: mov     ds:0B33A9Ch, esi
0x44DF89: mov     eax, 1
0x44DF8E: jmp     TESDataHandler_LoadFormRecord___Done
0x44DF93: mov     ecx, ds:0B33AA0h
0x44DF99: test    ecx, ecx
0x44DF9B: jnz     short loc_44DFA9
0x44DF9D: mov     eax, [ebp+108h+var_11C]
0x44DFA0: mov     ecx, [eax+0Ch]
0x44DFA3: mov     ds:0B33AA0h, ecx
0x44DFA9: push    esi
0x44DFAA: call    sub_4EFEF0
0x44DFAF: test    al, al
0x44DFB1: jnz     short loc_44DFF1
0x44DFB3: mov     ecx, esi; this
0x44DFB5: call    TESForm_GetQuestItem
0x44DFBA: test    al, al
0x44DFBC: mov     eax, offset aPersistent; "Persistent "
0x44DFC1: jnz     short loc_44DFC8
0x44DFC3: mov     eax, offset EmptyString
0x44DFC8: mov     ecx, ds:0B33AA0h
0x44DFCE: mov     edx, [ecx+0Ch]
0x44DFD1: mov     ecx, [esi+0Ch]
0x44DFD4: push    edx
0x44DFD5: push    ecx
0x44DFD6: push    eax; ArgList
0x44DFD7: push    offset aErrorAddingSce; "Error adding %scell (%08X) to world spa"...
0x44DFDC: call    PrintError
0x44DFE1: mov     edx, [esi]
0x44DFE3: mov     eax, [edx+10h]
0x44DFE6: add     esp, 10h
0x44DFE9: push    1
0x44DFEB: mov     ecx, esi
0x44DFED: call    eax
0x44DFEF: xor     esi, esi
0x44DFF1: mov     ds:0B33A9Ch, esi
0x44DFF7: mov     eax, 1
0x44DFFC: jmp     TESDataHandler_LoadFormRecord___Done
0x44E001: cmp     dword ptr ds:0B33A9Ch, 0; jumptable 0044DE2E cases 49-51
0x44E008: jz      TESDataHandler_LoadFormRecord___Return_0
0x44E00E: test    esi, esi
0x44E010: jz      short loc_44E044
0x44E012: mov     edx, [esi]
0x44E014: mov     eax, [edx+170h]
0x44E01A: mov     ecx, esi
0x44E01C: call    eax
0x44E01E: mov     edx, [esi+18h]
0x44E021: mov     eax, [edx]
0x44E023: lea     ecx, [esi+18h]
0x44E026: call    eax
0x44E028: cmp     eax, ds:0B33A9Ch
0x44E02E: jnz     short loc_44E036
0x44E030: mov     [ebp+108h+var_115], 0
0x44E034: jmp     short loc_44E051
0x44E036: test    eax, eax
0x44E038: jz      short loc_44E051
0x44E03A: push    esi
0x44E03B: mov     ecx, eax
0x44E03D: call    sub_4CECD0
0x44E042: jmp     short loc_44E051
0x44E044: push    1
0x44E046: push    ebx
0x44E047: call    sub_4DB260
0x44E04C: add     esp, 8
0x44E04F: mov     esi, eax
0x44E051: push    edi
0x44E052: push    esi
0x44E053: call    TESDataHandler_LoadForm
0x44E058: add     esp, 8
0x44E05B: test    al, al
0x44E05D: jnz     loc_44E0F1
0x44E063: mov     edx, [esi]
0x44E065: mov     eax, [edx+170h]
0x44E06B: mov     ecx, esi
0x44E06D: call    eax
0x44E06F: test    eax, eax
0x44E071: jnz     short loc_44E076
0x44E073: mov     [esi+4], bl
0x44E076: mov     ecx, ds:0B33A9Ch; this
0x44E07C: call    TESForm_GetQuestItem
0x44E081: test    al, al
0x44E083: jz      short loc_44E096
0x44E085: mov     ecx, ds:0B33A9Ch
0x44E08B: push    ecx
0x44E08C: lea     ecx, [esi+44h]
0x44E08F: call    sub_4247B0
0x44E094: jmp     short loc_44E0A8
0x44E096: mov     edx, [esi]
0x44E098: mov     eax, ds:0B33A9Ch
0x44E09D: mov     edx, [edx+194h]
0x44E0A3: push    eax
0x44E0A4: mov     ecx, esi
0x44E0A6: call    edx
0x44E0A8: mov     ebx, [ebp+108h+var_11C]
0x44E0AB: add     ebx, 8B8h
0x44E0B1: push    esi
0x44E0B2: mov     ecx, ebx
0x44E0B4: call    sub_446C30
0x44E0B9: test    al, al
0x44E0BB: jnz     short loc_44E0C5
0x44E0BD: push    esi
0x44E0BE: mov     ecx, ebx
0x44E0C0: call    BSSimpleList_PushFront
0x44E0C5: push    0; int
0x44E0C7: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x44E0CC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x44E0D1: push    0; int
0x44E0D3: push    esi; void *
0x44E0D4: xor     bl, bl
0x44E0D6: call    OblivionDynamicCast
0x44E0DB: add     esp, 14h
0x44E0DE: test    eax, eax
0x44E0E0: jz      short loc_44E0F4
0x44E0E2: push    3
0x44E0E4: push    eax
0x44E0E5: mov     ecx, offset ActorProcessManager_ptr
0x44E0EA: call    sub_674550
0x44E0EF: jmp     short loc_44E0F4
0x44E0F1: mov     bl, [ebp+108h+var_115]
0x44E0F4: mov     eax, [esi]
0x44E0F6: mov     edx, [eax+170h]
0x44E0FC: mov     ecx, esi
0x44E0FE: call    edx
0x44E100: test    eax, eax
0x44E102: jz      loc_44E22D
0x44E108: test    bl, bl
0x44E10A: jz      short loc_44E13A
0x44E10C: mov     ecx, ds:0B33A9Ch
0x44E112: push    esi; Concurrency::details::SchedulerBase *
0x44E113: call    sub_4D35D0
0x44E118: mov     eax, [esi+8]
0x44E11B: shr     eax, 5
0x44E11E: test    al, 1
0x44E120: jnz     short loc_44E15D
0x44E122: mov     edx, [esi]
0x44E124: mov     eax, [edx+170h]
0x44E12A: mov     ecx, esi
0x44E12C: call    eax
0x44E12E: mov     edx, [eax]
0x44E130: mov     ecx, eax
0x44E132: mov     eax, [edx+108h]
0x44E138: jmp     short loc_44E15B
0x44E13A: mov     ecx, [esi+8]
0x44E13D: shr     ecx, 5
0x44E140: test    cl, 1
0x44E143: jz      short loc_44E15D
0x44E145: mov     edx, [esi]
0x44E147: mov     eax, [edx+170h]
0x44E14D: mov     ecx, esi
0x44E14F: call    eax
0x44E151: mov     edx, [eax]
0x44E153: mov     ecx, eax
0x44E155: mov     eax, [edx+10Ch]
0x44E15B: call    eax
0x44E15D: mov     eax, ds:0B33B00h
0x44E162: test    eax, eax
0x44E164: jz      short loc_44E185
0x44E166: mov     ecx, [eax+18h]
0x44E169: shr     ecx, 0Ch
0x44E16C: test    cl, 1
0x44E16F: jz      short loc_44E185
0x44E171: cmp     dword ptr [esi+3Ch], 0
0x44E175: jz      short loc_44E185
0x44E177: mov     edx, [esi]
0x44E179: mov     eax, [edx+150h]
0x44E17F: push    0
0x44E181: mov     ecx, esi
0x44E183: call    eax
0x44E185: mov     ecx, esi; this
0x44E187: call    TESObjectREFR_IsPersistent?
0x44E18C: test    al, al
0x44E18E: jz      loc_44E22D
0x44E194: fld     dword ptr [edi+3D0h]
0x44E19A: fcomp   qword ptr ds:0A38538h
0x44E1A0: fnstsw  ax
0x44E1A2: test    ah, 5
0x44E1A5: jp      loc_44E22D
0x44E1AB: mov     edx, [esi]
0x44E1AD: mov     eax, [edx+170h]
0x44E1B3: mov     ecx, esi
0x44E1B5: call    eax
0x44E1B7: mov     ecx, ds:0B33A9Ch
0x44E1BD: mov     edx, [ecx+0Ch]
0x44E1C0: mov     ebx, eax
0x44E1C2: mov     eax, [ecx]
0x44E1C4: mov     [ebp+108h+var_124], edx
0x44E1C7: mov     edx, [eax+0D4h]
0x44E1CD: call    edx
0x44E1CF: mov     edx, [ebx]
0x44E1D1: mov     [ebp+108h+var_11C], eax
0x44E1D4: mov     eax, [ebx+0Ch]
0x44E1D7: mov     [ebp+108h+var_130], eax
0x44E1DA: mov     eax, [edx+0D4h]
0x44E1E0: mov     ecx, ebx
0x44E1E2: call    eax
0x44E1E4: mov     ecx, [esi+0Ch]
0x44E1E7: mov     edx, [ebp+108h+var_124]
0x44E1EA: add     edi, 1Ch
0x44E1ED: push    edi
0x44E1EE: mov     dword ptr [ebp+108h+ArgList], ecx
0x44E1F1: mov     ecx, ds:0B33A9Ch; this
0x44E1F7: push    edx
0x44E1F8: mov     ebx, eax
0x44E1FA: call    TESObjectCELL_GetYCoordinate
0x44E1FF: mov     ecx, ds:0B33A9Ch; this
0x44E205: push    eax
0x44E206: call    TESObjectCELL_GetXCoordinate
0x44E20B: mov     ecx, [ebp+108h+var_130]
0x44E20E: mov     edx, dword ptr [ebp+108h+ArgList]
0x44E211: push    eax
0x44E212: mov     eax, [ebp+108h+var_11C]
0x44E215: push    eax
0x44E216: push    ecx
0x44E217: push    ebx
0x44E218: push    edx; ArgList
0x44E219: push    offset aRef08xToBaseOb; "ref (%08X) to base object %s (%08X) in "...
0x44E21E: call    PrintError
0x44E223: add     esp, 24h
0x44E226: and     dword ptr [esi+8], 0FFFFFBFFh
0x44E22D: mov     eax, 1
0x44E232: jmp     TESDataHandler_LoadFormRecord___Done
0x44E237: mov     ecx, ds:0B33A9Ch; jumptable 0044DE2E case 54
0x44E23D: test    ecx, ecx
0x44E23F: jz      short loc_44E29B
0x44E241: call    sub_4CE3C0
0x44E246: mov     esi, eax
0x44E248: test    esi, esi
0x44E24A: jnz     short loc_44E291
0x44E24C: push    28h ; '('; Size
0x44E24E: call    FormHeapAlloc
0x44E253: add     esp, 4
0x44E256: mov     dword ptr [ebp+108h+ArgList], eax
0x44E259: test    eax, eax
0x44E25B: mov     [ebp+108h+var_10C], 2
0x44E262: jz      short loc_44E26F
0x44E264: mov     ecx, eax; this
0x44E266: call    ??0TESObjectLAND@@QAE@XZ; TESObjectLAND::TESObjectLAND(void)
0x44E26B: mov     esi, eax
0x44E26D: jmp     short loc_44E271
0x44E26F: xor     esi, esi
0x44E271: mov     eax, ds:0B33A9Ch
0x44E276: push    eax; a2
0x44E277: mov     ecx, esi; this
0x44E279: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44E280: call    sub_4BFDC0
0x44E285: mov     ecx, ds:0B33A9Ch
0x44E28B: push    esi
0x44E28C: call    sub_4C9AE0
0x44E291: push    edi
0x44E292: push    esi
0x44E293: call    TESDataHandler_LoadForm
0x44E298: add     esp, 8
0x44E29B: mov     eax, 1
0x44E2A0: jmp     TESDataHandler_LoadFormRecord___Done
0x44E2A5: mov     ecx, ds:0B33A9Ch; jumptable 0044DE2E case 52
0x44E2AB: test    ecx, ecx
0x44E2AD: jnz     short loc_44E2C1
0x44E2AF: push    offset aPathgridNotAss; "PathGrid not associated with cell."
0x44E2B4: call    PrintError
0x44E2B9: add     esp, 4
0x44E2BC: jmp     TESDataHandler_LoadFormRecord___Return_0
0x44E2C1: call    sub_4AF170
0x44E2C6: mov     esi, eax
0x44E2C8: test    esi, esi
0x44E2CA: jnz     short loc_44E2F8
0x44E2CC: push    54h ; 'T'; Size
0x44E2CE: call    FormHeapAlloc
0x44E2D3: add     esp, 4
0x44E2D6: mov     dword ptr [ebp+108h+ArgList], eax
0x44E2D9: test    eax, eax
0x44E2DB: mov     [ebp+108h+var_10C], 3
0x44E2E2: jz      short loc_44E2ED
0x44E2E4: mov     ecx, eax; this
0x44E2E6: call    ??0TESPathGrid@@QAE@XZ; TESPathGrid::TESPathGrid(void)
0x44E2EB: jmp     short loc_44E2EF
0x44E2ED: xor     eax, eax
0x44E2EF: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44E2F6: mov     esi, eax
0x44E2F8: mov     ecx, ds:0B33A9Ch
0x44E2FE: push    ecx
0x44E2FF: mov     ecx, esi
0x44E301: call    sub_4A6D70
0x44E306: mov     ecx, ds:0B33A9Ch
0x44E30C: push    esi
0x44E30D: call    sub_4C9B10
0x44E312: push    edi
0x44E313: push    esi
0x44E314: call    TESDataHandler_LoadForm
0x44E319: add     esp, 8
0x44E31C: mov     eax, 1
0x44E321: jmp     TESDataHandler_LoadFormRecord___Done
0x44E326: mov     ecx, edi; jumptable 0044DE2E case 3
0x44E328: call    TESFile_GetChunkType
0x44E32D: cmp     eax, 44494445h
0x44E332: jnz     short TESDataHandler_LoadFormRecord___LoadGameSetting_Return_1
0x44E334: mov     eax, [edi+254h]
0x44E33A: call    __alloca?
0x44E33F: mov     esi, esp
0x44E341: push    0; a4
0x44E343: push    esi; Dst
0x44E344: mov     ecx, edi; a1
0x44E346: call    TESFile_GetChunkData
0x44E34B: mov     edx, ds:0B35468h
0x44E351: mov     eax, [edx+24h]
0x44E354: push    esi
0x44E355: push    edi
0x44E356: mov     ecx, offset GameSettingCollection
0x44E35B: call    eax
0x44E35D: mov     eax, 1
0x44E362: jmp     TESDataHandler_LoadFormRecord___Done
0x44E367: mov     ecx, edi; jumptable 0044DE2E case 12
0x44E369: call    TESFile_GetChunkType
0x44E36E: cmp     eax, 44494445h
0x44E373: jnz     TESDataHandler_LoadFormRecord___LoadEffectSetting_Return_1
0x44E379: mov     eax, [edi+254h]
0x44E37F: call    __alloca?
0x44E384: mov     esi, esp
0x44E386: push    0; a4
0x44E388: push    esi; Dst
0x44E389: mov     ecx, edi; a1
0x44E38B: call    TESFile_GetChunkData
0x44E390: push    esi
0x44E391: call    EffectSettingCollection_LookupByCodeString
0x44E396: add     esp, 4
0x44E399: test    eax, eax
0x44E39B: jz      short TESDataHandler_LoadFormRecord___CreateNewEffectSetting
0x44E39D: push    edi
0x44E39E: push    eax
0x44E39F: call    TESDataHandler_LoadForm
0x44E3A4: add     esp, 8
0x44E3A7: mov     eax, 1
0x44E3AC: jmp     TESDataHandler_LoadFormRecord___Done
0x44E3B1: push    0A8h ; '¨'; Size
0x44E3B6: call    FormHeapAlloc
0x44E3BB: add     esp, 4
0x44E3BE: mov     dword ptr [ebp+108h+ArgList], eax
0x44E3C1: test    eax, eax
0x44E3C3: mov     [ebp+108h+var_10C], 4
0x44E3CA: jz      short loc_44E3D7
0x44E3CC: mov     ecx, eax; this
0x44E3CE: call    ??0EffectSetting@@QAE@XZ; EffectSetting::EffectSetting(void)
0x44E3D3: mov     esi, eax
0x44E3D5: jmp     short loc_44E3D9
0x44E3D7: xor     esi, esi
0x44E3D9: push    esi
0x44E3DA: mov     ecx, edi; this
0x44E3DC: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44E3E3: call    TESFile_InitializeFormFromRecord
0x44E3E8: mov     ecx, [ebp+108h+var_11C]
0x44E3EB: push    esi
0x44E3EC: add     ecx, 8B8h
0x44E3F2: call    BSSimpleList_PushFront
0x44E3F7: mov     eax, 1
0x44E3FC: jmp     TESDataHandler_LoadFormRecord___Done
0x44E401: test    esi, esi; jumptable 0044DE2E case 53
0x44E403: jnz     short loc_44E45A
0x44E405: push    0E0h ; 'à'; Size
0x44E40A: call    FormHeapAlloc
0x44E40F: add     esp, 4
0x44E412: mov     dword ptr [ebp+108h+ArgList], eax
0x44E415: test    eax, eax
0x44E417: mov     [ebp+108h+var_10C], 5
0x44E41E: jz      short loc_44E42B
0x44E420: mov     ecx, eax; this
0x44E422: call    ??0TESWorldSpace@@QAE@XZ; TESWorldSpace::TESWorldSpace(void)
0x44E427: mov     esi, eax
0x44E429: jmp     short loc_44E42D
0x44E42B: xor     esi, esi
0x44E42D: push    edi
0x44E42E: push    esi
0x44E42F: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44E436: call    TESDataHandler_LoadForm
0x44E43B: mov     ecx, [ebp+108h+var_11C]
0x44E43E: add     esp, 8
0x44E441: push    esi
0x44E442: add     ecx, 0Ch
0x44E445: call    BSSimpleList_PushBack
0x44E44A: mov     ds:0B33AA0h, esi
0x44E450: mov     eax, 1
0x44E455: jmp     TESDataHandler_LoadFormRecord___Done
0x44E45A: push    edi
0x44E45B: push    esi
0x44E45C: call    TESDataHandler_LoadForm
0x44E461: add     esp, 8
0x44E464: mov     ds:0B33AA0h, esi
0x44E46A: mov     eax, 1
0x44E46F: jmp     TESDataHandler_LoadFormRecord___Done
0x44E474: test    esi, esi; jumptable 0044DE2E case 57
0x44E476: jnz     loc_44E291
0x44E47C: push    3Ch ; '<'; Size
0x44E47E: call    FormHeapAlloc
0x44E483: add     esp, 4
0x44E486: mov     dword ptr [ebp+108h+ArgList], eax
0x44E489: test    eax, eax
0x44E48B: mov     [ebp+108h+var_10C], 6
0x44E492: jz      short loc_44E4A0
0x44E494: push    esi
0x44E495: mov     ecx, eax
0x44E497: call    sub_52FB40
0x44E49C: mov     esi, eax
0x44E49E: jmp     short loc_44E4A2
0x44E4A0: xor     esi, esi
0x44E4A2: push    edi
0x44E4A3: push    esi
0x44E4A4: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44E4AB: call    TESDataHandler_LoadForm
0x44E4B0: mov     ecx, [ebp+108h+var_11C]
0x44E4B3: add     esp, 8
0x44E4B6: push    esi
0x44E4B7: add     ecx, 7Ch ; '|'
0x44E4BA: call    BSSimpleList_PushBack
0x44E4BF: mov     eax, 1
0x44E4C4: jmp     TESDataHandler_LoadFormRecord___Done
0x44E4C9: test    esi, esi; jumptable 0044DE2E case 58
0x44E4CB: jnz     short loc_44E4FA
0x44E4CD: push    38h ; '8'; Size
0x44E4CF: call    FormHeapAlloc
0x44E4D4: add     esp, 4
0x44E4D7: mov     dword ptr [ebp+108h+ArgList], eax
0x44E4DA: test    eax, eax
0x44E4DC: mov     [ebp+108h+var_10C], 7
0x44E4E3: jz      short loc_44E4EF
0x44E4E5: push    esi
0x44E4E6: mov     ecx, eax; this
0x44E4E8: call    ??0TESTopicInfo@@QAE@XZ; TESTopicInfo::TESTopicInfo(void)
0x44E4ED: jmp     short loc_44E4F1
0x44E4EF: xor     eax, eax
0x44E4F1: mov     [ebp+108h+var_10C], 0FFFFFFFFh
0x44E4F8: mov     esi, eax
0x44E4FA: push    edi
0x44E4FB: push    esi
0x44E4FC: mov     ds:0B33AA4h, esi
0x44E502: call    TESDataHandler_LoadForm
0x44E507: add     esp, 8
0x44E50A: movzx   eax, al
0x44E50D: jmp     TESDataHandler_LoadFormRecord___Done
0x44E512: test    esi, esi; jumptable 0044DE2E case 11
0x44E514: jz      loc_44E29B
0x44E51A: push    0; int
0x44E51C: push    offset ??_R0?AVTESSkill@@@8; struct TypeDescriptor *
0x44E521: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44E526: push    0; int
0x44E528: push    esi; void *
0x44E529: call    OblivionDynamicCast
0x44E52E: mov     esi, eax
0x44E530: add     esp, 14h
0x44E533: test    esi, esi
0x44E535: jz      loc_44E29B
0x44E53B: mov     ecx, esi
0x44E53D: call    TESSkill_ClearTESSkill
0x44E542: push    edi
0x44E543: push    esi
0x44E544: call    TESDataHandler_LoadForm
0x44E549: add     esp, 8
0x44E54C: mov     eax, 1
0x44E551: jmp     TESDataHandler_LoadFormRecord___Done
0x44E556: test    esi, esi; jumptable 0044DE2E case 60
0x44E558: jnz     loc_44E291
0x44E55E: push    ebx; a1
0x44E55F: call    TESForm_CreateDynamic
0x44E564: push    edi
0x44E565: push    eax
0x44E566: call    TESDataHandler_LoadForm
0x44E56B: add     esp, 0Ch
0x44E56E: mov     eax, 1
0x44E573: jmp     TESDataHandler_LoadFormRecord___Done
0x44E578: test    esi, esi; jumptable 0044DE2E cases 4-10,13-17,45-47,59,61-63,65-67
0x44E57A: jnz     loc_44E291
0x44E580: push    ebx; a1
0x44E581: call    TESForm_CreateDynamic
0x44E586: mov     esi, eax
0x44E588: push    edi
0x44E589: push    esi
0x44E58A: call    TESDataHandler_LoadForm
0x44E58F: mov     ecx, [ebp+108h+var_11C]
0x44E592: add     esp, 0Ch
0x44E595: push    esi
0x44E596: call    TESDataHandler_AddForm
0x44E59B: mov     eax, 1
0x44E5A0: jmp     TESDataHandler_LoadFormRecord___Done
0x44E5A5: test    esi, esi; jumptable 0044DE2E default case, cases 2,18-44,55,64
0x44E5A7: mov     cl, ds:0B06B18h
0x44E5AD: mov     [ebp+108h+var_11D], cl
0x44E5B0: mov     byte ptr ds:0B06B18h, 1
0x44E5B7: jz      short loc_44E5BF
0x44E5B9: mov     [ebp+108h+var_115], 0
0x44E5BD: jmp     short loc_44E5CA
0x44E5BF: push    ebx; a1
0x44E5C0: call    TESForm_CreateDynamic
0x44E5C5: add     esp, 4
0x44E5C8: mov     esi, eax
0x44E5CA: test    esi, esi
0x44E5CC: jnz     short loc_44E638
0x44E5CE: cmp     [edi+23Ch], esi
0x44E5D4: jz      short loc_44E61C
0x44E5D6: movzx   edx, byte ptr [edi+23Ch]
0x44E5DD: mov     al, [edi+23Dh]
0x44E5E3: mov     cl, [edi+23Eh]
0x44E5E9: mov     [ebp+108h+var_107], al
0x44E5EC: mov     [ebp+108h+var_108], dl
0x44E5EF: movzx   edx, byte ptr [edi+23Fh]
0x44E5F6: lea     eax, [ebp+108h+var_108]
0x44E5F9: push    eax; ArgList
0x44E5FA: push    offset aUnknownS_idInC; "Unknown %s_ID in ConstructObject."
0x44E5FF: mov     [ebp+108h+var_106], cl
0x44E602: mov     [ebp+108h+var_105], dl
0x44E605: mov     [ebp+108h+var_104], 0
0x44E609: call    PrintError
0x44E60E: mov     cl, [ebp+108h+var_11D]
0x44E611: add     esp, 8
0x44E614: mov     ds:0B06B18h, cl
0x44E61A: jmp     short TESDataHandler_LoadFormRecord___Return_0
0x44E61C: test    ebx, ebx
0x44E61E: jnz     short loc_44E62D
0x44E620: push    offset aNo_formTryingT; "NO_FORM trying to load in ConstructObje"...
0x44E625: call    PrintError
0x44E62A: add     esp, 4
0x44E62D: mov     cl, [ebp+108h+var_11D]
0x44E630: mov     ds:0B06B18h, cl
0x44E636: jmp     short TESDataHandler_LoadFormRecord___Return_0
0x44E638: mov     dl, [ebp+108h+var_11D]
0x44E63B: push    edi
0x44E63C: push    esi
0x44E63D: mov     ds:0B06B18h, dl
0x44E643: call    TESDataHandler_LoadForm
0x44E648: add     esp, 8
0x44E64B: test    al, al
0x44E64D: jz      short loc_44E667
0x44E64F: cmp     [ebp+108h+var_115], 0
0x44E653: jz      short loc_44E660
0x44E655: mov     eax, [ebp+108h+var_11C]
0x44E658: mov     ecx, [eax]
0x44E65A: push    esi
0x44E65B: call    TESObjectListHead_AddObject
0x44E660: mov     eax, 1
0x44E665: jmp     short TESDataHandler_LoadFormRecord___Done
0x44E667: mov     edx, [esi]
0x44E669: mov     eax, [edx+10h]
0x44E66C: push    1
0x44E66E: mov     ecx, esi
0x44E670: call    eax
0x44E672: xor     eax, eax
0x44E674: lea     esp, [ebp-38h]
0x44E677: mov     ecx, [ebp+108h+var_114]
0x44E67A: mov     large fs:0, ecx
0x44E681: pop     ecx
0x44E682: pop     edi
0x44E683: pop     esi
0x44E684: pop     ebx
0x44E685: mov     ecx, [ebp+108h+var_4]
0x44E68B: xor     ecx, ebp
0x44E68D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x44E692: add     ebp, 108h
0x44E698: mov     esp, ebp
0x44E69A: pop     ebp
0x44E69B: retn    8
