0x4B9CB0: fldz
0x4B9CB2: fcom    dword ptr [ecx+78h]
0x4B9CB5: fnstsw  ax
0x4B9CB7: test    ah, 5
0x4B9CBA: jp      short loc_4B9CCC
0x4B9CBC: fld     dword ptr [ecx+78h]
0x4B9CBF: fcomp   qword ptr ds:0A37478h
0x4B9CC5: fnstsw  ax
0x4B9CC7: test    ah, 41h
0x4B9CCA: jnp     short loc_4B9CE9
0x4B9CCC: fcomp   dword ptr [ecx+7Ch]
0x4B9CCF: fnstsw  ax
0x4B9CD1: test    ah, 5
0x4B9CD4: jp      short loc_4B9CE6
0x4B9CD6: fld     dword ptr ds:0A44F64h
0x4B9CDC: fcomp   dword ptr [ecx+7Ch]
0x4B9CDF: fnstsw  ax
0x4B9CE1: test    ah, 1
0x4B9CE4: jz      short loc_4B9CEB
0x4B9CE6: mov     al, 1
0x4B9CE8: retn
0x4B9CE9: fstp    st
0x4B9CEB: xor     al, al
0x4B9CED: retn
