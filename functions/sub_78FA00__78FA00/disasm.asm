0x78FA00: push    esi; OBLIVION AUTHORITY 2026-08-27: Recursively accumulates hierarchical branch placement percent. Base is 0 when branch is null or has no parent. Otherwise A(branch)=A(parent)+(1-A(parent))*branch->percentAlongParent. This visits the full parent chain; it is not the RT4.1 limited-depth product formula.
0x78FA01: mov     esi, [esp+4+branch]
0x78FA05: test    esi, esi
0x78FA07: jz      short loc_78FA35
0x78FA09: mov     eax, [esi]
0x78FA0B: test    eax, eax
0x78FA0D: jz      short loc_78FA35
0x78FA0F: push    eax; branch
0x78FA10: call    OB_CBranch_AccumulateLeafDimmingPercent_010201A0; OBLIVION AUTHORITY 2026-08-27: Recursively accumulates hierarchical branch placement percent. Base is 0 when branch is null or has no parent. Otherwise A(branch)=A(parent)+(1-A(parent))*branch->percentAlongParent. This visits the full parent chain; it is not the RT4.1 limited-depth product formula.
0x78FA15: fstp    [esp+8+branch]
0x78FA19: fld     [esp+8+branch]
0x78FA1D: add     esp, 4
0x78FA20: fld     st
0x78FA22: fld1
0x78FA24: fsubrp  st(1), st
0x78FA26: fmul    dword ptr [esi+4]
0x78FA29: pop     esi
0x78FA2A: faddp   st(1), st
0x78FA2C: fstp    [esp+branch]
0x78FA30: fld     [esp+branch]
0x78FA34: retn
0x78FA35: fldz
0x78FA37: pop     esi
0x78FA38: retn
