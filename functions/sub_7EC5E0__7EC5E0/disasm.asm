0x7EC5E0: push    ebx
0x7EC5E1: push    ebp
0x7EC5E2: push    esi
0x7EC5E3: mov     esi, ecx
0x7EC5E5: mov     eax, [esi]
0x7EC5E7: mov     edx, [eax+0B0h]
0x7EC5ED: push    edi
0x7EC5EE: call    edx
0x7EC5F0: mov     edi, [esi+70h]
0x7EC5F3: mov     ebp, [esi+9Ch]
0x7EC5F9: mov     ebx, [edi+58h]
0x7EC5FC: add     edi, 58h ; 'X'
0x7EC5FF: cmp     ebx, ebp
0x7EC601: jz      short loc_7EC633
0x7EC603: test    ebx, ebx
0x7EC605: jz      short loc_7EC623
0x7EC607: lea     eax, [ebx+4]
0x7EC60A: push    eax; lpAddend
0x7EC60B: call    dword ptr ds:0A2807Ch
0x7EC611: test    eax, eax
0x7EC613: jnz     short loc_7EC623
0x7EC615: test    ebx, ebx
0x7EC617: jz      short loc_7EC623
0x7EC619: mov     edx, [ebx]
0x7EC61B: mov     eax, [edx]
0x7EC61D: push    1
0x7EC61F: mov     ecx, ebx
0x7EC621: call    eax
0x7EC623: test    ebp, ebp
0x7EC625: mov     [edi], ebp
0x7EC627: jz      short loc_7EC633
0x7EC629: add     ebp, 4
0x7EC62C: push    ebp; lpAddend
0x7EC62D: call    dword ptr ds:0A28078h
0x7EC633: mov     ebx, [esi+70h]
0x7EC636: mov     ebp, [esi+0A8h]
0x7EC63C: mov     edi, [ebx+44h]
0x7EC63F: add     ebx, 44h ; 'D'
0x7EC642: cmp     edi, ebp
0x7EC644: jz      short loc_7EC676
0x7EC646: test    edi, edi
0x7EC648: jz      short loc_7EC666
0x7EC64A: lea     ecx, [edi+4]
0x7EC64D: push    ecx; lpAddend
0x7EC64E: call    dword ptr ds:0A2807Ch
0x7EC654: test    eax, eax
0x7EC656: jnz     short loc_7EC666
0x7EC658: test    edi, edi
0x7EC65A: jz      short loc_7EC666
0x7EC65C: mov     edx, [edi]
0x7EC65E: mov     eax, [edx]
0x7EC660: push    1
0x7EC662: mov     ecx, edi
0x7EC664: call    eax
0x7EC666: test    ebp, ebp
0x7EC668: mov     [ebx], ebp
0x7EC66A: jz      short loc_7EC676
0x7EC66C: add     ebp, 4
0x7EC66F: push    ebp; lpAddend
0x7EC670: call    dword ptr ds:0A28078h
0x7EC676: mov     ebx, [esi+0ACh]
0x7EC67C: mov     ebp, [esi+98h]
0x7EC682: mov     edi, [ebx+58h]
0x7EC685: add     ebx, 58h ; 'X'
0x7EC688: cmp     edi, ebp
0x7EC68A: jz      short loc_7EC6BC
0x7EC68C: test    edi, edi
0x7EC68E: jz      short loc_7EC6AC
0x7EC690: lea     ecx, [edi+4]
0x7EC693: push    ecx; lpAddend
0x7EC694: call    dword ptr ds:0A2807Ch
0x7EC69A: test    eax, eax
0x7EC69C: jnz     short loc_7EC6AC
0x7EC69E: test    edi, edi
0x7EC6A0: jz      short loc_7EC6AC
0x7EC6A2: mov     edx, [edi]
0x7EC6A4: mov     eax, [edx]
0x7EC6A6: push    1
0x7EC6A8: mov     ecx, edi
0x7EC6AA: call    eax
0x7EC6AC: test    ebp, ebp
0x7EC6AE: mov     [ebx], ebp
0x7EC6B0: jz      short loc_7EC6BC
0x7EC6B2: add     ebp, 4
0x7EC6B5: push    ebp; lpAddend
0x7EC6B6: call    dword ptr ds:0A28078h
0x7EC6BC: mov     ebx, [esi+0ACh]
0x7EC6C2: mov     ebp, [esi+0A4h]
0x7EC6C8: mov     edi, [ebx+44h]
0x7EC6CB: add     ebx, 44h ; 'D'
0x7EC6CE: cmp     edi, ebp
0x7EC6D0: jz      short loc_7EC702
0x7EC6D2: test    edi, edi
0x7EC6D4: jz      short loc_7EC6F2
0x7EC6D6: lea     ecx, [edi+4]
0x7EC6D9: push    ecx; lpAddend
0x7EC6DA: call    dword ptr ds:0A2807Ch
0x7EC6E0: test    eax, eax
0x7EC6E2: jnz     short loc_7EC6F2
0x7EC6E4: test    edi, edi
0x7EC6E6: jz      short loc_7EC6F2
0x7EC6E8: mov     edx, [edi]
0x7EC6EA: mov     eax, [edx]
0x7EC6EC: push    1
0x7EC6EE: mov     ecx, edi
0x7EC6F0: call    eax
0x7EC6F2: test    ebp, ebp
0x7EC6F4: mov     [ebx], ebp
0x7EC6F6: jz      short loc_7EC702
0x7EC6F8: add     ebp, 4
0x7EC6FB: push    ebp; lpAddend
0x7EC6FC: call    dword ptr ds:0A28078h
0x7EC702: mov     ebx, [esi+0B0h]
0x7EC708: mov     ebp, [esi+94h]
0x7EC70E: mov     edi, [ebx+58h]
0x7EC711: add     ebx, 58h ; 'X'
0x7EC714: cmp     edi, ebp
0x7EC716: jz      short loc_7EC748
0x7EC718: test    edi, edi
0x7EC71A: jz      short loc_7EC738
0x7EC71C: lea     ecx, [edi+4]
0x7EC71F: push    ecx; lpAddend
0x7EC720: call    dword ptr ds:0A2807Ch
0x7EC726: test    eax, eax
0x7EC728: jnz     short loc_7EC738
0x7EC72A: test    edi, edi
0x7EC72C: jz      short loc_7EC738
0x7EC72E: mov     edx, [edi]
0x7EC730: mov     eax, [edx]
0x7EC732: push    1
0x7EC734: mov     ecx, edi
0x7EC736: call    eax
0x7EC738: test    ebp, ebp
0x7EC73A: mov     [ebx], ebp
0x7EC73C: jz      short loc_7EC748
0x7EC73E: add     ebp, 4
0x7EC741: push    ebp; lpAddend
0x7EC742: call    dword ptr ds:0A28078h
0x7EC748: mov     ebx, [esi+0A0h]
0x7EC74E: mov     esi, [esi+0B0h]
0x7EC754: mov     edi, [esi+44h]
0x7EC757: add     esi, 44h ; 'D'
0x7EC75A: cmp     edi, ebx
0x7EC75C: jz      short loc_7EC78E
0x7EC75E: test    edi, edi
0x7EC760: jz      short loc_7EC77E
0x7EC762: lea     ecx, [edi+4]
0x7EC765: push    ecx; lpAddend
0x7EC766: call    dword ptr ds:0A2807Ch
0x7EC76C: test    eax, eax
0x7EC76E: jnz     short loc_7EC77E
0x7EC770: test    edi, edi
0x7EC772: jz      short loc_7EC77E
0x7EC774: mov     edx, [edi]
0x7EC776: mov     eax, [edx]
0x7EC778: push    1
0x7EC77A: mov     ecx, edi
0x7EC77C: call    eax
0x7EC77E: test    ebx, ebx
0x7EC780: mov     [esi], ebx
0x7EC782: jz      short loc_7EC78E
0x7EC784: add     ebx, 4
0x7EC787: push    ebx; lpAddend
0x7EC788: call    dword ptr ds:0A28078h
0x7EC78E: pop     edi
0x7EC78F: pop     esi
0x7EC790: pop     ebp
0x7EC791: pop     ebx
0x7EC792: retn
