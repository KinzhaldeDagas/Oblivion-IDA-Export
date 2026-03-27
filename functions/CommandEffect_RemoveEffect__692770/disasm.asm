0x692770: push    esi
0x692771: push    edi
0x692772: mov     edi, ecx
0x692774: mov     ecx, [edi+20h]; this
0x692777: test    ecx, ecx
0x692779: jz      short loc_692784
0x69277B: call    MagicTarget_GetParentActor
0x692780: mov     esi, eax
0x692782: jmp     short loc_692786
0x692784: xor     esi, esi
0x692786: mov     ecx, [edi+24h]; this
0x692789: test    ecx, ecx
0x69278B: jz      short loc_692796
0x69278D: call    MagicCaster_GetParentActor
0x692792: mov     edi, eax
0x692794: jmp     short loc_692798
0x692796: xor     edi, edi
0x692798: test    esi, esi
0x69279A: jz      short loc_6927DC
0x69279C: test    edi, edi
0x69279E: jz      short loc_6927DC
0x6927A0: mov     ecx, [esi+58h]
0x6927A3: test    ecx, ecx
0x6927A5: jz      short loc_6927B3
0x6927A7: mov     eax, [ecx]
0x6927A9: mov     edx, [eax+3CCh]
0x6927AF: push    0
0x6927B1: call    edx
0x6927B3: mov     eax, [esi]
0x6927B5: fld     dword ptr ds:0A40360h
0x6927BB: mov     edx, [eax+374h]
0x6927C1: push    ecx
0x6927C2: fstp    [esp+0Ch+var_C]
0x6927C5: push    edi
0x6927C6: mov     ecx, esi
0x6927C8: call    edx
0x6927CA: mov     eax, [esi]
0x6927CC: mov     edx, [eax+298h]
0x6927D2: push    0
0x6927D4: push    0FFFFFF9Ch
0x6927D6: push    22h ; '"'
0x6927D8: mov     ecx, esi
0x6927DA: call    edx
0x6927DC: pop     edi
0x6927DD: pop     esi
0x6927DE: retn
