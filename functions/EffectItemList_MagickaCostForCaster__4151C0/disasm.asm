0x4151C0: push    ecx
0x4151C1: push    esi
0x4151C2: mov     esi, ecx
0x4151C4: cmp     dword ptr [esi+8], 0
0x4151C8: jnz     short loc_4151D7
0x4151CA: cmp     dword ptr [esi+4], 0
0x4151CE: jnz     short loc_4151D7
0x4151D0: fldz
0x4151D2: pop     esi
0x4151D3: pop     ecx
0x4151D4: retn    4
0x4151D7: test    esi, esi
0x4151D9: fldz
0x4151DB: fstp    [esp+8+var_4]
0x4151DF: jz      short loc_415221
0x4151E1: push    edi
0x4151E2: mov     edi, [esp+0Ch+arg_0]
0x4151E6: mov     ecx, [esi+4]
0x4151E9: mov     eax, [ecx+1Ch]
0x4151EC: mov     edx, [eax+58h]
0x4151EF: shr     edx, 16h
0x4151F2: test    dl, 1
0x4151F5: jnz     short loc_415205
0x4151F7: push    edi
0x4151F8: call    EffectItem_MagickaCostForCaster
0x4151FD: fadd    [esp+0Ch+var_4]
0x415201: fstp    [esp+0Ch+var_4]
0x415205: mov     esi, [esi+8]
0x415208: test    esi, esi
0x41520A: jz      short loc_415211
0x41520C: add     esi, 0FFFFFFFCh
0x41520F: jnz     short loc_4151E6
0x415211: fldz
0x415213: pop     edi
0x415214: fcom    [esp+8+var_4]
0x415218: fnstsw  ax
0x41521A: test    ah, 41h
0x41521D: jz      short loc_415231
0x41521F: fstp    st
0x415221: fld     [esp+8+var_4]
0x415225: push    ecx
0x415226: fstp    [esp+0Ch+var_C]; float
0x415229: call    FloatFloor
0x41522E: add     esp, 4
0x415231: fstp    [esp+8+arg_0]
0x415235: pop     esi
0x415236: fld     [esp+4+arg_0]
0x41523A: pop     ecx
0x41523B: retn    4
