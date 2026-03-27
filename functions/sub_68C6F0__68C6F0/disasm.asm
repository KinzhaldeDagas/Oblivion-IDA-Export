0x68C6F0: push    edi
0x68C6F1: mov     edi, ecx
0x68C6F3: mov     eax, [edi]
0x68C6F5: push    eax
0x68C6F6: call    sub_68C0F0
0x68C6FB: mov     eax, [esp+4+arg_0]
0x68C6FF: test    eax, eax
0x68C701: jz      short loc_68C72D
0x68C703: push    esi
0x68C704: mov     esi, [eax]
0x68C706: test    esi, esi
0x68C708: jz      short loc_68C72C
0x68C70A: lea     ebx, [ebx+0]
0x68C710: mov     ecx, esi
0x68C712: call    sub_6899C0
0x68C717: push    eax
0x68C718: mov     ecx, edi
0x68C71A: call    sub_68BED0
0x68C71F: mov     ecx, esi
0x68C721: call    NiDX92DBufferData__GetSurfaceData
0x68C726: mov     esi, eax
0x68C728: test    esi, esi
0x68C72A: jnz     short loc_68C710
0x68C72C: pop     esi
0x68C72D: pop     edi
0x68C72E: retn    4
