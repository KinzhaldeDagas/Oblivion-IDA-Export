0x8C7160: sub     esp, 14h
0x8C7163: push    ebx
0x8C7164: push    ebp
0x8C7165: push    esi
0x8C7166: mov     esi, [esp+20h+arg_0]
0x8C716A: push    edi
0x8C716B: mov     ebx, ecx
0x8C716D: push    esi
0x8C716E: mov     [esp+28h+var_8], ebx
0x8C7172: call    sub_8CE640
0x8C7177: mov     eax, ds:0BA8130h
0x8C717C: push    eax; ArgList
0x8C717D: call    TESOutput_PrintString
0x8C7182: movzx   edi, word ptr [esi+0Ah]
0x8C7186: movzx   ecx, word ptr [esi+8]
0x8C718A: add     esp, 4
0x8C718D: cmp     edi, ecx
0x8C718F: mov     [esp+24h+arg_0], eax
0x8C7193: jb      short loc_8C71A3
0x8C7195: movzx   edx, word ptr [esi+0Eh]
0x8C7199: add     edx, edi
0x8C719B: push    edx
0x8C719C: mov     ecx, esi
0x8C719E: call    NiTArray_SetSize
0x8C71A3: lea     eax, [esp+24h+arg_0]
0x8C71A7: push    eax
0x8C71A8: push    edi
0x8C71A9: mov     ecx, esi
0x8C71AB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C71B0: test    ebx, ebx
0x8C71B2: jz      short loc_8C71C4
0x8C71B4: mov     eax, [ebx+8]
0x8C71B7: test    eax, eax
0x8C71B9: jz      short loc_8C71C4
0x8C71BB: mov     ebp, [eax+30h]
0x8C71BE: mov     [esp+24h+arg_0], ebp
0x8C71C2: jmp     short loc_8C71D0
0x8C71C4: mov     [esp+24h+arg_0], 0
0x8C71CC: mov     ebp, [esp+24h+arg_0]
0x8C71D0: push    ebp; int
0x8C71D1: push    offset aSubparts; "Subparts"
0x8C71D6: mov     [esp+2Ch+var_C], ebp
0x8C71DA: call    TESOutput_PrintLabeledUnsignedInt
0x8C71DF: movzx   edi, word ptr [esi+0Ah]
0x8C71E3: movzx   ecx, word ptr [esi+8]
0x8C71E7: add     esp, 8
0x8C71EA: cmp     edi, ecx
0x8C71EC: mov     [esp+24h+var_10], eax
0x8C71F0: jb      short loc_8C7200
0x8C71F2: movzx   edx, word ptr [esi+0Eh]
0x8C71F6: add     edx, edi
0x8C71F8: push    edx
0x8C71F9: mov     ecx, esi
0x8C71FB: call    NiTArray_SetSize
0x8C7200: lea     eax, [esp+24h+var_10]
0x8C7204: push    eax
0x8C7205: push    edi
0x8C7206: mov     ecx, esi
0x8C7208: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C720D: xor     ecx, ecx
0x8C720F: cmp     ebp, 5
0x8C7212: mov     [esp+24h+var_10], ecx
0x8C7216: jbe     short loc_8C723C
0x8C7218: mov     eax, [esp+24h+var_C]
0x8C721C: add     eax, 0FFFFFFFBh
0x8C721F: cmp     eax, 3
0x8C7222: mov     [esp+24h+arg_0], 5
0x8C722A: mov     ebp, [esp+24h+arg_0]
0x8C722E: mov     [esp+24h+var_10], eax
0x8C7232: jbe     short loc_8C723C
0x8C7234: mov     [esp+24h+var_10], 3
0x8C723C: cmp     ebp, ecx
0x8C723E: mov     [esp+24h+var_14], ecx
0x8C7242: jbe     loc_8C7391
0x8C7248: jmp     short loc_8C7254
0x8C724A: align 10h
0x8C7250: mov     ebx, [esp+24h+var_8]
0x8C7254: mov     ecx, [esp+24h+var_14]
0x8C7258: push    ecx; int
0x8C7259: push    offset aPart_0; "Part"
0x8C725E: call    TESOutput_PrintLabeledUnsignedInt
0x8C7263: movzx   edi, word ptr [esi+0Ah]
0x8C7267: movzx   edx, word ptr [esi+8]
0x8C726B: add     esp, 8
0x8C726E: cmp     edi, edx
0x8C7270: mov     ebp, eax
0x8C7272: jb      short loc_8C7282
0x8C7274: movzx   eax, word ptr [esi+0Eh]
0x8C7278: add     eax, edi
0x8C727A: push    eax
0x8C727B: mov     ecx, esi
0x8C727D: call    NiTArray_SetSize
0x8C7282: movzx   ecx, word ptr [esi+0Ah]
0x8C7286: cmp     edi, ecx
0x8C7288: jb      short loc_8C729C
0x8C728A: test    ebp, ebp
0x8C728C: lea     edx, [edi+1]
0x8C728F: mov     [esi+0Ah], dx
0x8C7293: jz      short loc_8C72BF
0x8C7295: add     word ptr [esi+0Ch], 1
0x8C729A: jmp     short loc_8C72BF
0x8C729C: test    ebp, ebp
0x8C729E: jz      short loc_8C72B0
0x8C72A0: mov     eax, [esi+4]
0x8C72A3: cmp     dword ptr [eax+edi*4], 0
0x8C72A7: jnz     short loc_8C72BF
0x8C72A9: add     word ptr [esi+0Ch], 1
0x8C72AE: jmp     short loc_8C72BF
0x8C72B0: mov     ecx, [esi+4]
0x8C72B3: cmp     dword ptr [ecx+edi*4], 0
0x8C72B7: jz      short loc_8C72BF
0x8C72B9: add     word ptr [esi+0Ch], 0FFFFh
0x8C72BF: test    ebx, ebx
0x8C72C1: mov     edx, [esi+4]
0x8C72C4: mov     [edx+edi*4], ebp
0x8C72C7: jz      short loc_8C72DC
0x8C72C9: mov     eax, [ebx+8]
0x8C72CC: test    eax, eax
0x8C72CE: jz      short loc_8C72DC
0x8C72D0: mov     eax, [eax+28h]
0x8C72D3: mov     ecx, [esp+24h+var_14]
0x8C72D7: lea     ebx, [eax+ecx*8]
0x8C72DA: jmp     short loc_8C72E1
0x8C72DC: mov     ebx, offset dword_BA8138
0x8C72E1: mov     eax, [ebx]
0x8C72E3: test    eax, eax
0x8C72E5: jz      short loc_8C72F3
0x8C72E7: movzx   eax, word ptr [eax+2Ch]
0x8C72EB: shr     eax, 6
0x8C72EE: and     eax, 3Fh
0x8C72F1: jmp     short loc_8C72F5
0x8C72F3: xor     eax, eax
0x8C72F5: mov     eax, ds:0B2E908h[eax*4]
0x8C72FC: push    eax; int
0x8C72FD: push    offset aMaterial; "MATERIAL"
0x8C7302: call    TESOutput_PrintLabeledString
0x8C7307: movzx   edi, word ptr [esi+0Ah]
0x8C730B: movzx   edx, word ptr [esi+8]
0x8C730F: add     esp, 8
0x8C7312: cmp     edi, edx
0x8C7314: mov     ebp, eax
0x8C7316: jb      short loc_8C7326
0x8C7318: movzx   eax, word ptr [esi+0Eh]
0x8C731C: add     eax, edi
0x8C731E: push    eax
0x8C731F: mov     ecx, esi
0x8C7321: call    NiTArray_SetSize
0x8C7326: movzx   ecx, word ptr [esi+0Ah]
0x8C732A: cmp     edi, ecx
0x8C732C: jb      short loc_8C7340
0x8C732E: test    ebp, ebp
0x8C7330: lea     edx, [edi+1]
0x8C7333: mov     [esi+0Ah], dx
0x8C7337: jz      short loc_8C7363
0x8C7339: add     word ptr [esi+0Ch], 1
0x8C733E: jmp     short loc_8C7363
0x8C7340: test    ebp, ebp
0x8C7342: jz      short loc_8C7354
0x8C7344: mov     eax, [esi+4]
0x8C7347: cmp     dword ptr [eax+edi*4], 0
0x8C734B: jnz     short loc_8C7363
0x8C734D: add     word ptr [esi+0Ch], 1
0x8C7352: jmp     short loc_8C7363
0x8C7354: mov     ecx, [esi+4]
0x8C7357: cmp     dword ptr [ecx+edi*4], 0
0x8C735B: jz      short loc_8C7363
0x8C735D: add     word ptr [esi+0Ch], 0FFFFh
0x8C7363: mov     edx, [esi+4]
0x8C7366: mov     [edx+edi*4], ebp
0x8C7369: mov     eax, [ebx+4]
0x8C736C: push    esi
0x8C736D: lea     ecx, [esp+28h+var_4]
0x8C7371: mov     [esp+28h+var_4], eax
0x8C7375: call    sub_8A9100
0x8C737A: mov     eax, [esp+24h+var_14]
0x8C737E: add     eax, 1
0x8C7381: cmp     eax, [esp+24h+arg_0]
0x8C7385: mov     [esp+24h+var_14], eax
0x8C7389: jb      loc_8C7250
0x8C738F: xor     ecx, ecx
0x8C7391: cmp     [esp+24h+var_10], ecx
0x8C7395: mov     [esp+24h+arg_0], ecx
0x8C7399: jbe     loc_8C74E3
0x8C739F: nop
0x8C73A0: mov     ebx, [esp+24h+var_C]
0x8C73A4: sub     ebx, [esp+24h+arg_0]
0x8C73A8: sub     ebx, 1
0x8C73AB: push    ebx; int
0x8C73AC: push    offset aPart_0; "Part"
0x8C73B1: call    TESOutput_PrintLabeledUnsignedInt
0x8C73B6: movzx   edi, word ptr [esi+0Ah]
0x8C73BA: movzx   ecx, word ptr [esi+8]
0x8C73BE: add     esp, 8
0x8C73C1: cmp     edi, ecx
0x8C73C3: mov     ebp, eax
0x8C73C5: jb      short loc_8C73D5
0x8C73C7: movzx   edx, word ptr [esi+0Eh]
0x8C73CB: add     edx, edi
0x8C73CD: push    edx
0x8C73CE: mov     ecx, esi
0x8C73D0: call    NiTArray_SetSize
0x8C73D5: movzx   eax, word ptr [esi+0Ah]
0x8C73D9: cmp     edi, eax
0x8C73DB: jb      short loc_8C73EF
0x8C73DD: test    ebp, ebp
0x8C73DF: lea     ecx, [edi+1]
0x8C73E2: mov     [esi+0Ah], cx
0x8C73E6: jz      short loc_8C7412
0x8C73E8: add     word ptr [esi+0Ch], 1
0x8C73ED: jmp     short loc_8C7412
0x8C73EF: test    ebp, ebp
0x8C73F1: jz      short loc_8C7403
0x8C73F3: mov     edx, [esi+4]
0x8C73F6: cmp     dword ptr [edx+edi*4], 0
0x8C73FA: jnz     short loc_8C7412
0x8C73FC: add     word ptr [esi+0Ch], 1
0x8C7401: jmp     short loc_8C7412
0x8C7403: mov     eax, [esi+4]
0x8C7406: cmp     dword ptr [eax+edi*4], 0
0x8C740A: jz      short loc_8C7412
0x8C740C: add     word ptr [esi+0Ch], 0FFFFh
0x8C7412: mov     eax, [esp+24h+var_8]
0x8C7416: test    eax, eax
0x8C7418: mov     ecx, [esi+4]
0x8C741B: mov     [ecx+edi*4], ebp
0x8C741E: jz      short loc_8C742F
0x8C7420: mov     eax, [eax+8]
0x8C7423: test    eax, eax
0x8C7425: jz      short loc_8C742F
0x8C7427: mov     edx, [eax+28h]
0x8C742A: lea     ebp, [edx+ebx*8]
0x8C742D: jmp     short loc_8C7434
0x8C742F: mov     ebp, offset dword_BA8138
0x8C7434: mov     eax, [ebp+0]
0x8C7437: test    eax, eax
0x8C7439: jz      short loc_8C7447
0x8C743B: movzx   eax, word ptr [eax+2Ch]
0x8C743F: shr     eax, 6
0x8C7442: and     eax, 3Fh
0x8C7445: jmp     short loc_8C7449
0x8C7447: xor     eax, eax
0x8C7449: mov     eax, ds:0B2E908h[eax*4]
0x8C7450: push    eax; int
0x8C7451: push    offset aMaterial; "MATERIAL"
0x8C7456: call    TESOutput_PrintLabeledString
0x8C745B: movzx   edi, word ptr [esi+0Ah]
0x8C745F: mov     ebx, eax
0x8C7461: movzx   eax, word ptr [esi+8]
0x8C7465: add     esp, 8
0x8C7468: cmp     edi, eax
0x8C746A: jb      short loc_8C747A
0x8C746C: movzx   ecx, word ptr [esi+0Eh]
0x8C7470: add     ecx, edi
0x8C7472: push    ecx
0x8C7473: mov     ecx, esi
0x8C7475: call    NiTArray_SetSize
0x8C747A: movzx   edx, word ptr [esi+0Ah]
0x8C747E: cmp     edi, edx
0x8C7480: jb      short loc_8C7494
0x8C7482: test    ebx, ebx
0x8C7484: lea     eax, [edi+1]
0x8C7487: mov     [esi+0Ah], ax
0x8C748B: jz      short loc_8C74B7
0x8C748D: add     word ptr [esi+0Ch], 1
0x8C7492: jmp     short loc_8C74B7
0x8C7494: test    ebx, ebx
0x8C7496: jz      short loc_8C74A8
0x8C7498: mov     ecx, [esi+4]
0x8C749B: cmp     dword ptr [ecx+edi*4], 0
0x8C749F: jnz     short loc_8C74B7
0x8C74A1: add     word ptr [esi+0Ch], 1
0x8C74A6: jmp     short loc_8C74B7
0x8C74A8: mov     edx, [esi+4]
0x8C74AB: cmp     dword ptr [edx+edi*4], 0
0x8C74AF: jz      short loc_8C74B7
0x8C74B1: add     word ptr [esi+0Ch], 0FFFFh
0x8C74B7: mov     eax, [esi+4]
0x8C74BA: mov     [eax+edi*4], ebx
0x8C74BD: mov     ecx, [ebp+4]
0x8C74C0: mov     [esp+24h+var_4], ecx
0x8C74C4: push    esi
0x8C74C5: lea     ecx, [esp+28h+var_4]
0x8C74C9: call    sub_8A9100
0x8C74CE: mov     eax, [esp+24h+arg_0]
0x8C74D2: add     eax, 1
0x8C74D5: cmp     eax, [esp+24h+var_10]
0x8C74D9: mov     [esp+24h+arg_0], eax
0x8C74DD: jb      loc_8C73A0
0x8C74E3: pop     edi
0x8C74E4: pop     esi
0x8C74E5: pop     ebp
0x8C74E6: pop     ebx
0x8C74E7: add     esp, 14h
0x8C74EA: retn    4
