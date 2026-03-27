0x6C7FB0: push    0FFFFFFFFh
0x6C7FB2: push    offset SEH_6C7FB0
0x6C7FB7: mov     eax, large fs:0
0x6C7FBD: push    eax
0x6C7FBE: push    ecx
0x6C7FBF: push    ebx
0x6C7FC0: push    ebp
0x6C7FC1: push    esi
0x6C7FC2: push    edi
0x6C7FC3: mov     eax, ds:0B30AACh
0x6C7FC8: xor     eax, esp
0x6C7FCA: push    eax
0x6C7FCB: lea     eax, [esp+24h+var_C]
0x6C7FCF: mov     large fs:0, eax
0x6C7FD5: mov     esi, ecx
0x6C7FD7: mov     [esp+24h+var_10], esi
0x6C7FDB: call    NiObject_constr
0x6C7FE0: fld1
0x6C7FE2: mov     eax, [esp+24h+arg_4]
0x6C7FE6: fst     dword ptr [esi+1Ch]
0x6C7FE9: mov     ecx, [esp+24h+arg_8]
0x6C7FED: xor     ebx, ebx
0x6C7FEF: mov     dword ptr [esi], offset ??_7NiControllerSequence@@6B@; const NiControllerSequence::`vftable'
0x6C7FF5: mov     [esi+8], ebx
0x6C7FF8: mov     [esi+0Ch], eax
0x6C7FFB: mov     [esi+10h], ecx
0x6C7FFE: mov     [esi+14h], ebx
0x6C8001: mov     [esi+18h], ebx
0x6C8004: mov     [esp+24h+var_4], ebx
0x6C8008: mov     [esi+20h], ebx
0x6C800B: fstp    dword ptr [esi+28h]
0x6C800E: mov     [esi+24h], ebx
0x6C8011: fld     dword ptr ds:0A7DEB4h
0x6C8017: fstp    dword ptr [esi+2Ch]
0x6C801A: mov     eax, [esp+24h+arg_C]
0x6C801E: cmp     eax, ebx
0x6C8020: fld     dword ptr ds:0A7DEB4h
0x6C8026: fchs
0x6C8028: fstp    dword ptr [esi+30h]
0x6C802B: fld     dword ptr ds:0A7DEB4h
0x6C8031: fchs
0x6C8033: fstp    dword ptr [esi+34h]
0x6C8036: fld     dword ptr ds:0A7DEB4h
0x6C803C: fchs
0x6C803E: fstp    dword ptr [esi+38h]
0x6C8041: fld     dword ptr ds:0A7DEB4h
0x6C8047: mov     [esi+40h], ebx
0x6C804A: fchs
0x6C804C: mov     [esi+44h], ebx
0x6C804F: fstp    dword ptr [esi+3Ch]
0x6C8052: fld     dword ptr ds:0A7DEB4h
0x6C8058: fchs
0x6C805A: fstp    dword ptr [esi+48h]
0x6C805D: fld     dword ptr ds:0A7DEB4h
0x6C8063: fchs
0x6C8065: fstp    dword ptr [esi+4Ch]
0x6C8068: fld     dword ptr ds:0A7DEB4h
0x6C806E: fchs
0x6C8070: fstp    dword ptr [esi+50h]
0x6C8073: fld     dword ptr ds:0A7DEB4h
0x6C8079: mov     [esi+58h], ebx
0x6C807C: fchs
0x6C807E: mov     [esi+5Ch], ebx
0x6C8081: fstp    dword ptr [esi+54h]
0x6C8084: mov     [esi+60h], ebx
0x6C8087: mov     [esi+64h], eax
0x6C808A: jz      short loc_6C8096
0x6C808C: add     eax, 4
0x6C808F: push    eax; lpAddend
0x6C8090: call    dword ptr ds:0A28078h
0x6C8096: mov     eax, [esi+8]
0x6C8099: push    eax
0x6C809A: mov     byte ptr [esp+28h+var_4], 2
0x6C809F: call    FormHeapFree
0x6C80A4: mov     ebp, [esp+28h+Src]
0x6C80A8: mov     eax, ebp
0x6C80AA: add     esp, 4
0x6C80AD: lea     edx, [eax+1]
0x6C80B0: mov     cl, [eax]
0x6C80B2: add     eax, 1
0x6C80B5: test    cl, cl
0x6C80B7: jnz     short loc_6C80B0
0x6C80B9: sub     eax, edx
0x6C80BB: lea     edi, [eax+1]
0x6C80BE: push    edi; Size
0x6C80BF: call    FormHeapAlloc
0x6C80C4: push    ebp; Src
0x6C80C5: push    edi; SizeInBytes
0x6C80C6: push    eax; Dst
0x6C80C7: mov     [esi+8], eax
0x6C80CA: call    _strcpy_s
0x6C80CF: mov     edi, [esi+0Ch]
0x6C80D2: add     esp, 10h
0x6C80D5: cmp     edi, ebx
0x6C80D7: jbe     loc_6C81FC
0x6C80DD: xor     ecx, ecx
0x6C80DF: mov     eax, edi
0x6C80E1: mov     edx, 10h
0x6C80E6: mul     edx
0x6C80E8: seto    cl
0x6C80EB: neg     ecx
0x6C80ED: or      ecx, eax
0x6C80EF: xor     eax, eax
0x6C80F1: add     ecx, 4
0x6C80F4: setb    al
0x6C80F7: neg     eax
0x6C80F9: or      eax, ecx
0x6C80FB: push    eax; Size
0x6C80FC: call    FormHeapAlloc
0x6C8101: add     esp, 4
0x6C8104: mov     [esp+24h+arg_4], eax
0x6C8108: cmp     eax, ebx
0x6C810A: mov     byte ptr [esp+24h+var_4], 3
0x6C810F: jz      short loc_6C812D
0x6C8111: push    offset sub_6C64C0; a5
0x6C8116: push    offset sub_6C62E0; a4
0x6C811B: push    edi; size
0x6C811C: lea     ebp, [eax+4]
0x6C811F: push    10h; a2
0x6C8121: push    ebp; a1
0x6C8122: mov     [eax], edi
0x6C8124: call    ArrayConstructor
0x6C8129: mov     eax, ebp
0x6C812B: jmp     short loc_6C812F
0x6C812D: xor     eax, eax
0x6C812F: mov     edi, [esi+0Ch]
0x6C8132: mov     [esi+14h], eax
0x6C8135: xor     ecx, ecx
0x6C8137: mov     eax, edi
0x6C8139: mov     edx, 10h
0x6C813E: mul     edx
0x6C8140: seto    cl
0x6C8143: mov     byte ptr [esp+24h+var_4], 2
0x6C8148: neg     ecx
0x6C814A: or      ecx, eax
0x6C814C: xor     eax, eax
0x6C814E: add     ecx, 4
0x6C8151: setb    al
0x6C8154: neg     eax
0x6C8156: or      eax, ecx
0x6C8158: push    eax; Size
0x6C8159: call    FormHeapAlloc
0x6C815E: add     esp, 4
0x6C8161: mov     [esp+24h+arg_4], eax
0x6C8165: cmp     eax, ebx
0x6C8167: mov     byte ptr [esp+24h+var_4], 4
0x6C816C: jz      short loc_6C8188
0x6C816E: push    offset sub_7016A0; a5
0x6C8173: push    offset sub_6C6370; a4
0x6C8178: push    edi; size
0x6C8179: lea     ebp, [eax+4]
0x6C817C: push    10h; a2
0x6C817E: push    ebp; a1
0x6C817F: mov     [eax], edi
0x6C8181: call    ArrayConstructor
0x6C8186: jmp     short loc_6C818A
0x6C8188: xor     ebp, ebp
0x6C818A: cmp     [esi+0Ch], ebx
0x6C818D: mov     byte ptr [esp+24h+var_4], 2
0x6C8192: mov     [esi+18h], ebp
0x6C8195: mov     [esp+24h+arg_8], ebx
0x6C8199: jbe     short loc_6C81FC
0x6C819B: mov     [esp+24h+arg_4], ebx
0x6C819F: mov     ecx, esi
0x6C81A1: call    sub_6C6400
0x6C81A6: mov     ebp, [esi+18h]
0x6C81A9: add     ebp, [esp+24h+arg_4]
0x6C81AD: mov     ebx, eax
0x6C81AF: mov     edi, [ebp+0]
0x6C81B2: cmp     edi, ebx
0x6C81B4: jz      short loc_6C81E7
0x6C81B6: test    edi, edi
0x6C81B8: jz      short loc_6C81D6
0x6C81BA: lea     ecx, [edi+4]
0x6C81BD: push    ecx; lpAddend
0x6C81BE: call    dword ptr ds:0A2807Ch
0x6C81C4: test    eax, eax
0x6C81C6: jnz     short loc_6C81D6
0x6C81C8: test    edi, edi
0x6C81CA: jz      short loc_6C81D6
0x6C81CC: mov     edx, [edi]
0x6C81CE: mov     eax, [edx]
0x6C81D0: push    1
0x6C81D2: mov     ecx, edi
0x6C81D4: call    eax
0x6C81D6: test    ebx, ebx
0x6C81D8: mov     [ebp+0], ebx
0x6C81DB: jz      short loc_6C81E7
0x6C81DD: add     ebx, 4
0x6C81E0: push    ebx; lpAddend
0x6C81E1: call    dword ptr ds:0A28078h
0x6C81E7: mov     eax, [esp+24h+arg_8]
0x6C81EB: add     [esp+24h+arg_4], 10h
0x6C81F0: add     eax, 1
0x6C81F3: cmp     eax, [esi+0Ch]
0x6C81F6: mov     [esp+24h+arg_8], eax
0x6C81FA: jb      short loc_6C819F
0x6C81FC: mov     eax, esi
0x6C81FE: mov     ecx, dword ptr [esp+24h+var_C]
0x6C8202: mov     large fs:0, ecx
0x6C8209: pop     ecx
0x6C820A: pop     edi
0x6C820B: pop     esi
0x6C820C: pop     ebp
0x6C820D: pop     ebx
0x6C820E: add     esp, 10h
0x6C8211: retn    10h
