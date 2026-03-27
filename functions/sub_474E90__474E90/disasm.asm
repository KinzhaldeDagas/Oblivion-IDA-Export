0x474E90: sub     esp, 8
0x474E93: push    ebx
0x474E94: push    esi
0x474E95: mov     esi, ecx
0x474E97: mov     ecx, ds:0B33B00h
0x474E9D: push    4; Size
0x474E9F: push    esi; Dst
0x474EA0: call    SaveLoad_LoadData
0x474EA5: mov     ecx, ds:0B33B00h
0x474EAB: push    4; Size
0x474EAD: lea     eax, [esi+4]
0x474EB0: push    eax; Dst
0x474EB1: call    SaveLoad_LoadData
0x474EB6: mov     ecx, ds:0B33B00h
0x474EBC: push    4; Size
0x474EBE: lea     ebx, [esi+0Ch]
0x474EC1: push    ebx; Dst
0x474EC2: call    SaveLoad_LoadData
0x474EC7: push    1; Size
0x474EC9: lea     ecx, [esp+14h+Dst]
0x474ECD: push    ecx; Dst
0x474ECE: mov     ecx, ds:0B33B00h
0x474ED4: call    SaveLoad_LoadData
0x474ED9: cmp     [esp+10h+Dst], 0
0x474EDE: jz      loc_474FFA
0x474EE4: mov     ecx, ds:0B33B00h
0x474EEA: push    1; Size
0x474EEC: lea     edx, [esp+14h+var_4]
0x474EF0: push    edx; Dst
0x474EF1: call    SaveLoad_LoadData
0x474EF6: mov     eax, [esi+8]
0x474EF9: test    eax, eax
0x474EFB: jz      loc_474FC0
0x474F01: push    edi
0x474F02: mov     edi, [esp+14h+arg_4]
0x474F06: push    0
0x474F08: push    eax
0x474F09: mov     ecx, edi; this
0x474F0B: call    ??0AnimSequenceSingle@@QAE@XZ; AnimSequenceSingle::AnimSequenceSingle(void)
0x474F10: test    al, al
0x474F12: jz      loc_474FBF
0x474F18: mov     eax, [esi]
0x474F1A: cmp     eax, 2
0x474F1D: jnz     short loc_474F73
0x474F1F: mov     eax, [esi+8]
0x474F22: mov     ecx, [eax+8]
0x474F25: push    ebp
0x474F26: mov     ebp, [edi+9Ch]
0x474F2C: lea     edx, [esp+18h+arg_4]
0x474F30: push    edx
0x474F31: call    TESAnimGroup_GetAnimationGroup
0x474F36: push    eax
0x474F37: mov     ecx, ebp
0x474F39: call    sub_470960
0x474F3E: test    al, al
0x474F40: pop     ebp
0x474F41: jz      short loc_474FBF
0x474F43: mov     byte ptr [edi+0C4h], 1
0x474F4A: mov     eax, [esi+8]
0x474F4D: mov     edx, [ebx]
0x474F4F: mov     ecx, [eax+8]
0x474F52: push    edx
0x474F53: call    TESAnimGroup_GetAnimationGroup
0x474F58: mov     ecx, [esp+18h+arg_4]
0x474F5C: mov     edx, [esp+18h+var_4]
0x474F60: push    eax
0x474F61: mov     eax, [ecx]
0x474F63: mov     eax, [eax+10h]
0x474F66: push    edx
0x474F67: call    eax
0x474F69: push    eax
0x474F6A: mov     ecx, edi
0x474F6C: call    sub_474530
0x474F71: jmp     short loc_474FB6
0x474F73: test    eax, eax
0x474F75: jnz     short loc_474F7F
0x474F77: mov     dword ptr [esi], 1
0x474F7D: jmp     short loc_474FBF
0x474F7F: cmp     eax, 3
0x474F82: jnz     short loc_474FBF
0x474F84: mov     ecx, [esi+8]
0x474F87: mov     ecx, [ecx+8]
0x474F8A: mov     edi, [edi+9Ch]
0x474F90: lea     edx, [esp+14h+arg_4]
0x474F94: push    edx
0x474F95: call    TESAnimGroup_GetAnimationGroup
0x474F9A: push    eax
0x474F9B: mov     ecx, edi
0x474F9D: call    sub_470960
0x474FA2: test    al, al
0x474FA4: jz      short loc_474FBF
0x474FA6: mov     ecx, [esp+14h+arg_4]
0x474FAA: mov     eax, [ecx]
0x474FAC: mov     edx, [esp+14h+var_4]
0x474FB0: mov     eax, [eax+10h]
0x474FB3: push    edx
0x474FB4: call    eax
0x474FB6: push    eax; a2
0x474FB7: lea     ecx, [esi+10h]; this
0x474FBA: call    NiSmartPointer_Set??
0x474FBF: pop     edi
0x474FC0: mov     esi, [esi+10h]
0x474FC3: test    esi, esi
0x474FC5: jz      short loc_474FDE
0x474FC7: fld     [esp+10h+arg_0]
0x474FCB: push    ecx
0x474FCC: mov     ecx, esi
0x474FCE: fstp    [esp+14h+var_14]; float
0x474FD1: call    sub_49F5F0
0x474FD6: pop     esi
0x474FD7: pop     ebx
0x474FD8: add     esp, 8
0x474FDB: retn    8
0x474FDE: call    sub_49F550
0x474FE3: movzx   ecx, ax
0x474FE6: push    ecx
0x474FE7: mov     ecx, ds:0B33B00h
0x474FED: call    SaveLoad_AdvanceBufferOffset
0x474FF2: pop     esi
0x474FF3: pop     ebx
0x474FF4: add     esp, 8
0x474FF7: retn    8
0x474FFA: cmp     dword ptr [esi], 0
0x474FFD: jnz     short loc_475011
0x474FFF: mov     edx, ds:0B33B00h
0x475005: cmp     byte ptr [edx+7Ch], 4Ch ; 'L'
0x475009: jb      short loc_475011
0x47500B: mov     dword ptr [esi], 1
0x475011: pop     esi
0x475012: pop     ebx
0x475013: add     esp, 8
0x475016: retn    8
