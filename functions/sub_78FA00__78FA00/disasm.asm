0x78FA00: push    esi
0x78FA01: mov     esi, [esp+4+arg_0]
0x78FA05: test    esi, esi
0x78FA07: jz      short loc_78FA35
0x78FA09: mov     eax, [esi]
0x78FA0B: test    eax, eax
0x78FA0D: jz      short loc_78FA35
0x78FA0F: push    eax
0x78FA10: call    sub_78FA00
0x78FA15: fstp    [esp+8+arg_0]
0x78FA19: fld     [esp+8+arg_0]
0x78FA1D: add     esp, 4
0x78FA20: fld     st
0x78FA22: fld1
0x78FA24: fsubrp  st(1), st
0x78FA26: fmul    dword ptr [esi+4]
0x78FA29: pop     esi
0x78FA2A: faddp   st(1), st
0x78FA2C: fstp    [esp+arg_0]
0x78FA30: fld     [esp+arg_0]
0x78FA34: retn
0x78FA35: fldz
0x78FA37: pop     esi
0x78FA38: retn
