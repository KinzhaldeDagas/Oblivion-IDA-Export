0x812980: push    esi
0x812981: mov     esi, ecx
0x812983: movzx   eax, word ptr [esi+0Ch]
0x812987: mov     ecx, [esi+14h]
0x81298A: add     eax, eax
0x81298C: add     eax, eax
0x81298E: push    eax
0x81298F: push    0
0x812991: push    ecx
0x812992: call    __memset
0x812997: movzx   edx, word ptr [esi+0Ch]
0x81299B: mov     eax, [esi+10h]
0x81299E: shl     edx, 4
0x8129A1: push    edx
0x8129A2: push    0
0x8129A4: push    eax
0x8129A5: call    __memset
0x8129AA: xor     eax, eax
0x8129AC: add     esp, 18h
0x8129AF: cmp     [esi+0Ch], ax
0x8129B3: jbe     short loc_8129D4
0x8129B5: fld     dword ptr ds:0A418D8h
0x8129BB: xor     ecx, ecx
0x8129BD: mov     edx, [esi+10h]
0x8129C0: fst     dword ptr [edx+ecx+8]
0x8129C4: movzx   edx, word ptr [esi+0Ch]
0x8129C8: add     eax, 1
0x8129CB: add     ecx, 10h
0x8129CE: cmp     eax, edx
0x8129D0: jl      short loc_8129BD
0x8129D2: fstp    st
0x8129D4: movzx   eax, word ptr [esi+0Eh]
0x8129D8: sub     ds:0B4334Ch, eax
0x8129DE: mov     word ptr [esi+0Eh], 0
0x8129E4: mov     ecx, esi
0x8129E6: pop     esi
0x8129E7: jmp     sub_8126D0
