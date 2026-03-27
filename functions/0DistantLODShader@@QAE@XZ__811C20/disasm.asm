0x811C20: push    0FFFFFFFFh
0x811C22: push    offset ??0DistantLODShader@@QAE@XZ_SEH
0x811C27: mov     eax, large fs:0
0x811C2D: push    eax
0x811C2E: sub     esp, 8
0x811C31: push    ebx
0x811C32: push    ebp
0x811C33: push    esi
0x811C34: push    edi
0x811C35: mov     eax, ds:0B30AACh
0x811C3A: xor     eax, esp
0x811C3C: push    eax
0x811C3D: lea     eax, [esp+28h+var_C]
0x811C41: mov     large fs:0, eax
0x811C47: mov     esi, ecx
0x811C49: mov     [esp+28h+var_10], esi
0x811C4D: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x811C52: push    offset sub_4027D0; a5
0x811C57: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x811C5C: push    1; size
0x811C5E: push    4; a2
0x811C60: lea     eax, [esi+7Ch]
0x811C63: push    eax; a1
0x811C64: mov     [esp+3Ch+var_4], 0
0x811C6C: mov     dword ptr [esi], offset ??_7DistantLODShader@@6B@; const DistantLODShader::`vftable'
0x811C72: call    ArrayConstructor
0x811C77: push    offset sub_7016A0; a5
0x811C7C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x811C81: push    4; size
0x811C83: push    4; a2
0x811C85: lea     edi, [esi+8Ch]
0x811C8B: push    edi; a1
0x811C8C: mov     byte ptr [esp+3Ch+var_4], 1
0x811C91: call    ArrayConstructor
0x811C96: push    offset sub_7016A0; a5
0x811C9B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x811CA0: push    2; size
0x811CA2: push    4; a2
0x811CA4: lea     ebx, [esi+9Ch]
0x811CAA: push    ebx; a1
0x811CAB: mov     byte ptr [esp+3Ch+var_4], 2
0x811CB0: call    ArrayConstructor
0x811CB5: fldz
0x811CB7: fst     dword ptr [esi+0B0h]
0x811CBD: mov     byte ptr [esp+28h+var_4], 3
0x811CC2: fst     dword ptr [esi+0B4h]
0x811CC8: mov     ebp, edi
0x811CCA: fst     dword ptr [esi+0B8h]
0x811CD0: mov     [esp+28h+var_14], 4
0x811CD8: fst     dword ptr [esi+0BCh]
0x811CDE: fst     dword ptr [esi+0C0h]
0x811CE4: fst     dword ptr [esi+0C4h]
0x811CEA: fst     dword ptr [esi+0C8h]
0x811CF0: fst     dword ptr [esi+0CCh]
0x811CF6: fst     dword ptr [esi+0D0h]
0x811CFC: fst     dword ptr [esi+0D4h]
0x811D02: fst     dword ptr [esi+0D8h]
0x811D08: fst     dword ptr [esi+0DCh]
0x811D0E: fst     dword ptr [esi+0E0h]
0x811D14: fst     dword ptr [esi+0E4h]
0x811D1A: fst     dword ptr [esi+0E8h]
0x811D20: fst     dword ptr [esi+0ECh]
0x811D26: fst     dword ptr [esi+0F0h]
0x811D2C: fst     dword ptr [esi+0F4h]
0x811D32: fst     dword ptr [esi+0F8h]
0x811D38: fst     dword ptr [esi+0FCh]
0x811D3E: fst     dword ptr [esi+100h]
0x811D44: fst     dword ptr [esi+104h]
0x811D4A: fst     dword ptr [esi+108h]
0x811D50: fst     dword ptr [esi+10Ch]
0x811D56: mov     edi, [ebp+0]
0x811D59: test    edi, edi
0x811D5B: jz      short loc_811D84
0x811D5D: lea     ecx, [edi+4]
0x811D60: fstp    st
0x811D62: push    ecx; lpAddend
0x811D63: call    dword ptr ds:0A2807Ch
0x811D69: test    eax, eax
0x811D6B: jnz     short loc_811D7B
0x811D6D: test    edi, edi
0x811D6F: jz      short loc_811D7B
0x811D71: mov     edx, [edi]
0x811D73: mov     eax, [edx]
0x811D75: push    1
0x811D77: mov     ecx, edi
0x811D79: call    eax
0x811D7B: fldz
0x811D7D: mov     dword ptr [ebp+0], 0
0x811D84: add     ebp, 4
0x811D87: sub     [esp+28h+var_14], 1
0x811D8C: jnz     short loc_811D56
0x811D8E: mov     ebp, ebx
0x811D90: mov     ebx, 2
0x811D95: mov     edi, [ebp+0]
0x811D98: test    edi, edi
0x811D9A: jz      short loc_811DC3
0x811D9C: lea     ecx, [edi+4]
0x811D9F: fstp    st
0x811DA1: push    ecx; lpAddend
0x811DA2: call    dword ptr ds:0A2807Ch
0x811DA8: test    eax, eax
0x811DAA: jnz     short loc_811DBA
0x811DAC: test    edi, edi
0x811DAE: jz      short loc_811DBA
0x811DB0: mov     edx, [edi]
0x811DB2: mov     eax, [edx]
0x811DB4: push    1
0x811DB6: mov     ecx, edi
0x811DB8: call    eax
0x811DBA: fldz
0x811DBC: mov     dword ptr [ebp+0], 0
0x811DC3: add     ebp, 4
0x811DC6: sub     ebx, 1
0x811DC9: jnz     short loc_811D95
0x811DCB: mov     edi, [esi+24h]
0x811DCE: mov     ebx, [esp+28h+arg_0]
0x811DD2: cmp     edi, ebx
0x811DD4: jz      short loc_811E0F
0x811DD6: test    edi, edi
0x811DD8: jz      short loc_811DFA
0x811DDA: lea     ecx, [edi+4]
0x811DDD: fstp    st
0x811DDF: push    ecx; lpAddend
0x811DE0: call    dword ptr ds:0A2807Ch
0x811DE6: test    eax, eax
0x811DE8: jnz     short loc_811DF8
0x811DEA: test    edi, edi
0x811DEC: jz      short loc_811DF8
0x811DEE: mov     edx, [edi]
0x811DF0: mov     eax, [edx]
0x811DF2: push    1
0x811DF4: mov     ecx, edi
0x811DF6: call    eax
0x811DF8: fldz
0x811DFA: test    ebx, ebx
0x811DFC: mov     [esi+24h], ebx
0x811DFF: jz      short loc_811E0F
0x811E01: add     ebx, 4
0x811E04: fstp    st
0x811E06: push    ebx; lpAddend
0x811E07: call    dword ptr ds:0A28078h
0x811E0D: fldz
0x811E0F: fstp    dword ptr [esi+80h]
0x811E15: mov     ecx, ds:0B25AD0h
0x811E1B: mov     [esi+0B0h], ecx
0x811E21: mov     edx, ds:0B25AD4h
0x811E27: mov     [esi+0B4h], edx
0x811E2D: mov     eax, ds:0B25AD8h
0x811E32: mov     [esi+0B8h], eax
0x811E38: mov     ecx, ds:0B25ADCh
0x811E3E: mov     [esi+0BCh], ecx
0x811E44: cmp     dword ptr ds:0B42F48h, 2
0x811E4B: jl      short loc_811E58
0x811E4D: mov     word ptr [esi+0ACh], 0E4h ; 'ä'
0x811E56: jmp     short loc_811E61
0x811E58: mov     word ptr [esi+0ACh], 50h ; 'P'
0x811E61: movzx   eax, word ptr [esi+0ACh]
0x811E68: xor     ecx, ecx
0x811E6A: mov     edx, 10h
0x811E6F: mul     edx
0x811E71: seto    cl
0x811E74: neg     ecx
0x811E76: or      ecx, eax
0x811E78: push    ecx; Size
0x811E79: call    FormHeapAlloc
0x811E7E: mov     [esi+0A4h], eax
0x811E84: add     esp, 4
0x811E87: mov     dword ptr [esi+0A8h], 0
0x811E91: mov     eax, esi
0x811E93: mov     ecx, dword ptr [esp+28h+var_C]
0x811E97: mov     large fs:0, ecx
0x811E9E: pop     ecx
0x811E9F: pop     edi
0x811EA0: pop     esi
0x811EA1: pop     ebp
0x811EA2: pop     ebx
0x811EA3: add     esp, 14h
0x811EA6: retn    4
