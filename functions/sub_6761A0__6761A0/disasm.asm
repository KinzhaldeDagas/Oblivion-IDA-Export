0x6761A0: push    ecx
0x6761A1: push    ebx
0x6761A2: mov     [esp+8+var_4], ecx
0x6761A6: mov     ecx, [esp+8+arg_0]
0x6761AA: push    esi
0x6761AB: push    edi
0x6761AC: add     ecx, 44h ; 'D'
0x6761AF: call    GetExtraDataFollower
0x6761B4: test    eax, eax
0x6761B6: mov     edi, [esp+10h+arg_4]
0x6761BA: jz      short loc_676224
0x6761BC: mov     ebx, [eax+0Ch]
0x6761BF: test    ebx, ebx
0x6761C1: jz      short loc_676224
0x6761C3: cmp     dword ptr [ebx+4], 0
0x6761C7: jnz     short loc_6761CE
0x6761C9: cmp     dword ptr [ebx], 0
0x6761CC: jz      short loc_676224
0x6761CE: test    edi, edi
0x6761D0: mov     esi, [ebx]
0x6761D2: mov     eax, edi
0x6761D4: jz      short loc_6761E1
0x6761D6: cmp     [eax], esi
0x6761D8: jz      short loc_67621D
0x6761DA: mov     eax, [eax+4]
0x6761DD: test    eax, eax
0x6761DF: jnz     short loc_6761D6
0x6761E1: test    esi, esi
0x6761E3: jz      short loc_676212
0x6761E5: cmp     dword ptr [edi], 0
0x6761E8: jz      short loc_676210
0x6761EA: push    8; Size
0x6761EC: call    FormHeapAlloc
0x6761F1: add     esp, 4
0x6761F4: test    eax, eax
0x6761F6: jz      short loc_676205
0x6761F8: mov     ecx, [edi]
0x6761FA: mov     [eax], ecx
0x6761FC: mov     dword ptr [eax+4], 0
0x676203: jmp     short loc_676207
0x676205: xor     eax, eax
0x676207: mov     edx, [edi+4]
0x67620A: mov     [eax+4], edx
0x67620D: mov     [edi+4], eax
0x676210: mov     [edi], esi
0x676212: mov     ecx, [esp+10h+var_4]
0x676216: push    edi
0x676217: push    esi
0x676218: call    sub_6761A0
0x67621D: mov     ebx, [ebx+4]
0x676220: test    ebx, ebx
0x676222: jnz     short loc_6761C3
0x676224: mov     ecx, [esp+10h+var_4]
0x676228: add     ecx, 68h ; 'h'; this
0x67622B: call    sub_7616D0
0x676230: mov     ebx, eax
0x676232: test    ebx, ebx
0x676234: jz      short loc_6762A9
0x676236: mov     ecx, [ebx]
0x676238: test    ecx, ecx
0x67623A: jz      short loc_6762A9
0x67623C: mov     eax, [ecx]
0x67623E: mov     edx, [eax+190h]
0x676244: call    edx
0x676246: test    al, al
0x676248: jz      short loc_6762A2
0x67624A: mov     esi, [ebx]
0x67624C: mov     ecx, esi
0x67624E: call    sub_5E0380
0x676253: test    eax, eax
0x676255: jz      short loc_6762A2
0x676257: mov     ecx, esi
0x676259: call    sub_5E0380
0x67625E: cmp     byte ptr [eax+20h], 2
0x676262: jz      short loc_676271
0x676264: mov     ecx, esi
0x676266: call    sub_5E0380
0x67626B: cmp     byte ptr [eax+20h], 7
0x67626F: jnz     short loc_6762A2
0x676271: mov     ecx, esi
0x676273: call    sub_5E2E00
0x676278: cmp     eax, [esp+10h+arg_0]
0x67627C: jnz     short loc_6762A2
0x67627E: test    edi, edi
0x676280: mov     eax, edi
0x676282: jz      short loc_67628F
0x676284: cmp     [eax], esi
0x676286: jz      short loc_6762A2
0x676288: mov     eax, [eax+4]
0x67628B: test    eax, eax
0x67628D: jnz     short loc_676284
0x67628F: push    esi
0x676290: mov     ecx, edi
0x676292: call    BSSimpleList_PushFront
0x676297: mov     ecx, [esp+10h+var_4]
0x67629B: push    edi
0x67629C: push    esi
0x67629D: call    sub_6761A0
0x6762A2: mov     ebx, [ebx+4]
0x6762A5: test    ebx, ebx
0x6762A7: jnz     short loc_676236
0x6762A9: pop     edi
0x6762AA: pop     esi
0x6762AB: pop     ebx
0x6762AC: pop     ecx
0x6762AD: retn    8
