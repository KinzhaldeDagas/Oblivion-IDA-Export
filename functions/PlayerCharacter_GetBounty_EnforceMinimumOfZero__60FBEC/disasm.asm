0x60FBEC: fld1
0x60FBEE: fld     dword ptr [esp+0]
0x60FBF1: fcom    st(1)
0x60FBF3: fnstsw  ax
0x60FBF5: test    ah, 5
0x60FBF8: jp      short PlayerCharacter_GetBounty___Return
0x60FBFA: fldz
0x60FBFC: fcomp   st(1)
0x60FBFE: fnstsw  ax
0x60FC00: test    ah, 5
0x60FC03: jp      short PlayerCharacter_GetBounty___Return
0x60FC05: fstp    st
0x60FC07: fstp    dword ptr [esp+0]
0x60FC0A: fld     dword ptr [esp+0]
0x60FC0D: pop     ecx
0x60FC0E: retn
