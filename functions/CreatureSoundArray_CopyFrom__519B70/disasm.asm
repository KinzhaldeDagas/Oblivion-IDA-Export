0x519B70: push    ecx
0x519B71: push    ebp
0x519B72: push    esi
0x519B73: push    edi
0x519B74: mov     ebp, ecx
0x519B76: xor     esi, esi
0x519B78: mov     edi, 0Ah
0x519B7D: lea     ecx, [ecx+0]
0x519B80: push    esi
0x519B81: mov     ecx, ebp
0x519B83: call    CreatureSoundArray_ClearNthSound
0x519B88: add     esi, 1
0x519B8B: sub     edi, 1
0x519B8E: jnz     short loc_519B80
0x519B90: mov     eax, [esp+10h+arg_0]
0x519B94: test    eax, eax
0x519B96: jz      short loc_519C03
0x519B98: push    ebx
0x519B99: xor     ebx, ebx
0x519B9B: mov     [esp+14h+arg_0], eax
0x519B9F: mov     [esp+14h+var_4], 0Ah
0x519BA7: xor     esi, esi
0x519BA9: cmp     ebx, 9
0x519BAC: ja      short loc_519BB0
0x519BAE: mov     esi, [eax]
0x519BB0: test    esi, esi
0x519BB2: jz      short loc_519BED
0x519BB4: cmp     dword ptr [esi+4], 0
0x519BB8: jnz     short loc_519BBF
0x519BBA: cmp     dword ptr [esi], 0
0x519BBD: jz      short loc_519BED
0x519BBF: mov     edi, [esi]
0x519BC1: push    8; Size
0x519BC3: call    FormHeapAlloc
0x519BC8: add     esp, 4
0x519BCB: test    eax, eax
0x519BCD: jz      short loc_519BDD
0x519BCF: test    edi, edi
0x519BD1: jz      short loc_519BDD
0x519BD3: mov     ecx, [edi]
0x519BD5: mov     [eax], ecx
0x519BD7: mov     dl, [edi+4]
0x519BDA: mov     [eax+4], dl
0x519BDD: push    ebx
0x519BDE: push    eax
0x519BDF: mov     ecx, ebp
0x519BE1: call    CreatureSoundArray_InsertSoundEntry
0x519BE6: mov     esi, [esi+4]
0x519BE9: test    esi, esi
0x519BEB: jnz     short loc_519BB4
0x519BED: mov     eax, [esp+14h+arg_0]
0x519BF1: add     eax, 4
0x519BF4: add     ebx, 1
0x519BF7: sub     [esp+14h+var_4], 1
0x519BFC: mov     [esp+14h+arg_0], eax
0x519C00: jnz     short loc_519BA7
0x519C02: pop     ebx
0x519C03: pop     edi
0x519C04: pop     esi
0x519C05: pop     ebp
0x519C06: pop     ecx
0x519C07: retn    4
