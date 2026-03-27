0x6AA170: push    esi
0x6AA171: mov     esi, ecx
0x6AA173: test    byte ptr [esi+0DCh], 1
0x6AA17A: jz      short loc_6AA19E
0x6AA17C: call    sub_6A8DB0
0x6AA181: mov     eax, [esi+74h]
0x6AA184: mov     ecx, [eax]
0x6AA186: mov     edx, [ecx+8]
0x6AA189: push    eax
0x6AA18A: call    edx
0x6AA18C: mov     eax, [esi+70h]
0x6AA18F: mov     ecx, [eax]
0x6AA191: mov     edx, [ecx+8]
0x6AA194: push    eax
0x6AA195: call    edx
0x6AA197: and     dword ptr [esi+0DCh], 0FFFFFFFEh
0x6AA19E: pop     esi
0x6AA19F: retn
