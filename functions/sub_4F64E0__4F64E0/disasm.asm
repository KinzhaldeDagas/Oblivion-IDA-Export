0x4F64E0: fldz
0x4F64E2: push    esi
0x4F64E3: mov     esi, [esp+4+arg_0]
0x4F64E7: test    esi, esi
0x4F64E9: push    edi
0x4F64EA: mov     edi, [esp+8+arg_C]
0x4F64EE: fstp    qword ptr [edi]
0x4F64F0: jz      def_4F6559
0x4F64F6: mov     eax, [esi]
0x4F64F8: mov     edx, [eax+190h]
0x4F64FE: mov     ecx, esi
0x4F6500: call    edx
0x4F6502: test    al, al
0x4F6504: jz      short def_4F6559
0x4F6506: mov     eax, [esi]
0x4F6508: mov     edx, [eax+380h]
0x4F650E: mov     ecx, esi
0x4F6510: call    edx
0x4F6512: test    eax, eax
0x4F6514: jnz     short loc_4F653B
0x4F6516: mov     eax, [esi]
0x4F6518: mov     edx, [eax+27Ch]
0x4F651E: mov     ecx, esi
0x4F6520: call    edx
0x4F6522: test    eax, eax
0x4F6524: jnz     short loc_4F6543
0x4F6526: mov     eax, [esi]
0x4F6528: mov     edx, [eax+170h]
0x4F652E: mov     ecx, esi
0x4F6530: call    edx
0x4F6532: cmp     byte ptr [eax+104h], 4
0x4F6539: jnz     short loc_4F6543
0x4F653B: fld     qword ptr ds:0A3F3E8h
0x4F6541: fstp    qword ptr [edi]
0x4F6543: mov     eax, [esi]
0x4F6545: mov     edx, [eax+18Ch]
0x4F654B: mov     ecx, esi
0x4F654D: call    edx
0x4F654F: add     eax, 0FFFFFFFFh; switch 5 cases
0x4F6552: cmp     eax, 4
0x4F6555: ja      short def_4F6559
0x4F6557: fld1
0x4F6559: jmp     ds:jpt_4F6559[eax*4]; switch jump
0x4F6560: fld     qword ptr [edi]; jumptable 004F6559 case 5
0x4F6562: fadd    st, st(1)
0x4F6564: fstp    qword ptr [edi]
0x4F6566: fld     qword ptr [edi]; jumptable 004F6559 case 4
0x4F6568: fadd    st, st(1)
0x4F656A: fstp    qword ptr [edi]
0x4F656C: fld     qword ptr [edi]; jumptable 004F6559 cases 2,3
0x4F656E: fadd    st, st(1)
0x4F6570: fstp    qword ptr [edi]
0x4F6572: fadd    qword ptr [edi]; jumptable 004F6559 case 1
0x4F6574: fstp    qword ptr [edi]
0x4F6576: jmp     short $+2
