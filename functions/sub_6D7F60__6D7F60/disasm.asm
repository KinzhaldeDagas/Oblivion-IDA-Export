0x6D7F60: push    0FFFFFFFFh
0x6D7F62: push    offset SEH_6D7F60
0x6D7F67: mov     eax, large fs:0
0x6D7F6D: push    eax
0x6D7F6E: sub     esp, 8
0x6D7F71: push    ebx
0x6D7F72: push    ebp
0x6D7F73: push    esi
0x6D7F74: push    edi
0x6D7F75: mov     eax, ds:0B30AACh
0x6D7F7A: xor     eax, esp
0x6D7F7C: push    eax
0x6D7F7D: lea     eax, [esp+28h+var_C]
0x6D7F81: mov     large fs:0, eax
0x6D7F87: mov     edi, ecx
0x6D7F89: mov     [esp+28h+var_14], 0
0x6D7F91: movzx   eax, word ptr [edi+0Ah]
0x6D7F95: mov     ebx, [esp+28h+arg_4]
0x6D7F99: cmp     ebx, eax
0x6D7F9B: jb      short loc_6D7FAC
0x6D7F9D: mov     eax, [esp+28h+arg_0]
0x6D7FA1: mov     dword ptr [eax], 0
0x6D7FA7: jmp     loc_6D8054
0x6D7FAC: mov     eax, [edi+4]
0x6D7FAF: lea     ebp, ds:0[ebx*4]
0x6D7FB6: mov     esi, [eax+ebp]
0x6D7FB9: add     eax, ebp
0x6D7FBB: test    esi, esi
0x6D7FBD: mov     [esp+28h+var_10], esi
0x6D7FC1: jz      short loc_6D7FCD
0x6D7FC3: lea     ecx, [esi+4]
0x6D7FC6: push    ecx; lpAddend
0x6D7FC7: call    dword ptr ds:0A28078h
0x6D7FCD: mov     [esp+28h+var_4], 1
0x6D7FD5: mov     [esp+28h+arg_4], 0
0x6D7FDD: mov     ecx, [edi+4]
0x6D7FE0: lea     edx, [esp+28h+arg_4]
0x6D7FE4: push    edx
0x6D7FE5: add     ecx, ebp
0x6D7FE7: mov     byte ptr [esp+2Ch+var_4], 2
0x6D7FEC: call    sub_55E2A0
0x6D7FF1: test    esi, esi
0x6D7FF3: setnz   al
0x6D7FF6: test    al, al
0x6D7FF8: jz      short loc_6D8000
0x6D7FFA: add     word ptr [edi+0Ch], 0FFFFh
0x6D8000: movzx   eax, word ptr [edi+0Ah]
0x6D8004: movzx   ecx, ax
0x6D8007: sub     ecx, 1
0x6D800A: cmp     ebx, ecx
0x6D800C: jnz     short loc_6D8015
0x6D800E: add     eax, 0FFFFFFFFh
0x6D8011: mov     [edi+0Ah], ax
0x6D8015: test    esi, esi
0x6D8017: mov     edi, [esp+28h+arg_0]
0x6D801B: mov     [edi], esi
0x6D801D: jz      short loc_6D8029
0x6D801F: lea     edx, [esi+4]
0x6D8022: push    edx; lpAddend
0x6D8023: call    dword ptr ds:0A28078h
0x6D8029: test    esi, esi
0x6D802B: mov     [esp+28h+var_14], 1
0x6D8033: mov     byte ptr [esp+28h+var_4], 0
0x6D8038: jz      short loc_6D8052
0x6D803A: lea     eax, [esi+4]
0x6D803D: push    eax; lpAddend
0x6D803E: call    dword ptr ds:0A2807Ch
0x6D8044: test    eax, eax
0x6D8046: jnz     short loc_6D8052
0x6D8048: mov     edx, [esi]
0x6D804A: mov     eax, [edx]
0x6D804C: push    1
0x6D804E: mov     ecx, esi
0x6D8050: call    eax
0x6D8052: mov     eax, edi
0x6D8054: mov     ecx, dword ptr [esp+28h+var_C]
0x6D8058: mov     large fs:0, ecx
0x6D805F: pop     ecx
0x6D8060: pop     edi
0x6D8061: pop     esi
0x6D8062: pop     ebp
0x6D8063: pop     ebx
0x6D8064: add     esp, 14h
0x6D8067: retn    8
