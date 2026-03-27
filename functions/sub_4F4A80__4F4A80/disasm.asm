0x4F4A80: fldz
0x4F4A82: push    esi
0x4F4A83: mov     esi, [esp+4+arg_C]
0x4F4A87: fstp    qword ptr [esi]
0x4F4A89: push    edi
0x4F4A8A: mov     edi, [esp+8+arg_0]
0x4F4A8E: test    edi, edi
0x4F4A90: jz      short def_4F4AB8
0x4F4A92: mov     eax, [edi]
0x4F4A94: mov     edx, [eax+190h]
0x4F4A9A: mov     ecx, edi
0x4F4A9C: call    edx
0x4F4A9E: test    al, al
0x4F4AA0: jz      short def_4F4AB8
0x4F4AA2: mov     eax, [edi]
0x4F4AA4: mov     edx, [eax+18Ch]
0x4F4AAA: mov     ecx, edi
0x4F4AAC: call    edx
0x4F4AAE: add     eax, 0FFFFFFFAh; switch 5 cases
0x4F4AB1: cmp     eax, 4
0x4F4AB4: ja      short def_4F4AB8
0x4F4AB6: fld1
0x4F4AB8: jmp     ds:jpt_4F4AB8[eax*4]; switch jump
0x4F4ABF: fld     qword ptr [esi]; jumptable 004F4AB8 case 10
0x4F4AC1: fadd    st, st(1)
0x4F4AC3: fstp    qword ptr [esi]
0x4F4AC5: fld     qword ptr [esi]; jumptable 004F4AB8 case 9
0x4F4AC7: fadd    st, st(1)
0x4F4AC9: fstp    qword ptr [esi]
0x4F4ACB: fld     qword ptr [esi]; jumptable 004F4AB8 cases 7,8
0x4F4ACD: fadd    st, st(1)
0x4F4ACF: fstp    qword ptr [esi]
0x4F4AD1: fadd    qword ptr [esi]; jumptable 004F4AB8 case 6
0x4F4AD3: fstp    qword ptr [esi]
0x4F4AD5: jmp     short $+2
