0x55CC60: mov     eax, ds:0B39B84h
0x55CC65: sub     esp, 1Ch
0x55CC68: test    eax, eax
0x55CC6A: push    esi
0x55CC6B: mov     esi, ecx
0x55CC6D: jz      short loc_55CC76
0x55CC6F: add     eax, 88h ; 'ˆ'
0x55CC74: jmp     short loc_55CC7B
0x55CC76: mov     eax, offset Vector3_InitValue?
0x55CC7B: mov     ecx, [eax]
0x55CC7D: mov     edx, [eax+4]
0x55CC80: mov     eax, [eax+8]
0x55CC83: mov     [esp+20h+var_18], ecx
0x55CC87: fld     [esp+20h+var_18]
0x55CC8B: fsub    dword ptr [esi+88h]
0x55CC91: mov     [esp+20h+var_14], edx
0x55CC95: mov     [esp+20h+var_10], eax
0x55CC99: fstp    [esp+20h+var_C]
0x55CC9D: fld     [esp+20h+var_14]
0x55CCA1: fsub    dword ptr [esi+8Ch]
0x55CCA7: fstp    [esp+20h+var_8]
0x55CCAB: fld     [esp+20h+var_10]
0x55CCAF: fsub    dword ptr [esi+90h]
0x55CCB5: fstp    [esp+20h+var_4]
0x55CCB9: fld     [esp+20h+var_8]
0x55CCBD: fld     [esp+20h+var_C]
0x55CCC1: fld     [esp+20h+var_4]
0x55CCC5: fld     st(1)
0x55CCC7: fmulp   st(2), st
0x55CCC9: fld     st(2)
0x55CCCB: fmulp   st(3), st
0x55CCCD: fxch    st(1)
0x55CCCF: faddp   st(2), st
0x55CCD1: fmul    st, st
0x55CCD3: faddp   st(1), st
0x55CCD5: fstp    [esp+20h+var_1C]
0x55CCD9: fld     [esp+20h+var_1C]
0x55CCDD: call    __CIsqrt
0x55CCE2: fstp    [esp+20h+var_1C]
0x55CCE6: fld     [esp+20h+var_1C]
0x55CCEA: fstp    [esp+20h+var_1C]
0x55CCEE: fld     [esp+20h+var_1C]
0x55CCF2: fld     dword ptr ds:0B120CCh
0x55CCF8: fld     st
0x55CCFA: fld     qword ptr ds:0A3F3E8h
0x55CD00: fadd    st(1), st
0x55CD02: fxch    st(1)
0x55CD04: fcomp   st(3)
0x55CD06: fnstsw  ax
0x55CD08: test    ah, 5
0x55CD0B: jp      short loc_55CD16
0x55CD0D: cmp     byte ptr [esi+110h], 0
0x55CD14: jz      short loc_55CD1E
0x55CD16: mov     ecx, [esp+20h+arg_0]
0x55CD1A: test    ecx, ecx
0x55CD1C: jnz     short loc_55CD36
0x55CD1E: fstp    st(2)
0x55CD20: push    0
0x55CD22: fstp    st
0x55CD24: push    esi
0x55CD25: fstp    st
0x55CD27: call    sub_553BB0
0x55CD2C: add     esp, 8
0x55CD2F: pop     esi
0x55CD30: add     esp, 1Ch
0x55CD33: retn    4
0x55CD36: fsubp   st(1), st
0x55CD38: fcompp
0x55CD3A: fnstsw  ax
0x55CD3C: test    ah, 41h
0x55CD3F: jnz     short loc_55CD4A
0x55CD41: cmp     byte ptr [esi+110h], 0
0x55CD48: jnz     short loc_55CD4F
0x55CD4A: cmp     ecx, 1
0x55CD4D: jnz     short loc_55CD5A
0x55CD4F: push    1
0x55CD51: push    esi
0x55CD52: call    sub_553BB0
0x55CD57: add     esp, 8
0x55CD5A: pop     esi
0x55CD5B: add     esp, 1Ch
0x55CD5E: retn    4
