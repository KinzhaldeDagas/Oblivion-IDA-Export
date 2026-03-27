0x8BCA30: push    0FFFFFFFFh
0x8BCA32: push    offset SEH_6C4510
0x8BCA37: mov     eax, large fs:0
0x8BCA3D: push    eax
0x8BCA3E: push    ecx
0x8BCA3F: push    ebx
0x8BCA40: push    ebp
0x8BCA41: push    esi
0x8BCA42: push    edi
0x8BCA43: mov     eax, ds:0B30AACh
0x8BCA48: xor     eax, esp
0x8BCA4A: push    eax
0x8BCA4B: lea     eax, [esp+24h+var_C]
0x8BCA4F: mov     large fs:0, eax
0x8BCA55: mov     esi, ecx
0x8BCA57: mov     ebp, [esp+24h+size]
0x8BCA5B: cmp     ebp, [esi+8]
0x8BCA5E: jz      loc_8BCC3A
0x8BCA64: cmp     ebp, [esi+0Ch]
0x8BCA67: jnb     short loc_8BCACE
0x8BCA69: mov     ecx, ebp
0x8BCA6B: mov     [esp+24h+size], ebp
0x8BCA6F: nop
0x8BCA70: mov     eax, [esi+4]
0x8BCA73: lea     ebx, [eax+ecx*4]
0x8BCA76: xor     edx, edx
0x8BCA78: cmp     [ebx], edx
0x8BCA7A: setnz   al
0x8BCA7D: test    al, al
0x8BCA7F: jz      short loc_8BCABF
0x8BCA81: mov     [esp+24h+var_10], edx
0x8BCA85: mov     edi, [ebx]
0x8BCA87: cmp     edi, edx
0x8BCA89: mov     [esp+24h+var_4], edx
0x8BCA8D: jz      short loc_8BCAB5
0x8BCA8F: lea     ecx, [edi+4]
0x8BCA92: push    ecx; lpAddend
0x8BCA93: call    dword ptr ds:0A2807Ch
0x8BCA99: test    eax, eax
0x8BCA9B: jnz     short loc_8BCAAB
0x8BCA9D: test    edi, edi
0x8BCA9F: jz      short loc_8BCAAB
0x8BCAA1: mov     edx, [edi]
0x8BCAA3: mov     eax, [edx]
0x8BCAA5: push    1
0x8BCAA7: mov     ecx, edi
0x8BCAA9: call    eax
0x8BCAAB: mov     ecx, [esp+24h+size]
0x8BCAAF: mov     dword ptr [ebx], 0
0x8BCAB5: or      eax, 0FFFFFFFFh
0x8BCAB8: add     [esi+10h], eax
0x8BCABB: mov     [esp+24h+var_4], eax
0x8BCABF: add     ecx, 1
0x8BCAC2: cmp     ecx, [esi+0Ch]
0x8BCAC5: mov     [esp+24h+size], ecx
0x8BCAC9: jb      short loc_8BCA70
0x8BCACB: mov     [esi+0Ch], ebp
0x8BCACE: test    ebp, ebp
0x8BCAD0: mov     edi, [esi+4]
0x8BCAD3: mov     [esp+24h+var_10], edi
0x8BCAD7: mov     [esi+8], ebp
0x8BCADA: jbe     loc_8BCC12
0x8BCAE0: xor     ecx, ecx
0x8BCAE2: mov     eax, ebp
0x8BCAE4: mov     edx, 4
0x8BCAE9: mul     edx
0x8BCAEB: seto    cl
0x8BCAEE: neg     ecx
0x8BCAF0: or      ecx, eax
0x8BCAF2: xor     eax, eax
0x8BCAF4: add     ecx, 4
0x8BCAF7: setb    al
0x8BCAFA: neg     eax
0x8BCAFC: or      eax, ecx
0x8BCAFE: push    eax; Size
0x8BCAFF: call    FormHeapAlloc
0x8BCB04: add     esp, 4
0x8BCB07: mov     [esp+24h+size], eax
0x8BCB0B: test    eax, eax
0x8BCB0D: mov     [esp+24h+var_4], 1
0x8BCB15: jz      short loc_8BCB31
0x8BCB17: push    offset sub_7016A0; a5
0x8BCB1C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x8BCB21: push    ebp; size
0x8BCB22: lea     ebx, [eax+4]
0x8BCB25: push    4; a2
0x8BCB27: push    ebx; a1
0x8BCB28: mov     [eax], ebp
0x8BCB2A: call    ArrayConstructor
0x8BCB2F: jmp     short loc_8BCB33
0x8BCB31: xor     ebx, ebx
0x8BCB33: xor     eax, eax
0x8BCB35: cmp     [esi+0Ch], eax
0x8BCB38: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8BCB40: mov     [esi+4], ebx
0x8BCB43: mov     [esp+24h+size], eax
0x8BCB47: jbe     short loc_8BCBB4
0x8BCB49: lea     esp, [esp+0]
0x8BCB50: mov     edi, [esi+4]
0x8BCB53: mov     ecx, [esp+24h+var_10]
0x8BCB57: lea     ebx, ds:0[eax*4]
0x8BCB5E: mov     ebp, [edi+ebx]
0x8BCB61: add     edi, ebx
0x8BCB63: cmp     ebp, [ebx+ecx]
0x8BCB66: jz      short loc_8BCBA0
0x8BCB68: test    ebp, ebp
0x8BCB6A: jz      short loc_8BCB89
0x8BCB6C: lea     edx, [ebp+4]
0x8BCB6F: push    edx; lpAddend
0x8BCB70: call    dword ptr ds:0A2807Ch
0x8BCB76: test    eax, eax
0x8BCB78: jnz     short loc_8BCB89
0x8BCB7A: test    ebp, ebp
0x8BCB7C: jz      short loc_8BCB89
0x8BCB7E: mov     eax, [ebp+0]
0x8BCB81: mov     edx, [eax]
0x8BCB83: push    1
0x8BCB85: mov     ecx, ebp
0x8BCB87: call    edx
0x8BCB89: mov     eax, [esp+24h+var_10]
0x8BCB8D: mov     ebx, [ebx+eax]
0x8BCB90: test    ebx, ebx
0x8BCB92: mov     [edi], ebx
0x8BCB94: jz      short loc_8BCBA0
0x8BCB96: add     ebx, 4
0x8BCB99: push    ebx; lpAddend
0x8BCB9A: call    dword ptr ds:0A28078h
0x8BCBA0: mov     eax, [esp+24h+size]
0x8BCBA4: add     eax, 1
0x8BCBA7: cmp     eax, [esi+0Ch]
0x8BCBAA: mov     [esp+24h+size], eax
0x8BCBAE: jb      short loc_8BCB50
0x8BCBB0: mov     edi, [esp+24h+var_10]
0x8BCBB4: mov     ebx, [esi+0Ch]
0x8BCBB7: cmp     ebx, [esi+8]
0x8BCBBA: jnb     short loc_8BCC19
0x8BCBBC: mov     [esp+24h+size], 0
0x8BCBC4: mov     ecx, [esi+4]
0x8BCBC7: mov     edi, [ecx+ebx*4]
0x8BCBCA: test    edi, edi
0x8BCBCC: lea     ebp, [ecx+ebx*4]
0x8BCBCF: mov     [esp+24h+var_4], 2
0x8BCBD7: jz      short loc_8BCBFC
0x8BCBD9: lea     edx, [edi+4]
0x8BCBDC: push    edx; lpAddend
0x8BCBDD: call    dword ptr ds:0A2807Ch
0x8BCBE3: test    eax, eax
0x8BCBE5: jnz     short loc_8BCBF5
0x8BCBE7: test    edi, edi
0x8BCBE9: jz      short loc_8BCBF5
0x8BCBEB: mov     eax, [edi]
0x8BCBED: mov     edx, [eax]
0x8BCBEF: push    1
0x8BCBF1: mov     ecx, edi
0x8BCBF3: call    edx
0x8BCBF5: mov     dword ptr [ebp+0], 0
0x8BCBFC: add     ebx, 1
0x8BCBFF: cmp     ebx, [esi+8]
0x8BCC02: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8BCC0A: jb      short loc_8BCBC4
0x8BCC0C: mov     edi, [esp+24h+var_10]
0x8BCC10: jmp     short loc_8BCC19
0x8BCC12: mov     dword ptr [esi+4], 0
0x8BCC19: test    edi, edi
0x8BCC1B: jz      short loc_8BCC3A
0x8BCC1D: mov     eax, [edi-4]
0x8BCC20: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8BCC25: lea     esi, [edi-4]
0x8BCC28: push    eax; int
0x8BCC29: push    4; unsigned int
0x8BCC2B: push    edi; void *
0x8BCC2C: call    $LN21
0x8BCC31: push    esi
0x8BCC32: call    FormHeapFree
0x8BCC37: add     esp, 4
0x8BCC3A: mov     ecx, [esp+24h+var_C]
0x8BCC3E: mov     large fs:0, ecx
0x8BCC45: pop     ecx
0x8BCC46: pop     edi
0x8BCC47: pop     esi
0x8BCC48: pop     ebp
0x8BCC49: pop     ebx
0x8BCC4A: add     esp, 10h
0x8BCC4D: retn    4
