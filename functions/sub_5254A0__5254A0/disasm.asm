0x5254A0: mov     eax, [esp+arg_4]
0x5254A4: mov     edx, [esp+Src]
0x5254A8: sub     eax, edx
0x5254AA: sar     eax, 2
0x5254AD: push    esi; MaxCount
0x5254AE: mov     esi, [esp+4+arg_8]
0x5254B2: lea     ecx, ds:0[eax*4]
0x5254B9: sub     esi, ecx
0x5254BB: test    eax, eax
0x5254BD: jle     short loc_5254CB
0x5254BF: push    ecx; Src
0x5254C0: push    edx; Src
0x5254C1: push    ecx; DstSize
0x5254C2: push    esi; Dst
0x5254C3: call    _memmove_s
0x5254C8: add     esp, 10h
0x5254CB: mov     eax, esi
0x5254CD: pop     esi
0x5254CE: retn
