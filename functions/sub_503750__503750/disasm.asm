0x503750: push    ecx
0x503751: mov     ecx, [esp+4+l]
0x503755: mov     edx, [esp+4+arg_10]
0x503759: push    esi
0x50375A: mov     esi, [esp+8+a4]
0x50375E: lea     eax, [esp+8+var_4]
0x503762: push    eax; UInt16
0x503763: mov     eax, [esp+0Ch+arg_C]
0x503767: push    ecx; l
0x503768: mov     ecx, [esp+10h+a3]
0x50376C: push    edx; a6
0x50376D: mov     edx, [esp+14h+arg_4]
0x503771: push    eax; a5
0x503772: mov     eax, [esp+18h+a1]
0x503776: push    esi; a4
0x503777: push    ecx; a3
0x503778: push    edx; a2
0x503779: push    eax; a1
0x50377A: mov     dword ptr [esp+28h+var_4], 0
0x503782: call    Script_ExtractArgs
0x503787: add     esp, 20h
0x50378A: test    al, al
0x50378C: jnz     short loc_503791
0x50378E: pop     esi
0x50378F: pop     ecx
0x503790: retn
0x503791: mov     ecx, [esp+8+arg_18]
0x503795: mov     edx, dword ptr [esp+8+var_4]
0x503799: push    ecx
0x50379A: push    0
0x50379C: push    edx
0x50379D: push    esi
0x50379E: call    sub_4F7220
0x5037A3: add     esp, 10h
0x5037A6: pop     esi
0x5037A7: pop     ecx
0x5037A8: retn
