0x79F670: sub     esp, 8
0x79F673: push    esi
0x79F674: mov     esi, ecx
0x79F676: mov     edx, [esi+4]
0x79F679: test    edx, edx
0x79F67B: push    edi
0x79F67C: jnz     short loc_79F682
0x79F67E: xor     ecx, ecx
0x79F680: jmp     short loc_79F68A
0x79F682: mov     ecx, [esi+8]
0x79F685: sub     ecx, edx
0x79F687: sar     ecx, 4
0x79F68A: test    edx, edx
0x79F68C: jz      short loc_79F6CB
0x79F68E: mov     eax, [esi+0Ch]
0x79F691: sub     eax, edx
0x79F693: sar     eax, 4
0x79F696: cmp     ecx, eax
0x79F698: jnb     short loc_79F6CB
0x79F69A: mov     ecx, [esp+10h+arg_0]
0x79F69E: mov     edx, [esp+10h+arg_0]
0x79F6A2: mov     edi, [esi+8]
0x79F6A5: mov     byte ptr [esp+10h+var_8], 0
0x79F6AA: mov     eax, [esp+10h+var_8]
0x79F6AE: push    eax
0x79F6AF: push    ecx
0x79F6B0: push    esi
0x79F6B1: push    edx
0x79F6B2: push    1
0x79F6B4: push    edi
0x79F6B5: call    sub_79BF40
0x79F6BA: add     esp, 18h
0x79F6BD: add     edi, 10h
0x79F6C0: mov     [esi+8], edi
0x79F6C3: pop     edi
0x79F6C4: pop     esi
0x79F6C5: add     esp, 8
0x79F6C8: retn    4
0x79F6CB: mov     edi, [esi+8]
0x79F6CE: cmp     edx, edi
0x79F6D0: jbe     short loc_79F6D7
0x79F6D2: call    __invalid_parameter_noinfo
0x79F6D7: mov     eax, [esp+10h+arg_0]
0x79F6DB: push    eax
0x79F6DC: push    edi
0x79F6DD: push    esi
0x79F6DE: lea     ecx, [esp+1Ch+var_8]
0x79F6E2: push    ecx
0x79F6E3: mov     ecx, esi
0x79F6E5: call    sub_79F150
