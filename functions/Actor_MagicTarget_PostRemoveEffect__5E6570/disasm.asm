0x5E6570: mov     eax, [esp+arg_0]
0x5E6574: test    eax, eax
0x5E6576: push    esi
0x5E6577: mov     esi, ecx
0x5E6579: jz      short loc_5E65A7
0x5E657B: cmp     dword ptr [esi-10h], 0
0x5E657F: jz      short loc_5E65A7
0x5E6581: mov     eax, [eax+0Ch]
0x5E6584: mov     ecx, [eax+1Ch]
0x5E6587: mov     eax, [ecx+98h]
0x5E658D: push    eax
0x5E658E: call    Magic_GetShieldType
0x5E6593: add     esp, 4
0x5E6596: test    eax, eax
0x5E6598: jz      short loc_5E65A7
0x5E659A: mov     ecx, [esi-10h]
0x5E659D: mov     edx, [ecx]
0x5E659F: mov     eax, [edx+450h]
0x5E65A5: call    eax
0x5E65A7: pop     esi
0x5E65A8: retn    4
