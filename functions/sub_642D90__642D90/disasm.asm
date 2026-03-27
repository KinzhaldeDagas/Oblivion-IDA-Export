0x642D90: push    ebp
0x642D91: push    esi
0x642D92: mov     esi, [esp+8+arg_0]
0x642D96: test    byte ptr [esi+0Ch], 2
0x642D9A: mov     ebp, ecx
0x642D9C: jz      short loc_642DA5
0x642D9E: pop     esi
0x642D9F: xor     al, al
0x642DA1: pop     ebp
0x642DA2: retn    10h
0x642DA5: push    ebx
0x642DA6: mov     ebx, ds:0A28150h
0x642DAC: push    edi
0x642DAD: lea     ecx, [ecx+0]
0x642DB0: test    byte ptr [esi+0Ch], 1
0x642DB4: mov     edi, [ebp+14h]
0x642DB7: jnz     short loc_642DE5
0x642DB9: mov     eax, [edi+4]
0x642DBC: push    eax; dwTlsIndex
0x642DBD: call    ebx ; TlsGetValue
0x642DBF: test    eax, eax
0x642DC1: jnz     short loc_642DCB
0x642DC3: push    ebp; a2
0x642DC4: mov     ecx, edi; this
0x642DC6: call    ThreadSpecificInterfaceManager_AddInterface
0x642DCB: mov     ecx, [esp+10h+arg_8]
0x642DCF: push    ecx
0x642DD0: mov     ecx, [esi+4]
0x642DD3: lea     edx, [esi+8]
0x642DD6: push    edx
0x642DD7: push    ecx
0x642DD8: mov     ecx, eax
0x642DDA: call    sub_435D50
0x642DDF: or      byte ptr [esi+0Ch], 1
0x642DE3: jmp     short loc_642E0B
0x642DE5: mov     edx, [edi+4]
0x642DE8: push    edx; dwTlsIndex
0x642DE9: call    ebx ; TlsGetValue
0x642DEB: test    eax, eax
0x642DED: jnz     short loc_642DF7
0x642DEF: push    ebp; a2
0x642DF0: mov     ecx, edi; this
0x642DF2: call    ThreadSpecificInterfaceManager_AddInterface
0x642DF7: mov     ecx, [esp+10h+arg_8]
0x642DFB: push    ecx; int
0x642DFC: mov     ecx, [esi+4]
0x642DFF: lea     edx, [esi+8]
0x642E02: push    edx; int
0x642E03: push    ecx; Comperand
0x642E04: mov     ecx, eax
0x642E06: call    sub_642BF0
0x642E0B: test    al, al
0x642E0D: jnz     short loc_642E32
0x642E0F: add     dword ptr [esi+4], 1
0x642E13: mov     ecx, [esi+4]
0x642E16: cmp     ecx, [ebp+8]
0x642E19: jnb     short loc_642E27
0x642E1B: cmp     [esp+10h+arg_C], al
0x642E1F: jz      short loc_642E3B
0x642E21: and     byte ptr [esi+0Ch], 0FEh
0x642E25: jmp     short loc_642DB0
0x642E27: or      byte ptr [esi+0Ch], 2
0x642E2B: pop     edi
0x642E2C: pop     ebx
0x642E2D: pop     esi
0x642E2E: pop     ebp
0x642E2F: retn    10h
0x642E32: mov     edx, [esi+8]
0x642E35: mov     ecx, [esp+10h+arg_4]
0x642E39: mov     [ecx], edx
0x642E3B: pop     edi
0x642E3C: pop     ebx
0x642E3D: pop     esi
0x642E3E: pop     ebp
0x642E3F: retn    10h
