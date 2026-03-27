0x8C69C0: push    0FFFFFFFFh
0x8C69C2: push    offset SEH_8C69C0
0x8C69C7: mov     eax, large fs:0
0x8C69CD: push    eax
0x8C69CE: sub     esp, 8
0x8C69D1: push    ebx
0x8C69D2: push    ebp
0x8C69D3: push    esi
0x8C69D4: push    edi
0x8C69D5: mov     eax, ds:0B30AACh
0x8C69DA: xor     eax, esp
0x8C69DC: push    eax
0x8C69DD: lea     eax, [esp+28h+var_C]
0x8C69E1: mov     large fs:0, eax
0x8C69E7: mov     esi, ecx
0x8C69E9: mov     edi, [esp+28h+arg_0]
0x8C69ED: cmp     edi, [esi+8]
0x8C69F0: jz      loc_8C6BC5
0x8C69F6: cmp     edi, [esi+0Ch]
0x8C69F9: jnb     short loc_8C6A50
0x8C69FB: mov     ebp, edi
0x8C69FD: lea     ecx, [ecx+0]
0x8C6A00: mov     eax, [esi+4]
0x8C6A03: lea     ecx, [eax+ebp*8]
0x8C6A06: xor     ebx, ebx
0x8C6A08: cmp     [ecx], ebx
0x8C6A0A: jnz     short loc_8C6A18
0x8C6A0C: cmp     [ecx+4], ebx
0x8C6A0F: jnz     short loc_8C6A18
0x8C6A11: mov     eax, 1
0x8C6A16: jmp     short loc_8C6A1A
0x8C6A18: xor     eax, eax
0x8C6A1A: test    al, al
0x8C6A1C: setz    al
0x8C6A1F: test    al, al
0x8C6A21: jz      short loc_8C6A43
0x8C6A23: mov     [esp+28h+var_14], ebx
0x8C6A27: mov     [esp+28h+var_10], ebx
0x8C6A2B: lea     edx, [esp+28h+var_14]
0x8C6A2F: push    edx
0x8C6A30: mov     [esp+2Ch+var_4], ebx
0x8C6A34: call    sub_8C6880
0x8C6A39: or      eax, 0FFFFFFFFh
0x8C6A3C: add     [esi+10h], eax
0x8C6A3F: mov     [esp+28h+var_4], eax
0x8C6A43: add     ebp, 1
0x8C6A46: cmp     ebp, [esi+0Ch]
0x8C6A49: jb      short loc_8C6A00
0x8C6A4B: mov     [esi+0Ch], edi
0x8C6A4E: jmp     short loc_8C6A52
0x8C6A50: xor     ebx, ebx
0x8C6A52: cmp     edi, ebx
0x8C6A54: mov     eax, [esi+4]
0x8C6A57: mov     [esp+28h+arg_0], eax
0x8C6A5B: mov     [esi+8], edi
0x8C6A5E: jbe     loc_8C6BDB
0x8C6A64: xor     ecx, ecx
0x8C6A66: mov     eax, edi
0x8C6A68: mov     edx, 8
0x8C6A6D: mul     edx
0x8C6A6F: seto    cl
0x8C6A72: neg     ecx
0x8C6A74: or      ecx, eax
0x8C6A76: xor     eax, eax
0x8C6A78: add     ecx, 4
0x8C6A7B: setb    al
0x8C6A7E: neg     eax
0x8C6A80: or      eax, ecx
0x8C6A82: push    eax; Size
0x8C6A83: call    FormHeapAlloc
0x8C6A88: add     esp, 4
0x8C6A8B: mov     [esp+28h+var_14], eax
0x8C6A8F: cmp     eax, ebx
0x8C6A91: mov     [esp+28h+var_4], 1
0x8C6A99: jz      short loc_8C6AB5
0x8C6A9B: push    offset sub_7016A0; a5
0x8C6AA0: push    offset ?Reinitialize@?$StructuredWorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEXXZ; a4
0x8C6AA5: push    edi; size
0x8C6AA6: lea     ebp, [eax+4]
0x8C6AA9: push    8; a2
0x8C6AAB: push    ebp; a1
0x8C6AAC: mov     [eax], edi
0x8C6AAE: call    ArrayConstructor
0x8C6AB3: jmp     short loc_8C6AB7
0x8C6AB5: xor     ebp, ebp
0x8C6AB7: xor     eax, eax
0x8C6AB9: cmp     [esi+0Ch], ebx
0x8C6ABC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C6AC4: mov     [esi+4], ebp
0x8C6AC7: mov     [esp+28h+var_14], eax
0x8C6ACB: jbe     short loc_8C6B3C
0x8C6ACD: lea     ecx, [ecx+0]
0x8C6AD0: mov     edi, [esi+4]
0x8C6AD3: mov     ecx, [esp+28h+arg_0]
0x8C6AD7: lea     ebp, ds:0[eax*8]
0x8C6ADE: mov     ebx, [edi+ebp]
0x8C6AE1: add     edi, ebp
0x8C6AE3: cmp     ebx, [ecx+ebp]
0x8C6AE6: jz      short loc_8C6B1F
0x8C6AE8: test    ebx, ebx
0x8C6AEA: jz      short loc_8C6B08
0x8C6AEC: lea     edx, [ebx+4]
0x8C6AEF: push    edx; lpAddend
0x8C6AF0: call    dword ptr ds:0A2807Ch
0x8C6AF6: test    eax, eax
0x8C6AF8: jnz     short loc_8C6B08
0x8C6AFA: test    ebx, ebx
0x8C6AFC: jz      short loc_8C6B08
0x8C6AFE: mov     eax, [ebx]
0x8C6B00: mov     edx, [eax]
0x8C6B02: push    1
0x8C6B04: mov     ecx, ebx
0x8C6B06: call    edx
0x8C6B08: mov     eax, [esp+28h+arg_0]
0x8C6B0C: mov     eax, [eax+ebp]
0x8C6B0F: test    eax, eax
0x8C6B11: mov     [edi], eax
0x8C6B13: jz      short loc_8C6B1F
0x8C6B15: add     eax, 4
0x8C6B18: push    eax; lpAddend
0x8C6B19: call    dword ptr ds:0A28078h
0x8C6B1F: mov     ecx, [esp+28h+arg_0]
0x8C6B23: mov     eax, [esp+28h+var_14]
0x8C6B27: mov     edx, [ecx+ebp+4]
0x8C6B2B: add     eax, 1
0x8C6B2E: mov     [edi+4], edx
0x8C6B31: cmp     eax, [esi+0Ch]
0x8C6B34: mov     [esp+28h+var_14], eax
0x8C6B38: jb      short loc_8C6AD0
0x8C6B3A: xor     ebx, ebx
0x8C6B3C: mov     ebp, [esi+0Ch]
0x8C6B3F: cmp     ebp, [esi+8]
0x8C6B42: jnb     short loc_8C6BA0
0x8C6B44: mov     [esp+28h+var_14], ebx
0x8C6B48: mov     [esp+28h+var_10], ebx
0x8C6B4C: lea     esp, [esp+0]
0x8C6B50: mov     eax, [esi+4]
0x8C6B53: mov     edi, [eax+ebp*8]
0x8C6B56: test    edi, edi
0x8C6B58: lea     ebx, [eax+ebp*8]
0x8C6B5B: mov     [esp+28h+var_4], 2
0x8C6B63: jz      short loc_8C6B87
0x8C6B65: lea     ecx, [edi+4]
0x8C6B68: push    ecx; lpAddend
0x8C6B69: call    dword ptr ds:0A2807Ch
0x8C6B6F: test    eax, eax
0x8C6B71: jnz     short loc_8C6B81
0x8C6B73: test    edi, edi
0x8C6B75: jz      short loc_8C6B81
0x8C6B77: mov     edx, [edi]
0x8C6B79: mov     eax, [edx]
0x8C6B7B: push    1
0x8C6B7D: mov     ecx, edi
0x8C6B7F: call    eax
0x8C6B81: mov     dword ptr [ebx], 0
0x8C6B87: add     ebp, 1
0x8C6B8A: mov     dword ptr [ebx+4], 0
0x8C6B91: cmp     ebp, [esi+8]
0x8C6B94: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C6B9C: jb      short loc_8C6B50
0x8C6B9E: xor     ebx, ebx
0x8C6BA0: mov     eax, [esp+28h+arg_0]
0x8C6BA4: cmp     eax, ebx
0x8C6BA6: jz      short loc_8C6BC5
0x8C6BA8: mov     ecx, [eax-4]
0x8C6BAB: lea     esi, [eax-4]
0x8C6BAE: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8C6BB3: push    ecx; int
0x8C6BB4: push    8; unsigned int
0x8C6BB6: push    eax; void *
0x8C6BB7: call    $LN21
0x8C6BBC: push    esi
0x8C6BBD: call    FormHeapFree
0x8C6BC2: add     esp, 4
0x8C6BC5: mov     ecx, [esp+28h+var_C]
0x8C6BC9: mov     large fs:0, ecx
0x8C6BD0: pop     ecx
0x8C6BD1: pop     edi
0x8C6BD2: pop     esi
0x8C6BD3: pop     ebp
0x8C6BD4: pop     ebx
0x8C6BD5: add     esp, 14h
0x8C6BD8: retn    4
0x8C6BDB: mov     [esi+4], ebx
0x8C6BDE: jmp     short loc_8C6BA4
