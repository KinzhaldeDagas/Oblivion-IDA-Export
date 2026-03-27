0x90F0B0: push    esi
0x90F0B1: mov     esi, ecx
0x90F0B3: mov     eax, [esi+8]
0x90F0B6: test    eax, eax
0x90F0B8: push    edi
0x90F0B9: jnz     short loc_90F0DD
0x90F0BB: mov     ecx, ds:0BA7D98h
0x90F0C1: mov     eax, [ecx]
0x90F0C3: push    12h
0x90F0C5: push    0A0h ; ' '
0x90F0CA: call    dword ptr [eax+10h]
0x90F0CD: mov     ecx, eax
0x90F0CF: mov     word ptr [eax+4], 0A0h ; ' '
0x90F0D5: call    sub_8A9510
0x90F0DA: mov     [esi+8], eax
0x90F0DD: mov     ecx, [esi+8]
0x90F0E0: mov     edi, [esp+8+arg_0]
0x90F0E4: push    ecx
0x90F0E5: mov     ecx, edi
0x90F0E7: call    sub_898DB0
0x90F0EC: mov     ecx, edi
0x90F0EE: call    sub_8991C0
0x90F0F3: mov     edx, [esi+14h]
0x90F0F6: add     esi, 0Ch
0x90F0F9: mov     edi, eax
0x90F0FB: mov     eax, [esi+4]
0x90F0FE: and     edx, 3FFFFFFFh
0x90F104: cmp     eax, edx
0x90F106: jnz     short loc_90F113
0x90F108: push    4
0x90F10A: push    esi
0x90F10B: call    sub_8A6EE0
0x90F110: add     esp, 8
0x90F113: mov     eax, [esi+4]
0x90F116: mov     ecx, [esi]
0x90F118: mov     [ecx+eax*4], edi
0x90F11B: mov     eax, [esi+4]
0x90F11E: inc     eax
0x90F11F: pop     edi
0x90F120: mov     [esi+4], eax
0x90F123: pop     esi
0x90F124: retn    4
