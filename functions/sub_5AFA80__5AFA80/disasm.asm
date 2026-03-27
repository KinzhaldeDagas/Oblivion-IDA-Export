0x5AFA80: push    ecx
0x5AFA81: mov     eax, ds:0B33398h
0x5AFA86: push    ebx
0x5AFA87: push    esi; a3
0x5AFA88: push    edi; a3
0x5AFA89: mov     edi, [eax+20h]
0x5AFA8C: mov     esi, ecx
0x5AFA8E: push    1; a2
0x5AFA90: mov     ecx, edi; this
0x5AFA92: call    InputGlobals__GetMouseAxisMovement
0x5AFA97: push    2; a2
0x5AFA99: mov     ecx, edi; this
0x5AFA9B: call    InputGlobals__GetMouseAxisMovement
0x5AFAA0: mov     ebx, eax
0x5AFAA2: mov     eax, [esi+40h]
0x5AFAA5: sub     eax, [esi+44h]
0x5AFAA8: mov     edi, 64h ; 'd'
0x5AFAAD: cmp     eax, 64h ; 'd'
0x5AFAB0: ja      short loc_5AFAB4
0x5AFAB2: mov     edi, eax
0x5AFAB4: fldz
0x5AFAB6: fcom    dword ptr [esi+158h]
0x5AFABC: fnstsw  ax
0x5AFABE: test    ah, 44h
0x5AFAC1: jp      loc_5AFC52
0x5AFAC7: fcom    dword ptr [esi+14Ch]
0x5AFACD: fnstsw  ax
0x5AFACF: test    ah, 44h
0x5AFAD2: jp      loc_5AFC52
0x5AFAD8: mov     eax, [esi+160h]
0x5AFADE: fstp    st
0x5AFAE0: lea     ecx, [eax+eax*4]
0x5AFAE3: fild    dword ptr [esi+ecx*8+98h]
0x5AFAEA: lea     ecx, [esi+ecx*8+98h]
0x5AFAF1: fsub    dword ptr [esi+148h]
0x5AFAF7: fstp    [esp+10h+var_4]
0x5AFAFB: fld     [esp+10h+var_4]
0x5AFAFF: fabs
0x5AFB01: fstp    [esp+10h+var_4]
0x5AFB05: fld     dword ptr ds:0A46B10h
0x5AFB0B: fld     [esp+10h+var_4]
0x5AFB0F: fcom    st(1)
0x5AFB11: fnstsw  ax
0x5AFB13: fstp    st(1)
0x5AFB15: test    ah, 41h
0x5AFB18: jnz     short loc_5AFB96
0x5AFB1A: fstp    st
0x5AFB1C: mov     byte ptr [esi+170h], 0
0x5AFB23: fld     dword ptr [esi+148h]
0x5AFB29: fild    dword ptr [ecx]
0x5AFB2B: fcompp
0x5AFB2D: fnstsw  ax
0x5AFB2F: test    ah, 41h
0x5AFB32: jnz     short loc_5AFB6D
0x5AFB34: fild    dword ptr [esi+0C0h]
0x5AFB3A: mov     edx, edi
0x5AFB3C: test    edx, edx
0x5AFB3E: mov     [esp+10h+var_4], edx
0x5AFB42: fisub   dword ptr [esi+98h]
0x5AFB48: fdiv    qword ptr ds:0A3DDE0h
0x5AFB4E: fild    [esp+10h+var_4]
0x5AFB52: jge     short loc_5AFB5A
0x5AFB54: fadd    dword ptr ds:0A2FC78h
0x5AFB5A: fmulp   st(1), st
0x5AFB5C: fadd    dword ptr [esi+148h]
0x5AFB62: fstp    dword ptr [esi+148h]
0x5AFB68: jmp     loc_5AFC36
0x5AFB6D: fld     dword ptr [esi+148h]
0x5AFB73: mov     eax, edi
0x5AFB75: fild    dword ptr [esi+0C0h]
0x5AFB7B: mov     [esp+10h+var_4], eax
0x5AFB7F: test    eax, eax
0x5AFB81: fisub   dword ptr [esi+98h]
0x5AFB87: fdiv    qword ptr ds:0A3DDE0h
0x5AFB8D: fild    [esp+10h+var_4]
0x5AFB91: jmp     loc_5AFC1B
0x5AFB96: fld1
0x5AFB98: fcompp
0x5AFB9A: fnstsw  ax
0x5AFB9C: test    ah, 5
0x5AFB9F: jp      loc_5AFC2F
0x5AFBA5: fld     dword ptr [esi+148h]
0x5AFBAB: mov     byte ptr [esi+170h], 0
0x5AFBB2: fild    dword ptr [ecx]
0x5AFBB4: fcompp
0x5AFBB6: fnstsw  ax
0x5AFBB8: test    ah, 41h
0x5AFBBB: jnz     short loc_5AFBF7
0x5AFBBD: fild    dword ptr [esi+0C0h]
0x5AFBC3: mov     ecx, edi
0x5AFBC5: test    ecx, ecx
0x5AFBC7: mov     [esp+10h+var_4], ecx
0x5AFBCB: fisub   dword ptr [esi+98h]
0x5AFBD1: fdiv    qword ptr ds:0A6C820h
0x5AFBD7: fild    [esp+10h+var_4]
0x5AFBDB: jge     loc_5AFB5A
0x5AFBE1: fadd    dword ptr ds:0A2FC78h
0x5AFBE7: fmulp   st(1), st
0x5AFBE9: fadd    dword ptr [esi+148h]
0x5AFBEF: fstp    dword ptr [esi+148h]
0x5AFBF5: jmp     short loc_5AFC36
0x5AFBF7: fld     dword ptr [esi+148h]
0x5AFBFD: mov     edx, edi
0x5AFBFF: fild    dword ptr [esi+0C0h]
0x5AFC05: mov     [esp+10h+var_4], edx
0x5AFC09: test    edx, edx
0x5AFC0B: fisub   dword ptr [esi+98h]
0x5AFC11: fdiv    qword ptr ds:0A6C820h
0x5AFC17: fild    [esp+10h+var_4]
0x5AFC1B: jge     short loc_5AFC23
0x5AFC1D: fadd    dword ptr ds:0A2FC78h
0x5AFC23: fmulp   st(1), st
0x5AFC25: fsubp   st(1), st
0x5AFC27: fstp    dword ptr [esi+148h]
0x5AFC2D: jmp     short loc_5AFC36
0x5AFC2F: mov     byte ptr [esi+170h], 1
0x5AFC36: fld     dword ptr [esi+148h]
0x5AFC3C: push    ecx
0x5AFC3D: mov     ecx, [esi+178h]; this
0x5AFC43: fstp    [esp+14h+a2]; a3
0x5AFC46: push    0FB0h; a2
0x5AFC4B: call    Tile_SetFloat
0x5AFC50: fldz
0x5AFC52: cmp     ebx, 0FFFFFFFDh
0x5AFC55: jge     short loc_5AFCA9
0x5AFC57: fcom    dword ptr [esi+158h]
0x5AFC5D: fnstsw  ax
0x5AFC5F: test    ah, 44h
0x5AFC62: jp      short loc_5AFCA9
0x5AFC64: mov     eax, [esi+160h]
0x5AFC6A: fld     dword ptr [esi+148h]
0x5AFC70: lea     eax, [eax+eax*4]
0x5AFC73: fisub   dword ptr [esi+eax*8+98h]
0x5AFC7A: fstp    [esp+10h+var_4]
0x5AFC7E: fld     [esp+10h+var_4]
0x5AFC82: fabs
0x5AFC84: fstp    [esp+10h+var_4]
0x5AFC88: fld     [esp+10h+var_4]
0x5AFC8C: fcomp   dword ptr ds:0A46C30h
0x5AFC92: fnstsw  ax
0x5AFC94: test    ah, 41h
0x5AFC97: jp      short loc_5AFCA9
0x5AFC99: fstp    st
0x5AFC9B: fld     dword ptr [esi+154h]
0x5AFCA1: fstp    dword ptr [esi+158h]
0x5AFCA7: jmp     short loc_5AFD12
0x5AFCA9: test    edi, edi
0x5AFCAB: mov     [esp+10h+var_4], edi
0x5AFCAF: fild    [esp+10h+var_4]
0x5AFCB3: jge     short loc_5AFCBB
0x5AFCB5: fadd    dword ptr ds:0A2FC78h
0x5AFCBB: fstp    [esp+10h+var_4]
0x5AFCBF: fld     dword ptr [esi+15Ch]
0x5AFCC5: fld     [esp+10h+var_4]
0x5AFCC9: fld     st
0x5AFCCB: fmulp   st(2), st
0x5AFCCD: fxch    st(1)
0x5AFCCF: fsubr   dword ptr [esi+158h]
0x5AFCD5: fstp    [esp+10h+var_4]
0x5AFCD9: fld     [esp+10h+var_4]
0x5AFCDD: fst     dword ptr [esi+158h]
0x5AFCE3: fmulp   st(1), st
0x5AFCE5: fadd    dword ptr [esi+14Ch]
0x5AFCEB: fstp    [esp+10h+var_4]
0x5AFCEF: fld     [esp+10h+var_4]
0x5AFCF3: fst     dword ptr [esi+14Ch]
0x5AFCF9: fcomp   st(1)
0x5AFCFB: fnstsw  ax
0x5AFCFD: test    ah, 5
0x5AFD00: jp      short loc_5AFD10
0x5AFD02: fst     dword ptr [esi+158h]
0x5AFD08: fstp    dword ptr [esi+14Ch]
0x5AFD0E: jmp     short loc_5AFD12
0x5AFD10: fstp    st
0x5AFD12: fld     dword ptr [esi+14Ch]
0x5AFD18: call    Double_To_SInt32
0x5AFD1D: mov     ecx, 122h
0x5AFD22: sub     ecx, eax
0x5AFD24: mov     [esp+10h+var_4], ecx
0x5AFD28: fild    [esp+10h+var_4]
0x5AFD2C: push    ecx
0x5AFD2D: mov     ecx, [esi+178h]; this
0x5AFD33: fstp    [esp+14h+a2]; a3
0x5AFD36: push    0FB1h; a2
0x5AFD3B: call    Tile_SetFloat
0x5AFD40: pop     edi
0x5AFD41: pop     esi
0x5AFD42: pop     ebx
0x5AFD43: pop     ecx
0x5AFD44: retn
