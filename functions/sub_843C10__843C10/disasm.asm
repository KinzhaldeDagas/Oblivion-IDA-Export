0x843C10: push    0FFFFFFFFh
0x843C12: push    offset SEH_851CA0
0x843C17: mov     eax, large fs:0
0x843C1D: push    eax
0x843C1E: push    ecx
0x843C1F: push    ebx
0x843C20: push    ebp
0x843C21: push    esi
0x843C22: push    edi
0x843C23: mov     eax, ds:0B30AACh
0x843C28: xor     eax, esp
0x843C2A: push    eax
0x843C2B: lea     eax, [esp+24h+var_C]
0x843C2F: mov     large fs:0, eax
0x843C35: mov     edi, ecx
0x843C37: mov     esi, ds:0B45978h
0x843C3D: mov     ecx, [esp+24h+arg_C]
0x843C41: mov     eax, [esi+24h]
0x843C44: mov     ebp, [eax]
0x843C46: push    0
0x843C48: push    ecx
0x843C49: mov     ecx, edi
0x843C4B: call    sub_848FD0
0x843C50: mov     ebx, [ebp+4]
0x843C53: cmp     ebx, eax
0x843C55: mov     [esp+24h+var_10], eax
0x843C59: jz      short loc_843C90
0x843C5B: test    ebx, ebx
0x843C5D: jz      short loc_843C7F
0x843C5F: lea     edx, [ebx+4]
0x843C62: push    edx; lpAddend
0x843C63: call    dword ptr ds:0A2807Ch
0x843C69: test    eax, eax
0x843C6B: jnz     short loc_843C7B
0x843C6D: test    ebx, ebx
0x843C6F: jz      short loc_843C7B
0x843C71: mov     eax, [ebx]
0x843C73: mov     edx, [eax]
0x843C75: push    1
0x843C77: mov     ecx, ebx
0x843C79: call    edx
0x843C7B: mov     eax, [esp+24h+var_10]
0x843C7F: test    eax, eax
0x843C81: mov     [ebp+4], eax
0x843C84: jz      short loc_843C90
0x843C86: add     eax, 4
0x843C89: push    eax; lpAddend
0x843C8A: call    dword ptr ds:0A28078h
0x843C90: mov     eax, [esp+24h+arg_C]
0x843C94: push    eax
0x843C95: push    ebp
0x843C96: mov     ecx, edi
0x843C98: call    sub_848FA0
0x843C9D: mov     ebx, 1
0x843CA2: add     [esi+60h], ebx
0x843CA5: mov     [esp+24h+arg_C], esi
0x843CA9: mov     edx, [edi+38h]
0x843CAC: lea     ecx, [esp+24h+arg_C]
0x843CB0: push    ecx
0x843CB1: push    edx
0x843CB2: lea     ecx, [edi+40h]
0x843CB5: mov     [esp+2Ch+var_4], 0
0x843CBD: call    sub_76CE40
0x843CC2: or      eax, 0FFFFFFFFh
0x843CC5: add     [esi+60h], eax
0x843CC8: mov     [esp+24h+var_4], eax
0x843CCC: jnz     short loc_843CD5
0x843CCE: mov     ecx, esi
0x843CD0: call    sub_7604D0
0x843CD5: add     [edi+38h], ebx
0x843CD8: mov     ecx, dword ptr [esp+24h+var_C]
0x843CDC: mov     large fs:0, ecx
0x843CE3: pop     ecx
0x843CE4: pop     edi
0x843CE5: pop     esi
0x843CE6: pop     ebp
0x843CE7: pop     ebx
0x843CE8: add     esp, 10h
0x843CEB: retn    10h
