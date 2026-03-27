0x79B770: sub     esp, 8
0x79B773: mov     edx, [esp+8+arg_8]
0x79B777: push    ebx
0x79B778: mov     ebx, [esp+0Ch+arg_0]
0x79B77C: push    esi
0x79B77D: mov     esi, [esp+10h+arg_4]
0x79B781: push    edi
0x79B782: mov     edi, [esp+14h+arg_8]
0x79B786: xor     al, al
0x79B788: mov     byte ptr [esp+14h+var_4], al
0x79B78C: mov     ecx, [esp+14h+var_4]
0x79B790: mov     byte ptr [esp+14h+var_8], al
0x79B794: mov     eax, [esp+14h+var_8]
0x79B798: push    eax
0x79B799: push    ecx
0x79B79A: push    edx
0x79B79B: push    edi
0x79B79C: push    esi
0x79B79D: push    ebx
0x79B79E: call    sub_79B510
0x79B7A3: sub     esi, ebx
0x79B7A5: mov     eax, 2E8BA2E9h
0x79B7AA: imul    esi
0x79B7AC: sar     edx, 3
0x79B7AF: mov     eax, edx
0x79B7B1: shr     eax, 1Fh
0x79B7B4: add     eax, edx
0x79B7B6: mov     ecx, eax
0x79B7B8: imul    ecx, 2Ch ; ','
0x79B7BB: add     esp, 18h
0x79B7BE: mov     eax, edi
0x79B7C0: pop     edi
0x79B7C1: pop     esi
0x79B7C2: sub     eax, ecx
0x79B7C4: pop     ebx
0x79B7C5: add     esp, 8
0x79B7C8: retn
