0x999886: push    ebp
0x999887: mov     ebp, esp
0x999889: push    ecx
0x99988A: mov     edx, [ebp+arg_4]
0x99988D: movzx   eax, word ptr [edx+6]
0x999891: push    ebx
0x999892: mov     ecx, eax
0x999894: push    esi
0x999895: push    edi
0x999896: shr     ecx, 4
0x999899: and     eax, 8000h
0x99989E: mov     edi, 7FFh
0x9998A3: and     ecx, edi
0x9998A5: mov     [ebp+arg_4], eax
0x9998A8: mov     eax, [edx+4]
0x9998AB: mov     edx, [edx]
0x9998AD: movzx   ebx, cx
0x9998B0: mov     esi, 80000000h
0x9998B5: and     eax, 0FFFFFh
0x9998BA: test    ebx, ebx
0x9998BC: mov     [ebp+var_4], esi
0x9998BF: jz      short loc_9998D4
0x9998C1: cmp     ebx, edi
0x9998C3: jz      short loc_9998CD
0x9998C5: add     ecx, 3C00h
0x9998CB: jmp     short loc_9998F5
0x9998CD: mov     edi, 7FFFh
0x9998D2: jmp     short loc_9998F8
0x9998D4: xor     ebx, ebx
0x9998D6: cmp     eax, ebx
0x9998D8: jnz     short loc_9998EC
0x9998DA: cmp     edx, ebx
0x9998DC: jnz     short loc_9998EC
0x9998DE: mov     eax, [ebp+arg_0]
0x9998E1: mov     cx, word ptr [ebp+arg_4]
0x9998E5: mov     [eax+4], ebx
0x9998E8: mov     [eax], ebx
0x9998EA: jmp     short loc_999938
0x9998EC: add     ecx, 3C01h
0x9998F2: mov     [ebp+var_4], ebx
0x9998F5: movzx   edi, cx
0x9998F8: mov     ecx, edx
0x9998FA: shr     ecx, 15h
0x9998FD: shl     eax, 0Bh
0x999900: or      ecx, eax
0x999902: or      ecx, [ebp+var_4]
0x999905: mov     eax, [ebp+arg_0]
0x999908: shl     edx, 0Bh
0x99990B: test    esi, ecx
0x99990D: mov     [eax+4], ecx
0x999910: mov     [eax], edx
0x999912: jnz     short loc_999933
0x999914: mov     ecx, [eax]
0x999916: mov     edx, [eax+4]
0x999919: mov     ebx, ecx
0x99991B: add     edx, edx
0x99991D: shr     ebx, 1Fh
0x999920: or      edx, ebx
0x999922: add     ecx, ecx
0x999924: add     edi, 0FFFFh
0x99992A: test    esi, edx
0x99992C: mov     [eax+4], edx
0x99992F: mov     [eax], ecx
0x999931: jz      short loc_999914
0x999933: mov     ecx, [ebp+arg_4]
0x999936: or      ecx, edi
0x999938: pop     edi
0x999939: pop     esi
0x99993A: mov     [eax+8], cx
0x99993E: pop     ebx
0x99993F: leave
0x999940: retn
