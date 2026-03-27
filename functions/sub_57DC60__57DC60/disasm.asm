0x57DC60: push    ecx
0x57DC61: fldz
0x57DC63: push    esi
0x57DC64: fcomp   dword ptr ds:0B135B0h
0x57DC6A: push    edi
0x57DC6B: mov     edi, ds:0B33EA0h
0x57DC71: mov     esi, ecx
0x57DC73: fnstsw  ax
0x57DC75: test    ah, 41h
0x57DC78: jz      loc_57DD1A
0x57DC7E: cmp     dword ptr [esi+11Ch], 80000001h
0x57DC88: jnz     short loc_57DCA2
0x57DC8A: mov     eax, ds:0B33398h
0x57DC8F: mov     ecx, [eax+20h]; this
0x57DC92: push    0; a3
0x57DC94: push    0CBh ; 'Ë'; a2
0x57DC99: call    InputGlobals__QueryKeyboardState
0x57DC9E: test    eax, eax
0x57DCA0: jz      short loc_57DD10
0x57DCA2: cmp     dword ptr [esi+11Ch], 80000002h
0x57DCAC: jnz     short loc_57DCC7
0x57DCAE: mov     ecx, ds:0B33398h
0x57DCB4: mov     ecx, [ecx+20h]; this
0x57DCB7: push    0; a3
0x57DCB9: push    0CDh ; 'Í'; a2
0x57DCBE: call    InputGlobals__QueryKeyboardState
0x57DCC3: test    eax, eax
0x57DCC5: jz      short loc_57DD10
0x57DCC7: cmp     dword ptr [esi+11Ch], 80000003h
0x57DCD1: jnz     short loc_57DCEC
0x57DCD3: mov     edx, ds:0B33398h
0x57DCD9: mov     ecx, [edx+20h]; this
0x57DCDC: push    0; a3
0x57DCDE: push    0C8h ; 'È'; a2
0x57DCE3: call    InputGlobals__QueryKeyboardState
0x57DCE8: test    eax, eax
0x57DCEA: jz      short loc_57DD10
0x57DCEC: cmp     dword ptr [esi+11Ch], 80000004h
0x57DCF6: jnz     short loc_57DD22
0x57DCF8: mov     eax, ds:0B33398h
0x57DCFD: mov     ecx, [eax+20h]; this
0x57DD00: push    0; a3
0x57DD02: push    0D0h ; 'Ð'; a2
0x57DD07: call    InputGlobals__QueryKeyboardState
0x57DD0C: test    eax, eax
0x57DD0E: jnz     short loc_57DD22
0x57DD10: mov     dword ptr [esi+11Ch], 0
0x57DD1A: pop     edi
0x57DD1B: xor     eax, eax
0x57DD1D: pop     esi
0x57DD1E: pop     ecx
0x57DD1F: retn    4
0x57DD22: mov     eax, [esi+124h]
0x57DD28: test    eax, eax
0x57DD2A: jnz     short loc_57DD4E
0x57DD2C: mov     ecx, edi
0x57DD2E: sub     ecx, [esi+120h]
0x57DD34: test    ecx, ecx
0x57DD36: mov     [esp+0Ch+arg_0], ecx
0x57DD3A: fild    [esp+0Ch+arg_0]
0x57DD3E: jge     short loc_57DD46
0x57DD40: fadd    dword ptr ds:0A2FC78h
0x57DD46: fld     dword ptr ds:0B135B0h
0x57DD4C: jmp     short loc_57DD6E
0x57DD4E: mov     edx, edi
0x57DD50: sub     edx, eax
0x57DD52: test    edx, edx
0x57DD54: mov     [esp+0Ch+var_4], edx
0x57DD58: fild    [esp+0Ch+var_4]
0x57DD5C: jge     short loc_57DD64
0x57DD5E: fadd    dword ptr ds:0A2FC78h
0x57DD64: fld     dword ptr ds:0B135B8h
0x57DD6A: fdiv    [esp+0Ch+arg_0]
0x57DD6E: fcompp
0x57DD70: fnstsw  ax
0x57DD72: test    ah, 41h
0x57DD75: jz      short loc_57DD1A
0x57DD77: mov     eax, [esi+11Ch]
0x57DD7D: mov     [esi+124h], edi
0x57DD83: pop     edi
0x57DD84: pop     esi
0x57DD85: pop     ecx
0x57DD86: retn    4
