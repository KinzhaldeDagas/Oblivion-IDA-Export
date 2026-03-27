0x8BC030: mov     edx, [esp+arg_0]
0x8BC034: push    esi
0x8BC035: mov     esi, ecx
0x8BC037: mov     ecx, [esp+4+arg_4]
0x8BC03B: mov     word ptr [esi+6], 1
0x8BC041: mov     dword ptr [esi], offset off_A98330
0x8BC047: mov     [esi+8], edx
0x8BC04A: mov     eax, [edx+4]
0x8BC04D: mov     [esi+0Ch], eax
0x8BC050: mov     [esi+10h], ecx
0x8BC053: mov     eax, [edx+4]
0x8BC056: mov     ecx, [edx+8]
0x8BC059: inc     eax
0x8BC05A: and     ecx, 3FFFFFFFh
0x8BC060: cmp     ecx, eax
0x8BC062: jge     short loc_8BC078
0x8BC064: add     ecx, ecx
0x8BC066: cmp     eax, ecx
0x8BC068: jge     short loc_8BC06C
0x8BC06A: mov     eax, ecx
0x8BC06C: push    1
0x8BC06E: push    eax
0x8BC06F: push    edx
0x8BC070: call    sub_8A6E40
0x8BC075: add     esp, 0Ch
0x8BC078: mov     eax, [esi+8]
0x8BC07B: mov     edx, [eax+4]
0x8BC07E: mov     eax, [eax]
0x8BC080: mov     byte ptr [edx+eax], 0
0x8BC084: mov     eax, esi
0x8BC086: pop     esi
0x8BC087: retn    8
