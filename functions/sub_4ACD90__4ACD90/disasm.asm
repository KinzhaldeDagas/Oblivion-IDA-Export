0x4ACD90: fldz
0x4ACD92: push    esi
0x4ACD93: mov     esi, ecx
0x4ACD95: fcomp   dword ptr [esi+64h]
0x4ACD98: fnstsw  ax
0x4ACD9A: test    ah, 5
0x4ACD9D: jp      short loc_4ACDD0
0x4ACD9F: fld     dword ptr ds:0B3F9A0h
0x4ACDA5: fmul    [esp+4+arg_0]
0x4ACDA9: fmul    dword ptr [esi+68h]
0x4ACDAC: fstp    [esp+4+arg_0]
0x4ACDB0: fld     [esp+4+arg_0]
0x4ACDB4: call    __CIsin
0x4ACDB9: fstp    [esp+4+arg_0]
0x4ACDBD: fld     [esp+4+arg_0]
0x4ACDC1: fmul    dword ptr [esi+64h]
0x4ACDC4: pop     esi
0x4ACDC5: fstp    [esp+arg_0]
0x4ACDC9: fld     [esp+arg_0]
0x4ACDCD: retn    4
0x4ACDD0: fld1
0x4ACDD2: pop     esi
0x4ACDD3: retn    4
