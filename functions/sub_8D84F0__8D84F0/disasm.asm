0x8D84F0: sub     esp, 14h
0x8D84F3: push    ebx
0x8D84F4: mov     ebx, [esp+18h+arg_0]
0x8D84F8: mov     ecx, [ebx+4]
0x8D84FB: push    ebp
0x8D84FC: push    esi
0x8D84FD: push    edi
0x8D84FE: mov     edi, [esp+24h+arg_4]
0x8D8502: mov     eax, [edi+4]
0x8D8505: cmp     ecx, eax
0x8D8507: jl      short loc_8D850B
0x8D8509: mov     ecx, eax
0x8D850B: cmp     ecx, 20h ; ' '
0x8D850E: jge     loc_8D85C5
0x8D8514: xor     esi, esi
0x8D8516: test    eax, eax
0x8D8518: mov     [esp+24h+arg_4], esi
0x8D851C: jle     loc_8D878E
0x8D8522: mov     eax, [ebx+4]
0x8D8525: xor     edx, edx
0x8D8527: test    eax, eax
0x8D8529: jle     loc_8D85AD
0x8D852F: mov     eax, [edi]
0x8D8531: mov     ecx, [eax+esi*8]
0x8D8534: lea     eax, [eax+esi*8]
0x8D8537: mov     [esp+24h+var_14], eax
0x8D853B: mov     eax, [ebx]
0x8D853D: mov     [esp+24h+arg_0], ecx
0x8D8541: mov     ecx, eax
0x8D8543: mov     esi, [esp+24h+arg_0]
0x8D8547: cmp     [ecx], esi
0x8D8549: jnz     short loc_8D8557
0x8D854B: mov     esi, [ecx+4]
0x8D854E: mov     ebp, [esp+24h+var_14]
0x8D8552: cmp     esi, [ebp+4]
0x8D8555: jz      short loc_8D857C
0x8D8557: mov     esi, [esp+24h+arg_0]
0x8D855B: cmp     [ecx+4], esi
0x8D855E: jnz     short loc_8D856B
0x8D8560: mov     esi, [ecx]
0x8D8562: mov     ebp, [esp+24h+var_14]
0x8D8566: cmp     esi, [ebp+4]
0x8D8569: jz      short loc_8D857C
0x8D856B: mov     esi, [ebx+4]
0x8D856E: inc     edx
0x8D856F: add     ecx, 8
0x8D8572: cmp     edx, esi
0x8D8574: jl      short loc_8D8543
0x8D8576: mov     esi, [esp+24h+arg_4]
0x8D857A: jmp     short loc_8D85AD
0x8D857C: mov     ecx, [ebx+4]
0x8D857F: dec     ecx
0x8D8580: mov     [ebx+4], ecx
0x8D8583: mov     esi, [eax+ecx*8]
0x8D8586: mov     [eax+edx*8], esi
0x8D8589: mov     ecx, [eax+ecx*8+4]
0x8D858D: mov     esi, [esp+24h+arg_4]
0x8D8591: mov     [eax+edx*8+4], ecx
0x8D8595: mov     ecx, [edi+4]
0x8D8598: mov     eax, [edi]
0x8D859A: dec     ecx
0x8D859B: mov     [edi+4], ecx
0x8D859E: mov     edx, [eax+ecx*8]
0x8D85A1: mov     [eax+esi*8], edx
0x8D85A4: mov     ecx, [eax+ecx*8+4]
0x8D85A8: mov     [eax+esi*8+4], ecx
0x8D85AC: dec     esi
0x8D85AD: mov     eax, [edi+4]
0x8D85B0: inc     esi
0x8D85B1: cmp     esi, eax
0x8D85B3: mov     [esp+24h+arg_4], esi
0x8D85B7: jl      loc_8D8522
0x8D85BD: pop     edi
0x8D85BE: pop     esi
0x8D85BF: pop     ebp
0x8D85C0: pop     ebx
0x8D85C1: add     esp, 14h
0x8D85C4: retn
0x8D85C5: lea     ecx, [esp+24h+var_C]
0x8D85C9: call    sub_8B1100
0x8D85CE: mov     edx, [ebx+4]
0x8D85D1: push    edx
0x8D85D2: lea     ecx, [esp+28h+var_C]
0x8D85D6: call    sub_8B15E0
0x8D85DB: mov     ecx, [ebx+4]
0x8D85DE: xor     eax, eax
0x8D85E0: test    ecx, ecx
0x8D85E2: mov     [esp+24h+arg_0], eax
0x8D85E6: jle     loc_8D8685
0x8D85EC: jmp     short loc_8D85F2
0x8D85EE: mov     eax, [esp+24h+arg_0]
0x8D85F2: mov     ecx, [ebx]
0x8D85F4: mov     ebp, [ecx+eax*8]
0x8D85F7: mov     eax, [ecx+eax*8+4]
0x8D85FB: cmp     ebp, eax
0x8D85FD: mov     [esp+24h+var_10], eax
0x8D8601: jbe     short loc_8D860D
0x8D8603: mov     ecx, ebp
0x8D8605: mov     ebp, eax
0x8D8607: mov     [esp+24h+var_10], ecx
0x8D860B: mov     eax, ecx
0x8D860D: push    eax
0x8D860E: push    ebp
0x8D860F: lea     ecx, [esp+2Ch+var_C]
0x8D8613: call    sub_8B1250
0x8D8618: mov     esi, eax
0x8D861A: push    esi
0x8D861B: lea     edx, [esp+28h+arg_4]
0x8D861F: push    edx
0x8D8620: lea     ecx, [esp+2Ch+var_C]
0x8D8624: call    sub_8B0D80
0x8D8629: cmp     byte ptr [eax], 0
0x8D862C: lea     ecx, [esp+24h+var_C]
0x8D8630: jz      short loc_8D8659
0x8D8632: push    esi
0x8D8633: call    sub_8B0DD0
0x8D8638: add     eax, 1
0x8D863B: adc     edx, 0
0x8D863E: push    edx
0x8D863F: push    eax
0x8D8640: push    esi
0x8D8641: lea     ecx, [esp+30h+var_C]
0x8D8645: call    sub_8B0DF0
0x8D864A: mov     eax, [ebx]
0x8D864C: mov     ecx, [esp+24h+arg_0]
0x8D8650: mov     dword ptr [eax+ecx*8], 0
0x8D8657: jmp     short loc_8D8671
0x8D8659: mov     eax, [esp+24h+arg_0]
0x8D865D: shl     eax, 10h
0x8D8660: or      eax, 1
0x8D8663: cdq
0x8D8664: push    edx
0x8D8665: mov     edx, [esp+28h+var_10]
0x8D8669: push    eax
0x8D866A: push    edx
0x8D866B: push    ebp
0x8D866C: call    sub_8B1170
0x8D8671: mov     eax, [esp+24h+arg_0]
0x8D8675: mov     ecx, [ebx+4]
0x8D8678: inc     eax
0x8D8679: cmp     eax, ecx
0x8D867B: mov     [esp+24h+arg_0], eax
0x8D867F: jl      loc_8D85EE
0x8D8685: mov     eax, [edi+4]
0x8D8688: xor     esi, esi
0x8D868A: test    eax, eax
0x8D868C: mov     [esp+24h+arg_0], esi
0x8D8690: jle     loc_8D873A
0x8D8696: mov     ecx, [edi]
0x8D8698: mov     eax, [ecx+esi*8]
0x8D869B: mov     ecx, [ecx+esi*8+4]
0x8D869F: cmp     eax, ecx
0x8D86A1: jbe     short loc_8D86A9
0x8D86A3: mov     edx, eax
0x8D86A5: mov     eax, ecx
0x8D86A7: mov     ecx, edx
0x8D86A9: push    ecx
0x8D86AA: push    eax
0x8D86AB: lea     ecx, [esp+2Ch+var_C]
0x8D86AF: call    sub_8B1250
0x8D86B4: mov     ebp, eax
0x8D86B6: push    ebp
0x8D86B7: lea     edx, [esp+28h+arg_4]
0x8D86BB: push    edx
0x8D86BC: lea     ecx, [esp+2Ch+var_C]
0x8D86C0: call    sub_8B0D80
0x8D86C5: cmp     byte ptr [eax], 0
0x8D86C8: jz      short loc_8D872A
0x8D86CA: push    ebp
0x8D86CB: lea     ecx, [esp+28h+var_C]
0x8D86CF: call    sub_8B0DD0
0x8D86D4: mov     esi, eax
0x8D86D6: and     eax, 0FFFFh
0x8D86DB: cmp     eax, 1
0x8D86DE: lea     ecx, [esp+24h+var_C]
0x8D86E2: jle     short loc_8D86F4
0x8D86E4: add     esi, 0FFFFFFFFh
0x8D86E7: adc     edx, 0FFFFFFFFh
0x8D86EA: push    edx
0x8D86EB: push    esi
0x8D86EC: push    ebp
0x8D86ED: call    sub_8B0DF0
0x8D86F2: jmp     short loc_8D8706
0x8D86F4: push    ebp
0x8D86F5: call    sub_8B12E0
0x8D86FA: mov     ecx, [ebx]
0x8D86FC: sar     esi, 10h
0x8D86FF: mov     dword ptr [ecx+esi*8], 0
0x8D8706: mov     ecx, [edi+4]
0x8D8709: mov     eax, [edi]
0x8D870B: dec     ecx
0x8D870C: mov     [edi+4], ecx
0x8D870F: mov     edx, ecx
0x8D8711: mov     esi, [eax+edx*8]
0x8D8714: mov     ecx, [esp+24h+arg_0]
0x8D8718: mov     [eax+ecx*8], esi
0x8D871B: mov     edx, [eax+edx*8+4]
0x8D871F: mov     [eax+ecx*8+4], edx
0x8D8723: dec     ecx
0x8D8724: mov     [esp+24h+arg_0], ecx
0x8D8728: mov     esi, ecx
0x8D872A: mov     eax, [edi+4]
0x8D872D: inc     esi
0x8D872E: cmp     esi, eax
0x8D8730: mov     [esp+24h+arg_0], esi
0x8D8734: jl      loc_8D8696
0x8D873A: mov     eax, [ebx+4]
0x8D873D: xor     esi, esi
0x8D873F: xor     ecx, ecx
0x8D8741: test    eax, eax
0x8D8743: jle     short loc_8D8762
0x8D8745: mov     eax, [ebx]
0x8D8747: mov     edx, [eax+ecx*8]
0x8D874A: test    edx, edx
0x8D874C: jz      short loc_8D875A
0x8D874E: mov     [eax+esi*8], edx
0x8D8751: mov     edx, [eax+ecx*8+4]
0x8D8755: mov     [eax+esi*8+4], edx
0x8D8759: inc     esi
0x8D875A: mov     eax, [ebx+4]
0x8D875D: inc     ecx
0x8D875E: cmp     ecx, eax
0x8D8760: jl      short loc_8D8745
0x8D8762: mov     eax, [ebx+8]
0x8D8765: and     eax, 3FFFFFFFh
0x8D876A: cmp     eax, esi
0x8D876C: jge     short loc_8D8782
0x8D876E: add     eax, eax
0x8D8770: cmp     esi, eax
0x8D8772: jl      short loc_8D8776
0x8D8774: mov     eax, esi
0x8D8776: push    8
0x8D8778: push    eax
0x8D8779: push    ebx
0x8D877A: call    sub_8A6E40
0x8D877F: add     esp, 0Ch
0x8D8782: lea     ecx, [esp+24h+var_C]
0x8D8786: mov     [ebx+4], esi
0x8D8789: call    sub_8B1150
0x8D878E: pop     edi
0x8D878F: pop     esi
0x8D8790: pop     ebp
0x8D8791: pop     ebx
0x8D8792: add     esp, 14h
0x8D8795: retn
