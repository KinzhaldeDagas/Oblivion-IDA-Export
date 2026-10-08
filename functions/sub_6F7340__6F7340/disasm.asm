0x6F7340: push    ecx
0x6F7341: push    ebp
0x6F7342: mov     ebp, [esp+8+arg_4]
0x6F7346: push    esi
0x6F7347: xor     esi, esi
0x6F7349: test    ebp, ebp
0x6F734B: push    edi
0x6F734C: mov     edi, ecx
0x6F734E: mov     [esp+10h+var_4], esi
0x6F7352: jle     short loc_6F73C9
0x6F7354: push    ebx
0x6F7355: mov     ebx, [esp+14h+arg_0]
0x6F7359: lea     esp, [esp+0]
0x6F7360: mov     ecx, edi
0x6F7362: call    sub_6F6F20
0x6F7367: test    eax, eax
0x6F7369: jle     short loc_6F739C
0x6F736B: cmp     ebp, eax
0x6F736D: mov     esi, eax
0x6F7373: push    esi
0x6F7374: push    ebx
0x6F7375: push    eax
0x6F73C9: pop     edi
0x6F73CA: mov     eax, esi
0x6F73CC: pop     esi
0x6F73CD: pop     ebp
0x6F73CE: pop     ecx
0x6F73CF: retn    8
