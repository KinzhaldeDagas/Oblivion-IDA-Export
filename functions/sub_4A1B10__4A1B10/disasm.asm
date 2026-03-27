0x4A1B10: push    0FFFFFFFFh
0x4A1B12: push    offset SEH_7B2180
0x4A1B17: mov     eax, large fs:0
0x4A1B1D: push    eax
0x4A1B1E: push    ecx
0x4A1B1F: push    ebx
0x4A1B20: push    ebp
0x4A1B21: push    esi
0x4A1B22: push    edi
0x4A1B23: mov     eax, ds:0B30AACh
0x4A1B28: xor     eax, esp
0x4A1B2A: push    eax
0x4A1B2B: lea     eax, [esp+24h+var_C]
0x4A1B2F: mov     large fs:0, eax
0x4A1B35: mov     esi, ecx
0x4A1B37: mov     eax, [esi]
0x4A1B39: mov     ebx, [esp+24h+arg_0]
0x4A1B3D: mov     edx, [eax+4]
0x4A1B40: push    ebx
0x4A1B41: mov     [esp+28h+var_4], 0
0x4A1B49: call    edx
0x4A1B4B: mov     ebp, eax
0x4A1B4D: mov     eax, [esi+8]
0x4A1B50: mov     edi, [eax+ebp*4]
0x4A1B53: test    edi, edi
0x4A1B55: jz      short loc_4A1B73
0x4A1B57: mov     eax, [edi+4]
0x4A1B5A: mov     edx, [esi]
0x4A1B5C: mov     edx, [edx+8]
0x4A1B5F: push    eax
0x4A1B60: push    ebx
0x4A1B61: mov     ecx, esi
0x4A1B63: call    edx
0x4A1B65: test    al, al
0x4A1B67: jnz     loc_4A1BF4
0x4A1B6D: mov     edi, [edi]
0x4A1B6F: test    edi, edi
0x4A1B71: jnz     short loc_4A1B57
0x4A1B73: mov     edx, [esi]
0x4A1B75: mov     eax, [edx+14h]
0x4A1B78: mov     ecx, esi
0x4A1B7A: call    eax
0x4A1B7C: mov     ebx, [esp+20h+arg_8]
0x4A1B80: test    ebx, ebx
0x4A1B82: push    ecx
0x4A1B83: mov     edi, eax
0x4A1B85: mov     eax, esp
0x4A1B87: mov     [esp+24h+var_C], esp
0x4A1B8B: mov     [eax], ebx
0x4A1B8D: jz      short loc_4A1B99
0x4A1B8F: lea     ecx, [ebx+4]
0x4A1B92: push    ecx; lpAddend
0x4A1B93: call    dword ptr ds:0A28078h
0x4A1B99: mov     eax, [esp+24h+arg_4]
0x4A1B9D: mov     edx, [esi]
0x4A1B9F: mov     edx, [edx+0Ch]
0x4A1BA2: push    eax
0x4A1BA3: push    edi
0x4A1BA4: mov     ecx, esi
0x4A1BA6: call    edx
0x4A1BA8: mov     eax, [esi+8]
0x4A1BAB: mov     ecx, [eax+ebp*4]
0x4A1BAE: mov     [edi], ecx
0x4A1BB0: mov     edx, [esi+8]
0x4A1BB3: mov     [edx+ebp*4], edi
0x4A1BB6: add     dword ptr [esi+0Ch], 1
0x4A1BBA: test    ebx, ebx
0x4A1BBC: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A1BC4: jz      short loc_4A1BDE
0x4A1BC6: lea     eax, [ebx+4]
0x4A1BC9: push    eax; lpAddend
0x4A1BCA: call    dword ptr ds:0A2807Ch
0x4A1BD0: test    eax, eax
0x4A1BD2: jnz     short loc_4A1BDE
0x4A1BD4: mov     edx, [ebx]
0x4A1BD6: mov     ecx, ebx
0x4A1BD8: mov     eax, [edx]
0x4A1BDA: push    1
0x4A1BDC: call    eax
0x4A1BDE: mov     ecx, [esp+24h+var_C]
0x4A1BE2: mov     large fs:0, ecx
0x4A1BE9: pop     ecx
0x4A1BEA: pop     edi
0x4A1BEB: pop     esi
0x4A1BEC: pop     ebp
0x4A1BED: pop     ebx
0x4A1BEE: add     esp, 10h
0x4A1BF1: retn    8
0x4A1BF4: cmp     byte ptr [esi+10h], 0
0x4A1BF8: jnz     short loc_4A1BFD
0x4A1BFA: mov     [edi+4], ebx
0x4A1BFD: lea     eax, [esp+24h+arg_4]
0x4A1C01: push    eax
0x4A1C02: lea     ecx, [edi+8]
0x4A1C05: call    sub_55E2A0
0x4A1C0A: mov     esi, [esp+24h+arg_4]
0x4A1C0E: test    esi, esi
0x4A1C10: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A1C18: jz      short loc_4A1BDE
0x4A1C1A: lea     ecx, [esi+4]
0x4A1C1D: push    ecx; lpAddend
0x4A1C1E: call    dword ptr ds:0A2807Ch
0x4A1C24: test    eax, eax
0x4A1C26: jnz     short loc_4A1BDE
0x4A1C28: mov     edx, [esi]
0x4A1C2A: mov     ecx, esi
0x4A1C2C: jmp     short loc_4A1BD8
