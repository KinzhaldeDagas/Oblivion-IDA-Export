0x803690: push    0FFFFFFFFh
0x803692: push    offset SEH_803A30
0x803697: mov     eax, large fs:0
0x80369D: push    eax
0x80369E: push    ecx
0x80369F: push    ebx
0x8036A0: push    ebp
0x8036A1: push    esi
0x8036A2: push    edi
0x8036A3: mov     eax, ds:0B30AACh
0x8036A8: xor     eax, esp
0x8036AA: push    eax
0x8036AB: lea     eax, [esp+24h+var_C]
0x8036AF: mov     large fs:0, eax
0x8036B5: mov     esi, ecx
0x8036B7: mov     [esp+24h+var_10], esi
0x8036BB: mov     [esp+24h+var_4], 2
0x8036C3: call    NiTPointerList__FreeAllNodes
0x8036C8: mov     edi, [esi+14h]
0x8036CB: mov     ebp, ds:0A2807Ch
0x8036D1: xor     ebx, ebx
0x8036D3: cmp     edi, ebx
0x8036D5: jz      short loc_8036F2
0x8036D7: lea     eax, [edi+4]
0x8036DA: push    eax; lpAddend
0x8036DB: call    ebp ; InterlockedDecrement
0x8036DD: test    eax, eax
0x8036DF: jnz     short loc_8036EF
0x8036E1: cmp     edi, ebx
0x8036E3: jz      short loc_8036EF
0x8036E5: mov     edx, [edi]
0x8036E7: mov     eax, [edx]
0x8036E9: push    1
0x8036EB: mov     ecx, edi
0x8036ED: call    eax
0x8036EF: mov     [esi+14h], ebx
0x8036F2: mov     [esi+18h], ebx
0x8036F5: mov     edi, [esi+10h]
0x8036F8: cmp     edi, ebx
0x8036FA: jz      short loc_803717
0x8036FC: lea     ecx, [edi+4]
0x8036FF: push    ecx; lpAddend
0x803700: call    ebp ; InterlockedDecrement
0x803702: test    eax, eax
0x803704: jnz     short loc_803714
0x803706: cmp     edi, ebx
0x803708: jz      short loc_803714
0x80370A: mov     edx, [edi]
0x80370C: mov     eax, [edx]
0x80370E: push    1
0x803710: mov     ecx, edi
0x803712: call    eax
0x803714: mov     [esi+10h], ebx
0x803717: mov     edi, [esi+14h]
0x80371A: cmp     edi, ebx
0x80371C: mov     byte ptr [esp+24h+var_4], 1
0x803721: jz      short loc_80373B
0x803723: lea     ecx, [edi+4]
0x803726: push    ecx; lpAddend
0x803727: call    ebp ; InterlockedDecrement
0x803729: test    eax, eax
0x80372B: jnz     short loc_80373B
0x80372D: cmp     edi, ebx
0x80372F: jz      short loc_80373B
0x803731: mov     edx, [edi]
0x803733: mov     eax, [edx]
0x803735: push    1
0x803737: mov     ecx, edi
0x803739: call    eax
0x80373B: mov     edi, [esi+10h]
0x80373E: cmp     edi, ebx
0x803740: mov     byte ptr [esp+24h+var_4], bl
0x803744: jz      short loc_80375E
0x803746: lea     ecx, [edi+4]
0x803749: push    ecx; lpAddend
0x80374A: call    ebp ; InterlockedDecrement
0x80374C: test    eax, eax
0x80374E: jnz     short loc_80375E
0x803750: cmp     edi, ebx
0x803752: jz      short loc_80375E
0x803754: mov     edx, [edi]
0x803756: mov     eax, [edx]
0x803758: push    1
0x80375A: mov     ecx, edi
0x80375C: call    eax
0x80375E: mov     ecx, esi; this
0x803760: mov     [esp+24h+var_4], 0FFFFFFFFh
0x803768: call    ??1?$NiTPointerList@PAVBSImageSpaceShader@@@@UAE@XZ; NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(void)
0x80376D: mov     ecx, dword ptr [esp+24h+var_C]
0x803771: mov     large fs:0, ecx
0x803778: pop     ecx
0x803779: pop     edi
0x80377A: pop     esi
0x80377B: pop     ebp
0x80377C: pop     ebx
0x80377D: add     esp, 10h
0x803780: retn
