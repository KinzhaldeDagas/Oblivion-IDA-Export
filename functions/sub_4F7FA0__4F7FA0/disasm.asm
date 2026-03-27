0x4F7FA0: fldz
0x4F7FA2: push    ebp
0x4F7FA3: mov     ebp, [esp+4+arg_C]
0x4F7FA7: fstp    qword ptr [ebp+0]
0x4F7FAA: push    esi
0x4F7FAB: mov     esi, [esp+8+arg_0]
0x4F7FAF: push    edi
0x4F7FB0: xor     edi, edi
0x4F7FB2: test    esi, esi
0x4F7FB4: jz      short loc_4F7FC8
0x4F7FB6: mov     eax, [esi]
0x4F7FB8: mov     edx, [eax+190h]
0x4F7FBE: mov     ecx, esi
0x4F7FC0: call    edx
0x4F7FC2: test    al, al
0x4F7FC4: jz      short loc_4F7FC8
0x4F7FC6: mov     edi, esi
0x4F7FC8: mov     eax, [esp+0Ch+arg_4]
0x4F7FCC: push    ebx
0x4F7FCD: xor     ebx, ebx
0x4F7FCF: test    eax, eax
0x4F7FD1: jz      short loc_4F7FDB
0x4F7FD3: cmp     byte ptr [eax+4], 3Dh ; '='
0x4F7FD7: jnz     short loc_4F7FDB
0x4F7FD9: mov     ebx, eax
0x4F7FDB: test    edi, edi
0x4F7FDD: jz      short loc_4F801B
0x4F7FDF: test    ebx, ebx
0x4F7FE1: jz      short loc_4F801B
0x4F7FE3: mov     ecx, edi
0x4F7FE5: call    sub_5E03A0
0x4F7FEA: mov     esi, eax
0x4F7FEC: test    esi, esi
0x4F7FEE: jz      short loc_4F8012
0x4F7FF0: mov     ecx, esi
0x4F7FF2: call    sub_5660A0
0x4F7FF7: test    al, al
0x4F7FF9: jz      short loc_4F8012
0x4F7FFB: add     edi, 44h ; 'D'
0x4F7FFE: mov     ecx, edi
0x4F8000: call    ExtraDataList__GetExtraPackage
0x4F8005: test    eax, eax
0x4F8007: jz      short loc_4F8012
0x4F8009: mov     ecx, edi
0x4F800B: call    ExtraDataList__GetExtraPackage
0x4F8010: mov     esi, eax
0x4F8012: cmp     esi, ebx
0x4F8014: jnz     short loc_4F801B
0x4F8016: fld1
0x4F8018: fstp    qword ptr [ebp+0]
0x4F801B: cmp     byte ptr ds:0B361ACh, 0
0x4F8022: pop     ebx
0x4F8023: jz      short loc_4F803B
0x4F8025: fld     qword ptr [ebp+0]
0x4F8028: sub     esp, 8
0x4F802B: fstp    [esp+14h+var_14]
0x4F802E: push    offset aGetiscurrentpackage0_2f; "GetIsCurrentPackage >> %0.2f"
0x4F8033: call    Interface_ConsolePrint
0x4F8038: add     esp, 0Ch
0x4F803B: pop     edi
0x4F803C: pop     esi
0x4F803D: mov     al, 1
0x4F803F: pop     ebp
0x4F8040: retn
