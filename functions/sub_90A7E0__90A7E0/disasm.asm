0x90A7E0: push    esi
0x90A7E1: push    edi
0x90A7E2: mov     edi, [esp+8+arg_0]
0x90A7E6: mov     esi, ecx
0x90A7E8: mov     ecx, [esi+0Ch]
0x90A7EB: mov     eax, [ecx]
0x90A7ED: push    edi
0x90A7EE: call    dword ptr [eax+20h]
0x90A7F1: mov     eax, [esi+10h]
0x90A7F4: test    eax, eax
0x90A7F6: jz      short loc_90A800
0x90A7F8: mov     ecx, eax
0x90A7FA: mov     edx, [ecx]
0x90A7FC: push    edi
0x90A7FD: call    dword ptr [edx+20h]
0x90A800: pop     edi
0x90A801: pop     esi
0x90A802: retn    4
