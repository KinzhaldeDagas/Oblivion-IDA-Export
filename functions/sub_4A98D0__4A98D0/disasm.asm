0x4A98D0: cmp     ecx, offset dword_B35788
0x4A98D6: fld     [esp+arg_4]
0x4A98DA: jz      short loc_4A9910
0x4A98DC: fld     st
0x4A98DE: fld     [esp+arg_8]
0x4A98E2: fld     st
0x4A98E4: fucomp  st(2)
0x4A98E6: fnstsw  ax
0x4A98E8: fstp    st(1)
0x4A98EA: test    ah, 44h
0x4A98ED: jnp     short loc_4A990E
0x4A98EF: mov     eax, [esp+arg_0]
0x4A98F3: sub     esp, 10h
0x4A98F6: fstp    [esp+10h+var_8]
0x4A98FA: fstp    [esp+10h+var_10]
0x4A98FD: push    offset a_2f_2f; "%.2f(%.2f)"
0x4A9902: push    eax
0x4A9903: call    __sprintf
0x4A9908: add     esp, 18h
0x4A990B: retn    0Ch
0x4A990E: fstp    st
0x4A9910: mov     ecx, [esp+arg_0]
0x4A9914: sub     esp, 8
0x4A9917: fstp    [esp+8+var_8]
0x4A991A: push    offset a_2f; "%.2f"
0x4A991F: push    ecx
0x4A9920: call    __sprintf
0x4A9925: add     esp, 10h
0x4A9928: retn    0Ch
