0x6C7470: sub     esp, 10h
0x6C7473: push    ebx
0x6C7474: mov     ebx, [esp+14h+arg0]
0x6C7478: push    ebp
0x6C7479: push    esi
0x6C747A: push    edi
0x6C747B: push    ebx; arg0
0x6C747C: mov     edi, ecx
0x6C747E: call    sub_700750; Pass227: NiScreenTexture vtable +0x38 map insertion helper; inserts object into map context, not a draw call.
0x6C7483: mov     ecx, [ebx]
0x6C7485: lea     eax, [esp+20h+a2]
0x6C7489: push    eax
0x6C748A: push    edi
0x6C748B: call    NiTMap_GetAt
0x6C7490: mov     ebp, [esp+20h+a2]
0x6C7494: xor     esi, esi
0x6C7496: cmp     [edi+0Ch], esi
0x6C7499: mov     [esp+20h+var_C], ebp
0x6C749D: mov     [esp+20h+var_8], esi
0x6C74A1: jbe     loc_6C763A
0x6C74A7: jmp     short loc_6C74B0
0x6C74B0: mov     ecx, [edi+14h]
0x6C74B3: cmp     dword ptr [ecx+esi], 0
0x6C74B7: lea     eax, [ecx+esi]
0x6C74BA: jz      loc_6C7623
0x6C74C0: cmp     dword ptr [edi+40h], 0
0x6C74C4: jnz     short loc_6C74EC
0x6C74C6: mov     ecx, [eax]
0x6C74C8: mov     edx, [ecx]
0x6C74CA: mov     eax, [edx+38h]
0x6C74CD: push    ebx
0x6C74CE: call    eax
0x6C74D0: mov     ecx, [edi+14h]
0x6C74D3: mov     ecx, [ecx+esi+4]
0x6C74D7: test    ecx, ecx
0x6C74D9: jz      loc_6C7623
0x6C74DF: mov     edx, [ecx]
0x6C74E1: mov     eax, [edx+38h]
0x6C74E4: push    ebx
0x6C74E5: call    eax
0x6C74E7: jmp     loc_6C7623
0x6C74EC: cmp     dword ptr [edi+44h], 0
0x6C74F0: mov     eax, [eax]
0x6C74F2: jnz     short loc_6C7500
0x6C74F4: mov     edx, [eax]
0x6C74F6: mov     ecx, eax
0x6C74F8: mov     eax, [edx+38h]
0x6C74FB: push    ebx
0x6C74FC: call    eax
0x6C74FE: jmp     short loc_6C752D
0x6C7500: lea     ecx, [esp+20h+a2]
0x6C7504: push    ecx
0x6C7505: mov     ecx, [ebx]
0x6C7507: push    eax
0x6C7508: call    NiTMap_GetAt
0x6C750D: mov     ecx, [ebp+14h]
0x6C7510: add     ecx, esi; this
0x6C7512: test    al, al
0x6C7514: jz      short loc_6C7522
0x6C7516: mov     edx, [esp+20h+a2]
0x6C751A: push    edx; a2
0x6C751B: call    NiSmartPointer_Set??
0x6C7520: jmp     short loc_6C752D
0x6C7522: mov     eax, [edi+14h]
0x6C7525: add     eax, esi
0x6C7527: push    eax; incoming
0x6C7528: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x6C752D: mov     ecx, [edi+14h]
0x6C7530: mov     eax, [ecx+esi+4]
0x6C7534: mov     ecx, [ebx]
0x6C7536: lea     edx, [esp+20h+a2]
0x6C753A: push    edx
0x6C753B: push    eax
0x6C753C: call    NiTMap_GetAt
0x6C7541: test    al, al
0x6C7543: jz      short loc_6C7585
0x6C7545: mov     eax, [ebp+14h]
0x6C7548: mov     ebx, [esi+eax+4]
0x6C754C: lea     ebp, [esi+eax+4]
0x6C7550: mov     eax, [esp+20h+a2]
0x6C7554: cmp     ebx, eax
0x6C7556: jz      loc_6C75DC
0x6C755C: test    ebx, ebx
0x6C755E: jz      short loc_6C7580
0x6C7560: lea     ecx, [ebx+4]
0x6C7563: push    ecx; lpAddend
0x6C7564: call    dword ptr ds:0A2807Ch
0x6C756A: test    eax, eax
0x6C756C: jnz     short loc_6C757C
0x6C757C: mov     eax, [esp+20h+a2]
0x6C7580: mov     [ebp+0], eax
0x6C7583: jmp     short loc_6C75CE
0x6C7585: mov     edx, [esp+20h+var_C]
0x6C7589: mov     eax, [edx+14h]
0x6C758C: mov     ecx, [edi+14h]
0x6C758F: mov     ebx, [esi+eax+4]
0x6C7593: cmp     ebx, [ecx+esi+4]
0x6C7597: lea     eax, [esi+eax+4]
0x6C759B: lea     ebp, [ecx+esi+4]
0x6C759F: mov     [esp+20h+var_4], eax
0x6C75A3: jz      short loc_6C75DC
0x6C75A5: test    ebx, ebx
0x6C75A7: jz      short loc_6C75C5
0x6C75A9: lea     ecx, [ebx+4]
0x6C75AC: push    ecx; lpAddend
0x6C75AD: call    dword ptr ds:0A2807Ch
0x6C75B3: test    eax, eax
0x6C75B5: jnz     short loc_6C75C5
0x6C75B7: test    ebx, ebx
0x6C75B9: jz      short loc_6C75C5
0x6C75BB: mov     edx, [ebx]
0x6C75BD: mov     eax, [edx]
0x6C75BF: push    1
0x6C75C1: mov     ecx, ebx
0x6C75C3: call    eax
0x6C75C5: mov     eax, [ebp+0]
0x6C75C8: mov     ecx, [esp+20h+var_4]
0x6C75CC: mov     [ecx], eax
0x6C75CE: test    eax, eax
0x6C75D0: jz      short loc_6C75DC
0x6C75D2: add     eax, 4
0x6C75D5: push    eax; lpAddend
0x6C75D6: call    dword ptr ds:0A28078h
0x6C75DC: mov     eax, [edi+14h]
0x6C75DF: mov     ecx, [eax+esi+8]
0x6C75E3: lea     edx, [esp+20h+a2]
0x6C75E7: push    edx
0x6C75E8: mov     edx, [esp+24h+arg0]
0x6C75EC: push    ecx
0x6C75ED: mov     ecx, [edx]
0x6C75EF: call    NiTMap_GetAt
0x6C75F4: test    al, al
0x6C75F6: mov     ebx, [esp+20h+arg0]
0x6C75FA: jz      short loc_6C760F
0x6C75FC: mov     eax, [esp+20h+var_C]
0x6C7600: mov     ecx, [eax+14h]
0x6C7603: mov     edx, [esp+20h+a2]
0x6C7607: mov     [esi+ecx+8], edx
0x6C760B: mov     ebp, eax
0x6C760D: jmp     short loc_6C7623
0x6C760F: mov     eax, [edi+14h]
0x6C7612: mov     ecx, [esp+20h+var_C]
0x6C7616: mov     edx, [ecx+14h]
0x6C7619: mov     eax, [eax+esi+8]
0x6C761D: mov     [esi+edx+8], eax
0x6C7621: mov     ebp, ecx
0x6C7623: mov     eax, [esp+20h+var_8]
0x6C7627: add     eax, 1
0x6C762A: add     esi, 10h
0x6C762D: cmp     eax, [edi+0Ch]
0x6C7630: mov     [esp+20h+var_8], eax
0x6C7634: jb      loc_6C74B0
0x6C763A: mov     edx, [edi+40h]
0x6C763D: lea     ecx, [esp+20h+a2]
0x6C7641: push    ecx
0x6C7642: mov     ecx, [ebx]
0x6C7644: push    edx
0x6C7645: call    NiTMap_GetAt
0x6C764A: test    al, al
0x6C764C: jz      short loc_6C7657
0x6C764E: mov     eax, [esp+20h+a2]
0x6C7652: mov     [ebp+40h], eax
0x6C7655: jmp     short loc_6C765D
0x6C7657: mov     ecx, [edi+40h]
0x6C765A: mov     [ebp+40h], ecx
0x6C765D: mov     eax, [edi+58h]
0x6C7660: mov     ecx, [ebx]
0x6C7662: lea     edx, [esp+20h+a2]
0x6C7666: push    edx
0x6C7667: push    eax
0x6C7668: call    NiTMap_GetAt
0x6C766D: test    al, al
0x6C766F: jz      short loc_6C767A
0x6C7671: mov     ecx, [esp+20h+a2]
0x6C7675: mov     [ebp+58h], ecx
0x6C7678: jmp     short loc_6C7680
0x6C767A: mov     edx, [edi+58h]
0x6C767D: mov     [ebp+58h], edx
0x6C7680: mov     ecx, [edi+60h]
0x6C7683: lea     eax, [esp+20h+a2]
0x6C7687: push    eax
0x6C7688: push    ecx
0x6C7689: mov     ecx, [ebx]
0x6C768B: call    NiTMap_GetAt
0x6C7690: test    al, al
0x6C7692: jz      short loc_6C76A5
0x6C7694: mov     edx, [esp+20h+a2]
0x6C7698: pop     edi
0x6C7699: pop     esi
0x6C769A: mov     [ebp+60h], edx
0x6C769D: pop     ebp
0x6C769E: pop     ebx
0x6C769F: add     esp, 10h
0x6C76A2: retn    4
0x6C76A5: mov     eax, [edi+60h]
0x6C76A8: pop     edi
0x6C76A9: pop     esi
0x6C76AA: mov     [ebp+60h], eax
0x6C76AD: pop     ebp
0x6C76AE: pop     ebx
0x6C76AF: add     esp, 10h
0x6C76B2: retn    4
