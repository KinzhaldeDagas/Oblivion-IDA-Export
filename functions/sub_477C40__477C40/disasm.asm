0x477C40: push    ecx
0x477C41: mov     eax, [esp+4+arg_0]
0x477C45: test    eax, eax
0x477C47: push    ebp
0x477C48: mov     ebp, ecx
0x477C4A: mov     [ebp+8], eax
0x477C4D: jz      loc_477DA3
0x477C53: push    ebx
0x477C54: push    esi
0x477C55: push    edi
0x477C56: lea     edi, [ebp+1Ch]
0x477C59: mov     [esp+14h+var_4], 2
0x477C61: cmp     dword ptr [edi-8], 0
0x477C65: jz      short loc_477CE3
0x477C67: mov     edx, [ebp+28h]
0x477C6A: test    edx, edx
0x477C6C: jz      short loc_477CE3
0x477C6E: mov     eax, [edi-8]
0x477C71: lea     ecx, [eax+18h]
0x477C74: mov     eax, [ecx]
0x477C76: push    0
0x477C78: push    edx
0x477C79: mov     edx, [eax+14h]
0x477C7C: push    0FFFFFFFFh
0x477C7E: call    edx
0x477C80: push    eax
0x477C81: call    sub_479450
0x477C86: mov     esi, [edi]
0x477C88: mov     ebx, eax
0x477C8A: add     esp, 10h
0x477C8D: cmp     esi, ebx
0x477C8F: jz      short loc_477CC1
0x477C91: test    esi, esi
0x477C93: jz      short loc_477CB1
0x477C95: lea     eax, [esi+4]
0x477C98: push    eax; lpAddend
0x477C99: call    dword ptr ds:0A2807Ch
0x477C9F: test    eax, eax
0x477CA1: jnz     short loc_477CB1
0x477CA3: test    esi, esi
0x477CA5: jz      short loc_477CB1
0x477CA7: mov     edx, [esi]
0x477CA9: mov     eax, [edx]
0x477CAB: push    1
0x477CAD: mov     ecx, esi
0x477CAF: call    eax
0x477CB1: test    ebx, ebx
0x477CB3: mov     [edi], ebx
0x477CB5: jz      short loc_477CC1
0x477CB7: add     ebx, 4
0x477CBA: push    ebx; lpAddend
0x477CBB: call    dword ptr ds:0A28078h
0x477CC1: mov     ecx, [ebp+28h]
0x477CC4: mov     edx, [ecx]
0x477CC6: mov     eax, [edx+164h]
0x477CCC: call    eax
0x477CCE: mov     ecx, [eax+98h]
0x477CD4: mov     edx, [ecx+7Ch]
0x477CD7: mov     eax, [edi]
0x477CD9: push    edx
0x477CDA: push    eax
0x477CDB: call    sub_7165B0
0x477CE0: add     esp, 8
0x477CE3: add     edi, 4
0x477CE6: sub     [esp+14h+var_4], 1
0x477CEB: jnz     loc_477C61
0x477CF1: mov     ecx, [esp+14h+arg_0]
0x477CF5: add     ecx, 0Ch
0x477CF8: push    ecx; lpAddend
0x477CF9: call    dword ptr ds:0A28078h
0x477CFF: mov     ecx, [ebp+28h]
0x477D02: test    ecx, ecx
0x477D04: mov     dword ptr [ebp+0], 1
0x477D0B: jz      short loc_477D49
0x477D0D: mov     eax, [ebp+4]
0x477D10: cmp     eax, 2
0x477D13: jz      short loc_477D1A
0x477D15: cmp     eax, 3
0x477D18: jnz     short loc_477D64
0x477D1A: mov     edx, [ecx]
0x477D1C: mov     eax, [edx+164h]
0x477D22: call    eax
0x477D24: mov     esi, eax
0x477D26: test    esi, esi
0x477D28: jz      short loc_477D7C
0x477D2A: mov     ecx, esi; this
0x477D2C: call    sub_476380
0x477D31: test    al, al
0x477D33: jz      short loc_477D51
0x477D35: cmp     dword ptr [ebp+4], 3
0x477D39: jnz     short loc_477D49
0x477D3B: mov     ecx, [ebp+10h]
0x477D3E: push    ecx
0x477D3F: mov     ecx, [ebp+28h]
0x477D42: push    0Bh
0x477D44: call    HighPRocess_DoAction?????
0x477D49: pop     edi
0x477D4A: pop     esi
0x477D4B: pop     ebx
0x477D4C: pop     ebp
0x477D4D: pop     ecx
0x477D4E: retn    4
0x477D51: push    0
0x477D53: push    1
0x477D55: mov     ecx, esi
0x477D57: call    sub_475440
0x477D5C: pop     edi
0x477D5D: pop     esi
0x477D5E: pop     ebx
0x477D5F: pop     ebp
0x477D60: pop     ecx
0x477D61: retn    4
0x477D64: test    ecx, ecx
0x477D66: jz      short loc_477D49
0x477D68: cmp     dword ptr [ebp+4], 0
0x477D6C: jnz     short loc_477D49
0x477D6E: mov     edx, [ecx]
0x477D70: mov     eax, [edx+164h]
0x477D76: call    eax
0x477D78: test    eax, eax
0x477D7A: jnz     short loc_477D94
0x477D7C: mov     ecx, ebp
0x477D7E: call    sub_4729F0
0x477D83: push    ebp
0x477D84: call    FormHeapFree
0x477D89: add     esp, 4
0x477D8C: pop     edi
0x477D8D: pop     esi
0x477D8E: pop     ebx
0x477D8F: pop     ebp
0x477D90: pop     ecx
0x477D91: retn    4
0x477D94: mov     ecx, eax
0x477D96: call    sub_4753F0
0x477D9B: pop     edi
0x477D9C: pop     esi
0x477D9D: pop     ebx
0x477D9E: pop     ebp
0x477D9F: pop     ecx
0x477DA0: retn    4
0x477DA3: mov     dword ptr [ebp+0], 0
0x477DAA: pop     ebp
0x477DAB: pop     ecx
0x477DAC: retn    4
