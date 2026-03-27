0x6C9D30: fldz
0x6C9D32: push    esi
0x6C9D33: push    edi
0x6C9D34: push    1; char
0x6C9D36: push    ecx
0x6C9D37: fstp    [esp+10h+var_10]; float
0x6C9D3A: mov     esi, ecx
0x6C9D3C: call    sub_6C9CB0
0x6C9D41: fldz
0x6C9D43: fcomp   [esp+8+arg_4]
0x6C9D47: fnstsw  ax
0x6C9D49: test    ah, 1
0x6C9D4C: jnz     short loc_6C9D58
0x6C9D4E: fld     dword ptr ds:0A79DB4h
0x6C9D54: fstp    [esp+8+arg_4]
0x6C9D58: cmp     dword ptr [esi+44h], 0
0x6C9D5C: jnz     loc_6C9DF8
0x6C9D62: mov     edi, [esp+8+a2]
0x6C9D66: push    edi
0x6C9D67: mov     ecx, esi
0x6C9D69: mov     dword ptr [esi+58h], 0
0x6C9D70: call    sub_6C6A50
0x6C9D75: fld     [esp+8+arg_10]
0x6C9D79: cmp     dword ptr [esi+44h], 0
0x6C9D7D: fstp    dword ptr [esi+1Ch]
0x6C9D80: mov     dword ptr [esi+44h], 1
0x6C9D87: setz    al
0x6C9D8A: test    al, al
0x6C9D8C: jz      short loc_6C9DA2
0x6C9D8E: mov     ecx, [esi+40h]
0x6C9D91: lea     eax, [esp+8+a2]
0x6C9D95: push    eax; a2
0x6C9D96: add     ecx, 4Ch ; 'L'; this
0x6C9D99: mov     [esp+0Ch+a2], esi
0x6C9D9D: call    sub_73A5E0
0x6C9DA2: mov     ecx, [esp+8+arg_18]
0x6C9DA6: fld     [esp+8+arg_4]
0x6C9DAA: push    1; int
0x6C9DAC: push    ecx; int
0x6C9DAD: sub     esp, 8
0x6C9DB0: fstp    [esp+18h+var_14]; float
0x6C9DB4: fld     [esp+18h+arg_14]
0x6C9DB8: fstp    [esp+18h+var_18]; float
0x6C9DBB: push    0; char
0x6C9DBD: push    edi; int
0x6C9DBE: mov     edi, [esp+20h+arg_0]
0x6C9DC2: mov     ecx, edi
0x6C9DC4: call    sub_6C9BA0
0x6C9DC9: test    al, al
0x6C9DCB: jz      short loc_6C9DF8
0x6C9DCD: fld     [esp+8+arg_4]
0x6C9DD1: push    1; char
0x6C9DD3: push    ecx
0x6C9DD4: mov     ecx, esi
0x6C9DD6: fstp    [esp+10h+var_10]; float
0x6C9DD9: call    sub_6C9CB0
0x6C9DDE: fld     dword ptr [esi+3Ch]
0x6C9DE1: fdiv    dword ptr [esi+28h]
0x6C9DE4: mov     al, 1
0x6C9DE6: fstp    dword ptr [esi+54h]
0x6C9DE9: fld     [esp+8+arg_8]
0x6C9DED: fdiv    dword ptr [edi+28h]
0x6C9DF0: fstp    dword ptr [edi+54h]
0x6C9DF3: pop     edi
0x6C9DF4: pop     esi
0x6C9DF5: retn    1Ch
0x6C9DF8: pop     edi
0x6C9DF9: xor     al, al
0x6C9DFB: pop     esi
0x6C9DFC: retn    1Ch
