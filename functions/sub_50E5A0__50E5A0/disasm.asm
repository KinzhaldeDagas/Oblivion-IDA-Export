0x50E5A0: push    esi
0x50E5A1: mov     esi, ds:0B33A98h
0x50E5A7: add     esi, 84h ; '„'
0x50E5AD: jz      short loc_50E5CB
0x50E5AF: nop
0x50E5B0: cmp     dword ptr [esi+4], 0
0x50E5B4: jnz     short loc_50E5BB
0x50E5B6: cmp     dword ptr [esi], 0
0x50E5B9: jz      short loc_50E5CB
0x50E5BB: mov     ecx, [esi]
0x50E5BD: push    1
0x50E5BF: call    sub_529820
0x50E5C4: mov     esi, [esi+4]
0x50E5C7: test    esi, esi
0x50E5C9: jnz     short loc_50E5B0
0x50E5CB: cmp     byte ptr ds:0B361ACh, 0
0x50E5D2: pop     esi
0x50E5D3: jz      short loc_50E5EE
0x50E5D5: mov     eax, [esp+arg_18]
0x50E5D9: fld     qword ptr [eax]
0x50E5DB: sub     esp, 8
0x50E5DE: fstp    [esp+8+var_C+4]
0x50E5E1: push    offset aAllQuestsEnabl; "All Quests Enabled."
0x50E5E6: call    Interface_ConsolePrint
0x50E5EB: add     esp, 0Ch
0x50E5EE: mov     al, 1
0x50E5F0: retn
