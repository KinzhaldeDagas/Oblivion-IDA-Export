0x43AB80: push    ebp
0x43AB81: push    esi
0x43AB82: mov     esi, [esp+8+arg_0]
0x43AB86: test    byte ptr [esi+0Ch], 2
0x43AB8A: mov     ebp, ecx
0x43AB8C: jz      short loc_43AB95
0x43AB8E: pop     esi
0x43AB8F: xor     al, al
0x43AB91: pop     ebp
0x43AB92: retn    10h
0x43AB95: push    ebx
0x43AB96: mov     ebx, ds:TlsGetValue
0x43AB9C: push    edi
0x43AB9D: lea     ecx, [ecx+0]
0x43ABA0: test    byte ptr [esi+0Ch], 1
0x43ABA4: mov     edi, [ebp+14h]
0x43ABA7: jnz     short loc_43ABD5
0x43ABA9: mov     eax, [edi+4]
0x43ABAC: push    eax; dwTlsIndex
0x43ABAD: call    ebx ; TlsGetValue
0x43ABAF: test    eax, eax
0x43ABB1: jnz     short loc_43ABBB
0x43ABB3: push    ebp; a2
0x43ABB4: mov     ecx, edi; this
0x43ABB6: call    ThreadSpecificInterfaceManager_AddInterface
0x43ABBB: mov     ecx, [esp+10h+arg_8]
0x43ABBF: push    ecx
0x43ABC0: mov     ecx, [esi+4]
0x43ABC3: lea     edx, [esi+8]
0x43ABC6: push    edx
0x43ABC7: push    ecx
0x43ABC8: mov     ecx, eax
0x43ABCA: call    sub_435F10
0x43ABCF: or      byte ptr [esi+0Ch], 1
0x43ABD3: jmp     short loc_43ABFB
0x43ABD5: mov     edx, [edi+4]
0x43ABD8: push    edx; dwTlsIndex
0x43ABD9: call    ebx ; TlsGetValue
0x43ABDB: test    eax, eax
0x43ABDD: jnz     short loc_43ABE7
0x43ABDF: push    ebp; a2
0x43ABE0: mov     ecx, edi; this
0x43ABE2: call    ThreadSpecificInterfaceManager_AddInterface
0x43ABE7: mov     ecx, [esp+10h+arg_8]
0x43ABEB: push    ecx; int
0x43ABEC: mov     ecx, [esi+4]
0x43ABEF: lea     edx, [esi+8]
0x43ABF2: push    edx; int
0x43ABF3: push    ecx; Comperand
0x43ABF4: mov     ecx, eax
0x43ABF6: call    sub_43A4E0
0x43ABFB: test    al, al
0x43ABFD: jnz     short loc_43AC22
0x43ABFF: add     dword ptr [esi+4], 1
0x43AC03: mov     ecx, [esi+4]
0x43AC06: cmp     ecx, [ebp+8]
0x43AC09: jnb     short loc_43AC17
0x43AC0B: cmp     [esp+10h+arg_C], al
0x43AC0F: jz      short loc_43AC2B
0x43AC11: and     byte ptr [esi+0Ch], 0FEh
0x43AC15: jmp     short loc_43ABA0
0x43AC17: or      byte ptr [esi+0Ch], 2
0x43AC1B: pop     edi
0x43AC1C: pop     ebx
0x43AC1D: pop     esi
0x43AC1E: pop     ebp
0x43AC1F: retn    10h
0x43AC22: mov     edx, [esi+8]
0x43AC25: mov     ecx, [esp+10h+arg_4]
0x43AC29: mov     [ecx], edx
0x43AC2B: pop     edi
0x43AC2C: pop     ebx
0x43AC2D: pop     esi
0x43AC2E: pop     ebp
0x43AC2F: retn    10h
