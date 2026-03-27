0x52F010: sub     esp, 14h
0x52F013: mov     eax, [esp+14h+a2]
0x52F017: push    ebx
0x52F018: xor     ebx, ebx
0x52F01A: push    ebp
0x52F01B: mov     ebp, ecx
0x52F01D: mov     [eax], bl
0x52F01F: mov     ecx, [ebp+8]
0x52F022: shr     ecx, 5
0x52F025: test    cl, 1
0x52F028: mov     [esp+1Ch+var_10], ebp
0x52F02C: jz      short loc_52F038
0x52F02E: pop     ebp
0x52F02F: xor     eax, eax
0x52F031: pop     ebx
0x52F032: add     esp, 14h
0x52F035: retn    18h
0x52F038: mov     ecx, ds:0B36510h
0x52F03E: cmp     ecx, ebx
0x52F040: jz      short loc_52F049
0x52F042: call    BSSimpleList_Clear
0x52F047: jmp     short loc_52F065
0x52F049: push    8; Size
0x52F04B: call    FormHeapAlloc
0x52F050: add     esp, 4
0x52F053: cmp     eax, ebx
0x52F055: jz      short loc_52F05E
0x52F057: mov     [eax], ebx
0x52F059: mov     [eax+4], ebx
0x52F05C: jmp     short loc_52F060
0x52F05E: xor     eax, eax
0x52F060: mov     ds:0B36510h, eax
0x52F065: mov     ecx, ds:0B36510h
0x52F06B: lea     eax, [ebp+28h]
0x52F06E: cmp     eax, ebx
0x52F070: push    esi
0x52F071: push    edi
0x52F072: mov     [esp+24h+var_12], bl
0x52F076: mov     [esp+24h+var_8], ebx
0x52F07A: jnz     loc_52F114
0x52F080: cmp     [ecx+4], ebx
0x52F083: jnz     loc_52F2D9
0x52F089: cmp     [ecx], ebx
0x52F08B: jnz     loc_52F2D9
0x52F091: mov     edx, [esp+24h+a5]
0x52F095: cmp     dl, bl
0x52F097: jz      loc_52F2CB
0x52F09D: mov     esi, ds:0B333C4h
0x52F0A3: xor     eax, eax
0x52F0A5: cmp     [esi+116h], bl
0x52F0AB: jz      loc_52F326
0x52F0B1: movsx   ecx, byte ptr [ebp+24h]
0x52F0B5: cmp     ecx, 2
0x52F0B8: jl      loc_52F326
0x52F0BE: cmp     ecx, 4
0x52F0C1: jle     short loc_52F0CC
0x52F0C3: cmp     ecx, 6
0x52F0C6: jnz     loc_52F326
0x52F0CC: mov     ecx, [esp+24h+a7]
0x52F0D0: mov     eax, [esp+24h+a6]
0x52F0D4: push    ecx; a7
0x52F0D5: mov     ecx, [esp+28h+a4]
0x52F0D9: push    eax; a6
0x52F0DA: mov     eax, [esp+2Ch+a2]
0x52F0DE: push    edx; a5
0x52F0DF: mov     edx, [esp+30h+a3]
0x52F0E3: push    ecx; a4
0x52F0E4: push    edx; a3
0x52F0E5: push    eax; a2
0x52F0E6: mov     ecx, ebp; this
0x52F0E8: mov     [esi+116h], bl
0x52F0EE: call    sub_52F010
0x52F0F3: mov     ecx, ds:0B333C4h
0x52F0F9: pop     edi
0x52F0FA: pop     esi
0x52F0FB: pop     ebp
0x52F0FC: mov     byte ptr [ecx+116h], 1
0x52F103: pop     ebx
0x52F104: add     esp, 14h
0x52F107: retn    18h
0x52F10A: align 10h
0x52F110: mov     eax, [esp+24h+var_C]
0x52F114: mov     edi, [eax]
0x52F116: cmp     edi, ebx
0x52F118: jz      loc_52F080
0x52F11E: cmp     [esp+24h+var_12], bl
0x52F122: jnz     loc_52F080
0x52F128: cmp     edi, ebx
0x52F12A: mov     edx, [eax+4]
0x52F12D: mov     [esp+24h+var_C], edx
0x52F131: jz      loc_52F2A5
0x52F137: mov     eax, [edi]
0x52F139: cmp     eax, ebx
0x52F13B: jz      loc_52F2A5
0x52F141: test    byte ptr [eax+3Ch], 1
0x52F145: jz      loc_52F2A5
0x52F14B: mov     eax, [edi+10h]
0x52F14E: xor     ebp, ebp
0x52F150: cmp     eax, ebx
0x52F152: mov     [esp+24h+var_4], eax
0x52F156: jbe     loc_52F2A5
0x52F15C: lea     esp, [esp+0]
0x52F160: mov     eax, [edi+8]
0x52F163: mov     esi, [eax+ebp*4]
0x52F166: cmp     esi, ebx
0x52F168: mov     [esp+24h+var_11], bl
0x52F16C: jz      loc_52F275
0x52F172: mov     ecx, [esp+24h+a4]
0x52F176: mov     edx, [esp+24h+a3]
0x52F17A: mov     eax, [edi]
0x52F17C: push    ecx
0x52F17D: push    edx
0x52F17E: push    eax
0x52F17F: lea     ecx, [esp+30h+var_11]
0x52F183: push    ecx
0x52F184: mov     ecx, esi
0x52F186: call    sub_530830
0x52F18B: test    al, al
0x52F18D: jz      loc_52F275
0x52F193: cmp     byte ptr [esp+24h+a5], bl
0x52F197: mov     edx, [esp+24h+a2]
0x52F19B: mov     [edx], bl
0x52F19D: jz      loc_52F23E
0x52F1A3: mov     eax, [esi+30h]
0x52F1A6: cmp     eax, ebx
0x52F1A8: jz      short loc_52F1F5
0x52F1AA: mov     edx, [esp+24h+a6]
0x52F1AE: cmp     edx, ebx
0x52F1B0: jz      short loc_52F1DB
0x52F1B2: mov     ecx, [eax+4]
0x52F1B5: cmp     ecx, ebx
0x52F1B7: jnz     short loc_52F1C1
0x52F1B9: cmp     [eax], ebx
0x52F1BB: jz      loc_52F275
0x52F1C1: mov     eax, [eax]
0x52F1C3: cmp     eax, edx
0x52F1C5: jz      short loc_52F1F5
0x52F1C7: cmp     dword ptr [eax+0Ch], 0D3h ; 'Ó'
0x52F1CE: jz      short loc_52F1F5
0x52F1D0: mov     eax, ecx
0x52F1D2: cmp     eax, ebx
0x52F1D4: jnz     short loc_52F1B2
0x52F1D6: jmp     loc_52F275
0x52F1DB: mov     ecx, eax
0x52F1DD: call    BSSimpleList_IsEmpty
0x52F1E2: test    al, al
0x52F1E4: jnz     short loc_52F1F5
0x52F1E6: mov     eax, ds:0B333C4h
0x52F1EB: cmp     [esp+24h+a4], eax
0x52F1EF: jnz     loc_52F275
0x52F1F5: movzx   ecx, byte ptr [esi+25h]
0x52F1F9: shr     ecx, 5
0x52F1FC: test    cl, 1
0x52F1FF: jz      short loc_52F206
0x52F201: mov     [esp+24h+var_12], 1
0x52F206: mov     eax, [esp+24h+a7]
0x52F20A: cmp     eax, ebx
0x52F20C: jz      short loc_52F23E
0x52F20E: mov     edi, edi
0x52F210: mov     edx, [eax+4]
0x52F213: cmp     edx, ebx
0x52F215: jnz     short loc_52F21B
0x52F217: cmp     [eax], ebx
0x52F219: jz      short loc_52F23E
0x52F21B: mov     eax, [eax]
0x52F21D: cmp     [eax+0Ch], esi
0x52F220: jz      short loc_52F275
0x52F222: mov     ecx, [edi]
0x52F224: test    byte ptr [ecx+3Ch], 4
0x52F228: jnz     short loc_52F238
0x52F22A: cmp     [eax+14h], ecx
0x52F22D: jnz     short loc_52F238
0x52F22F: mov     ecx, [esp+24h+var_10]
0x52F233: cmp     [eax+10h], ecx
0x52F236: jz      short loc_52F275
0x52F238: mov     eax, edx
0x52F23A: cmp     eax, ebx
0x52F23C: jnz     short loc_52F210
0x52F23E: movsx   eax, byte ptr [esi+25h]
0x52F242: mov     edx, eax
0x52F244: shr     edx, 5
0x52F247: test    dl, 1
0x52F24A: jz      short loc_52F251
0x52F24C: mov     [esp+24h+var_12], 1
0x52F251: mov     ecx, ds:0B36510h
0x52F257: cmp     [ecx+4], ebx
0x52F25A: jnz     short loc_52F269
0x52F25C: cmp     [ecx], ebx
0x52F25E: jnz     short loc_52F269
0x52F260: mov     edx, eax
0x52F262: shr     edx, 1
0x52F264: test    dl, 1
0x52F267: jz      short loc_52F2BF
0x52F269: shr     eax, 1
0x52F26B: test    al, 1
0x52F26D: jz      short loc_52F2B8
0x52F26F: push    esi
0x52F270: call    BSSimpleList_PushFront
0x52F275: cmp     byte ptr [esp+24h+a5], bl
0x52F279: jnz     short loc_52F28C
0x52F27B: cmp     [esp+24h+var_11], bl
0x52F27F: jz      short loc_52F28C
0x52F281: mov     eax, [esp+24h+a2]
0x52F285: mov     [esp+24h+var_8], esi
0x52F289: mov     byte ptr [eax], 1
0x52F28C: cmp     [esp+24h+var_12], bl
0x52F290: jnz     short loc_52F29F
0x52F292: add     ebp, 1
0x52F295: cmp     ebp, [esp+24h+var_4]
0x52F299: jb      loc_52F160
0x52F29F: mov     ecx, ds:0B36510h
0x52F2A5: cmp     [esp+24h+var_C], ebx
0x52F2A9: mov     ebp, [esp+24h+var_10]
0x52F2AD: jnz     loc_52F110
0x52F2B3: jmp     loc_52F080
0x52F2B8: mov     [esp+24h+var_12], 1
0x52F2BD: jmp     short loc_52F2A5
0x52F2BF: pop     edi
0x52F2C0: mov     eax, esi
0x52F2C2: pop     esi
0x52F2C3: pop     ebp
0x52F2C4: pop     ebx
0x52F2C5: add     esp, 14h
0x52F2C8: retn    18h
0x52F2CB: mov     eax, [esp+24h+var_8]
0x52F2CF: pop     edi
0x52F2D0: pop     esi
0x52F2D1: pop     ebp
0x52F2D2: pop     ebx
0x52F2D3: add     esp, 14h
0x52F2D6: retn    18h
0x52F2D9: mov     eax, ecx
0x52F2DB: xor     esi, esi
0x52F2DD: cmp     eax, ebx
0x52F2DF: jz      short loc_52F2EF
0x52F2E1: cmp     [eax], ebx
0x52F2E3: jz      short loc_52F2E8
0x52F2E5: add     esi, 1
0x52F2E8: mov     eax, [eax+4]
0x52F2EB: cmp     eax, ebx
0x52F2ED: jnz     short loc_52F2E1
0x52F2EF: push    ebx; Seed
0x52F2F0: call    GetRandomLargeInteger?
0x52F2F5: xor     edx, edx
0x52F2F7: div     esi
0x52F2F9: mov     ecx, ds:0B36510h
0x52F2FF: add     esp, 4
0x52F302: xor     edi, edi
0x52F304: xor     eax, eax
0x52F306: add     edx, 1
0x52F309: cmp     edx, ebx
0x52F30B: jle     short loc_52F326
0x52F30D: lea     ecx, [ecx+0]
0x52F310: cmp     ecx, ebx
0x52F312: jz      short loc_52F326
0x52F314: mov     esi, [ecx]
0x52F316: cmp     esi, ebx
0x52F318: jz      short loc_52F31F
0x52F31A: mov     eax, esi
0x52F31C: add     edi, 1
0x52F31F: cmp     edi, edx
0x52F321: mov     ecx, [ecx+4]
0x52F324: jl      short loc_52F310
0x52F326: pop     edi
0x52F327: pop     esi
0x52F328: pop     ebp
0x52F329: pop     ebx
0x52F32A: add     esp, 14h
0x52F32D: retn    18h
