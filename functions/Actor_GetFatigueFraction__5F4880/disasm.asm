0x5F4880: push    ecx
0x5F4881: push    esi
0x5F4882: push    0Ah
0x5F4884: mov     esi, ecx
0x5F4886: call    Actor_GetBaseCalcAVi
0x5F488B: mov     [esp+8+var_4], eax
0x5F488F: fild    [esp+8+var_4]
0x5F4893: fstp    [esp+8+var_4]
0x5F4897: fldz
0x5F4899: fcomp   [esp+8+var_4]
0x5F489D: fnstsw  ax
0x5F489F: test    ah, 44h
0x5F48A2: jnp     short loc_5F48BF
0x5F48A4: mov     eax, [esi]
0x5F48A6: mov     edx, [eax+288h]
0x5F48AC: push    0Ah
0x5F48AE: mov     ecx, esi
0x5F48B0: call    edx
0x5F48B2: fdiv    [esp+8+var_4]
0x5F48B6: pop     esi
0x5F48B7: fstp    [esp+4+var_4]
0x5F48BA: fld     [esp+4+var_4]
0x5F48BD: pop     ecx
0x5F48BE: retn
0x5F48BF: fld1
0x5F48C1: pop     esi
0x5F48C2: fstp    [esp+4+var_4]
0x5F48C5: fld     [esp+4+var_4]
0x5F48C8: pop     ecx
0x5F48C9: retn
