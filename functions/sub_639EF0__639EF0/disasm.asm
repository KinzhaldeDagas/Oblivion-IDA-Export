0x639EF0: push    0FFFFFFFFh
0x639EF2: push    offset SEH_639EF0
0x639EF7: mov     eax, large fs:0
0x639EFD: push    eax
0x639EFE: sub     esp, 0Ch
0x639F01: push    ebx
0x639F02: push    ebp
0x639F03: push    esi
0x639F04: push    edi
0x639F05: mov     eax, ds:0B30AACh
0x639F0A: xor     eax, esp
0x639F0C: push    eax
0x639F0D: lea     eax, [esp+2Ch+var_C]
0x639F11: mov     large fs:0, eax
0x639F17: mov     esi, ecx
0x639F19: xor     ebx, ebx
0x639F1B: cmp     [esi+40h], ebx
0x639F1E: jz      short loc_639F36
0x639F20: mov     eax, [esi+40h]
0x639F23: mov     edi, [eax+4]
0x639F26: push    eax
0x639F27: call    FormHeapFree
0x639F2C: add     esp, 4
0x639F2F: cmp     edi, ebx
0x639F31: mov     [esi+40h], edi
0x639F34: jnz     short loc_639F20
0x639F36: mov     edi, [esp+2Ch+arg_0]
0x639F3A: mov     ecx, edi; this
0x639F3C: mov     [esi+3Ch], ebx
0x639F3F: call    TESObjectREFR_GetParentCell
0x639F44: mov     ebp, eax
0x639F46: mov     eax, [edi]
0x639F48: mov     edx, [eax+174h]
0x639F4E: mov     ecx, edi
0x639F50: call    edx
0x639F52: mov     ecx, [eax]
0x639F54: mov     [esp+28h+a2], ecx
0x639F58: mov     edx, [eax+4]
0x639F5B: mov     ecx, [esp+28h+arg_8]
0x639F5F: mov     [esp+28h+var_10], edx
0x639F63: mov     eax, [eax+8]
0x639F66: push    edi; a7
0x639F67: mov     [esi+6Ch], ecx
0x639F6A: mov     [esi+64h], ebx
0x639F6D: fld     dword ptr ds:0B368E8h
0x639F73: mov     edx, [edi]
0x639F75: push    offset sub_646600; a6
0x639F7A: push    ecx
0x639F7B: mov     [esp+34h+var_C], eax
0x639F7F: fstp    [esp+34h+a5]; a5
0x639F82: mov     eax, [edx+174h]
0x639F88: mov     ecx, edi
0x639F8A: call    eax
0x639F8C: fld     dword ptr ds:0B368E8h
0x639F92: push    eax; a4
0x639F93: push    ecx
0x639F94: fstp    [esp+3Ch+a3]; a3
0x639F97: lea     ecx, [esp+3Ch+a2]
0x639F9B: push    ecx; a2
0x639F9C: mov     ecx, ds:0B33A98h
0x639FA2: push    ebp; a1
0x639FA3: call    sub_446B90
0x639FA8: mov     edx, [esi]
0x639FAA: mov     eax, [edx+568h]
0x639FB0: push    edi
0x639FB1: mov     ecx, esi
0x639FB3: mov     [esi+6Ch], ebx
0x639FB6: mov     [esi+64h], ebx
0x639FB9: call    eax
0x639FBB: cmp     [esi+40h], ebx
0x639FBE: jnz     short loc_639FC5
0x639FC0: cmp     [esi+3Ch], ebx
0x639FC3: jz      short loc_63A004
0x639FC5: mov     esi, [esi+3Ch]
0x639FC8: push    0Ch; Size
0x639FCA: call    FormHeapAlloc
0x639FCF: add     esp, 4
0x639FD2: mov     [esp+2Ch+arg_0], eax
0x639FD6: cmp     eax, ebx
0x639FD8: mov     [esp+2Ch+var_4], ebx
0x639FDC: jz      short loc_639FED
0x639FDE: mov     ecx, [esi+4]
0x639FE1: push    1
0x639FE3: push    ecx
0x639FE4: mov     ecx, eax
0x639FE6: call    ContainerEntryExtraData_constr
0x639FEB: mov     ebx, eax
0x639FED: mov     edx, [esi+18h]
0x639FF0: mov     ecx, [ebx]
0x639FF2: push    edx
0x639FF3: mov     [esp+30h+var_4], 0FFFFFFFFh
0x639FFB: call    BSSimpleList_PushFront
0x63A000: mov     eax, ebx
0x63A002: jmp     short loc_63A006
0x63A004: xor     eax, eax
0x63A006: mov     ecx, [esp+2Ch+var_C]
0x63A00A: mov     large fs:0, ecx
0x63A011: pop     ecx
0x63A012: pop     edi
0x63A013: pop     esi
0x63A014: pop     ebp
0x63A015: pop     ebx
0x63A016: add     esp, 18h
0x63A019: retn    8
