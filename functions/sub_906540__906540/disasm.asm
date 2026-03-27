0x906540: push    ecx
0x906541: mov     eax, [ecx+10h]
0x906544: push    esi
0x906545: mov     esi, [ecx+0Ch]
0x906548: lea     eax, [eax+eax*2]
0x90654B: mov     ecx, esi
0x90654D: lea     eax, [ecx+eax*4]
0x906550: cmp     esi, eax
0x906552: mov     [esp+8+var_4], eax
0x906556: jz      short loc_906584
0x906558: push    ebx
0x906559: mov     ebx, [esp+0Ch+arg_4]
0x90655D: push    ebp
0x90655E: mov     ebp, [esp+10h+arg_0]
0x906562: push    edi
0x906563: mov     edi, [esp+14h+arg_8]
0x906567: mov     ecx, [esi+8]
0x90656A: test    ecx, ecx
0x90656C: jz      short loc_90657A
0x90656E: mov     edx, [ecx]
0x906570: push    edi
0x906571: push    ebx
0x906572: push    ebp
0x906573: call    dword ptr [edx+24h]
0x906576: mov     eax, [esp+14h+var_4]
0x90657A: add     esi, 0Ch
0x90657D: cmp     esi, eax
0x90657F: jnz     short loc_906567
0x906581: pop     edi
0x906582: pop     ebp
0x906583: pop     ebx
0x906584: pop     esi
0x906585: pop     ecx
0x906586: retn    0Ch
