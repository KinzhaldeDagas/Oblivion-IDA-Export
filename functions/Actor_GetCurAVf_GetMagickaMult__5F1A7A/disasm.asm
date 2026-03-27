0x5F1A7A: mov     edx, [eax+288h]
0x5F1A80: push    28h ; '('
0x5F1A82: call    edx
0x5F1A84: fdiv    qword ptr ds:0A3F3E8h
0x5F1A8A: fstp    [esp+4+arg_C]
0x5F1A8E: fldz
0x5F1A90: fcomp   [esp+4+arg_C]
0x5F1A94: fnstsw  ax
0x5F1A96: test    ah, 44h
0x5F1A99: jp      short loc_5F1AA1
0x5F1A9B: fld1
0x5F1A9D: fstp    [esp+4+arg_C]
0x5F1AA1: mov     eax, [esi]
0x5F1AA3: mov     edx, [eax+170h]
0x5F1AA9: mov     edi, [esi+58h]
0x5F1AAC: mov     ecx, esi
0x5F1AAE: xor     ebp, ebp
0x5F1AB0: call    edx
0x5F1AB2: mov     ebx, eax
0x5F1AB4: test    ebx, ebx
0x5F1AB6: jz      short loc_5F1ACA
0x5F1AB8: mov     eax, [esi]
0x5F1ABA: mov     edx, [eax+190h]
0x5F1AC0: mov     ecx, esi
0x5F1AC2: call    edx
0x5F1AC4: test    al, al
0x5F1AC6: jz      short loc_5F1ACA
0x5F1AC8: mov     ebp, ebx
0x5F1ACA: mov     eax, [edi]
0x5F1ACC: mov     edx, [eax+26Ch]
0x5F1AD2: push    esi
0x5F1AD3: push    9
0x5F1AD5: push    ebp
0x5F1AD6: mov     ecx, edi
0x5F1AD8: call    edx
0x5F1ADA: fmul    [esp+10h+arg_0]
0x5F1ADE: pop     edi
0x5F1ADF: pop     ebx
0x5F1AE0: fstp    [esp+8+arg_0]
0x5F1AE4: pop     esi
0x5F1AE5: fld     [esp+4+arg_0]
0x5F1AE9: pop     ebp
0x5F1AEA: retn    4
