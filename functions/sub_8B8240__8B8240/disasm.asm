0x8B8240: sub     esp, 18h
0x8B8243: push    ebx
0x8B8244: push    esi
0x8B8245: mov     esi, [esp+20h+arg_0]
0x8B8249: push    edi
0x8B824A: push    esi
0x8B824B: mov     edi, ecx
0x8B824D: call    sub_8AEAC0
0x8B8252: mov     eax, ds:0BA7FF8h
0x8B8257: push    eax; ArgList
0x8B8258: call    TESOutput_PrintString
0x8B825D: movzx   ebx, word ptr [esi+0Ah]
0x8B8261: movzx   ecx, word ptr [esi+8]
0x8B8265: add     esp, 4
0x8B8268: cmp     ebx, ecx
0x8B826A: mov     [esp+24h+arg_0], eax
0x8B826E: jb      short loc_8B827E
0x8B8270: movzx   edx, word ptr [esi+0Eh]
0x8B8274: add     edx, ebx
0x8B8276: push    edx
0x8B8277: mov     ecx, esi
0x8B8279: call    NiTArray_SetSize
0x8B827E: lea     eax, [esp+24h+arg_0]
0x8B8282: push    eax
0x8B8283: push    ebx
0x8B8284: mov     ecx, esi
0x8B8286: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B828B: test    edi, edi
0x8B828D: jz      short loc_8B8299
0x8B828F: mov     edi, [edi+8]
0x8B8292: test    edi, edi
0x8B8294: lea     eax, [edi+10h]
0x8B8297: jnz     short loc_8B829E
0x8B8299: mov     eax, offset stru_BA7A40
0x8B829E: push    eax
0x8B829F: lea     ecx, [esp+28h+var_C]
0x8B82A3: push    ecx
0x8B82A4: call    sub_43F3E0
0x8B82A9: mov     edx, [eax]
0x8B82AB: mov     [esp+2Ch+var_18], edx
0x8B82AF: mov     ecx, [eax+4]
0x8B82B2: mov     [esp+2Ch+var_14], ecx
0x8B82B6: mov     edx, [eax+8]
0x8B82B9: add     esp, 8
0x8B82BC: push    offset aHalfExtent; "Half Extent"
0x8B82C1: lea     ecx, [esp+28h+var_18]
0x8B82C5: mov     [esp+28h+var_10], edx
0x8B82C9: call    sub_707280
0x8B82CE: movzx   edi, word ptr [esi+0Ah]
0x8B82D2: mov     [esp+24h+arg_0], eax
0x8B82D6: movzx   eax, word ptr [esi+8]
0x8B82DA: cmp     edi, eax
0x8B82DC: jb      short loc_8B82EC
0x8B82DE: movzx   ecx, word ptr [esi+0Eh]
0x8B82E2: add     ecx, edi
0x8B82E4: push    ecx
0x8B82E5: mov     ecx, esi
0x8B82E7: call    NiTArray_SetSize
0x8B82EC: lea     edx, [esp+24h+arg_0]
0x8B82F0: push    edx
0x8B82F1: push    edi
0x8B82F2: mov     ecx, esi
0x8B82F4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B82F9: pop     edi
0x8B82FA: pop     esi
0x8B82FB: pop     ebx
0x8B82FC: add     esp, 18h
0x8B82FF: retn    4
