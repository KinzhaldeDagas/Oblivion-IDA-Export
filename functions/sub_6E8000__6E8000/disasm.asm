0x6E8000: sub     esp, 8
0x6E8003: push    ebp
0x6E8004: mov     ebp, ecx
0x6E8006: mov     eax, [ebp+10h]
0x6E8009: test    eax, eax
0x6E800B: mov     [esp+0Ch+var_4], ebp
0x6E800F: jz      loc_6E80DE
0x6E8015: mov     ecx, [eax+10h]
0x6E8018: push    ebx
0x6E8019: mov     bl, [eax+14h]
0x6E801C: push    esi
0x6E801D: mov     esi, [eax+8]
0x6E8020: test    esi, esi
0x6E8022: push    edi
0x6E8023: mov     edi, [eax+0Ch]
0x6E8026: jnz     short loc_6E8062
0x6E8028: mov     esi, eax
0x6E802A: test    esi, esi
0x6E802C: jz      short loc_6E8051
0x6E802E: lea     eax, [esi+4]
0x6E8031: push    eax; lpAddend
0x6E8032: call    dword ptr ds:0A2807Ch
0x6E8038: test    eax, eax
0x6E803A: jnz     short loc_6E804A
0x6E803C: test    esi, esi
0x6E803E: jz      short loc_6E804A
0x6E8040: mov     edx, [esi]
0x6E8042: mov     eax, [edx]
0x6E8044: push    1
0x6E8046: mov     ecx, esi
0x6E8048: call    eax
0x6E804A: mov     dword ptr [ebp+10h], 0
0x6E8051: mov     cl, ds:0A7C6ACh
0x6E8057: pop     edi
0x6E8058: pop     esi
0x6E8059: pop     ebx
0x6E805A: mov     [ebp+0Ch], cl
0x6E805D: pop     ebp
0x6E805E: add     esp, 8
0x6E8061: retn
0x6E8062: cmp     esi, 1
0x6E8065: mov     al, [edi+4]
0x6E8068: mov     [esp+18h+var_5], al
0x6E806C: jz      short loc_6E80AA
0x6E806E: cmp     ecx, 1
0x6E8071: jz      short loc_6E8078
0x6E8073: cmp     ecx, 5
0x6E8076: jnz     short loc_6E80DB
0x6E8078: mov     dl, 1
0x6E807A: mov     ecx, 1
0x6E807F: jmp     short loc_6E8085
0x6E8081: mov     ebp, [esp+18h+var_4]
0x6E8085: cmp     ecx, esi
0x6E8087: jnb     short loc_6E80A6
0x6E8089: movzx   ebp, bl
0x6E808C: imul    ebp, ecx
0x6E808F: cmp     [edi+ebp+4], al
0x6E8093: jz      short loc_6E8097
0x6E8095: xor     dl, dl
0x6E8097: add     ecx, 1
0x6E809A: test    dl, dl
0x6E809C: jnz     short loc_6E8081
0x6E809E: pop     edi
0x6E809F: pop     esi
0x6E80A0: pop     ebx
0x6E80A1: pop     ebp
0x6E80A2: add     esp, 8
0x6E80A5: retn
0x6E80A6: test    dl, dl
0x6E80A8: jz      short loc_6E80DB
0x6E80AA: mov     esi, [ebp+10h]
0x6E80AD: test    esi, esi
0x6E80AF: jz      short loc_6E80D8
0x6E80B1: lea     edx, [esi+4]
0x6E80B4: push    edx; lpAddend
0x6E80B5: call    dword ptr ds:0A2807Ch
0x6E80BB: test    eax, eax
0x6E80BD: jnz     short loc_6E80CD
0x6E80BF: test    esi, esi
0x6E80C1: jz      short loc_6E80CD
0x6E80C3: mov     eax, [esi]
0x6E80C5: mov     edx, [eax]
0x6E80C7: push    1
0x6E80C9: mov     ecx, esi
0x6E80CB: call    edx
0x6E80CD: mov     al, [esp+18h+var_5]
0x6E80D1: mov     dword ptr [ebp+10h], 0
0x6E80D8: mov     [ebp+0Ch], al
0x6E80DB: pop     edi
0x6E80DC: pop     esi
0x6E80DD: pop     ebx
0x6E80DE: pop     ebp
0x6E80DF: add     esp, 8
0x6E80E2: retn
