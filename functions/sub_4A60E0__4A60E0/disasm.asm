0x4A60E0: mov     edx, [esp+arg_0]
0x4A60E4: test    edx, edx
0x4A60E6: push    esi
0x4A60E7: mov     esi, ecx
0x4A60E9: jz      short loc_4A6111
0x4A60EB: lea     ecx, [esi+4]
0x4A60EE: mov     eax, ecx
0x4A60F0: test    eax, eax
0x4A60F2: jz      short loc_4A60FF
0x4A60F4: cmp     [eax], edx
0x4A60F6: jz      short loc_4A6111
0x4A60F8: mov     eax, [eax+4]
0x4A60FB: test    eax, eax
0x4A60FD: jnz     short loc_4A60F4
0x4A60FF: push    edx
0x4A6100: call    BSSimpleList_PushBack
0x4A6105: mov     eax, 1
0x4A610A: add     [esi+10h], eax
0x4A610D: pop     esi
0x4A610E: retn    4
0x4A6111: xor     al, al
0x4A6113: pop     esi
0x4A6114: retn    4
