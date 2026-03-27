0x56AE20: push    0FFFFFFFFh
0x56AE22: push    offset SEH_56AE20
0x56AE27: mov     eax, large fs:0
0x56AE2D: push    eax
0x56AE2E: sub     esp, 840h
0x56AE34: mov     eax, ds:0B30AACh
0x56AE39: xor     eax, esp
0x56AE3B: mov     [esp+84Ch+var_10], eax
0x56AE42: push    ebx
0x56AE43: push    ebp
0x56AE44: push    esi
0x56AE45: push    edi
0x56AE46: mov     eax, ds:0B30AACh
0x56AE4B: xor     eax, esp
0x56AE4D: push    eax
0x56AE4E: lea     eax, [esp+860h+var_C]
0x56AE55: mov     large fs:0, eax
0x56AE5B: mov     esi, [esp+860h+arg_0]
0x56AE62: mov     edi, ecx
0x56AE64: movzx   eax, byte ptr [edi+14h]
0x56AE68: push    eax
0x56AE69: lea     ebx, [edi+8]
0x56AE6C: push    ebx
0x56AE6D: push    esi
0x56AE6E: mov     [esp+86Ch+a1.member.refID], edi
0x56AE72: call    sub_56B2E0
0x56AE77: movzx   eax, word ptr [ebx]
0x56AE7A: lea     ecx, [eax+eax*4]
0x56AE7D: xor     ebp, ebp
0x56AE7F: add     esp, 0Ch
0x56AE82: cmp     ds:0B0C8E0h[ecx*8], ebp
0x56AE89: jnz     loc_56AFB4
0x56AE8F: mov     al, [esi+4]
0x56AE92: cmp     al, 3Ah ; ':'
0x56AE94: jnz     loc_56AF55
0x56AE9A: push    ebp; int
0x56AE9B: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x56AEA0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56AEA5: push    ebp; int
0x56AEA6: push    esi; void *
0x56AEA7: call    OblivionDynamicCast
0x56AEAC: mov     edi, eax
0x56AEAE: push    edi
0x56AEAF: call    TESTopic_static_GetTopicInfoParent?
0x56AEB4: add     esp, 18h
0x56AEB7: mov     ebx, eax
0x56AEB9: push    edi
0x56AEBA: mov     ecx, ebx
0x56AEBC: call    sub_52F570
0x56AEC1: mov     [esp+860h+a1.vtbl], eax
0x56AEC5: mov     [esp+860h+a1.member.modlist.next], ebp
0x56AEC9: mov     [esp+860h+var_834], bp
0x56AECE: mov     [esp+860h+var_832], bp
0x56AED3: push    ebp
0x56AED4: lea     edx, [esp+864h+a1.member.modlist.next]
0x56AED8: push    edx
0x56AED9: mov     ecx, edi
0x56AEDB: mov     [esp+868h+var_4], ebp
0x56AEE2: call    sub_531200
0x56AEE7: mov     ecx, [esp+860h+a1.vtbl]
0x56AEEB: mov     edx, [ecx+0Ch]
0x56AEEE: mov     eax, [ebx+0Ch]
0x56AEF1: mov     ecx, [esp+860h+a1.member.modlist.next]
0x56AEF5: mov     edi, [edi+0Ch]
0x56AEF8: mov     dword ptr [esp+860h+a1.member.type], edx
0x56AEFC: mov     edx, [ebx]
0x56AEFE: mov     [esp+860h+a1.member.modlist.data], ecx
0x56AF02: push    eax
0x56AF03: mov     eax, [edx+0D4h]
0x56AF09: mov     ecx, ebx
0x56AF0B: call    eax
0x56AF0D: mov     ecx, dword ptr [esp+864h+a1.member.type]
0x56AF11: push    eax
0x56AF12: push    ecx
0x56AF13: mov     ecx, [esp+86Ch+a1.vtbl]
0x56AF17: mov     edx, [ecx]
0x56AF19: mov     eax, [edx+0D4h]
0x56AF1F: call    eax
0x56AF21: mov     ecx, [esp+86Ch+a1.member.modlist.data]
0x56AF25: push    eax
0x56AF26: push    ecx
0x56AF27: push    edi
0x56AF28: lea     edx, [esp+878h+ArgList]
0x56AF2C: push    offset aTopicinfo08xSI; "TopicInfo %08X \"%s\" in Quest %s (%08x"...
0x56AF31: push    edx
0x56AF32: call    __sprintf
0x56AF37: mov     eax, [esp+880h+a1.member.modlist.next]
0x56AF3B: push    eax
0x56AF3C: mov     [esp+884h+var_4], 0FFFFFFFFh
0x56AF47: call    FormHeapFree
0x56AF4C: mov     edi, [esp+884h+a1.member.refID]
0x56AF50: add     esp, 24h
0x56AF53: jmp     short loc_56AF86
0x56AF55: mov     ecx, [esi+0Ch]
0x56AF58: movzx   eax, al
0x56AF5B: lea     edx, [eax+eax*2]
0x56AF5E: mov     eax, [esi]
0x56AF60: mov     ebx, ds:0B05E04h[edx*4]
0x56AF67: mov     edx, [eax+0D4h]
0x56AF6D: push    ecx
0x56AF6E: mov     ecx, esi
0x56AF70: call    edx
0x56AF72: push    eax
0x56AF73: push    ebx
0x56AF74: lea     eax, [esp+86Ch+ArgList]
0x56AF78: push    offset aFormSS08x; "Form %s %s (%08X)"
0x56AF7D: push    eax
0x56AF7E: call    __sprintf
0x56AF83: add     esp, 14h
0x56AF86: movzx   ebx, word ptr [edi+8]
0x56AF8A: push    0FFFFFFFFh; a2
0x56AF8C: mov     ecx, esi; this
0x56AF8E: call    TESForm_GetOverrideFile
0x56AF93: lea     ecx, [ebx+ebx*4]
0x56AF96: mov     edx, ds:0B0C8C0h[ecx*8]
0x56AF9D: push    edx
0x56AF9E: add     eax, 1Ch
0x56AFA1: push    eax
0x56AFA2: lea     eax, [esp+868h+ArgList]
0x56AFA6: push    eax; ArgList
0x56AFA7: push    offset aSInFileSContai; "%s in file %s contains bad condition it"...
0x56AFAC: call    PrintError
0x56AFB1: add     esp, 10h
0x56AFB4: test    byte ptr [edi], 4
0x56AFB7: jz      loc_56B137
0x56AFBD: mov     eax, [edi+4]
0x56AFC0: cmp     eax, ebp
0x56AFC2: jz      loc_56B137
0x56AFC8: push    0FFFFFFFFh; a2
0x56AFCA: mov     ecx, esi; this
0x56AFCC: mov     [esp+864h+a1.vtbl], eax
0x56AFD0: call    TESForm_GetOverrideFile
0x56AFD5: push    eax; a2
0x56AFD6: lea     ecx, [esp+864h+a1]
0x56AFDA: push    ecx; a1
0x56AFDB: call    TESForm_ResolveFormID
0x56AFE0: mov     edx, [esp+868h+a1.vtbl]
0x56AFE4: add     esp, 8
0x56AFE7: push    ebp; int
0x56AFE8: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x56AFED: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56AFF2: push    ebp; int
0x56AFF3: push    edx; a1
0x56AFF4: call    TESForm_LookupByFormID
0x56AFF9: add     esp, 4
0x56AFFC: push    eax; void *
0x56AFFD: call    OblivionDynamicCast
0x56B002: add     esp, 14h
0x56B005: cmp     eax, ebp
0x56B007: mov     [edi+4], eax
0x56B00A: jnz     loc_56B137
0x56B010: mov     al, [esi+4]
0x56B013: cmp     al, 3Ah ; ':'
0x56B015: jnz     loc_56B0E4
0x56B01B: push    ebp; int
0x56B01C: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x56B021: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56B026: push    ebp; int
0x56B027: push    esi; void *
0x56B028: call    OblivionDynamicCast
0x56B02D: mov     esi, eax
0x56B02F: push    esi
0x56B030: call    TESTopic_static_GetTopicInfoParent?
0x56B035: add     esp, 18h
0x56B038: mov     edi, eax
0x56B03A: push    esi
0x56B03B: mov     ecx, edi
0x56B03D: call    sub_52F570
0x56B042: mov     ebx, eax
0x56B044: mov     dword ptr [esp+860h+a1.member.type], ebp
0x56B048: mov     word ptr [esp+860h+a1.member.flags], bp
0x56B04D: mov     word ptr [esp+860h+a1.member.flags+2], bp
0x56B052: push    ebp
0x56B053: lea     eax, [esp+864h+a1.member]
0x56B057: push    eax
0x56B058: mov     ecx, esi
0x56B05A: mov     [esp+868h+var_4], 1
0x56B065: call    sub_531200
0x56B06A: mov     eax, [edi+0Ch]
0x56B06D: mov     ecx, [ebx+0Ch]
0x56B070: mov     edx, dword ptr [esp+860h+a1.member.type]
0x56B074: mov     esi, [esi+0Ch]
0x56B077: push    eax
0x56B078: mov     eax, [edi]
0x56B07A: mov     [esp+864h+a1.member.refID], ecx
0x56B07E: mov     [esp+864h+a1.member.modlist.data], edx
0x56B082: mov     edx, [eax+0D4h]
0x56B088: mov     ecx, edi
0x56B08A: call    edx
0x56B08C: mov     edx, [ebx]
0x56B08E: push    eax
0x56B08F: mov     eax, [esp+868h+a1.member.refID]
0x56B093: push    eax
0x56B094: mov     eax, [edx+0D4h]
0x56B09A: mov     ecx, ebx
0x56B09C: call    eax
0x56B09E: mov     ecx, [esp+86Ch+a1.member.modlist.data]
0x56B0A2: push    eax
0x56B0A3: push    ecx
0x56B0A4: push    esi; Format
0x56B0A5: push    offset aTopicinfo08xSI; "TopicInfo %08X \"%s\" in Quest %s (%08x"...
0x56B0AA: lea     edx, [esp+87Ch+Dest]
0x56B0B1: push    410h; Count
0x56B0B6: push    edx; Dest
0x56B0B7: call    __snprintf
0x56B0BC: mov     eax, dword ptr [esp+884h+a1.member.type]
0x56B0C0: push    eax
0x56B0C1: mov     [esp+888h+var_4], 0FFFFFFFFh
0x56B0CC: call    FormHeapFree
0x56B0D1: add     esp, 28h
0x56B0D4: mov     dword ptr [esp+860h+a1.member.type], ebp
0x56B0D8: mov     word ptr [esp+860h+a1.member.flags+2], bp
0x56B0DD: mov     word ptr [esp+860h+a1.member.flags], bp
0x56B0E2: jmp     short loc_56B11D
0x56B0E4: mov     ecx, [esi+0Ch]
0x56B0E7: movzx   eax, al
0x56B0EA: lea     edx, [eax+eax*2]
0x56B0ED: mov     eax, [esi]
0x56B0EF: mov     edi, ds:0B05E04h[edx*4]
0x56B0F6: mov     edx, [eax+0D4h]
0x56B0FC: push    ecx
0x56B0FD: mov     ecx, esi
0x56B0FF: call    edx
0x56B101: push    eax
0x56B102: push    edi; Format
0x56B103: push    offset aFormSS08x; "Form %s %s (%08X)"
0x56B108: lea     eax, [esp+870h+Dest]
0x56B10F: push    410h; Count
0x56B114: push    eax; Dest
0x56B115: call    __snprintf
0x56B11A: add     esp, 18h
0x56B11D: mov     edx, [esp+860h+a1.vtbl]
0x56B121: lea     ecx, [esp+860h+Dest]
0x56B128: push    ecx
0x56B129: push    edx; ArgList
0x56B12A: push    offset aUnableToFindVa; "Unable to find Value TESGlobal (%08X) i"...
0x56B12F: call    PrintError
0x56B134: add     esp, 0Ch
0x56B137: mov     ecx, [esp+860h+var_C]
0x56B13E: mov     large fs:0, ecx
0x56B145: pop     ecx
0x56B146: pop     edi
0x56B147: pop     esi
0x56B148: pop     ebp
0x56B149: pop     ebx
0x56B14A: mov     ecx, [esp+84Ch+var_10]
0x56B151: xor     ecx, esp
0x56B153: call    @__security_check_cookie@4; __security_check_cookie(x)
0x56B158: add     esp, 84Ch
0x56B15E: retn    4
