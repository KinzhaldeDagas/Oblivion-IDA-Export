0x8B1600: sub     esp, 204h
0x8B1606: mov     eax, ds:0B30AACh
0x8B160B: push    ebx
0x8B160C: mov     ebx, [esp+208h+arg_0]
0x8B1613: test    ebx, ebx
0x8B1615: push    esi
0x8B1616: push    edi
0x8B1617: mov     [esp+210h+var_4], eax
0x8B161E: mov     edi, ecx
0x8B1620: mov     esi, ebx
0x8B1622: jz      short loc_8B1654
0x8B1624: jmp     short loc_8B1630
0x8B1626: align 10h
0x8B1630: cmp     esi, 200h
0x8B1636: mov     eax, 200h
0x8B163B: jg      short loc_8B163F
0x8B163D: mov     eax, esi
0x8B163F: mov     edx, [edi]
0x8B1641: push    eax
0x8B1642: lea     eax, [esp+214h+var_204]
0x8B1646: push    eax
0x8B1647: mov     ecx, edi
0x8B1649: call    dword ptr [edx+0Ch]
0x8B164C: test    eax, eax
0x8B164E: jz      short loc_8B1654
0x8B1650: sub     esi, eax
0x8B1652: jnz     short loc_8B1630
0x8B1654: mov     ecx, [esp+210h+var_4]
0x8B165B: mov     eax, ebx
0x8B165D: pop     edi
0x8B165E: sub     eax, esi
0x8B1660: pop     esi
0x8B1661: pop     ebx
0x8B1662: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B1667: add     esp, 204h
0x8B166D: retn    4
