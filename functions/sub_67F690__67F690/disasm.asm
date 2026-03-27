0x67F690: push    ebp
0x67F691: mov     ebp, esp
0x67F693: and     esp, 0FFFFFFF8h
0x67F696: sub     esp, 18h
0x67F699: cmp     [ebp+arg_0], 0
0x67F69D: push    esi
0x67F69E: push    edi
0x67F69F: jz      loc_67F829
0x67F6A5: mov     ecx, ds:0B3BE0Ch
0x67F6AB: lea     eax, [esp+20h+var_14]
0x67F6AF: push    eax
0x67F6B0: push    ecx
0x67F6B1: mov     ecx, ds:0B3BE00h
0x67F6B7: mov     [esp+28h+var_14], 0
0x67F6BF: call    NiTMap_GetAt
0x67F6C4: test    al, al
0x67F6C6: jz      loc_67F829
0x67F6CC: mov     esi, [esp+20h+var_14]
0x67F6D0: test    esi, esi
0x67F6D2: jz      loc_67F829
0x67F6D8: mov     ecx, esi
0x67F6DA: call    sub_6A9030
0x67F6DF: test    eax, eax
0x67F6E1: mov     [esp+20h+var_C], eax
0x67F6E5: jz      loc_67F829
0x67F6EB: jmp     short loc_67F6F4
0x67F6ED: align 10h
0x67F6F0: mov     esi, [esp+20h+var_14]
0x67F6F4: lea     edx, [esp+20h+var_10]
0x67F6F8: push    edx
0x67F6F9: lea     eax, [esp+24h+var_8]
0x67F6FD: push    eax
0x67F6FE: lea     ecx, [esp+28h+var_C]
0x67F702: push    ecx
0x67F703: mov     ecx, esi
0x67F705: mov     [esp+2Ch+var_10], 0
0x67F70D: call    sub_452600
0x67F712: mov     edi, [esp+20h+var_10]
0x67F716: test    edi, edi
0x67F718: jz      loc_67F81E
0x67F71E: cmp     dword ptr [edi+4], 0
0x67F722: jnz     short loc_67F72D
0x67F724: cmp     dword ptr [edi], 0
0x67F727: jz      loc_67F81E
0x67F72D: mov     esi, [edi]
0x67F72F: mov     edx, ds:0B3BE0Ch
0x67F735: push    edx
0x67F736: mov     ecx, esi
0x67F738: call    sub_680790
0x67F73D: test    al, al
0x67F73F: jz      loc_67F813
0x67F745: mov     eax, ds:0B3BE08h
0x67F74A: mov     ecx, ds:0B3BE0Ch
0x67F750: push    1
0x67F752: push    eax
0x67F753: push    esi
0x67F754: push    offset qword_B3BE20
0x67F759: push    ecx
0x67F75A: call    sub_680AA0
0x67F75F: fstp    [esp+34h+var_24]
0x67F763: add     esp, 10h
0x67F766: mov     ecx, esi
0x67F768: call    sub_680930
0x67F76D: mov     edx, ds:0B3BE0Ch
0x67F773: push    edx
0x67F774: push    0
0x67F776: mov     ecx, esi
0x67F778: call    sub_680460
0x67F77D: push    1
0x67F77F: mov     ecx, esi
0x67F781: call    sub_680570
0x67F786: mov     ecx, esi
0x67F788: call    sub_6804B0
0x67F78D: fld     dword ptr ds:0B1545Ch
0x67F793: fcompp
0x67F795: fnstsw  ax
0x67F797: test    ah, 41h
0x67F79A: jnz     short loc_67F7A5
0x67F79C: mov     ecx, [ebp+arg_0]
0x67F79F: push    esi
0x67F7A0: call    sub_680BB0
0x67F7A5: mov     eax, ds:0B3BE0Ch
0x67F7AA: push    eax
0x67F7AB: mov     ecx, esi
0x67F7AD: call    sub_6803F0
0x67F7B2: mov     ecx, ds:0B3BE10h
0x67F7B8: cmp     eax, ecx
0x67F7BA: jnz     short loc_67F813
0x67F7BC: mov     edx, ds:0B3BE08h
0x67F7C2: push    0
0x67F7C4: push    edx
0x67F7C5: push    esi
0x67F7C6: push    offset qword_B3BE2C
0x67F7CB: push    ecx
0x67F7CC: call    sub_680AA0
0x67F7D1: fstp    [esp+34h+var_8]
0x67F7D5: add     esp, 14h
0x67F7D8: mov     ecx, esi
0x67F7DA: call    sub_6804B0
0x67F7DF: fadd    [esp+20h+var_8]
0x67F7E3: cmp     dword ptr ds:0B3BE04h, 0
0x67F7EA: fstp    [esp+20h+var_10]
0x67F7EE: fld     [esp+20h+var_10]
0x67F7F2: jz      short loc_67F803
0x67F7F4: fld     dword ptr ds:0B1545Ch
0x67F7FA: fcomp   st(1)
0x67F7FC: fnstsw  ax
0x67F7FE: test    ah, 41h
0x67F801: jnz     short loc_67F811
0x67F803: fstp    dword ptr ds:0B1545Ch
0x67F809: mov     ds:0B3BE04h, esi
0x67F80F: jmp     short loc_67F813
0x67F811: fstp    st
0x67F813: mov     edi, [edi+4]
0x67F816: test    edi, edi
0x67F818: jnz     loc_67F71E
0x67F81E: cmp     [esp+20h+var_C], 0
0x67F823: jnz     loc_67F6F0
0x67F829: pop     edi
0x67F82A: pop     esi
0x67F82B: mov     esp, ebp
0x67F82D: pop     ebp
0x67F82E: retn
