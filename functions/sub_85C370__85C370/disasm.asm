0x85C370: push    0FFFFFFFFh
0x85C372: push    offset SEH_85DE70
0x85C377: mov     eax, large fs:0
0x85C37D: push    eax
0x85C37E: push    ecx
0x85C37F: push    ebx
0x85C380: push    ebp
0x85C381: push    esi
0x85C382: push    edi
0x85C383: mov     eax, ds:0B30AACh
0x85C388: xor     eax, esp
0x85C38A: push    eax
0x85C38B: lea     eax, [esp+24h+var_C]
0x85C38F: mov     large fs:0, eax
0x85C395: mov     ebx, ecx
0x85C397: mov     esi, ds:0B477A0h
0x85C39D: mov     eax, [esi+24h]
0x85C3A0: mov     ecx, [esp+24h+arg_C]
0x85C3A4: mov     edi, [eax]
0x85C3A6: push    0
0x85C3A8: push    ecx
0x85C3A9: mov     ecx, ebx
0x85C3AB: mov     [esp+2Ch+var_10], edi
0x85C3AF: call    sub_848FD0
0x85C3B4: mov     edi, [edi+4]
0x85C3B7: mov     ebp, eax
0x85C3B9: cmp     edi, ebp
0x85C3BB: jz      short loc_85C3F2
0x85C3BD: test    edi, edi
0x85C3BF: jz      short loc_85C3DD
0x85C3C1: lea     edx, [edi+4]
0x85C3C4: push    edx; lpAddend
0x85C3C5: call    dword ptr ds:0A2807Ch
0x85C3CB: test    eax, eax
0x85C3CD: jnz     short loc_85C3DD
0x85C3CF: test    edi, edi
0x85C3D1: jz      short loc_85C3DD
0x85C3D3: mov     eax, [edi]
0x85C3D5: mov     edx, [eax]
0x85C3D7: push    1
0x85C3D9: mov     ecx, edi
0x85C3DB: call    edx
0x85C3DD: test    ebp, ebp
0x85C3DF: mov     eax, [esp+24h+var_10]
0x85C3E3: mov     [eax+4], ebp
0x85C3E6: jz      short loc_85C3F2
0x85C3E8: add     ebp, 4
0x85C3EB: push    ebp; lpAddend
0x85C3EC: call    dword ptr ds:0A28078h
0x85C3F2: cmp     byte ptr [esp+24h+arg_10], 0
0x85C3F7: jnz     short loc_85C434
0x85C3F9: mov     edi, 1
0x85C3FE: add     [esi+60h], edi
0x85C401: mov     [esp+24h+arg_10], esi
0x85C405: mov     edx, [ebx+38h]
0x85C408: lea     ecx, [esp+24h+arg_10]
0x85C40C: push    ecx
0x85C40D: push    edx
0x85C40E: lea     ecx, [ebx+40h]
0x85C411: mov     [esp+2Ch+var_4], 0
0x85C419: call    sub_76CE40
0x85C41E: or      eax, 0FFFFFFFFh
0x85C421: add     [esi+60h], eax
0x85C424: mov     [esp+24h+var_4], eax
0x85C428: jnz     short loc_85C431
0x85C42A: mov     ecx, esi
0x85C42C: call    sub_7604D0
0x85C431: add     [ebx+38h], edi
0x85C434: mov     ecx, dword ptr [esp+24h+var_C]
0x85C438: mov     large fs:0, ecx
0x85C43F: pop     ecx
0x85C440: pop     edi
0x85C441: pop     esi
0x85C442: pop     ebp
0x85C443: pop     ebx
0x85C444: add     esp, 10h
0x85C447: retn    14h
