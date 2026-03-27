0x66CEB0: push    esi
0x66CEB1: mov     esi, ecx
0x66CEB3: mov     byte ptr [esi+589h], 1
0x66CEBA: fld     dword ptr ds:0B3BB24h
0x66CEC0: fld     dword ptr ds:0B36B78h
0x66CEC6: push    edi
0x66CEC7: fcom    st(1)
0x66CEC9: fnstsw  ax
0x66CECB: fstp    st(1)
0x66CECD: test    ah, 41h
0x66CED0: jnz     short loc_66CEDA
0x66CED2: fstp    dword ptr ds:0B3BB24h
0x66CED8: jmp     short loc_66CEDC
0x66CEDA: fstp    st
0x66CEDC: cmp     byte ptr [esi+588h], 0
0x66CEE3: jnz     short loc_66CEF3
0x66CEE5: push    0; a1
0x66CEE7: mov     byte ptr [esi+58Ah], 1
0x66CEEE: call    TogglePOV
0x66CEF3: mov     eax, [esi]
0x66CEF5: mov     edi, [esp+8+arg_0]
0x66CEF9: mov     edx, [eax+1BCh]
0x66CEFF: push    0
0x66CF01: mov     ecx, esi
0x66CF03: mov     [esi+1E0h], edi
0x66CF09: mov     byte ptr [esi+71Ch], 1
0x66CF10: call    edx
0x66CF12: push    edi; int
0x66CF13: mov     ecx, esi; int
0x66CF15: call    sub_612240
0x66CF1A: pop     edi
0x66CF1B: pop     esi
0x66CF1C: retn    4
