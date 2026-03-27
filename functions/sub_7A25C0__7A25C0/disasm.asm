0x7A25C0: mov     eax, [esp+arg_4]
0x7A25C4: mov     ecx, [esp+Src]
0x7A25C8: mov     edx, [esp+Dst]
0x7A25CC: sub     eax, ecx
0x7A25CE: sar     eax, 2
0x7A25D1: lea     eax, ds:0[eax*4]
0x7A25D8: push    esi; MaxCount
0x7A25D9: lea     esi, [eax+edx]
0x7A25DC: jz      short loc_7A25EA
0x7A25DE: push    eax; Src
0x7A25DF: push    ecx; Src
0x7A25E0: push    eax; DstSize
0x7A25E1: push    edx; Dst
0x7A25E2: call    _memmove_s
0x7A25E7: add     esp, 10h
0x7A25EA: mov     eax, esi
0x7A25EC: pop     esi
0x7A25ED: retn    0Ch
