0x7C9110: push    esi
0x7C9111: push    edi
0x7C9112: mov     edi, [esp+8+arg_C]
0x7C9116: mov     edx, [edi+1Ch]
0x7C9119: mov     esi, ecx
0x7C911B: mov     ecx, [esi+18h]
0x7C911E: mov     eax, [ecx]
0x7C9120: mov     eax, [eax+20h]
0x7C9123: push    edx
0x7C9124: call    eax
0x7C9126: mov     ecx, [esi+18h]
0x7C9129: mov     edx, [ecx]
0x7C912B: mov     eax, [edi+28h]
0x7C912E: mov     edx, [edx+24h]
0x7C9131: push    eax
0x7C9132: call    edx
0x7C9134: pop     edi
0x7C9135: xor     eax, eax
0x7C9137: pop     esi
0x7C9138: retn    1Ch
