0x6F37D0: push    ebx
0x6F37D1: push    ebp
0x6F37D2: mov     ebp, [esp+8+arg_4]
0x6F37D6: test    ebp, ebp
0x6F37D8: push    esi
0x6F37D9: mov     esi, ecx
0x6F37DB: jz      short loc_6F37E3
0x6F37DD: cmp     ebp, [esp+0Ch+arg_C]
0x6F37E1: jz      short loc_6F37E8
0x6F37E3: call    __invalid_parameter_noinfo
0x6F37E8: mov     ebx, [esp+0Ch+arg_8]
0x6F37EC: mov     eax, [esp+0Ch+arg_10]
0x6F37F0: cmp     ebx, eax
0x6F37F2: jz      short loc_6F3819
0x6F37F4: mov     ecx, [esi+8]
0x6F37F7: push    edi
0x6F37F8: push    ebx
0x6F37F9: push    ecx
0x6F37FA: push    eax
0x6F37FB: call    sub_6F3530
0x6F3800: mov     edx, [esp+1Ch+arg_0]
0x6F3804: push    edx
0x6F3805: mov     edi, eax
0x6F3807: mov     eax, [esi+8]
0x6F380A: push    esi
0x6F380B: push    eax
0x6F380C: push    edi
0x6F380D: call    sub_5573D0
0x6F3812: add     esp, 1Ch
0x6F3815: mov     [esi+8], edi
0x6F3818: pop     edi
0x6F3819: mov     eax, [esp+0Ch+arg_0]
0x6F381D: pop     esi
0x6F381E: mov     [eax], ebp
0x6F3820: pop     ebp
0x6F3821: mov     [eax+4], ebx
0x6F3824: pop     ebx
0x6F3825: retn    14h
