0x54C6B0: sub     esp, 0Ch
0x54C6B3: push    esi
0x54C6B4: mov     esi, ecx
0x54C6B6: cmp     byte ptr [esi+1DAh], 0
0x54C6BD: jz      short loc_54C6C8
0x54C6BF: xor     al, al
0x54C6C1: pop     esi
0x54C6C2: add     esp, 0Ch
0x54C6C5: retn    8
0x54C6C8: call    sub_54A0B0
0x54C6CD: fld     dword ptr [esi+19Ch]
0x54C6D3: cmp     eax, 0Dh
0x54C6D6: fstp    [esp+10h+var_8]
0x54C6DA: fld     dword ptr [esi+1A0h]
0x54C6E0: fstp    [esp+10h+var_4]
0x54C6E4: jge     short loc_54C700
0x54C6E6: fld     [esp+10h+arg_0]
0x54C6EA: push    ecx
0x54C6EB: fstp    [esp+14h+var_14]; float
0x54C6EE: lea     ecx, [esp+14h+var_4]
0x54C6F2: push    ecx; int
0x54C6F3: lea     edx, [esp+18h+var_8]
0x54C6F7: push    edx; int
0x54C6F8: push    eax; int
0x54C6F9: mov     ecx, esi
0x54C6FB: call    sub_54A120
0x54C700: fld     [esp+10h+var_8]
0x54C704: fsub    dword ptr [esi+18Ch]
0x54C70A: fstp    [esp+10h+var_C]
0x54C70E: fld     [esp+10h+var_4]
0x54C712: fsub    dword ptr [esi+190h]
0x54C718: fstp    [esp+10h+var_8]
0x54C71C: fld     dword ptr ds:0B39AF0h
0x54C722: fmul    [esp+10h+arg_0]
0x54C726: fstp    [esp+10h+arg_0]
0x54C72A: fld     [esp+10h+arg_0]
0x54C72E: fld     st
0x54C730: fchs
0x54C732: fstp    [esp+10h+arg_0]
0x54C736: fld     [esp+10h+arg_0]
0x54C73A: fst     [esp+10h+arg_0]
0x54C73E: fld     [esp+10h+var_C]
0x54C742: fcom    st(2)
0x54C744: fnstsw  ax
0x54C746: test    ah, 41h
0x54C749: jnz     short loc_54C755
0x54C74B: fstp    st
0x54C74D: fxch    st(1)
0x54C74F: fst     [esp+10h+var_C]
0x54C753: jmp     short loc_54C76E
0x54C755: fld     [esp+10h+arg_0]
0x54C759: fcom    st(1)
0x54C75B: fnstsw  ax
0x54C75D: fstp    st(1)
0x54C75F: test    ah, 41h
0x54C762: jnz     short loc_54C76A
0x54C764: fstp    [esp+10h+var_C]
0x54C768: jmp     short loc_54C76C
0x54C76A: fstp    st
0x54C76C: fxch    st(1)
0x54C76E: fxch    st(1)
0x54C770: fstp    [esp+10h+arg_0]
0x54C774: fld     [esp+10h+var_8]
0x54C778: fcom    st(1)
0x54C77A: fnstsw  ax
0x54C77C: test    ah, 41h
0x54C77F: jnz     short loc_54C789
0x54C781: fstp    st
0x54C783: fstp    [esp+10h+var_8]
0x54C787: jmp     short loc_54C79C
0x54C789: fstp    st(1)
0x54C78B: fld     [esp+10h+arg_0]
0x54C78F: fcom    st(1)
0x54C791: fnstsw  ax
0x54C793: fstp    st(1)
0x54C795: test    ah, 41h
0x54C798: jz      short loc_54C783
0x54C79A: fstp    st
0x54C79C: fld     [esp+10h+var_C]
0x54C7A0: sub     esp, 8
0x54C7A3: fadd    dword ptr [esi+18Ch]
0x54C7A9: mov     ecx, esi
0x54C7AB: fstp    [esp+18h+arg_0]
0x54C7AF: fld     [esp+18h+arg_0]
0x54C7B3: fst     dword ptr [esi+18Ch]
0x54C7B9: fld     dword ptr [esi+190h]
0x54C7BF: fadd    [esp+18h+var_8]
0x54C7C3: fstp    [esp+18h+arg_0]
0x54C7C7: fld     [esp+18h+arg_0]
0x54C7CB: fst     dword ptr [esi+190h]
0x54C7D1: fsub    dword ptr [esi+188h]
0x54C7D7: fstp    [esp+18h+arg_0]
0x54C7DB: fld     [esp+18h+arg_0]
0x54C7DF: fstp    [esp+18h+var_14]; float
0x54C7E3: fsub    dword ptr [esi+184h]
0x54C7E9: fstp    [esp+18h+arg_0]
0x54C7ED: fld     [esp+18h+arg_0]
0x54C7F1: fstp    [esp+18h+var_18]; float
0x54C7F4: call    sub_54B8C0
0x54C7F9: mov     al, 1
0x54C7FB: pop     esi
0x54C7FC: add     esp, 0Ch
0x54C7FF: retn    8
