0x9843B3: mov     eax, [ebp+8]
0x9843B6: cmp     eax, edi
0x9843B8: jz      short loc_9843C2
0x9843BA: cmp     [ebp+0Ch], edi
0x9843BD: jbe     short loc_9843C2
0x9843BF: mov     byte ptr [eax], 0
0x9843C2: mov     eax, [ebp+10h]
0x9843C5: cmp     eax, edi
0x9843C7: jz      short loc_9843D1
0x9843C9: cmp     [ebp+14h], edi
0x9843CC: jbe     short loc_9843D1
0x9843CE: mov     byte ptr [eax], 0
0x9843D1: mov     eax, [ebp+18h]
0x9843D4: cmp     eax, edi
0x9843D6: jz      short loc_9843E0
0x9843D8: cmp     [ebp+1Ch], edi
0x9843DB: jbe     short loc_9843E0
0x9843DD: mov     byte ptr [eax], 0
0x9843E0: mov     eax, [ebp+20h]
0x9843E3: cmp     eax, edi
0x9843E5: jz      short loc_9843EF
0x9843E7: cmp     [ebp+24h], edi
0x9843EA: jbe     short loc_9843EF
0x9843EC: mov     byte ptr [eax], 0
0x9843EF: call    __errno
0x9843F4: cmp     ebx, edi
0x9843F6: jnz     short loc_98440E
0x9843F8: push    16h
0x9843FA: pop     esi
0x9843FB: push    edi
0x9843FC: push    edi
0x9843FD: push    edi
0x9843FE: push    edi
0x9843FF: push    edi
0x984400: mov     [eax], esi
0x984402: call    __invalid_parameter
0x984407: add     esp, 14h
0x98440A: mov     eax, esi
0x98440C: jmp     short loc_984437
0x98440E: cmp     [ebp-8], edi
0x984411: jnz     short loc_9843F8
0x984413: push    22h ; '"'
0x984415: pop     ecx
0x984416: mov     [eax], ecx
0x984418: mov     eax, ecx
0x98441A: jmp     short loc_984437
0x98441C: push    esi
0x98441D: push    ebx
0x98441E: push    0FFFFFFFFh
0x984420: push    dword ptr [ebp+18h]
0x984423: call    __mbsnbcpy_s
0x984428: add     esp, 10h
0x98442B: mov     eax, [ebp+20h]
0x98442E: test    eax, eax
0x984430: jz      short loc_984435
0x984432: mov     byte ptr [eax], 0
0x984435: xor     eax, eax
0x984437: pop     edi
0x984438: pop     esi
0x984439: pop     ebx
0x98443A: leave
0x98443B: retn
