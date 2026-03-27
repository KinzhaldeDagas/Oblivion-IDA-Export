0x6AB6F0: sub     esp, 1Ch
0x6AB6F3: push    edi
0x6AB6F4: mov     edi, ecx
0x6AB6F6: mov     ecx, [esp+20h+arg_0]
0x6AB6FA: lea     eax, [esp+20h+var_1C]
0x6AB6FE: push    eax
0x6AB6FF: push    ecx
0x6AB700: mov     ecx, [edi+300h]
0x6AB706: mov     [esp+28h+var_1C], 0
0x6AB70E: call    NiTMap_GetAt
0x6AB713: cmp     byte ptr ds:0B16178h, 0
0x6AB71A: jz      loc_6AB83C
0x6AB720: cmp     byte ptr [edi+0A4h], 0
0x6AB727: push    esi
0x6AB728: mov     esi, [esp+24h+var_1C]
0x6AB72C: jz      short loc_6AB73F
0x6AB72E: test    esi, esi
0x6AB730: jz      loc_6AB83B
0x6AB736: test    byte ptr [esi], 21h
0x6AB739: jz      loc_6AB83B
0x6AB73F: test    esi, esi
0x6AB741: jz      loc_6AB83B
0x6AB747: cmp     byte ptr [edi+0A5h], 0
0x6AB74E: jz      short loc_6AB781
0x6AB750: test    byte ptr [esi], 20h
0x6AB753: jnz     short loc_6AB781
0x6AB755: mov     ecx, esi
0x6AB757: call    sub_6B6B90
0x6AB75C: fsub    dword ptr ds:0B161B8h
0x6AB762: push    ecx
0x6AB763: mov     ecx, esi
0x6AB765: fstp    [esp+28h+arg_0]
0x6AB769: fld     [esp+28h+arg_0]
0x6AB76D: fstp    [esp+28h+var_28]; float
0x6AB770: call    sub_6B6B20
0x6AB775: test    dword ptr [esi], 1000h
0x6AB77B: jnz     loc_6AB83B
0x6AB781: fld     dword ptr [esi+3Ch]
0x6AB784: push    ecx
0x6AB785: mov     ecx, esi
0x6AB787: fstp    [esp+28h+var_28]; float
0x6AB78A: call    sub_6B6F20
0x6AB78F: test    byte ptr [esi], 2
0x6AB792: jz      loc_6AB82F
0x6AB798: mov     edx, [esi+20h]
0x6AB79B: mov     eax, [esi+24h]
0x6AB79E: mov     ecx, [esi+28h]
0x6AB7A1: mov     [esp+24h+var_18], edx
0x6AB7A5: fld     [esp+24h+var_18]
0x6AB7A9: fsub    dword ptr [edi+80h]
0x6AB7AF: mov     [esp+24h+var_14], eax
0x6AB7B3: mov     [esp+24h+var_10], ecx
0x6AB7B7: fstp    [esp+24h+var_C]
0x6AB7BB: fld     [esp+24h+var_14]
0x6AB7BF: fsub    dword ptr [edi+84h]
0x6AB7C5: fstp    [esp+24h+var_8]
0x6AB7C9: fld     [esp+24h+var_10]
0x6AB7CD: fsub    dword ptr [edi+88h]
0x6AB7D3: fstp    [esp+24h+var_4]
0x6AB7D7: fld     [esp+24h+var_8]
0x6AB7DB: fld     [esp+24h+var_C]
0x6AB7DF: fld     [esp+24h+var_4]
0x6AB7E3: fld     st(1)
0x6AB7E5: fmulp   st(2), st
0x6AB7E7: fld     st(2)
0x6AB7E9: fmulp   st(3), st
0x6AB7EB: fxch    st(1)
0x6AB7ED: faddp   st(2), st
0x6AB7EF: fmul    st, st
0x6AB7F1: faddp   st(1), st
0x6AB7F3: fstp    [esp+24h+arg_0]
0x6AB7F7: fld     [esp+24h+arg_0]
0x6AB7FB: call    __CIsqrt
0x6AB800: fstp    [esp+24h+arg_0]
0x6AB804: mov     edx, [esi+38h]
0x6AB807: fld     [esp+24h+arg_0]
0x6AB80B: test    edx, edx
0x6AB80D: fild    dword ptr [esi+38h]
0x6AB810: jge     short loc_6AB818
0x6AB812: fadd    dword ptr ds:0A2FC78h
0x6AB818: fcompp
0x6AB81A: fnstsw  ax
0x6AB81C: test    ah, 5
0x6AB81F: jp      short loc_6AB825
0x6AB821: mov     al, 1
0x6AB823: jmp     short loc_6AB827
0x6AB825: xor     al, al
0x6AB827: push    eax
0x6AB828: mov     ecx, esi
0x6AB82A: call    sub_6B7130
0x6AB82F: mov     eax, [esp+24h+arg_4]
0x6AB833: push    eax
0x6AB834: mov     ecx, esi
0x6AB836: call    sub_6B6A50
0x6AB83B: pop     esi
0x6AB83C: xor     eax, eax
0x6AB83E: pop     edi
0x6AB83F: add     esp, 1Ch
0x6AB842: retn    8
