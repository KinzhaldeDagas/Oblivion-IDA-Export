0x497950: push    ecx
0x497951: push    ebx
0x497952: push    ebp
0x497953: push    esi
0x497954: push    edi
0x497955: mov     edi, [esp+14h+arg_0]
0x497959: xor     ebp, ebp
0x49795B: cmp     edi, ebp
0x49795D: mov     esi, ecx
0x49795F: mov     [esp+14h+var_4], ebp
0x497963: mov     bl, 1
0x497965: jz      short loc_4979B5
0x497967: mov     eax, [edi]
0x497969: mov     edx, [eax+154h]
0x49796F: mov     ecx, edi
0x497971: call    edx
0x497973: test    eax, eax
0x497975: jz      short loc_4979B5
0x497977: mov     eax, [edi]
0x497979: mov     edx, [eax+154h]
0x49797F: mov     ecx, edi
0x497981: call    edx
0x497983: cmp     eax, ebp
0x497985: jz      short loc_497992
0x497987: mov     edx, [eax]
0x497989: mov     ecx, eax
0x49798B: mov     eax, [edx+8]
0x49798E: call    eax
0x497990: mov     ebp, eax
0x497992: cmp     byte ptr [esi], 0
0x497995: jnz     short loc_4979A4
0x497997: push    edi
0x497998: mov     ecx, esi
0x49799A: call    sub_4978A0
0x49799F: cmp     byte ptr [esi], 0
0x4979A2: jz      short loc_4979B5
0x4979A4: push    0
0x4979A6: lea     ecx, [esp+18h+var_4]
0x4979AA: push    ecx
0x4979AB: push    ebp
0x4979AC: mov     ecx, esi
0x4979AE: call    sub_497500
0x4979B3: mov     bl, al
0x4979B5: movzx   edx, byte ptr [esi]
0x4979B8: cmp     [esp+14h+var_4], edx
0x4979BC: jnz     short loc_4979CF
0x4979BE: test    bl, bl
0x4979C0: jz      short loc_4979CF
0x4979C2: pop     edi
0x4979C3: pop     esi
0x4979C4: pop     ebp
0x4979C5: mov     eax, 1
0x4979CA: pop     ebx
0x4979CB: pop     ecx
0x4979CC: retn    4
0x4979CF: pop     edi
0x4979D0: pop     esi
0x4979D1: pop     ebp
0x4979D2: xor     eax, eax
0x4979D4: pop     ebx
0x4979D5: pop     ecx
0x4979D6: retn    4
