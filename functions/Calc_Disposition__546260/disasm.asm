0x546260: fild    [esp+arg_4]
0x546264: push    ebx
0x546265: push    ebp
0x546266: push    esi
0x546267: fmul    dword ptr ds:0B367D0h
0x54626D: push    edi
0x54626E: fadd    dword ptr ds:0B367C8h
0x546274: fild    [esp+10h+arg_0]
0x546278: fmul    dword ptr ds:0B367C0h
0x54627E: fadd    dword ptr ds:0B367B8h
0x546284: faddp   st(1), st
0x546286: fmul    qword ptr ds:0A2FAA0h
0x54628C: call    Double_To_SInt32
0x546291: mov     bl, byte ptr [esp+10h+arg_30]
0x546295: xor     esi, esi
0x546297: test    bl, bl
0x546299: mov     ebp, eax
0x54629B: jnz     short loc_5462AE
0x54629D: fild    [esp+10h+arg_C]
0x5462A1: fmul    dword ptr ds:0B367D8h
0x5462A7: call    Double_To_SInt32
0x5462AC: mov     esi, eax
0x5462AE: test    bl, bl
0x5462B0: fldz
0x5462B2: fstp    [esp+10h+arg_30]
0x5462B6: jnz     short loc_5462D6
0x5462B8: fild    [esp+10h+arg_8]
0x5462BC: fmul    dword ptr ds:0B367F0h
0x5462C2: fld     dword ptr ds:0B367E0h
0x5462C8: fld     st
0x5462CA: faddp   st(2), st
0x5462CC: fimul   [esp+10h+arg_10]
0x5462D0: fmulp   st(1), st
0x5462D2: fstp    [esp+10h+arg_30]
0x5462D6: xor     edi, edi
0x5462D8: test    bl, bl
0x5462DA: mov     [esp+10h+arg_4], edi
0x5462DE: jnz     short loc_546307
0x5462E0: fild    [esp+10h+arg_8]
0x5462E4: fmul    dword ptr ds:0B36808h
0x5462EA: fadd    dword ptr ds:0B36800h
0x5462F0: fild    [esp+10h+arg_14]
0x5462F4: fmul    dword ptr ds:0B367F8h
0x5462FA: fmulp   st(1), st
0x5462FC: call    Double_To_SInt32
0x546301: mov     edi, eax
0x546303: mov     [esp+10h+arg_4], eax
0x546307: fild    [esp+10h+arg_18]
0x54630B: fmul    dword ptr ds:0B36810h
0x546311: call    Double_To_SInt32
0x546316: fild    [esp+10h+arg_20]
0x54631A: fld     dword ptr ds:0B36818h
0x546320: mov     [esp+10h+arg_18], eax
0x546324: fld     st
0x546326: fmulp   st(2), st
0x546328: fld     dword ptr ds:0B36820h
0x54632E: faddp   st(2), st
0x546330: fimul   [esp+10h+arg_1C]
0x546334: fmulp   st(1), st
0x546336: call    Double_To_SInt32
0x54633B: fild    [esp+10h+arg_24]
0x54633F: mov     [esp+10h+arg_20], eax
0x546343: fmul    dword ptr ds:0B36830h
0x546349: call    Double_To_SInt32
0x54634E: fild    [esp+10h+arg_28]
0x546352: mov     [esp+10h+arg_1C], eax
0x546356: fmul    dword ptr ds:0B36838h
0x54635C: call    Double_To_SInt32
0x546361: fld     [esp+10h+arg_30]
0x546365: fld     dword ptr ds:0B36CF8h
0x54636B: mov     [esp+10h+arg_24], eax
0x54636F: fcom    st(1)
0x546371: fnstsw  ax
0x546373: test    ah, 5
0x546376: jp      short loc_546380
0x546378: fstp    st(1)
0x54637A: fstp    [esp+10h+arg_30]
0x54637E: jmp     short loc_546399
0x546380: fmul    qword ptr ds:0A3D360h
0x546386: fcom    st(1)
0x546388: fnstsw  ax
0x54638A: fstp    st(1)
0x54638C: test    ah, 41h
0x54638F: jnz     short loc_546397
0x546391: fstp    [esp+10h+arg_30]
0x546395: jmp     short loc_546399
0x546397: fstp    st
0x546399: mov     eax, ds:0B36CE8h
0x54639E: cmp     esi, eax
0x5463A0: jg      short loc_5463A8
0x5463A2: neg     eax
0x5463A4: cmp     esi, eax
0x5463A6: jge     short loc_5463AA
0x5463A8: mov     esi, eax
0x5463AA: mov     eax, ds:0B36CF0h
0x5463AF: cmp     edi, eax
0x5463B1: jg      short loc_5463B9
0x5463B3: neg     eax
0x5463B5: cmp     edi, eax
0x5463B7: jge     short loc_5463BD
0x5463B9: mov     [esp+10h+arg_4], eax
0x5463BD: add     esi, ebp
0x5463BF: mov     [esp+10h+arg_0], esi
0x5463C3: fild    [esp+10h+arg_0]
0x5463C7: pop     edi
0x5463C8: pop     esi
0x5463C9: pop     ebp
0x5463CA: fadd    [esp+4+arg_30]
0x5463CE: pop     ebx
0x5463CF: fiadd   [esp+arg_4]
0x5463D3: fiadd   [esp+arg_18]
0x5463D7: fiadd   [esp+arg_20]
0x5463DB: fiadd   [esp+arg_1C]
0x5463DF: fiadd   [esp+arg_24]
0x5463E3: fiadd   [esp+arg_2C]
0x5463E7: jmp     Double_To_SInt32
