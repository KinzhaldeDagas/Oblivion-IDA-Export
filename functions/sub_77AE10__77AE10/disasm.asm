0x77AE10: push    ebx
0x77AE11: mov     ebx, [esp+4+arg_0]
0x77AE15: test    ebx, ebx
0x77AE17: push    ebp
0x77AE18: mov     ebp, ecx
0x77AE1A: jnz     short loc_77AE23
0x77AE1C: pop     ebp
0x77AE1D: xor     al, al
0x77AE1F: pop     ebx
0x77AE20: retn    0Ch
0x77AE23: mov     eax, ds:0B3F928h
0x77AE28: push    esi
0x77AE29: push    edi
0x77AE2A: lea     esi, [eax+180h]
0x77AE30: push    esi; lpCriticalSection
0x77AE31: call    dword ptr ds:0A2806Ch
0x77AE37: call    dword ptr ds:0A2808Ch
0x77AE3D: add     dword ptr [esi+7Ch], 1
0x77AE41: mov     [esi+78h], eax
0x77AE44: mov     edi, [ebx+24h]
0x77AE47: test    edi, edi
0x77AE49: jnz     short loc_77AE6C
0x77AE4B: push    ebx
0x77AE4C: push    offset dword_B3F95C
0x77AE51: call    NiRTTI_Cast
0x77AE56: add     esp, 8
0x77AE59: test    eax, eax
0x77AE5B: jz      short loc_77AEAF
0x77AE5D: mov     ecx, [ebp+0Ch]
0x77AE60: push    ecx
0x77AE61: push    eax
0x77AE62: call    sub_761270
0x77AE67: add     esp, 8
0x77AE6A: mov     edi, eax
0x77AE6C: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x77AE70: jnz     short loc_77AE79
0x77AE72: mov     dword ptr [esi+78h], 0
0x77AE79: push    esi; lpCriticalSection
0x77AE7A: call    dword ptr ds:0A28074h
0x77AE80: mov     edx, [edi]
0x77AE82: mov     eax, [edx+18h]
0x77AE85: mov     ecx, edi
0x77AE87: call    eax
0x77AE89: test    eax, eax
0x77AE8B: jnz     short loc_77AE9A
0x77AE8D: mov     edx, [edi]
0x77AE8F: mov     eax, [edx+20h]
0x77AE92: mov     ecx, edi
0x77AE94: call    eax
0x77AE96: test    eax, eax
0x77AE98: jz      short loc_77AECC
0x77AE9A: mov     edx, [eax]
0x77AE9C: mov     ecx, eax
0x77AE9E: mov     eax, [edx+14h]
0x77AEA1: call    eax
0x77AEA3: pop     edi
0x77AEA4: pop     esi
0x77AEA5: test    eax, eax
0x77AEA7: pop     ebp
0x77AEA8: setnz   al
0x77AEAB: pop     ebx
0x77AEAC: retn    0Ch
0x77AEAF: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x77AEB3: jnz     short loc_77AEBC
0x77AEB5: mov     dword ptr [esi+78h], 0
0x77AEBC: push    esi; lpCriticalSection
0x77AEBD: call    dword ptr ds:0A28074h
0x77AEC3: pop     edi
0x77AEC4: pop     esi
0x77AEC5: pop     ebp
0x77AEC6: xor     al, al
0x77AEC8: pop     ebx
0x77AEC9: retn    0Ch
0x77AECC: pop     edi
0x77AECD: pop     esi
0x77AECE: pop     ebp
0x77AECF: mov     al, 1
0x77AED1: pop     ebx
0x77AED2: retn    0Ch
