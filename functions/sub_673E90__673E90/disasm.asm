0x673E90: sub     esp, 14h
0x673E93: push    ebx
0x673E94: push    ebp
0x673E95: lea     ebx, [ecx+0Ch]
0x673E98: mov     [esp+1Ch+var_4], ecx
0x673E9C: push    esi
0x673E9D: mov     ecx, ebx; this
0x673E9F: call    sub_7616D0
0x673EA4: mov     ebp, eax
0x673EA6: mov     esi, [ebp+0]
0x673EA9: push    8; Size
0x673EAB: call    FormHeapAlloc
0x673EB0: add     esp, 4
0x673EB3: test    eax, eax
0x673EB5: jz      short loc_673ECA
0x673EB7: mov     dword ptr [eax], 0
0x673EBD: mov     dword ptr [eax+4], 0
0x673EC4: mov     [esp+20h+var_10], eax
0x673EC8: jmp     short loc_673ED2
0x673ECA: mov     [esp+20h+var_10], 0
0x673ED2: test    esi, esi
0x673ED4: jnz     short loc_673EEC
0x673ED6: mov     eax, [esp+20h+var_10]
0x673EDA: push    eax
0x673EDB: call    FormHeapFree
0x673EE0: add     esp, 4
0x673EE3: pop     esi
0x673EE4: pop     ebp
0x673EE5: pop     ebx
0x673EE6: add     esp, 14h
0x673EE9: retn    8
0x673EEC: mov     dword ptr ds:0B3BCF4h, 83h ; 'ƒ'
0x673EF6: mov     [esp+20h+var_11], 1
0x673EFB: push    edi
0x673EFC: lea     esp, [esp+0]
0x673F00: mov     eax, [ebp+4]
0x673F03: test    eax, eax
0x673F05: jnz     short loc_673F10
0x673F07: cmp     [ebp+0], eax
0x673F0A: jz      loc_6741A7
0x673F10: mov     esi, [ebp+0]
0x673F13: xor     edi, edi
0x673F15: test    esi, esi
0x673F17: mov     ebp, eax
0x673F19: jz      loc_67419F
0x673F1F: mov     ecx, [esi+8]
0x673F22: shr     ecx, 15h
0x673F25: test    cl, 1
0x673F28: jnz     loc_67419F
0x673F2E: mov     edx, [esi]
0x673F30: mov     eax, [edx+190h]
0x673F36: mov     ecx, esi
0x673F38: call    eax
0x673F3A: test    al, al
0x673F3C: jz      short loc_673F40
0x673F3E: mov     edi, esi
0x673F40: mov     eax, [esi+8]
0x673F43: mov     ecx, eax
0x673F45: shr     ecx, 0Bh
0x673F48: test    cl, 1
0x673F4B: jnz     loc_674119
0x673F51: shr     eax, 5
0x673F54: test    al, 1
0x673F56: jnz     loc_674119
0x673F5C: mov     ecx, esi; this
0x673F5E: call    Actor__GetProcessLevel
0x673F63: cmp     eax, 2
0x673F66: jnz     loc_674119
0x673F6C: mov     edx, [esi]
0x673F6E: mov     eax, [edx+1F0h]
0x673F74: mov     ecx, esi
0x673F76: call    eax
0x673F78: test    al, al
0x673F7A: jnz     short loc_673FAB
0x673F7C: test    edi, edi
0x673F7E: jz      short loc_673FAB
0x673F80: mov     edx, [edi]
0x673F82: mov     eax, [edx+334h]
0x673F88: push    1
0x673F8A: mov     ecx, edi
0x673F8C: call    eax
0x673F8E: test    al, al
0x673F90: jnz     short loc_673FAB
0x673F92: mov     dword ptr ds:0B3BCF4h, 85h ; '…'
0x673F9C: mov     ecx, [esi+58h]
0x673F9F: mov     edx, [ecx]
0x673FA1: mov     eax, [edx+20h]
0x673FA4: call    eax
0x673FA6: jmp     loc_674154
0x673FAB: mov     ecx, esi; this
0x673FAD: mov     dword ptr ds:0B3BCF4h, 86h ; '†'
0x673FB7: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x673FBC: fstp    [esp+24h+var_C]
0x673FC0: mov     ecx, offset TimeGlobals
0x673FC5: call    TimeGlobals_GetGameHour
0x673FCA: fstp    [esp+24h+var_8]
0x673FCE: fld     dword ptr ds:0A30634h
0x673FD4: fld     [esp+24h+var_C]
0x673FD8: fucom   st(1)
0x673FDA: fnstsw  ax
0x673FDC: fstp    st(1)
0x673FDE: test    ah, 44h
0x673FE1: jp      short loc_673FF1
0x673FE3: mov     ecx, esi
0x673FE5: fstp    st
0x673FE7: call    sub_659A20
0x673FEC: jmp     loc_674154
0x673FF1: fld     [esp+24h+var_8]
0x673FF5: fld     st
0x673FF7: fsub    st, st(2)
0x673FF9: fcomp   qword ptr ds:0A432F0h
0x673FFF: fnstsw  ax
0x674001: test    ah, 1
0x674004: jz      short loc_674022
0x674006: fcompp
0x674008: fnstsw  ax
0x67400A: test    ah, 5
0x67400D: jnp     short loc_674026
0x67400F: fldz
0x674011: fcomp   [esp+24h+arg_0]
0x674015: fnstsw  ax
0x674017: test    ah, 44h
0x67401A: jnp     loc_67410D
0x674020: jmp     short loc_674026
0x674022: fstp    st(1)
0x674024: fstp    st
0x674026: mov     dword ptr ds:0B3BCF4h, 87h ; '‡'
0x674030: mov     ecx, [esi+58h]
0x674033: mov     edx, [ecx]
0x674035: mov     eax, [edx+168h]
0x67403B: call    eax
0x67403D: fstp    [esp+20h+var_4]
0x674041: fldz
0x674043: fld     [esp+20h+var_4]
0x674047: fcom    st(1)
0x674049: fnstsw  ax
0x67404B: fstp    st(1)
0x67404D: test    ah, 41h
0x674050: jnz     short loc_674080
0x674052: fsub    dword ptr ds:0B33E9Ch
0x674058: mov     ecx, [esi+58h]
0x67405B: mov     edx, [ecx]
0x67405D: mov     eax, [edx+164h]
0x674063: fstp    [esp+20h+var_4]
0x674067: push    ecx
0x674068: fld     [esp+24h+var_4]
0x67406C: fstp    [esp+24h+var_24]
0x67406F: call    eax
0x674071: mov     dword ptr ds:0B3BCF4h, 1F9h
0x67407B: jmp     loc_674154
0x674080: mov     edx, [esi]
0x674082: fstp    st
0x674084: fld     [esp+20h+arg_4]
0x674088: mov     eax, [edx+1C0h]
0x67408E: push    ecx
0x67408F: mov     ecx, esi
0x674091: fstp    [esp+24h+var_24]
0x674094: call    eax
0x674096: mov     dword ptr ds:0B3BCF4h, 88h ; 'ˆ'
0x6740A0: call    sub_4F9FA0
0x6740A5: test    al, al
0x6740A7: jz      short loc_6740B0
0x6740A9: mov     ecx, esi
0x6740AB: call    RunScripts
0x6740B0: mov     dword ptr ds:0B3BCF4h, 89h ; '‰'
0x6740BA: mov     edx, [esi]
0x6740BC: mov     eax, [edx+190h]
0x6740C2: mov     ecx, esi
0x6740C4: call    eax
0x6740C6: test    al, al
0x6740C8: jz      short loc_6740FF
0x6740CA: mov     ecx, esi; this
0x6740CC: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6740D1: cmp     eax, 1
0x6740D4: jnz     short loc_6740FF
0x6740D6: push    0
0x6740D8: push    esi
0x6740D9: mov     ecx, ebx
0x6740DB: mov     dword ptr ds:0B3BCF4h, 8Ah ; 'Š'
0x6740E5: call    sub_67B320
0x6740EA: push    0
0x6740EC: push    0
0x6740EE: push    1
0x6740F0: push    esi
0x6740F1: mov     ecx, ebx
0x6740F3: call    sub_67B260
0x6740F8: xor     ebp, ebp
0x6740FA: mov     [esp+24h+var_11], 0
0x6740FF: mov     ecx, esi; this
0x674101: call    Actor__GetProcessLevel
0x674106: cmp     eax, 2
0x674109: jz      short loc_67410D
0x67410B: xor     ebp, ebp
0x67410D: mov     dword ptr ds:0B3BCF4h, 1F9h
0x674117: jmp     short loc_674154
0x674119: mov     edi, [esp+24h+var_10]
0x67411D: mov     dword ptr ds:0B3BCF4h, 84h ; '„'
0x674127: cmp     dword ptr [edi], 0
0x67412A: jz      short loc_674152
0x67412C: push    8; Size
0x67412E: call    FormHeapAlloc
0x674133: add     esp, 4
0x674136: test    eax, eax
0x674138: jz      short loc_674147
0x67413A: mov     ecx, [edi]
0x67413C: mov     [eax], ecx
0x67413E: mov     dword ptr [eax+4], 0
0x674145: jmp     short loc_674149
0x674147: xor     eax, eax
0x674149: mov     edx, [edi+4]
0x67414C: mov     [eax+4], edx
0x67414F: mov     [edi+4], eax
0x674152: mov     [edi], esi
0x674154: cmp     [esp+24h+var_11], 0
0x674159: jz      short loc_67419F
0x67415B: mov     ecx, ebx; this
0x67415D: call    sub_7616D0
0x674162: test    eax, eax
0x674164: jz      short loc_67419A
0x674166: mov     ecx, ebx; this
0x674168: call    sub_7616D0
0x67416D: cmp     dword ptr [eax+4], 0
0x674171: jnz     short loc_674178
0x674173: cmp     dword ptr [eax], 0
0x674176: jz      short loc_67418F
0x674178: mov     ecx, ebx; this
0x67417A: call    sub_7616D0
0x67417F: cmp     [eax], esi
0x674181: jnz     short loc_67418F
0x674183: mov     ecx, ebx; this
0x674185: call    sub_7616D0
0x67418A: cmp     [eax+4], ebp
0x67418D: jz      short loc_67419A
0x67418F: mov     ecx, ebx; this
0x674191: call    sub_7616D0
0x674196: mov     ebp, eax
0x674198: jmp     short loc_67419F
0x67419A: mov     [esp+24h+var_11], 0
0x67419F: test    ebp, ebp
0x6741A1: jnz     loc_673F00
0x6741A7: mov     edi, [esp+24h+var_4]
0x6741AB: add     edi, 18h
0x6741AE: mov     ecx, edi; this
0x6741B0: call    sub_7616D0
0x6741B5: mov     ebx, [esp+24h+var_10]
0x6741B9: test    ebx, ebx
0x6741BB: mov     esi, ebx
0x6741BD: jz      short loc_6741D7
0x6741BF: nop
0x6741C0: mov     eax, [esi]
0x6741C2: test    eax, eax
0x6741C4: jz      short loc_6741D7
0x6741C6: push    0
0x6741C8: push    eax
0x6741C9: mov     ecx, edi
0x6741CB: call    sub_67B320
0x6741D0: mov     esi, [esi+4]
0x6741D3: test    esi, esi
0x6741D5: jnz     short loc_6741C0
0x6741D7: mov     ecx, ebx
0x6741D9: call    BSSimpleList_Clear
0x6741DE: push    ebx
0x6741DF: call    FormHeapFree
0x6741E4: add     esp, 4
0x6741E7: pop     edi
0x6741E8: pop     esi
0x6741E9: pop     ebp
0x6741EA: pop     ebx
0x6741EB: add     esp, 14h
0x6741EE: retn    8
