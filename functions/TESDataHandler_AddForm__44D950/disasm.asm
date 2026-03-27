0x44D950: push    esi
0x44D951: mov     esi, [esp+4+arg_0]
0x44D955: test    esi, esi
0x44D957: push    edi
0x44D958: mov     edi, ecx
0x44D95A: jnz     short loc_44D963
0x44D95C: pop     edi
0x44D95D: xor     al, al
0x44D95F: pop     esi
0x44D960: retn    4
0x44D963: movzx   eax, byte ptr [esi+4]
0x44D967: add     eax, 0FFFFFFFCh; switch 64 cases
0x44D96A: cmp     eax, 3Fh
0x44D96D: push    ebx
0x44D96E: ja      TESDataHandler_AddForm___def_44D97B; jumptable 0044D97B default case, cases 11,12,18-44,48,50-52,54-58,60,64
0x44D974: movzx   eax, ds:byte_44DCA8[eax]
0x44D97B: jmp     ds:jpt_44D97B[eax*4]; switch jump
0x44D982: mov     ecx, [edi+0BCh]; jumptable 0044D97B case 47
0x44D988: push    esi
0x44D989: add     ecx, 4
0x44D98C: call    BSSimpleList_PushFront
0x44D991: pop     ebx
0x44D992: pop     edi
0x44D993: mov     al, 1
0x44D995: pop     esi
0x44D996: retn    4
0x44D999: push    esi; jumptable 0044D97B case 6
0x44D99A: lea     ecx, [edi+5Ch]
0x44D99D: call    BSSimpleList_PushFront
0x44D9A2: pop     ebx
0x44D9A3: pop     edi
0x44D9A4: mov     al, 1
0x44D9A6: pop     esi
0x44D9A7: retn    4
0x44D9AA: push    esi; jumptable 0044D97B case 5
0x44D9AB: lea     ecx, [edi+54h]
0x44D9AE: call    BSSimpleList_PushFront
0x44D9B3: pop     ebx
0x44D9B4: pop     edi
0x44D9B5: mov     al, 1
0x44D9B7: pop     esi
0x44D9B8: retn    4
0x44D9BB: push    esi; jumptable 0044D97B case 7
0x44D9BC: lea     ecx, [edi+34h]
0x44D9BF: call    BSSimpleList_PushFront
0x44D9C4: pop     ebx
0x44D9C5: pop     edi
0x44D9C6: mov     al, 1
0x44D9C8: pop     esi
0x44D9C9: retn    4
0x44D9CC: push    esi; jumptable 0044D97B case 8
0x44D9CD: lea     ecx, [edi+3Ch]
0x44D9D0: call    BSSimpleList_PushFront
0x44D9D5: pop     ebx
0x44D9D6: pop     edi
0x44D9D7: mov     al, 1
0x44D9D9: pop     esi
0x44D9DA: retn    4
0x44D9DD: push    esi; jumptable 0044D97B case 9
0x44D9DE: lea     ecx, [edi+44h]
0x44D9E1: call    BSSimpleList_PushFront
0x44D9E6: pop     ebx
0x44D9E7: pop     edi
0x44D9E8: mov     al, 1
0x44D9EA: pop     esi
0x44D9EB: retn    4
0x44D9EE: push    esi; jumptable 0044D97B case 59
0x44D9EF: lea     ecx, [edi+84h]
0x44D9F5: call    BSSimpleList_PushFront
0x44D9FA: pop     ebx
0x44D9FB: pop     edi
0x44D9FC: mov     al, 1
0x44D9FE: pop     esi
0x44D9FF: retn    4
0x44DA02: push    esi; jumptable 0044D97B case 10
0x44DA03: lea     ecx, [edi+6Ch]
0x44DA06: call    BSSimpleList_PushFront
0x44DA0B: pop     ebx
0x44DA0C: pop     edi
0x44DA0D: mov     al, 1
0x44DA0F: pop     esi
0x44DA10: retn    4
0x44DA13: push    esi; jumptable 0044D97B case 14
0x44DA14: lea     ecx, [edi+4Ch]
0x44DA17: call    BSSimpleList_PushFront
0x44DA1C: pop     ebx
0x44DA1D: pop     edi
0x44DA1E: mov     al, 1
0x44DA20: pop     esi
0x44DA21: retn    4
0x44DA24: push    esi; jumptable 0044D97B case 13
0x44DA25: lea     ecx, [edi+64h]
0x44DA28: call    BSSimpleList_PushFront
0x44DA2D: pop     ebx
0x44DA2E: pop     edi
0x44DA2F: mov     al, 1
0x44DA31: pop     esi
0x44DA32: retn    4
0x44DA35: push    esi; jumptable 0044D97B case 17
0x44DA36: lea     ecx, [edi+8Ch]
0x44DA3C: call    BSSimpleList_PushFront
0x44DA41: pop     ebx
0x44DA42: pop     edi
0x44DA43: mov     al, 1
0x44DA45: pop     esi
0x44DA46: retn    4
0x44DA49: push    esi; jumptable 0044D97B case 46
0x44DA4A: lea     ecx, [edi+14h]
0x44DA4D: call    BSSimpleList_PushFront
0x44DA52: pop     ebx
0x44DA53: pop     edi
0x44DA54: mov     al, 1
0x44DA56: pop     esi
0x44DA57: retn    4
0x44DA5A: push    esi; jumptable 0044D97B case 45
0x44DA5B: lea     ecx, [edi+1Ch]
0x44DA5E: call    BSSimpleList_PushFront
0x44DA63: pop     ebx
0x44DA64: pop     edi
0x44DA65: mov     al, 1
0x44DA67: pop     esi
0x44DA68: retn    4
0x44DA6B: push    esi; jumptable 0044D97B case 53
0x44DA6C: lea     ecx, [edi+0Ch]
0x44DA6F: call    BSSimpleList_PushFront
0x44DA74: pop     ebx
0x44DA75: pop     edi
0x44DA76: mov     al, 1
0x44DA78: pop     esi
0x44DA79: retn    4
0x44DA7C: push    esi; jumptable 0044D97B case 61
0x44DA7D: lea     ecx, [edi+4]
0x44DA80: call    BSSimpleList_PushFront
0x44DA85: pop     ebx
0x44DA86: pop     edi
0x44DA87: mov     al, 1
0x44DA89: pop     esi
0x44DA8A: retn    4
0x44DA8D: push    esi; jumptable 0044D97B case 4
0x44DA8E: lea     ecx, [edi+74h]
0x44DA91: call    BSSimpleList_PushFront
0x44DA96: pop     ebx
0x44DA97: pop     edi
0x44DA98: mov     al, 1
0x44DA9A: pop     esi
0x44DA9B: retn    4
0x44DA9E: push    esi; jumptable 0044D97B case 16
0x44DA9F: lea     ecx, [edi+2Ch]
0x44DAA2: call    BSSimpleList_PushFront
0x44DAA7: pop     ebx
0x44DAA8: pop     edi
0x44DAA9: mov     al, 1
0x44DAAB: pop     esi
0x44DAAC: retn    4
0x44DAAF: push    esi; jumptable 0044D97B case 15
0x44DAB0: lea     ecx, [edi+24h]
0x44DAB3: call    BSSimpleList_PushFront
0x44DAB8: pop     ebx
0x44DAB9: pop     edi
0x44DABA: mov     al, 1
0x44DABC: pop     esi
0x44DABD: retn    4
0x44DAC0: push    esi; jumptable 0044D97B case 62
0x44DAC1: lea     ecx, [edi+94h]
0x44DAC7: call    BSSimpleList_PushFront
0x44DACC: pop     ebx
0x44DACD: pop     edi
0x44DACE: mov     al, 1
0x44DAD0: pop     esi
0x44DAD1: retn    4
0x44DAD4: push    esi; jumptable 0044D97B case 63
0x44DAD5: lea     ecx, [edi+9Ch]
0x44DADB: call    BSSimpleList_PushFront
0x44DAE0: pop     ebx
0x44DAE1: pop     edi
0x44DAE2: mov     al, 1
0x44DAE4: pop     esi
0x44DAE5: retn    4
0x44DAE8: push    esi; jumptable 0044D97B case 66
0x44DAE9: lea     ecx, [edi+0A4h]
0x44DAEF: call    BSSimpleList_PushFront
0x44DAF4: pop     ebx
0x44DAF5: pop     edi
0x44DAF6: mov     al, 1
0x44DAF8: pop     esi
0x44DAF9: retn    4
0x44DAFC: push    esi; jumptable 0044D97B case 65
0x44DAFD: lea     ecx, [edi+0B4h]
0x44DB03: call    BSSimpleList_PushFront
0x44DB08: pop     ebx
0x44DB09: pop     edi
0x44DB0A: mov     al, 1
0x44DB0C: pop     esi
0x44DB0D: retn    4
0x44DB10: push    esi; jumptable 0044D97B case 67
0x44DB11: lea     ecx, [edi+0ACh]
0x44DB17: call    BSSimpleList_PushFront
0x44DB1C: pop     ebx
0x44DB1D: pop     edi
0x44DB1E: mov     al, 1
0x44DB20: pop     esi
0x44DB21: retn    4
0x44DB24: push    0; jumptable 0044D97B case 49
0x44DB26: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x44DB2B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44DB30: push    0; int
0x44DB32: push    esi; void *
0x44DB33: call    OblivionDynamicCast
0x44DB38: mov     esi, eax
0x44DB3A: add     esp, 14h
0x44DB3D: test    esi, esi
0x44DB3F: jz      loc_44DC0B
0x44DB45: mov     ecx, esi; this
0x44DB47: call    TESObjectREFR_GetParentCell
0x44DB4C: mov     ebx, eax
0x44DB4E: test    ebx, ebx
0x44DB50: jnz     short loc_44DB61
0x44DB52: mov     ecx, ds:0B333A0h
0x44DB58: mov     ebx, [ecx+34h]
0x44DB5B: test    ebx, ebx
0x44DB5D: jnz     short loc_44DBB0
0x44DB5F: jmp     short loc_44DB6C
0x44DB61: mov     ecx, ebx; this
0x44DB63: call    TESObjectCELL_IsInterior
0x44DB68: test    al, al
0x44DB6A: jnz     short loc_44DBAC
0x44DB6C: mov     edx, [esi]
0x44DB6E: mov     eax, [edx+174h]
0x44DB74: mov     ecx, esi
0x44DB76: call    eax
0x44DB78: mov     ecx, ds:0B333A0h
0x44DB7E: push    1; int
0x44DB80: mov     ebx, eax
0x44DB82: call    TES__GetCurrentWorldspace
0x44DB87: mov     edx, [esi]
0x44DB89: push    eax; int
0x44DB8A: mov     eax, [edx+174h]
0x44DB90: mov     ecx, esi
0x44DB92: call    eax
0x44DB94: fld     dword ptr [eax+4]
0x44DB97: sub     esp, 8
0x44DB9A: fstp    [esp+1Ch+var_18]; float
0x44DB9E: mov     ecx, edi
0x44DBA0: fld     dword ptr [ebx]
0x44DBA2: fstp    [esp+1Ch+var_1C]; float
0x44DBA5: call    sub_44A270
0x44DBAA: mov     ebx, eax
0x44DBAC: test    ebx, ebx
0x44DBAE: jz      short loc_44DC0B
0x44DBB0: push    esi; Concurrency::details::SchedulerBase *
0x44DBB1: mov     ecx, ebx
0x44DBB3: call    sub_4D35D0
0x44DBB8: mov     ecx, esi
0x44DBBA: call    sub_4DB3C0
0x44DBBF: test    al, al
0x44DBC1: jz      short loc_44DBCC
0x44DBC3: push    1
0x44DBC5: mov     ecx, esi
0x44DBC7: call    TESObjectREFR_SetPersistance
0x44DBCC: mov     ecx, esi; this
0x44DBCE: call    TESObjectREFR_IsTree
0x44DBD3: test    al, al
0x44DBD5: jz      short loc_44DC0B
0x44DBD7: push    1; a2
0x44DBD9: mov     ecx, esi; this
0x44DBDB: call    TESObjectREFR_SetVisibleWhenDistant?
0x44DBE0: pop     ebx
0x44DBE1: pop     edi
0x44DBE2: mov     al, 1
0x44DBE4: pop     esi
0x44DBE5: retn    4
0x44DBE8: push    0; jumptable 0044D97B default case, cases 11,12,18-44,48,50-52,54-58,60,64
0x44DBEA: push    offset ??_R0?AVTESObject@@@8; struct TypeDescriptor *
0x44DBEF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44DBF4: push    0; int
0x44DBF6: push    esi; void *
0x44DBF7: call    OblivionDynamicCast
0x44DBFC: add     esp, 14h
0x44DBFF: test    eax, eax
0x44DC01: jz      short loc_44DC13
0x44DC03: mov     ecx, [edi]
0x44DC05: push    eax
0x44DC06: call    TESObjectListHead_AddObject
0x44DC0B: pop     ebx
0x44DC0C: pop     edi
0x44DC0D: mov     al, 1
0x44DC0F: pop     esi
0x44DC10: retn    4
0x44DC13: mov     al, [esi+4]
0x44DC16: cmp     al, 45h ; 'E'
0x44DC18: jnb     short loc_44DC29
0x44DC1A: movzx   eax, al
0x44DC1D: lea     ecx, [eax+eax*2]
0x44DC20: mov     eax, ds:0B05E04h[ecx*4]
0x44DC27: jmp     short loc_44DC2E
0x44DC29: mov     eax, offset EmptyString
0x44DC2E: push    eax; ArgList
0x44DC2F: push    offset aUnknownFormTyp; "Unknown form type '%s' encountered in A"...
0x44DC34: call    PrintError
0x44DC39: add     esp, 8
0x44DC3C: pop     ebx
0x44DC3D: pop     edi
0x44DC3E: xor     al, al
0x44DC40: pop     esi
0x44DC41: retn    4
