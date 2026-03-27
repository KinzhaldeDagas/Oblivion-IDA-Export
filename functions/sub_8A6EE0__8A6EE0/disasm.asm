0x8A6EE0: push    ebx
0x8A6EE1: push    ebp
0x8A6EE2: push    esi
0x8A6EE3: mov     esi, [esp+0Ch+arg_0]
0x8A6EE7: mov     eax, [esi+4]
0x8A6EEA: test    eax, eax
0x8A6EEC: push    edi
0x8A6EED: lea     ebp, [eax+eax]
0x8A6EF0: jnz     short loc_8A6EF7
0x8A6EF2: mov     ebp, 1
0x8A6EF7: mov     ecx, large fs:2Ch
0x8A6EFE: mov     eax, ds:0BA9DE4h
0x8A6F03: mov     eax, [ecx+eax*4]
0x8A6F06: mov     ecx, [eax+19Ch]
0x8A6F0C: test    ecx, ecx
0x8A6F0E: mov     [esp+10h+arg_0], eax
0x8A6F12: jnz     short loc_8A6F1A
0x8A6F14: mov     ecx, ds:0BA7D9Ch
0x8A6F1A: mov     edi, [esp+10h+arg_4]
0x8A6F1E: mov     edx, ebp
0x8A6F20: imul    edx, edi
0x8A6F23: push    14h
0x8A6F25: push    edx
0x8A6F26: call    sub_8A7560
0x8A6F2B: mov     ecx, [esi]
0x8A6F2D: mov     ebx, eax
0x8A6F2F: mov     eax, [esi+4]
0x8A6F32: imul    eax, edi
0x8A6F35: push    eax
0x8A6F36: push    ecx
0x8A6F37: push    ebx
0x8A6F38: call    sub_8B1890
0x8A6F3D: mov     eax, [esi+8]
0x8A6F40: add     esp, 0Ch
0x8A6F43: test    eax, eax
0x8A6F45: js      short loc_8A6F6E
0x8A6F47: mov     edx, [esp+10h+arg_0]
0x8A6F4B: mov     ecx, [edx+19Ch]
0x8A6F51: test    ecx, ecx
0x8A6F53: jnz     short loc_8A6F5B
0x8A6F55: mov     ecx, ds:0BA7D9Ch
0x8A6F5B: and     eax, 3FFFFFFFh
0x8A6F60: imul    eax, edi
0x8A6F63: push    14h
0x8A6F65: push    eax
0x8A6F66: mov     eax, [esi]
0x8A6F68: push    eax
0x8A6F69: call    sub_8A75D0
0x8A6F6E: mov     ecx, [esi+8]
0x8A6F71: and     ecx, 40000000h
0x8A6F77: or      ecx, ebp
0x8A6F79: pop     edi
0x8A6F7A: mov     [esi], ebx
0x8A6F7C: mov     [esi+8], ecx
0x8A6F7F: pop     esi
0x8A6F80: pop     ebp
0x8A6F81: pop     ebx
0x8A6F82: retn
