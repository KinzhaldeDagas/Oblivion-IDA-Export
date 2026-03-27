0x8B8060: push    edi
0x8B8061: mov     edi, ecx
0x8B8063: cmp     dword ptr [edi+0Ch], 0
0x8B8067: jnz     loc_8B8106
0x8B806D: push    esi
0x8B806E: push    1
0x8B8070: push    30h ; '0'
0x8B8072: mov     ecx, offset FormHeap
0x8B8077: call    j_MemoryHeap_Alloc
0x8B807C: mov     dl, al
0x8B807E: and     dl, 0Fh
0x8B8081: mov     cl, 10h
0x8B8083: sub     cl, dl
0x8B8085: movzx   edx, cl
0x8B8088: mov     [eax+edx-1], cl
0x8B808C: mov     dword ptr [eax+edx], 0
0x8B8093: add     eax, edx
0x8B8095: fld     dword ptr ds:0B2EFC4h
0x8B809B: lea     esi, [eax+10h]
0x8B809E: fstp    dword ptr [eax+4]
0x8B80A1: fldz
0x8B80A3: fst     dword ptr [esi]
0x8B80A5: fst     dword ptr [esi+4]
0x8B80A8: fst     dword ptr [esi+8]
0x8B80AB: fstp    dword ptr [esi+0Ch]
0x8B80AE: fld1
0x8B80B0: fst     dword ptr [esi]
0x8B80B2: fst     dword ptr [esi+4]
0x8B80B5: fstp    dword ptr [esi+8]
0x8B80B8: cmp     dword ptr [edi+8], 0
0x8B80BC: mov     [edi+0Ch], eax
0x8B80BF: jz      short loc_8B80F7
0x8B80C1: push    eax
0x8B80C2: mov     ecx, edi
0x8B80C4: call    sub_8AEA60
0x8B80C9: mov     eax, [edi+8]
0x8B80CC: test    eax, eax
0x8B80CE: jz      short loc_8B80EA
0x8B80D0: add     eax, 10h
0x8B80D3: push    eax
0x8B80D4: mov     ecx, esi
0x8B80D6: call    sub_47DCD0
0x8B80DB: mov     eax, [esp+8+arg_0]
0x8B80DF: mov     byte ptr [eax], 1
0x8B80E2: mov     eax, [edi+0Ch]
0x8B80E5: pop     esi
0x8B80E6: pop     edi
0x8B80E7: retn    4
0x8B80EA: mov     eax, offset stru_BA7A40
0x8B80EF: push    eax
0x8B80F0: mov     ecx, esi
0x8B80F2: call    sub_47DCD0
0x8B80F7: mov     eax, [esp+8+arg_0]
0x8B80FB: mov     byte ptr [eax], 1
0x8B80FE: mov     eax, [edi+0Ch]
0x8B8101: pop     esi
0x8B8102: pop     edi
0x8B8103: retn    4
0x8B8106: mov     ecx, [esp+4+arg_0]
0x8B810A: mov     byte ptr [ecx], 0
0x8B810D: mov     eax, [edi+0Ch]
0x8B8110: pop     edi
0x8B8111: retn    4
