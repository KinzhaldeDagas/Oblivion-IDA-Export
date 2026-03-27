0x90B8B0: mov     ecx, ds:0BA7D98h
0x90B8B6: mov     eax, [ecx]
0x90B8B8: push    esi
0x90B8B9: push    1Ch
0x90B8BB: push    14h
0x90B8BD: call    dword ptr [eax+10h]
0x90B8C0: mov     ecx, [esp+4+arg_C]
0x90B8C4: mov     edx, [esp+4+arg_8]
0x90B8C8: push    ecx
0x90B8C9: mov     ecx, [esp+8+arg_4]
0x90B8CD: mov     esi, eax
0x90B8CF: mov     eax, [esp+8+arg_0]
0x90B8D3: push    edx
0x90B8D4: push    eax
0x90B8D5: push    ecx
0x90B8D6: mov     ecx, esi
0x90B8D8: mov     word ptr [esi+4], 14h
0x90B8DE: call    sub_90A8B0
0x90B8E3: mov     dword ptr [esi], offset off_A9BFD8
0x90B8E9: mov     eax, esi
0x90B8EB: pop     esi
0x90B8EC: retn
