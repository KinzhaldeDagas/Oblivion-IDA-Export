0x65AB40: push    ecx; TES4 authoritative: actor jump entry. Computes jump height from fJumpHeightMin/Max and proxy +0x310 scalar, then sub_890700 sets state=1 Jumping and jump impulse at +0x31C.
0x65AB41: push    esi
0x65AB42: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x65AB47: mov     esi, eax
0x65AB49: test    esi, esi
0x65AB4B: jz      short loc_65AB7C
0x65AB4D: fld     dword ptr ds:0B374A0h
0x65AB53: push    ecx
0x65AB54: fld     dword ptr ds:0B37498h
0x65AB5A: mov     ecx, esi
0x65AB5C: fld     st
0x65AB5E: fsubp   st(2), st
0x65AB60: fld     dword ptr [esi+310h]
0x65AB66: fmulp   st(2), st
0x65AB68: faddp   st(1), st
0x65AB6A: fstp    [esp+0Ch+var_4]
0x65AB6E: fld     [esp+0Ch+var_4]
0x65AB72: fstp    [esp+0Ch+var_C]; float
0x65AB75: call    sub_890700; MorrowindMovements jump correction source: vanilla jump setup writes state 1 Jumping and stores jump-height impulse at proxy+0x31C after hkFactor scaling.
0x65AB7A: mov     eax, esi
0x65AB7C: pop     esi
0x65AB7D: pop     ecx
0x65AB7E: retn
