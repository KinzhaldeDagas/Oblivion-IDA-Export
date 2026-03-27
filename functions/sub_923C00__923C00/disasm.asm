0x923C00: push    esi
0x923C01: mov     esi, [esp+4+arg_0]
0x923C05: mov     eax, [esi+1Ch]
0x923C08: cmp     eax, [esi+4Ch]
0x923C0B: jnb     short loc_923C20
0x923C0D: lea     ecx, [ecx+0]
0x923C10: mov     dword ptr [eax], 0
0x923C16: mov     ecx, [esi+4Ch]
0x923C19: add     eax, 4
0x923C1C: cmp     eax, ecx
0x923C1E: jb      short loc_923C10
0x923C20: mov     eax, [esp+4+arg_4]
0x923C24: test    eax, eax
0x923C26: jnz     short loc_923C34
0x923C28: mov     eax, [esi+24h]
0x923C2B: mov     ecx, [esi+34h]
0x923C2E: mov     [esi+30h], eax
0x923C31: mov     [esi+40h], ecx
0x923C34: mov     eax, [esi+30h]
0x923C37: cmp     eax, [esi+2Ch]
0x923C3A: jz      short loc_923C51
0x923C3C: mov     edx, [esi+1Ch]
0x923C3F: mov     ecx, [esi+0Ch]
0x923C42: push    edx
0x923C43: mov     edx, [esi+4]
0x923C46: push    ecx
0x923C47: push    eax
0x923C48: push    edx
0x923C49: call    sub_9202A0
0x923C4E: add     esp, 10h
0x923C51: mov     eax, [esi+40h]
0x923C54: cmp     eax, [esi+3Ch]
0x923C57: jz      short loc_923C6E
0x923C59: mov     ecx, [esi+1Ch]
0x923C5C: mov     edx, [esi+0Ch]
0x923C5F: push    ecx
0x923C60: push    edx
0x923C61: push    eax
0x923C62: mov     eax, [esi+4]
0x923C65: push    eax
0x923C66: call    sub_9202A0
0x923C6B: add     esp, 10h
0x923C6E: mov     ecx, [esi+2Ch]
0x923C71: mov     edx, [esi+3Ch]
0x923C74: mov     [esi+30h], ecx
0x923C77: mov     [esi+40h], edx
0x923C7A: pop     esi
0x923C7B: retn
