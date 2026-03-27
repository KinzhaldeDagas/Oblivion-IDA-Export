0x8D9AB0: mov     eax, [esp+arg_4]
0x8D9AB4: sub     esp, 10h
0x8D9AB7: cmp     eax, 1
0x8D9ABA: push    esi
0x8D9ABB: mov     esi, ecx
0x8D9ABD: jnz     short loc_8D9AD8
0x8D9ABF: mov     ecx, [esi+8]
0x8D9AC2: mov     edx, [esp+14h+arg_0]
0x8D9AC6: mov     eax, [esi]
0x8D9AC8: push    ecx
0x8D9AC9: push    0
0x8D9ACB: push    edx
0x8D9ACC: mov     ecx, esi
0x8D9ACE: call    dword ptr [eax+8]
0x8D9AD1: pop     esi
0x8D9AD2: add     esp, 10h
0x8D9AD5: retn    8
0x8D9AD8: push    edi
0x8D9AD9: mov     edi, [esp+18h+arg_0]
0x8D9ADD: fld     dword ptr [edi+18h]
0x8D9AE0: fld     dword ptr [edi+14h]
0x8D9AE3: fst     [esp+18h+var_10]
0x8D9AE7: fld     st(1)
0x8D9AE9: fstp    [esp+18h+var_C]
0x8D9AED: fxch    st(1)
0x8D9AEF: fsub    st, st(1)
0x8D9AF1: fstp    [esp+18h+var_8]
0x8D9AF5: fstp    st
0x8D9AF7: fld     dword ptr ds:0A2FAA8h
0x8D9AFD: fld     [esp+18h+var_8]
0x8D9B01: fucompp
0x8D9B03: fnstsw  ax
0x8D9B05: test    ah, 44h
0x8D9B08: jp      short loc_8D9B14
0x8D9B0A: mov     [esp+18h+var_4], 0
0x8D9B12: jmp     short loc_8D9B22
0x8D9B14: fld     dword ptr ds:0A2F948h
0x8D9B1A: fdiv    [esp+18h+var_8]
0x8D9B1E: fstp    [esp+18h+var_4]
0x8D9B22: push    1
0x8D9B24: push    0
0x8D9B26: mov     ecx, edi
0x8D9B28: call    sub_89BF50
0x8D9B2D: mov     eax, ds:0BA7D98h
0x8D9B32: cmp     dword ptr [eax+4], 1
0x8D9B36: jnz     short loc_8D9B45
0x8D9B38: pop     edi
0x8D9B39: mov     eax, 2
0x8D9B3E: pop     esi
0x8D9B3F: add     esp, 10h
0x8D9B42: retn    8
0x8D9B45: lea     ecx, [esp+18h+var_10]
0x8D9B49: push    ecx
0x8D9B4A: push    edi
0x8D9B4B: mov     ecx, esi
0x8D9B4D: call    sub_8D7920
0x8D9B52: mov     edx, ds:0BA7D98h
0x8D9B58: cmp     dword ptr [edx+4], 1
0x8D9B5C: jz      short loc_8D9B38
0x8D9B5E: mov     ecx, [esi+8]
0x8D9B61: mov     eax, [esi]
0x8D9B63: push    ecx
0x8D9B64: push    0
0x8D9B66: push    edi
0x8D9B67: mov     ecx, esi
0x8D9B69: call    dword ptr [eax+8]
0x8D9B6C: pop     edi
0x8D9B6D: pop     esi
0x8D9B6E: add     esp, 10h
0x8D9B71: retn    8
