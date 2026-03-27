0x84F120: push    0FFFFFFFFh
0x84F122: push    offset SEH_850270
0x84F127: mov     eax, large fs:0
0x84F12D: push    eax
0x84F12E: sub     esp, 8
0x84F131: push    ebx
0x84F132: push    ebp
0x84F133: push    esi
0x84F134: push    edi
0x84F135: mov     eax, ds:0B30AACh
0x84F13A: xor     eax, esp
0x84F13C: push    eax
0x84F13D: lea     eax, [esp+28h+var_C]
0x84F141: mov     large fs:0, eax
0x84F147: mov     [esp+28h+var_10], ecx
0x84F14B: mov     ebx, ds:0B459B4h
0x84F151: mov     eax, [ebx+24h]
0x84F154: mov     esi, [esp+28h+arg_C]
0x84F158: mov     edi, [eax]
0x84F15A: mov     edx, [esi]
0x84F15C: mov     eax, [edx+88h]
0x84F162: push    0
0x84F164: mov     ecx, esi
0x84F166: mov     [esp+2Ch+var_14], edi
0x84F16A: call    eax
0x84F16C: mov     edi, [edi+4]
0x84F16F: mov     ebp, eax
0x84F171: cmp     edi, ebp
0x84F173: jz      short loc_84F1AC
0x84F175: test    edi, edi
0x84F177: jz      short loc_84F195
0x84F179: lea     ecx, [edi+4]
0x84F17C: push    ecx; lpAddend
0x84F17D: call    dword ptr ds:0A2807Ch
0x84F183: test    eax, eax
0x84F185: jnz     short loc_84F195
0x84F187: test    edi, edi
0x84F189: jz      short loc_84F195
0x84F18B: mov     edx, [edi]
0x84F18D: mov     eax, [edx]
0x84F18F: push    1
0x84F191: mov     ecx, edi
0x84F193: call    eax
0x84F195: test    ebp, ebp
0x84F197: mov     edi, [esp+28h+var_14]
0x84F19B: mov     [edi+4], ebp
0x84F19E: jz      short loc_84F1B0
0x84F1A0: add     ebp, 4
0x84F1A3: push    ebp; lpAddend
0x84F1A4: call    dword ptr ds:0A28078h
0x84F1AA: jmp     short loc_84F1B0
0x84F1AC: mov     edi, [esp+28h+var_14]
0x84F1B0: test    edi, edi
0x84F1B2: jz      short loc_84F1CE
0x84F1B4: cmp     byte ptr ds:0B42CDDh, 0
0x84F1BB: jz      short loc_84F1CE
0x84F1BD: mov     edx, [esi]
0x84F1BF: mov     eax, [edx+78h]
0x84F1C2: mov     ecx, esi
0x84F1C4: call    eax
0x84F1C6: push    eax
0x84F1C7: mov     ecx, edi
0x84F1C9: call    sub_7715E0
0x84F1CE: mov     ecx, [ebx+24h]
0x84F1D1: mov     edi, [ecx+4]
0x84F1D4: mov     edx, [esi]
0x84F1D6: mov     eax, [edx+88h]
0x84F1DC: push    1
0x84F1DE: mov     ecx, esi
0x84F1E0: mov     [esp+2Ch+var_14], edi
0x84F1E4: call    eax
0x84F1E6: mov     edi, [edi+4]
0x84F1E9: mov     ebp, eax
0x84F1EB: cmp     edi, ebp
0x84F1ED: jz      short loc_84F226
0x84F1EF: test    edi, edi
0x84F1F1: jz      short loc_84F20F
0x84F1F3: lea     ecx, [edi+4]
0x84F1F6: push    ecx; lpAddend
0x84F1F7: call    dword ptr ds:0A2807Ch
0x84F1FD: test    eax, eax
0x84F1FF: jnz     short loc_84F20F
0x84F201: test    edi, edi
0x84F203: jz      short loc_84F20F
0x84F205: mov     edx, [edi]
0x84F207: mov     eax, [edx]
0x84F209: push    1
0x84F20B: mov     ecx, edi
0x84F20D: call    eax
0x84F20F: test    ebp, ebp
0x84F211: mov     edi, [esp+28h+var_14]
0x84F215: mov     [edi+4], ebp
0x84F218: jz      short loc_84F22A
0x84F21A: add     ebp, 4
0x84F21D: push    ebp; lpAddend
0x84F21E: call    dword ptr ds:0A28078h
0x84F224: jmp     short loc_84F22A
0x84F226: mov     edi, [esp+28h+var_14]
0x84F22A: test    edi, edi
0x84F22C: jz      short loc_84F248
0x84F22E: cmp     byte ptr ds:0B42CDDh, 0
0x84F235: jz      short loc_84F248
0x84F237: mov     edx, [esi]
0x84F239: mov     eax, [edx+78h]
0x84F23C: mov     ecx, esi
0x84F23E: call    eax
0x84F240: push    eax
0x84F241: mov     ecx, edi
0x84F243: call    sub_7715E0
0x84F248: mov     ecx, [ebx+24h]
0x84F24B: mov     edi, [ecx+8]
0x84F24E: mov     edx, [esi]
0x84F250: mov     eax, [edx+8Ch]
0x84F256: push    1
0x84F258: mov     ecx, esi
0x84F25A: mov     [esp+2Ch+var_14], edi
0x84F25E: call    eax
0x84F260: test    eax, eax
0x84F262: jz      short loc_84F276
0x84F264: mov     edx, [esi]
0x84F266: mov     eax, [edx+8Ch]
0x84F26C: push    1
0x84F26E: mov     ecx, esi
0x84F270: call    eax
0x84F272: mov     ebp, eax
0x84F274: jmp     short loc_84F28B
0x84F276: test    dword ptr [esi+1Ch], 80h
0x84F27D: mov     ebp, ds:0B430F0h
0x84F283: ja      short loc_84F28B
0x84F285: mov     ebp, ds:0B430DCh
0x84F28B: mov     edi, [edi+4]
0x84F28E: cmp     edi, ebp
0x84F290: jz      short loc_84F2C9
0x84F292: test    edi, edi
0x84F294: jz      short loc_84F2B2
0x84F296: lea     ecx, [edi+4]
0x84F299: push    ecx; lpAddend
0x84F29A: call    dword ptr ds:0A2807Ch
0x84F2A0: test    eax, eax
0x84F2A2: jnz     short loc_84F2B2
0x84F2A4: test    edi, edi
0x84F2A6: jz      short loc_84F2B2
0x84F2A8: mov     edx, [edi]
0x84F2AA: mov     eax, [edx]
0x84F2AC: push    1
0x84F2AE: mov     ecx, edi
0x84F2B0: call    eax
0x84F2B2: test    ebp, ebp
0x84F2B4: mov     edi, [esp+28h+var_14]
0x84F2B8: mov     [edi+4], ebp
0x84F2BB: jz      short loc_84F2CD
0x84F2BD: add     ebp, 4
0x84F2C0: push    ebp; lpAddend
0x84F2C1: call    dword ptr ds:0A28078h
0x84F2C7: jmp     short loc_84F2CD
0x84F2C9: mov     edi, [esp+28h+var_14]
0x84F2CD: test    edi, edi
0x84F2CF: jz      short loc_84F2EB
0x84F2D1: cmp     byte ptr ds:0B42CDDh, 0
0x84F2D8: jz      short loc_84F2EB
0x84F2DA: mov     edx, [esi]
0x84F2DC: mov     eax, [edx+78h]
0x84F2DF: mov     ecx, esi
0x84F2E1: call    eax
0x84F2E3: push    eax
0x84F2E4: mov     ecx, edi
0x84F2E6: call    sub_7715E0
0x84F2EB: mov     edi, 1
0x84F2F0: add     [ebx+60h], edi
0x84F2F3: mov     [esp+28h+arg_C], ebx
0x84F2F7: mov     esi, [esp+28h+var_10]
0x84F2FB: mov     edx, [esi+38h]
0x84F2FE: lea     ecx, [esp+28h+arg_C]
0x84F302: push    ecx
0x84F303: push    edx
0x84F304: lea     ecx, [esi+40h]
0x84F307: mov     [esp+30h+var_4], 0
0x84F30F: call    sub_76CE40
0x84F314: or      eax, 0FFFFFFFFh
0x84F317: add     [ebx+60h], eax
0x84F31A: mov     [esp+28h+var_4], eax
0x84F31E: jnz     short loc_84F327
0x84F320: mov     ecx, ebx
0x84F322: call    sub_7604D0
0x84F327: add     [esi+38h], edi
0x84F32A: mov     ecx, dword ptr [esp+28h+var_C]
0x84F32E: mov     large fs:0, ecx
0x84F335: pop     ecx
0x84F336: pop     edi
0x84F337: pop     esi
0x84F338: pop     ebp
0x84F339: pop     ebx
0x84F33A: add     esp, 14h
0x84F33D: retn    10h
