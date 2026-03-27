0x79F040: sub     esp, 8
0x79F043: push    esi
0x79F044: mov     esi, ecx
0x79F046: push    edi
0x79F047: mov     edi, [esi+4]
0x79F04A: test    edi, edi
0x79F04C: jnz     short loc_79F052
0x79F04E: xor     ecx, ecx
0x79F050: jmp     short loc_79F068
0x79F052: mov     ecx, [esi+8]
0x79F055: sub     ecx, edi
0x79F057: mov     eax, 2E8BA2E9h
0x79F05C: imul    ecx
0x79F05E: sar     edx, 3
0x79F061: mov     ecx, edx
0x79F063: shr     ecx, 1Fh
0x79F066: add     ecx, edx
0x79F068: test    edi, edi
0x79F06A: jz      short loc_79F0B7
0x79F06C: mov     edx, [esi+0Ch]
0x79F06F: sub     edx, edi
0x79F071: mov     eax, 2E8BA2E9h
0x79F076: imul    edx
0x79F078: sar     edx, 3
0x79F07B: mov     eax, edx
0x79F07D: shr     eax, 1Fh
0x79F080: add     eax, edx
0x79F082: cmp     ecx, eax
0x79F084: jnb     short loc_79F0B7
0x79F086: mov     ecx, [esp+10h+arg_0]
0x79F08A: mov     edx, [esp+10h+arg_0]
0x79F08E: mov     edi, [esi+8]
0x79F091: mov     byte ptr [esp+10h+var_8], 0
0x79F096: mov     eax, [esp+10h+var_8]
0x79F09A: push    eax
0x79F09B: push    ecx
0x79F09C: push    esi
0x79F09D: push    edx
0x79F09E: push    1
0x79F0A0: push    edi
0x79F0A1: call    sub_79B620
0x79F0A6: add     esp, 18h
0x79F0A9: add     edi, 2Ch ; ','
0x79F0AC: mov     [esi+8], edi
0x79F0AF: pop     edi
0x79F0B0: pop     esi
0x79F0B1: add     esp, 8
0x79F0B4: retn    4
0x79F0B7: push    ebx
0x79F0B8: mov     ebx, [esi+8]
0x79F0BB: cmp     edi, ebx
0x79F0BD: jbe     short loc_79F0C4
0x79F0BF: call    __invalid_parameter_noinfo
0x79F0C4: mov     eax, [esp+14h+arg_0]
0x79F0C8: push    eax
0x79F0C9: push    ebx
0x79F0CA: push    esi
0x79F0CB: lea     ecx, [esp+20h+var_8]
0x79F0CF: push    ecx
0x79F0D0: mov     ecx, esi
0x79F0D2: call    sub_79EB00
