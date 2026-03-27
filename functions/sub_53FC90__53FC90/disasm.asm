0x53FC90: push    ecx
0x53FC91: push    esi
0x53FC92: mov     esi, ecx
0x53FC94: mov     eax, [esi+0FCh]
0x53FC9A: test    eax, 2000h
0x53FC9F: jz      short loc_53FD0B
0x53FCA1: test    eax, 800h
0x53FCA6: jz      short loc_53FCD1
0x53FCA8: mov     eax, [esi+0Ch]
0x53FCAB: test    eax, eax
0x53FCAD: jz      short loc_53FCD1
0x53FCAF: movzx   eax, byte ptr [eax+53h]
0x53FCB3: mov     [esp+8+var_4], eax
0x53FCB7: fild    [esp+8+var_4]
0x53FCBB: fdiv    qword ptr ds:0A3F3A0h
0x53FCC1: fstp    dword ptr ds:0B35244h
0x53FCC7: and     dword ptr [esi+0FCh], 0FFFFF7FFh
0x53FCD1: fld     dword ptr ds:0B36668h
0x53FCD7: fadd    dword ptr ds:0B35244h
0x53FCDD: fld     qword ptr ds:0A56E08h
0x53FCE3: fcom    st(1)
0x53FCE5: fnstsw  ax
0x53FCE7: fstp    st(1)
0x53FCE9: test    ah, 5
0x53FCEC: jnp     short loc_53FCFB
0x53FCEE: fstp    st
0x53FCF0: call    sub_499200
0x53FCF5: fadd    dword ptr ds:0B36668h
0x53FCFB: fstp    dword ptr ds:0B36678h
0x53FD01: and     dword ptr [esi+0FCh], 0FFFFDFFFh
0x53FD0B: fld     dword ptr ds:0B36678h
0x53FD11: pop     esi
0x53FD12: pop     ecx
0x53FD13: retn
