0x8A7A80: push    esi
0x8A7A81: push    edi
0x8A7A82: mov     edi, ecx
0x8A7A84: mov     ecx, [edi+14h]; lpCriticalSection
0x8A7A87: call    sub_8A7720
0x8A7A8C: mov     eax, [edi+10h]
0x8A7A8F: mov     ecx, [edi+0Ch]
0x8A7A92: lea     esi, [edi+8]
0x8A7A95: and     eax, 3FFFFFFFh
0x8A7A9A: cmp     ecx, eax
0x8A7A9C: jnz     short loc_8A7AA9
0x8A7A9E: push    4
0x8A7AA0: push    esi
0x8A7AA1: call    sub_8A6EE0
0x8A7AA6: add     esp, 8
0x8A7AA9: mov     ecx, [esi+4]
0x8A7AAC: mov     edx, [esi]
0x8A7AAE: mov     eax, [esp+8+arg_0]
0x8A7AB2: mov     [edx+ecx*4], eax
0x8A7AB5: inc     dword ptr [esi+4]
0x8A7AB8: mov     ecx, [edi+14h]
0x8A7ABB: pop     edi
0x8A7ABC: pop     esi
0x8A7ABD: mov     [esp+arg_0], ecx
0x8A7AC1: jmp     dword ptr ds:0A28074h
