0x41F9F0: push    0Fh; a2
0x41F9F2: call    BaseExtraList_GetExtraData
0x41F9F7: test    eax, eax
0x41F9F9: mov     ecx, [esp+arg_0]
0x41F9FD: mov     edx, [esp+arg_4]
0x41FA01: mov     dword ptr [ecx], 0
0x41FA07: mov     dword ptr [edx], 0
0x41FA0D: jnz     short loc_41FA12
0x41FA0F: retn    8
0x41FA12: push    esi
0x41FA13: mov     esi, [eax+10h]
0x41FA16: mov     [ecx], esi
0x41FA18: lea     ecx, [eax+14h]
0x41FA1B: mov     [edx], ecx
0x41FA1D: mov     eax, [eax+0Ch]
0x41FA20: pop     esi
0x41FA21: retn    8
