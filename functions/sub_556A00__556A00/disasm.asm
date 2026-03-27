0x556A00: push    ebx
0x556A01: push    edi
0x556A02: mov     edi, ecx
0x556A04: cmp     dword ptr [edi+0Ch], 0
0x556A08: jnz     short loc_556A5B
0x556A0A: mov     ebx, [esp+8+a2]
0x556A0E: test    ebx, ebx
0x556A10: jz      short loc_556A5B
0x556A12: push    0Ch; Size
0x556A14: call    FormHeapAlloc
0x556A19: add     esp, 4
0x556A1C: test    eax, eax
0x556A1E: jz      short loc_556A4D
0x556A20: push    0; a3
0x556A22: mov     dword ptr [eax], 0
0x556A28: mov     word ptr [eax+4], 0
0x556A2E: mov     word ptr [eax+6], 0
0x556A34: mov     dword ptr [eax+8], 0
0x556A3B: push    ebx; a2
0x556A3C: mov     ecx, eax; this
0x556A3E: mov     [edi+0Ch], eax
0x556A41: call    BSStringT_Set
0x556A46: pop     edi
0x556A47: mov     al, 1
0x556A49: pop     ebx
0x556A4A: retn    4
0x556A4D: xor     eax, eax
0x556A4F: push    eax; a3
0x556A50: push    ebx; a2
0x556A51: mov     ecx, eax; this
0x556A53: mov     [edi+0Ch], eax
0x556A56: call    BSStringT_Set
0x556A5B: pop     edi
0x556A5C: mov     al, 1
0x556A5E: pop     ebx
0x556A5F: retn    4
