0x503990: push    ecx
0x503991: mov     ecx, [esp+4+l]
0x503995: mov     edx, [esp+4+arg_10]
0x503999: push    esi
0x50399A: mov     esi, [esp+8+a4]
0x50399E: lea     eax, [esp+8+var_4]
0x5039A2: push    eax; UInt16
0x5039A3: mov     eax, [esp+0Ch+arg_C]
0x5039A7: push    ecx; l
0x5039A8: mov     ecx, [esp+10h+a3]
0x5039AC: push    edx; a6
0x5039AD: mov     edx, [esp+14h+arg_4]
0x5039B1: push    eax; a5
0x5039B2: mov     eax, [esp+18h+a1]
0x5039B6: push    esi; a4
0x5039B7: push    ecx; a3
0x5039B8: push    edx; a2
0x5039B9: push    eax; a1
0x5039BA: mov     dword ptr [esp+28h+var_4], 0
0x5039C2: call    Script_ExtractArgs
0x5039C7: add     esp, 20h
0x5039CA: test    al, al
0x5039CC: jnz     short loc_5039D1
0x5039CE: pop     esi
0x5039CF: pop     ecx
0x5039D0: retn
0x5039D1: mov     ecx, [esp+8+arg_18]
0x5039D5: mov     edx, dword ptr [esp+8+var_4]
0x5039D9: push    ecx
0x5039DA: push    0
0x5039DC: push    edx
0x5039DD: push    esi
0x5039DE: call    sub_4F4E20
0x5039E3: add     esp, 10h
0x5039E6: pop     esi
0x5039E7: pop     ecx
0x5039E8: retn
