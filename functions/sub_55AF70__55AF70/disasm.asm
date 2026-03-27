0x55AF70: cmp     dword ptr [ecx+8], 0
0x55AF74: jz      short locret_55AFB2
0x55AF76: push    esi
0x55AF77: mov     esi, [esp+4+arg_0]
0x55AF7B: cmp     dword ptr [esi], 0
0x55AF7E: jz      short loc_55AFB1
0x55AF80: mov     edx, [esp+4+arg_4]
0x55AF84: test    edx, edx
0x55AF86: jz      short loc_55AFB1
0x55AF88: fldz
0x55AF8A: fld     [esp+4+arg_8]
0x55AF8E: fcom    st(1)
0x55AF90: fnstsw  ax
0x55AF92: fstp    st(1)
0x55AF94: test    ah, 5
0x55AF97: jnp     short loc_55AFAF
0x55AF99: mov     ecx, [ecx+8]
0x55AF9C: mov     eax, [ecx]
0x55AF9E: push    ecx
0x55AF9F: fstp    [esp+8+var_8]
0x55AFA2: push    0
0x55AFA4: push    edx
0x55AFA5: mov     edx, [eax+4]
0x55AFA8: push    esi
0x55AFA9: call    edx
0x55AFAB: pop     esi
0x55AFAC: retn    0Ch
0x55AFAF: fstp    st
0x55AFB1: pop     esi
0x55AFB2: retn    0Ch
