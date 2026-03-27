0x686F50: push    edi
0x686F51: mov     edi, [esp+4+arg_4]
0x686F55: test    edi, edi
0x686F57: jnz     short loc_686F5D
0x686F59: xor     al, al
0x686F5B: pop     edi
0x686F5C: retn
0x686F5D: push    ebp
0x686F5E: mov     ecx, edi
0x686F60: call    sub_6899C0
0x686F65: mov     ebp, [esp+8+arg_8]
0x686F69: push    eax
0x686F6A: mov     ecx, ebp
0x686F6C: call    TeleportData__SetTeleportPosition
0x686F71: cmp     byte ptr ds:0B3C089h, 0
0x686F78: jz      short loc_686F7F
0x686F7A: pop     ebp
0x686F7B: mov     al, 1
0x686F7D: pop     edi
0x686F7E: retn
0x686F7F: push    esi
0x686F80: mov     esi, [esp+0Ch+arg_0]
0x686F84: test    esi, esi
0x686F86: jz      loc_687056
0x686F8C: mov     ecx, esi; this
0x686F8E: call    MobileObject_GetCharProxy
0x686F93: test    eax, eax
0x686F95: jz      loc_687056
0x686F9B: mov     ecx, [esi+58h]
0x686F9E: test    ecx, ecx
0x686FA0: jz      loc_687056
0x686FA6: mov     eax, [ecx]
0x686FA8: mov     edx, [eax+8]
0x686FAB: call    edx
0x686FAD: test    eax, eax
0x686FAF: jz      short loc_686FB7
0x686FB1: pop     esi
0x686FB2: pop     ebp
0x686FB3: mov     al, 1
0x686FB5: pop     edi
0x686FB6: retn
0x686FB7: push    ebx
0x686FB8: mov     ecx, edi
0x686FBA: xor     bl, bl
0x686FBC: call    sub_68CA20
0x686FC1: test    al, al
0x686FC3: jz      short loc_687031
0x686FC5: mov     ecx, edi
0x686FC7: call    sub_68CA80
0x686FCC: test    al, al
0x686FCE: mov     ecx, esi; this
0x686FD0: jnz     short loc_686FE4
0x686FD2: call    sub_5E1E90
0x686FD7: test    al, al
0x686FD9: jnz     short loc_68704F
0x686FDB: mov     bl, 1
0x686FDD: mov     al, bl
0x686FDF: pop     ebx
0x686FE0: pop     esi
0x686FE1: pop     ebp
0x686FE2: pop     edi
0x686FE3: retn
0x686FE4: call    sub_5E3400
0x686FE9: test    al, al
0x686FEB: jnz     short loc_687028
0x686FED: mov     ecx, edi
0x686FEF: call    sub_68CAB0
0x686FF4: test    al, al
0x686FF6: jnz     short loc_68704F
0x686FF8: mov     ecx, esi; this
0x686FFA: call    Actor_IsCreature
0x686FFF: test    al, al
0x687001: jz      short loc_68704F
0x687003: fld     dword ptr ds:0A3744Ch
0x687009: push    ecx
0x68700A: mov     ecx, esi; this
0x68700C: fstp    [esp+14h+var_14]; float
0x68700F: call    TESObjectREFR_GetParentCell
0x687014: push    eax; int
0x687015: mov     ecx, edi
0x687017: call    sub_6899C0
0x68701C: push    eax; int
0x68701D: mov     ecx, esi
0x68701F: call    Actor_IsUnderwater??
0x687024: test    al, al
0x687026: jnz     short loc_68704F
0x687028: mov     bl, 1
0x68702A: mov     al, bl
0x68702C: pop     ebx
0x68702D: pop     esi
0x68702E: pop     ebp
0x68702F: pop     edi
0x687030: retn
0x687031: mov     eax, [esp+10h+arg_10]
0x687035: mov     ecx, [esp+10h+arg_C]
0x687039: push    eax
0x68703A: push    ecx
0x68703B: push    ebp
0x68703C: mov     ecx, edi
0x68703E: call    sub_6899C0
0x687043: push    eax
0x687044: push    esi
0x687045: call    sub_686450
0x68704A: add     esp, 14h
0x68704D: mov     bl, al
0x68704F: mov     al, bl
0x687051: pop     ebx
0x687052: pop     esi
0x687053: pop     ebp
0x687054: pop     edi
0x687055: retn
0x687056: pop     esi
0x687057: pop     ebp
0x687058: xor     al, al
0x68705A: pop     edi
0x68705B: retn
