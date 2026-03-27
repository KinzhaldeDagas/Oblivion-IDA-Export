0x527E40: push    ebp
0x527E41: mov     ebp, esp
0x527E43: sub     esp, 60h
0x527E46: mov     eax, ds:0B30AACh
0x527E4B: xor     eax, ebp
0x527E4D: mov     [ebp+var_4], eax
0x527E50: push    ebx
0x527E51: mov     ebx, [ebp+a2]
0x527E54: push    esi
0x527E55: mov     esi, ecx
0x527E57: push    edi
0x527E58: mov     ecx, ebx
0x527E5A: mov     [ebp+var_50], ebx
0x527E5D: call    TESFile_GetRecordType
0x527E62: cmp     al, 23h ; '#'
0x527E64: jz      short loc_527E6D
0x527E66: xor     al, al
0x527E68: jmp     loc_528506
0x527E6D: mov     eax, [ebx+25Ch]
0x527E73: push    esi
0x527E74: mov     ecx, ebx
0x527E76: mov     [esi+1ECh], eax
0x527E7C: call    TESFile_InitializeFormFromRecord
0x527E81: xor     edi, edi
0x527E83: push    edi; a2
0x527E84: mov     ecx, esi; this
0x527E86: call    TESForm_SetIsLinked
0x527E8B: mov     ecx, ebx
0x527E8D: mov     byte ptr [ebp+a1.member.refID+3], 0
0x527E91: call    TESFile_GetChunkType
0x527E96: cmp     eax, edi
0x527E98: jz      loc_5284DA
0x527E9E: cmp     eax, 4D414E43h
0x527EA3: jg      loc_5280D0
0x527EA9: jz      loc_5280B4
0x527EAF: cmp     eax, 41544144h
0x527EB4: jg      loc_527FEA
0x527EBA: jz      short loc_527F35
0x527EBC: cmp     eax, 334D414Eh
0x527EC1: jg      short loc_527F13
0x527EC3: jz      short loc_527EDE
0x527EC5: cmp     eax, 304D414Eh
0x527ECA: jz      short loc_527EDE
0x527ECC: cmp     eax, 314D414Eh
0x527ED1: jz      short loc_527EDE
0x527ED3: cmp     eax, 324D414Eh
0x527ED8: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527EDE: cmp     byte ptr [ebp+a1.member.refID+3], 0
0x527EE2: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527EE8: mov     eax, [esi+0Ch]
0x527EEB: mov     edx, [esi]
0x527EED: lea     ecx, [ebx+1Ch]
0x527EF0: push    ecx
0x527EF1: push    eax
0x527EF2: mov     eax, [edx+0D4h]
0x527EF8: mov     ecx, esi
0x527EFA: call    eax
0x527EFC: push    eax; ArgList
0x527EFD: push    offset aFoundFaceTextu; "Found face texture for NPC '%s' (%08X) "...
0x527F02: call    PrintError
0x527F07: add     esp, 10h
0x527F0A: mov     byte ptr [ebp+a1.member.refID+3], 1
0x527F0E: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527F13: cmp     eax, 394D414Eh
0x527F18: jz      loc_52835A
0x527F1E: cmp     eax, 41474746h
0x527F23: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527F29: xor     ecx, ecx
0x527F2B: mov     edx, 1
0x527F30: jmp     loc_5283E1
0x527F35: mov     ecx, esi; this
0x527F37: call    sub_46BFD0
0x527F3C: mov     ecx, [ebx+254h]
0x527F42: sub     ecx, eax
0x527F44: cmp     ecx, 17h
0x527F47: jnz     short loc_527FA9
0x527F49: push    ecx; a4
0x527F4A: xor     eax, eax
0x527F4C: lea     ecx, [ebp+a1.member.modlist.next]
0x527F4F: push    ecx; Dst
0x527F50: push    ebx; a2
0x527F51: mov     ecx, esi; this
0x527F53: mov     [ebp+a1.member.modlist.next], eax
0x527F56: mov     dword ptr [ebp+var_18], eax
0x527F59: mov     dword ptr [ebp+var_18+4], eax
0x527F5C: mov     dword ptr [ebp+var_18+8], eax
0x527F5F: mov     dword ptr [ebp+anonymous_0+3], eax
0x527F62: mov     [ebp+var_8], ax
0x527F66: mov     [ebp+var_6], al
0x527F69: call    TESForm_LoadGenericComponents
0x527F6E: mov     edx, [ebp+a1.member.modlist.next+1]
0x527F71: mov     eax, dword ptr [ebp+var_18+1]
0x527F74: mov     ecx, dword ptr [ebp+var_18+5]
0x527F77: mov     [esi+0ECh], edx
0x527F7D: mov     edx, dword ptr [ebp+anonymous_0]
0x527F80: mov     [esi+0F0h], eax
0x527F86: mov     eax, dword ptr [ebp+anonymous_0+4]
0x527F89: mov     [esi+0F4h], ecx
0x527F8F: mov     cl, byte ptr [ebp+var_8+1]
0x527F92: mov     [esi+0F8h], edx
0x527F98: mov     [esi+0FCh], eax
0x527F9E: mov     [esi+100h], cl
0x527FA4: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527FA9: cmp     ecx, 15h
0x527FAC: jnz     short loc_527FC3
0x527FAE: push    ecx; a4
0x527FAF: lea     edx, [esi+0ECh]
0x527FB5: push    edx; Dst
0x527FB6: push    ebx; a2
0x527FB7: mov     ecx, esi; this
0x527FB9: call    TESForm_LoadGenericComponents
0x527FBE: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527FC3: mov     eax, [esi+0Ch]
0x527FC6: mov     edx, [esi]
0x527FC8: lea     ecx, [ebx+1Ch]
0x527FCB: push    ecx
0x527FCC: push    eax
0x527FCD: mov     eax, [edx+0D4h]
0x527FD3: mov     ecx, esi
0x527FD5: call    eax
0x527FD7: push    eax; ArgList
0x527FD8: push    offset aUnrecognizedDa; "Unrecognized data format for NPC '%s' ("...
0x527FDD: call    PrintError
0x527FE2: add     esp, 10h
0x527FE5: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x527FEA: cmp     eax, 49524353h
0x527FEF: jg      loc_528089
0x527FF5: jz      short loc_528061
0x527FF7: cmp     eax, 42444F4Dh
0x527FFC: jz      loc_52849A
0x528002: cmp     eax, 44494445h
0x528007: jz      short loc_528033
0x528009: cmp     eax, 44494B50h
0x52800E: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528014: lea     ecx, [ebp+a1.member.modlist]
0x528017: push    ecx
0x528018: mov     ecx, ebx
0x52801A: mov     [ebp+a1.member.modlist.data], edi
0x52801D: call    TESFile_GetChunkData4
0x528022: mov     edx, [ebp+a1.member.modlist.data]
0x528025: push    edx
0x528026: lea     ecx, [esi+68h]
0x528029: call    TESAIForm_AddPackage
0x52802E: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528033: mov     eax, [ebx+254h]
0x528039: call    __alloca?
0x52803E: mov     edi, esp
0x528040: push    200h; a4
0x528045: push    edi; Dst
0x528046: mov     ecx, ebx; a1
0x528048: call    TESFile_GetChunkData
0x52804D: mov     eax, [esi]
0x52804F: mov     edx, [eax+0D8h]
0x528055: push    edi
0x528056: mov     ecx, esi
0x528058: call    edx
0x52805A: xor     edi, edi
0x52805C: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528061: lea     eax, [ebp+a1.member.modlist]
0x528064: push    eax
0x528065: mov     ecx, ebx
0x528067: mov     [ebp+a1.member.modlist.data], edi
0x52806A: call    TESFile_GetChunkData4
0x52806F: mov     ecx, [ebp+a1.member.modlist.data]
0x528072: mov     [esi+0C8h], ecx
0x528078: push    esi
0x528079: lea     ecx, [esi+0C4h]
0x52807F: call    TESScriptableForm_Link
0x528084: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528089: cmp     eax, 4C444F4Dh
0x52808E: jz      loc_52849A
0x528094: cmp     eax, 4C4C5546h
0x528099: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52809F: lea     edx, [esi+0A0h]
0x5280A5: push    ebx
0x5280A6: push    edx
0x5280A7: call    TESFullname_Load
0x5280AC: add     esp, 8
0x5280AF: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5280B4: lea     eax, [ebp+a1.member.modlist]
0x5280B7: push    eax
0x5280B8: mov     ecx, ebx
0x5280BA: mov     [ebp+a1.member.modlist.data], edi
0x5280BD: call    TESFile_GetChunkData4
0x5280C2: mov     ecx, [ebp+a1.member.modlist.data]
0x5280C5: mov     [esi+104h], ecx
0x5280CB: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5280D0: cmp     eax, 4D414E5Ah
0x5280D5: jg      loc_5282DC
0x5280DB: jz      loc_5282BC
0x5280E1: add     eax, 0B2BEB1BBh; switch 15 cases
0x5280E6: cmp     eax, 0Eh
0x5280E9: ja      def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5280EF: movzx   edx, ds:byte_52853C[eax]
0x5280F6: jmp     ds:jpt_5280F6[edx*4]; switch jump
0x5280FD: xor     eax, eax; jumptable 005280F6 case 1296125523
0x5280FF: mov     dword ptr [ebp+Dst], eax
0x528102: mov     [ebp+var_3C], eax
0x528105: push    8; a4
0x528107: lea     eax, [ebp+Dst]
0x52810A: push    eax; Dst
0x52810B: mov     ecx, ebx; a1
0x52810D: call    TESFile_GetChunkData
0x528112: mov     ecx, [ebp+var_3C]
0x528115: mov     edx, dword ptr [ebp+Dst]
0x528118: push    ecx
0x528119: push    edx
0x52811A: lea     ecx, [esi+24h]
0x52811D: call    TESActorBaseData_SetFactionRank
0x528122: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528127: lea     eax, [ebp+a1.member.modlist]; jumptable 005280F6 case 1296125513
0x52812A: push    eax
0x52812B: mov     ecx, ebx
0x52812D: mov     [ebp+a1.member.modlist.data], edi
0x528130: call    TESFile_GetChunkData4
0x528135: mov     ecx, [ebp+a1.member.modlist.data]
0x528138: mov     [esi+38h], ecx
0x52813B: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528140: lea     edx, [ebp+a1.member.modlist]; jumptable 005280F6 case 1296125522
0x528143: push    edx
0x528144: mov     ecx, ebx
0x528146: mov     [ebp+a1.member.modlist.data], edi
0x528149: call    TESFile_GetChunkData4
0x52814E: mov     eax, [ebp+a1.member.modlist.data]
0x528151: mov     [esi+0E8h], eax
0x528157: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52815C: lea     ecx, [ebp+a1.member]; jumptable 005280F6 case 1296125512
0x52815F: push    ecx
0x528160: mov     ecx, ebx
0x528162: call    TESFile_GetChunkData4
0x528167: lea     edx, [ebp+a1.member]
0x52816A: push    ebx; a2
0x52816B: push    edx; a1
0x52816C: call    TESForm_ResolveFormID
0x528171: mov     eax, dword ptr [ebp+a1.member.type]
0x528174: mov     ecx, ds:0B33A98h
0x52817A: add     esp, 8
0x52817D: push    edi; int
0x52817E: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x528183: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x528188: push    edi; int
0x528189: push    eax
0x52818A: call    TESDataHandler_LookupFormByID
0x52818F: push    eax; void *
0x528190: call    OblivionDynamicCast
0x528195: add     esp, 14h
0x528198: cmp     eax, edi
0x52819A: jz      short loc_5281A7
0x52819C: mov     [esi+1C8h], eax
0x5281A2: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5281A7: mov     eax, [esi+0Ch]
0x5281AA: mov     edx, [esi]
0x5281AC: push    eax
0x5281AD: mov     eax, [edx+0D4h]
0x5281B3: mov     ecx, esi
0x5281B5: call    eax
0x5281B7: mov     ecx, dword ptr [ebp+a1.member.type]
0x5281BA: push    eax
0x5281BB: push    ecx; ArgList
0x5281BC: push    offset aCouldNotFindHa; "Could not find hair (%08X) on NPC '%s' "...
0x5281C1: call    PrintError
0x5281C6: add     esp, 10h
0x5281C9: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5281CE: lea     edx, [ebp+a1.member.flags]; jumptable 005280F6 case 1296125516
0x5281D1: push    edx
0x5281D2: mov     ecx, ebx
0x5281D4: call    TESFile_GetChunkData4
0x5281D9: fldz
0x5281DB: fld     [ebp+a1.member.flags]
0x5281DE: fcom    st(1)
0x5281E0: fnstsw  ax
0x5281E2: test    ah, 5
0x5281E5: jp      short loc_5281FA
0x5281E7: fstp    st
0x5281E9: fstp    [ebp+a1.member.flags]
0x5281EC: fld     [ebp+a1.member.flags]
0x5281EF: fstp    dword ptr [esi+1CCh]
0x5281F5: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5281FA: fstp    st(1)
0x5281FC: fld1
0x5281FE: fcom    st(1)
0x528200: fnstsw  ax
0x528202: fstp    st(1)
0x528204: test    ah, 5
0x528207: jp      short loc_52821A
0x528209: fstp    [ebp+a1.member.flags]
0x52820C: fld     [ebp+a1.member.flags]
0x52820F: fstp    dword ptr [esi+1CCh]
0x528215: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52821A: fstp    st
0x52821C: fld     [ebp+a1.member.flags]
0x52821F: fstp    dword ptr [esi+1CCh]
0x528225: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52822A: lea     eax, [ebp+a1]; jumptable 005280F6 case 1296125509
0x52822D: push    eax
0x52822E: mov     ecx, ebx
0x528230: call    TESFile_GetChunkData4
0x528235: lea     ecx, [ebp+a1]
0x528238: push    ebx; a2
0x528239: push    ecx; a1
0x52823A: call    TESForm_ResolveFormID
0x52823F: mov     edx, [ebp+a1.vtbl]
0x528242: mov     ecx, ds:0B33A98h
0x528248: add     esp, 8
0x52824B: push    edi; int
0x52824C: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x528251: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x528256: push    edi; int
0x528257: push    edx
0x528258: call    TESDataHandler_LookupFormByID
0x52825D: push    eax; void *
0x52825E: call    OblivionDynamicCast
0x528263: add     esp, 14h
0x528266: cmp     eax, edi
0x528268: jz      short loc_528275
0x52826A: mov     [esi+1D0h], eax
0x528270: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528275: mov     eax, [esi+0Ch]
0x528278: push    eax
0x528279: mov     eax, [esi]
0x52827B: mov     edx, [eax+0D4h]
0x528281: mov     ecx, esi
0x528283: call    edx
0x528285: push    eax
0x528286: mov     eax, [ebp+a1.vtbl]
0x528289: push    eax; ArgList
0x52828A: push    offset aCouldNotFindEy; "Could not find eyes (%08X) on NPC '%s' "...
0x52828F: call    PrintError
0x528294: add     esp, 10h
0x528297: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52829C: cmp     dword ptr [ebx+254h], 2; jumptable 005280F6 case 1296125510
0x5282A3: jb      def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5282A9: lea     ecx, [esi+1E0h]
0x5282AF: push    ecx
0x5282B0: mov     ecx, ebx
0x5282B2: call    TESFile_GetChunkData2
0x5282B7: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5282BC: lea     edx, [ebp+var_4C]
0x5282BF: push    edx
0x5282C0: mov     ecx, ebx
0x5282C2: call    TESFile_GetChunkData4
0x5282C7: mov     ecx, [ebp+var_4C]
0x5282CA: mov     eax, [esi]
0x5282CC: mov     edx, [eax+124h]
0x5282D2: push    ecx
0x5282D3: mov     ecx, esi
0x5282D5: call    edx
0x5282D7: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5282DC: cmp     eax, 53474746h
0x5282E1: jg      loc_52838E
0x5282E7: jz      loc_52838A
0x5282ED: cmp     eax, 524C4348h
0x5282F2: jg      short loc_52836D
0x5282F4: jz      short loc_52835A
0x5282F6: cmp     eax, 4F4C5053h
0x5282FB: jz      short loc_52833B
0x5282FD: cmp     eax, 4F544E43h
0x528302: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528308: xor     eax, eax
0x52830A: mov     dword ptr [ebp+var_48], eax
0x52830D: mov     [ebp+var_44], eax
0x528310: push    8; a4
0x528312: lea     eax, [ebp+var_48]
0x528315: push    eax; Dst
0x528316: mov     ecx, ebx; a1
0x528318: call    TESFile_GetChunkData
0x52831D: lea     edi, [esi+44h]
0x528320: push    0
0x528322: mov     ecx, edi
0x528324: call    TESContainer_SetLinkFlag
0x528329: lea     ecx, [ebp+var_48]
0x52832C: push    ecx
0x52832D: mov     ecx, edi
0x52832F: call    TESContainer_AddUnlinkedForm
0x528334: xor     edi, edi
0x528336: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52833B: lea     edx, [ebp+a1.member.modlist]
0x52833E: push    edx
0x52833F: mov     ecx, ebx
0x528341: mov     [ebp+a1.member.modlist.data], edi
0x528344: call    TESFile_GetChunkData4
0x528349: mov     eax, [ebp+a1.member.modlist.data]
0x52834C: push    eax
0x52834D: lea     ecx, [esi+54h]
0x528350: call    TESSpellList_AddFormToSpellList
0x528355: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52835A: lea     ecx, [esi+1E8h]
0x528360: push    ecx
0x528361: mov     ecx, ebx
0x528363: call    TESFile_GetChunkData4
0x528368: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52836D: cmp     eax, 53424341h
0x528372: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x528378: push    10h; a4
0x52837A: lea     edx, [esi+28h]
0x52837D: push    edx; Dst
0x52837E: mov     ecx, ebx; a1
0x528380: call    TESFile_GetChunkData
0x528385: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52838A: xor     ecx, ecx
0x52838C: jmp     short loc_5283DF
0x52838E: cmp     eax, 54444F4Dh
0x528393: jg      loc_5284AC
0x528399: jz      loc_52849A
0x52839F: cmp     eax, 53544746h
0x5283A4: jz      short loc_5283DA
0x5283A6: cmp     eax, 54444941h
0x5283AB: jnz     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5283B1: xor     eax, eax
0x5283B3: mov     dword ptr [ebp+var_5C], eax
0x5283B6: mov     [ebp+var_58], eax
0x5283B9: mov     [ebp+var_54], eax
0x5283BC: push    0Ch; a4
0x5283BE: lea     eax, [ebp+var_5C]
0x5283C1: push    eax; Dst
0x5283C2: mov     ecx, ebx; a1
0x5283C4: call    TESFile_GetChunkData
0x5283C9: lea     ecx, [ebp+var_5C]
0x5283CC: push    ecx
0x5283CD: lea     ecx, [esi+68h]
0x5283D0: call    TESAIForm_SetNonPackageData
0x5283D5: jmp     def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5283DA: mov     ecx, 1
0x5283DF: xor     edx, edx
0x5283E1: mov     eax, [ebx+254h]
0x5283E7: fldz
0x5283E9: lea     ecx, [edx+ecx*2+0Bh]
0x5283ED: lea     edx, [ecx+ecx*2]
0x5283F0: push    ecx
0x5283F1: lea     edi, [esi+edx*8]
0x5283F4: fstp    [esp+70h+var_70]; int
0x5283F7: mov     [ebp+a1.member.modlist.data], eax
0x5283FA: shr     eax, 2
0x5283FD: push    eax; int
0x5283FE: lea     ecx, [edi+8]; int
0x528401: mov     [ebp+var_34], eax
0x528404: mov     [edi], eax
0x528406: mov     dword ptr [edi+4], 1
0x52840D: call    sub_527160
0x528412: mov     eax, [ebp+a1.member.modlist.data]
0x528415: call    __alloca?
0x52841A: mov     ecx, [ebp+a1.member.modlist.data]
0x52841D: mov     eax, esp
0x52841F: push    ecx
0x528420: push    0
0x528422: push    eax
0x528423: mov     [ebp+var_38], eax
0x528426: call    __memset
0x52842B: mov     edx, [ebp+a1.member.modlist.data]
0x52842E: mov     eax, [ebp+var_38]
0x528431: add     esp, 0Ch
0x528434: push    edx; a4
0x528435: push    eax; Dst
0x528436: mov     ecx, ebx; a1
0x528438: call    TESFile_GetChunkData
0x52843D: xor     eax, eax
0x52843F: cmp     [ebp+var_34], eax
0x528442: mov     [ebp+a1.member.modlist.data], eax
0x528445: jbe     short loc_528480
0x528447: mov     ecx, [edi+0Ch]
0x52844A: test    ecx, ecx
0x52844C: jz      short loc_528458
0x52844E: mov     edx, [edi+10h]
0x528451: sub     edx, ecx
0x528453: sar     edx, 2
0x528456: jnz     short loc_528460
0x528458: call    __invalid_parameter_noinfo
0x52845D: mov     eax, [ebp+a1.member.modlist.data]
0x528460: mov     ecx, [edi+4]
0x528463: mov     ebx, [ebp+var_38]
0x528466: imul    ecx, eax
0x528469: fld     dword ptr [ebx+eax*4]
0x52846C: mov     edx, [edi+0Ch]
0x52846F: add     eax, 1
0x528472: cmp     eax, [ebp+var_34]
0x528475: fstp    dword ptr [edx+ecx*4]
0x528478: mov     [ebp+a1.member.modlist.data], eax
0x52847B: jb      short loc_528447
0x52847D: mov     ebx, [ebp+var_50]
0x528480: lea     eax, [esi+168h]
0x528486: push    eax
0x528487: lea     ecx, [esi+108h]
0x52848D: push    ecx
0x52848E: call    sub_5528F0
0x528493: add     esp, 8
0x528496: xor     edi, edi
0x528498: jmp     short def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x52849A: lea     edx, [esi+0ACh]
0x5284A0: push    ebx
0x5284A1: push    edx
0x5284A2: call    TESModel_Load
0x5284A7: add     esp, 8
0x5284AA: jmp     short def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5284AC: cmp     eax, 5A46464Bh
0x5284B1: jnz     short def_5280F6; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5284B3: lea     ecx, [esi+94h]
0x5284B9: push    ebx
0x5284BA: push    ecx
0x5284BB: call    TESAnimation_LoadAnimationChunk
0x5284C0: mov     ecx, ebx; jumptable 005280F6 default case, cases 1296125511,1296125514,1296125515,1296125517-1296125521
0x5284C2: call    TESFile_GetNextChunk
0x5284C7: test    al, al
0x5284C9: jz      short loc_5284DA
0x5284CB: mov     ecx, ebx
0x5284CD: call    TESFile_GetChunkType
0x5284D2: cmp     eax, edi
0x5284D4: jnz     loc_527E9E
0x5284DA: cmp     dword ptr [esi+0Ch], 7
0x5284DE: jnz     short loc_528504
0x5284E0: mov     ecx, ds:0B333C4h
0x5284E6: cmp     ecx, edi
0x5284E8: jz      short loc_528504
0x5284EA: mov     eax, [ecx]
0x5284EC: mov     edx, [eax+170h]
0x5284F2: call    edx
0x5284F4: test    eax, eax
0x5284F6: jnz     short loc_528504
0x5284F8: mov     ecx, ds:0B333C4h; this
0x5284FE: push    esi; a2
0x5284FF: call    TESObjectREFR_SetBaseForm
0x528504: mov     al, 1
0x528506: lea     esp, [ebp-6Ch]
0x528509: pop     edi
0x52850A: pop     esi
0x52850B: pop     ebx
0x52850C: mov     ecx, [ebp+var_4]
0x52850F: xor     ecx, ebp
0x528511: call    @__security_check_cookie@4; __security_check_cookie(x)
0x528516: mov     esp, ebp
0x528518: pop     ebp
0x528519: retn    4
