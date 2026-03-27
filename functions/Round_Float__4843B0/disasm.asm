0x4843B0: fld     [esp+arg_0]
0x4843B4: fld     [esp+arg_4]
0x4843B8: fld     st
0x4843BA: fdivp   st(2), st
0x4843BC: fxch    st(1)
0x4843BE: fstp    [esp+arg_0]
0x4843C2: fld     [esp+arg_0]
0x4843C6: fld     st
0x4843C8: call    Double_To_SInt32
0x4843CD: mov     ecx, eax
0x4843CF: mov     [esp+arg_0], ecx
0x4843D3: fisub   [esp+arg_0]
0x4843D7: fcomp   qword ptr ds:0A2FAA0h
0x4843DD: fnstsw  ax
0x4843DF: test    ah, 5
0x4843E2: jp      short loc_4843F9
0x4843E4: xor     eax, eax
0x4843E6: add     ecx, eax
0x4843E8: mov     [esp+arg_0], ecx
0x4843EC: fimul   [esp+arg_0]
0x4843F0: fstp    [esp+arg_0]
0x4843F4: fld     [esp+arg_0]
0x4843F8: retn
0x4843F9: mov     eax, 1
0x4843FE: add     ecx, eax
0x484400: mov     [esp+arg_0], ecx
0x484404: fimul   [esp+arg_0]
0x484408: fstp    [esp+arg_0]
0x48440C: fld     [esp+arg_0]
0x484410: retn
