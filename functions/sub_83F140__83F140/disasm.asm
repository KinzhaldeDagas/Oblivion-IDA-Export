0x83F140: push    0FFFFFFFFh
0x83F142: push    offset SEH_882120
0x83F147: mov     eax, large fs:0
0x83F14D: push    eax
0x83F14E: push    ebx
0x83F14F: push    ebp
0x83F150: push    esi
0x83F151: push    edi
0x83F152: mov     eax, ds:0B30AACh
0x83F157: xor     eax, esp
0x83F159: push    eax
0x83F15A: lea     eax, [esp+20h+var_C]
0x83F15E: mov     large fs:0, eax
0x83F164: mov     esi, ecx
0x83F166: mov     ebx, [esp+20h+arg_8]
0x83F16A: mov     eax, [ebx+10h]
0x83F16D: mov     edi, ds:0B45884h
0x83F173: push    eax
0x83F174: call    sub_848C40
0x83F179: mov     ebp, [ebx+0Ch]
0x83F17C: push    ebp
0x83F17D: mov     ecx, esi
0x83F17F: call    sub_848E50
0x83F184: mov     ebx, [ebx+10h]
0x83F187: mov     ecx, [esp+20h+arg_0]
0x83F18B: mov     eax, [esi]
0x83F18D: mov     edx, [eax+0BCh]
0x83F193: push    ebx
0x83F194: push    ebp
0x83F195: push    ecx
0x83F196: mov     ecx, esi
0x83F198: call    edx
0x83F19A: mov     eax, [edi+24h]
0x83F19D: mov     ebx, [esp+20h+arg_C]
0x83F1A1: mov     ebp, [eax]
0x83F1A3: mov     edx, [ebx]
0x83F1A5: mov     eax, [edx+88h]
0x83F1AB: push    0
0x83F1AD: mov     ecx, ebx
0x83F1AF: mov     [esp+24h+arg_8], ebp
0x83F1B3: call    eax
0x83F1B5: mov     ebp, [ebp+4]
0x83F1B8: cmp     ebp, eax
0x83F1BA: mov     [esp+20h+arg_0], eax
0x83F1BE: jz      short loc_83F1FA
0x83F1C0: test    ebp, ebp
0x83F1C2: jz      short loc_83F1E5
0x83F1C4: lea     ecx, [ebp+4]
0x83F1C7: push    ecx; lpAddend
0x83F1C8: call    dword ptr ds:0A2807Ch
0x83F1CE: test    eax, eax
0x83F1D0: jnz     short loc_83F1E1
0x83F1D2: test    ebp, ebp
0x83F1D4: jz      short loc_83F1E1
0x83F1D6: mov     edx, [ebp+0]
0x83F1D9: mov     eax, [edx]
0x83F1DB: push    1
0x83F1DD: mov     ecx, ebp
0x83F1DF: call    eax
0x83F1E1: mov     eax, [esp+20h+arg_0]
0x83F1E5: test    eax, eax
0x83F1E7: mov     ecx, [esp+20h+arg_8]
0x83F1EB: mov     [ecx+4], eax
0x83F1EE: jz      short loc_83F1FA
0x83F1F0: add     eax, 4
0x83F1F3: push    eax; lpAddend
0x83F1F4: call    dword ptr ds:0A28078h
0x83F1FA: mov     edx, [esp+20h+arg_8]
0x83F1FE: push    ebx
0x83F1FF: push    edx
0x83F200: mov     ecx, esi
0x83F202: call    sub_848FA0
0x83F207: mov     eax, [edi+24h]
0x83F20A: mov     ebp, [eax+4]
0x83F20D: push    0
0x83F20F: push    ebx
0x83F210: mov     ecx, esi
0x83F212: mov     [esp+28h+arg_8], ebp
0x83F216: call    sub_848FD0
0x83F21B: mov     ebp, [ebp+4]
0x83F21E: cmp     ebp, eax
0x83F220: mov     [esp+20h+arg_0], eax
0x83F224: jz      short loc_83F260
0x83F226: test    ebp, ebp
0x83F228: jz      short loc_83F24B
0x83F22A: lea     ecx, [ebp+4]
0x83F22D: push    ecx; lpAddend
0x83F22E: call    dword ptr ds:0A2807Ch
0x83F234: test    eax, eax
0x83F236: jnz     short loc_83F247
0x83F238: test    ebp, ebp
0x83F23A: jz      short loc_83F247
0x83F23C: mov     edx, [ebp+0]
0x83F23F: mov     eax, [edx]
0x83F241: push    1
0x83F243: mov     ecx, ebp
0x83F245: call    eax
0x83F247: mov     eax, [esp+20h+arg_0]
0x83F24B: test    eax, eax
0x83F24D: mov     ecx, [esp+20h+arg_8]
0x83F251: mov     [ecx+4], eax
0x83F254: jz      short loc_83F260
0x83F256: add     eax, 4
0x83F259: push    eax; lpAddend
0x83F25A: call    dword ptr ds:0A28078h
0x83F260: mov     edx, [esp+20h+arg_8]
0x83F264: push    ebx
0x83F265: push    edx
0x83F266: mov     ecx, esi
0x83F268: call    sub_848FA0
0x83F26D: mov     ecx, [edi+24h]
0x83F270: mov     ebx, [ecx+18h]
0x83F273: mov     eax, ds:0B43108h
0x83F278: mov     ebp, [ebx+4]
0x83F27B: add     ebx, 4
0x83F27E: cmp     ebp, eax
0x83F280: mov     [esp+20h+arg_8], eax
0x83F284: jz      short loc_83F2BB
0x83F286: test    ebp, ebp
0x83F288: jz      short loc_83F2AB
0x83F28A: lea     edx, [ebp+4]
0x83F28D: push    edx; lpAddend
0x83F28E: call    dword ptr ds:0A2807Ch
0x83F294: test    eax, eax
0x83F296: jnz     short loc_83F2A7
0x83F298: test    ebp, ebp
0x83F29A: jz      short loc_83F2A7
0x83F29C: mov     eax, [ebp+0]
0x83F29F: mov     edx, [eax]
0x83F2A1: push    1
0x83F2A3: mov     ecx, ebp
0x83F2A5: call    edx
0x83F2A7: mov     eax, [esp+20h+arg_8]
0x83F2AB: test    eax, eax
0x83F2AD: mov     [ebx], eax
0x83F2AF: jz      short loc_83F2BB
0x83F2B1: add     eax, 4
0x83F2B4: push    eax; lpAddend
0x83F2B5: call    dword ptr ds:0A28078h
0x83F2BB: mov     eax, [edi+24h]
0x83F2BE: mov     ebp, [eax+1Ch]
0x83F2C1: mov     eax, ds:0B4310Ch
0x83F2C6: mov     ebx, [ebp+4]
0x83F2C9: cmp     ebx, eax
0x83F2CB: mov     ecx, eax
0x83F2CD: mov     [esp+20h+arg_8], ecx
0x83F2D1: jz      short loc_83F308
0x83F2D3: test    ebx, ebx
0x83F2D5: jz      short loc_83F2F7
0x83F2D7: lea     ecx, [ebx+4]
0x83F2DA: push    ecx; lpAddend
0x83F2DB: call    dword ptr ds:0A2807Ch
0x83F2E1: test    eax, eax
0x83F2E3: jnz     short loc_83F2F3
0x83F2E5: test    ebx, ebx
0x83F2E7: jz      short loc_83F2F3
0x83F2E9: mov     edx, [ebx]
0x83F2EB: mov     eax, [edx]
0x83F2ED: push    1
0x83F2EF: mov     ecx, ebx
0x83F2F1: call    eax
0x83F2F3: mov     ecx, [esp+20h+arg_8]
0x83F2F7: test    ecx, ecx
0x83F2F9: mov     [ebp+4], ecx
0x83F2FC: jz      short loc_83F308
0x83F2FE: add     ecx, 4
0x83F301: push    ecx; lpAddend
0x83F302: call    dword ptr ds:0A28078h
0x83F308: mov     ebx, 1
0x83F30D: add     [edi+60h], ebx
0x83F310: mov     [esp+20h+arg_8], edi
0x83F314: mov     edx, [esi+38h]
0x83F317: lea     ecx, [esp+20h+arg_8]
0x83F31B: push    ecx
0x83F31C: push    edx
0x83F31D: lea     ecx, [esi+40h]
0x83F320: mov     [esp+28h+var_4], 0
0x83F328: call    sub_76CE40
0x83F32D: or      eax, 0FFFFFFFFh
0x83F330: add     [edi+60h], eax
0x83F333: mov     [esp+20h+var_4], eax
0x83F337: jnz     short loc_83F340
0x83F339: mov     ecx, edi
0x83F33B: call    sub_7604D0
0x83F340: add     [esi+38h], ebx
0x83F343: mov     ecx, [esp+20h+var_C]
0x83F347: mov     large fs:0, ecx
0x83F34E: pop     ecx
0x83F34F: pop     edi
0x83F350: pop     esi
0x83F351: pop     ebp
0x83F352: pop     ebx
0x83F353: add     esp, 0Ch
0x83F356: retn    10h
