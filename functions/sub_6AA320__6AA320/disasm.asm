0x6AA320: push    esi
0x6AA321: mov     esi, ecx
0x6AA323: mov     eax, [esi]
0x6AA325: mov     edx, [eax+4]
0x6AA328: call    edx
0x6AA32A: mov     ecx, [esp+4+arg_0]
0x6AA32E: mov     edx, [ecx]
0x6AA330: mov     [eax+8], edx
0x6AA333: mov     dword ptr [eax+4], 0
0x6AA33A: mov     ecx, [esi+4]
0x6AA33D: mov     [eax], ecx
0x6AA33F: mov     ecx, [esi+4]
0x6AA342: test    ecx, ecx
0x6AA344: jz      short loc_6AA354
0x6AA346: mov     [ecx+4], eax
0x6AA349: add     dword ptr [esi+0Ch], 1
0x6AA34D: mov     [esi+4], eax
0x6AA350: pop     esi
0x6AA351: retn    4
0x6AA354: add     dword ptr [esi+0Ch], 1
0x6AA358: mov     [esi+8], eax
0x6AA35B: mov     [esi+4], eax
0x6AA35E: pop     esi
0x6AA35F: retn    4
