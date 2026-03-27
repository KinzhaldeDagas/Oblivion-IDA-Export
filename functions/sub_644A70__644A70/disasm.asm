0x644A70: push    ebx
0x644A71: push    esi
0x644A72: mov     esi, ecx
0x644A74: mov     eax, [esi]
0x644A76: mov     edx, [eax+184h]
0x644A7C: push    edi
0x644A7D: call    edx
0x644A7F: cmp     dword ptr [esi+2Ch], 0
0x644A83: mov     edi, [esp+0Ch+arg_0]
0x644A87: mov     ebx, eax
0x644A89: jnz     short loc_644A98
0x644A8B: mov     eax, [esi]
0x644A8D: mov     edx, [eax+558h]
0x644A93: push    edi
0x644A94: mov     ecx, esi
0x644A96: call    edx
0x644A98: mov     eax, [esi]
0x644A9A: mov     edx, [eax+55Ch]
0x644AA0: push    edi
0x644AA1: mov     ecx, esi
0x644AA3: call    edx
0x644AA5: fldz
0x644AA7: mov     ecx, [ebx+28h]
0x644AAA: fstp    [esp+0Ch+arg_0]
0x644AAE: test    ecx, ecx
0x644AB0: jz      short loc_644AC3
0x644AB2: call    sub_452A60
0x644AB7: mov     [esp+0Ch+arg_0], eax
0x644ABB: fild    [esp+0Ch+arg_0]
0x644ABF: fstp    [esp+0Ch+arg_0]
0x644AC3: mov     eax, [esi+2Ch]
0x644AC6: test    eax, eax
0x644AC8: jz      short loc_644AE1
0x644ACA: push    0
0x644ACC: push    eax
0x644ACD: mov     ecx, edi
0x644ACF: call    TesObjectREF_GetDistance
0x644AD4: fld     [esp+0Ch+arg_0]
0x644AD8: fcompp
0x644ADA: fnstsw  ax
0x644ADC: test    ah, 5
0x644ADF: jnp     short loc_644AFB
0x644AE1: cmp     dword ptr [esi+2Ch], 0
0x644AE5: jnz     short loc_644AFB
0x644AE7: fld     dword ptr ds:0A30634h
0x644AED: push    ecx
0x644AEE: fstp    [esp+10h+var_10]; float
0x644AF1: push    0; char
0x644AF3: push    edi; int
0x644AF4: mov     ecx, ebx
0x644AF6: call    sub_566DC0
0x644AFB: pop     edi
0x644AFC: pop     esi
0x644AFD: pop     ebx
0x644AFE: retn    4
