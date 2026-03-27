0x502750: push    ecx
0x502751: mov     ecx, [esp+4+l]
0x502755: mov     edx, [esp+4+arg_10]
0x502759: push    esi
0x50275A: mov     esi, [esp+8+a4]
0x50275E: lea     eax, [esp+8+var_4]
0x502762: push    eax; UInt16
0x502763: mov     eax, [esp+0Ch+arg_C]
0x502767: push    ecx; l
0x502768: mov     ecx, [esp+10h+a3]
0x50276C: push    edx; a6
0x50276D: mov     edx, [esp+14h+arg_4]
0x502771: push    eax; a5
0x502772: mov     eax, [esp+18h+a1]
0x502776: push    esi; a4
0x502777: push    ecx; a3
0x502778: push    edx; a2
0x502779: push    eax; a1
0x50277A: mov     dword ptr [esp+28h+var_4], 0
0x502782: call    Script_ExtractArgs
0x502787: add     esp, 20h
0x50278A: test    al, al
0x50278C: jnz     short loc_502791
0x50278E: pop     esi
0x50278F: pop     ecx
0x502790: retn
0x502791: mov     ecx, [esp+8+arg_18]
0x502795: mov     edx, dword ptr [esp+8+var_4]
0x502799: push    ecx
0x50279A: push    0
0x50279C: push    edx
0x50279D: push    esi
0x50279E: call    sub_4F6350
0x5027A3: add     esp, 10h
0x5027A6: pop     esi
0x5027A7: pop     ecx
0x5027A8: retn
