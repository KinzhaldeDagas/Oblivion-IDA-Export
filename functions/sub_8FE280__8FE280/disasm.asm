0x8FE280: push    esi
0x8FE281: mov     esi, [esp+4+arg_4]
0x8FE285: push    edi
0x8FE286: mov     edi, [esp+8+arg_0]
0x8FE28A: mov     dword ptr [esi+4], 0
0x8FE291: mov     eax, [edi]
0x8FE293: mov     ecx, [eax]
0x8FE295: mov     edx, [ecx]
0x8FE297: call    dword ptr [edx+8]
0x8FE29A: cmp     eax, 5
0x8FE29D: jnz     short loc_8FE2A3
0x8FE29F: or      dword ptr [esi+4], 1
0x8FE2A3: mov     eax, [edi+4]
0x8FE2A6: mov     ecx, [eax]
0x8FE2A8: mov     edx, [ecx]
0x8FE2AA: call    dword ptr [edx+8]
0x8FE2AD: cmp     eax, 5
0x8FE2B0: jnz     short loc_8FE2B6
0x8FE2B2: or      dword ptr [esi+4], 2
0x8FE2B6: mov     eax, [esp+8+arg_8]
0x8FE2BA: push    eax
0x8FE2BB: push    esi
0x8FE2BC: push    edi
0x8FE2BD: call    sub_8FF120
0x8FE2C2: add     esp, 0Ch
0x8FE2C5: pop     edi
0x8FE2C6: pop     esi
0x8FE2C7: retn
