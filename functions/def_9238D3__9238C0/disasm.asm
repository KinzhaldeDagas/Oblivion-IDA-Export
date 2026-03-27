0x9238C0: movsx   ecx, byte ptr [esi]; jumptable 009238D3 default case
0x9238C3: cmp     ecx, 10h; switch 17 cases
0x9238C6: mov     [esp+arg_2C], ecx
0x9238CA: ja      short def_9238D3
0x9238CC: movzx   ecx, ds:byte_923AF4[ecx]
0x9238D3: jmp     ds:jpt_9238D3[ecx*4]; switch jump
0x9238DA: mov     edx, [edi]; jumptable 009238D3 case 3
0x9238DC: mov     ecx, [ebp+8]
0x9238DF: mov     [ebx], edx
0x9238E1: fld     dword ptr [eax+0Ch]
0x9238E4: fmul    dword ptr [ecx+0F4h]
0x9238EA: mov     edx, [esp+arg_28]
0x9238EE: add     ecx, 0F4h ; 'ô'
0x9238F4: push    2
0x9238F6: fstp    dword ptr [ebx+4]
0x9238F9: add     ebx, edx
0x9238FB: mov     edx, [edi+4]
0x9238FE: mov     [ebx], edx
0x923900: fld     dword ptr [eax+3Ch]
0x923903: fmul    dword ptr [ecx]
0x923905: mov     edx, [esp+4+arg_28]
0x923909: mov     ecx, eax
0x92390B: fstp    dword ptr [ebx+4]
0x92390E: add     ebx, edx
0x923910: call    sub_8F0EE0
0x923915: add     edi, 8
0x923918: add     esi, 8
0x92391B: jmp     short def_9238D3
0x92391D: mov     ecx, [ebp+8]; jumptable 009238D3 cases 2,5,6,11,13
0x923920: add     ecx, 0F4h ; 'ô'
0x923926: mov     [esp+arg_14], ecx
0x92392A: lea     ebx, [ebx+0]
0x923930: mov     edx, [edi]
0x923932: mov     ecx, [esp+arg_14]
0x923936: mov     [ebx], edx
0x923938: fld     dword ptr [eax+0Ch]
0x92393B: fmul    dword ptr [ecx]
0x92393D: mov     edx, [esp+arg_28]
0x923941: push    1
0x923943: mov     ecx, eax
0x923945: fstp    dword ptr [ebx+4]
0x923948: add     ebx, edx
0x92394A: call    sub_8F0EE0
0x92394F: movzx   edx, byte ptr [esi+1]
0x923953: movsx   ecx, byte ptr [esi+edx]
0x923957: add     esi, edx
0x923959: mov     edx, [esp+arg_2C]
0x92395D: add     edi, 4
0x923960: cmp     ecx, edx
0x923962: jz      short loc_923930
0x923964: jmp     def_9238D3
0x923969: mov     edx, [ebp+8]; jumptable 009238D3 cases 4,9,10,12
0x92396C: add     edx, 0F4h ; 'ô'
0x923972: mov     [esp+arg_14], edx
0x923976: mov     ecx, [edi]
0x923978: mov     edx, [esp+arg_14]
0x92397C: mov     [ebx], ecx
0x92397E: fld     dword ptr [eax+1Ch]
0x923981: fmul    dword ptr [edx]
0x923983: mov     ecx, [esp+arg_28]
0x923987: push    1
0x923989: fstp    dword ptr [ebx+4]
0x92398C: add     ebx, ecx
0x92398E: mov     ecx, eax
0x923990: call    sub_8F0ED0
0x923995: movzx   ecx, byte ptr [esi+1]
0x923999: movsx   edx, byte ptr [esi+ecx]
0x92399D: add     esi, ecx
0x92399F: mov     ecx, [esp+arg_2C]
0x9239A3: add     edi, 4
0x9239A6: cmp     edx, ecx
0x9239A8: jz      short loc_923976
0x9239AA: jmp     def_9238D3
0x9239AF: mov     ecx, [esi+4]; jumptable 009238D3 case 7
0x9239B2: mov     edx, [edi]
0x9239B4: mov     [ecx], edx
0x9239B6: fld     dword ptr [eax+0Ch]
0x9239B9: mov     edx, [ebp+8]
0x9239BC: fmul    dword ptr [edx+0F4h]
0x9239C2: add     edx, 0F4h ; 'ô'
0x9239C8: mov     [esp+arg_14], edx
0x9239CC: push    2
0x9239CE: fstp    dword ptr [ecx+4]
0x9239D1: mov     edx, [esi+10h]
0x9239D4: add     ecx, edx
0x9239D6: mov     edx, [edi+4]
0x9239D9: mov     [ecx], edx
0x9239DB: fld     dword ptr [eax+3Ch]
0x9239DE: mov     edx, [esp+4+arg_14]
0x9239E2: fmul    dword ptr [edx]
0x9239E4: fstp    dword ptr [ecx+4]
0x9239E7: mov     ecx, eax
0x9239E9: call    sub_8F0EE0
0x9239EE: add     edi, 8
0x9239F1: add     esi, 14h
0x9239F4: jmp     def_9238D3
0x9239F9: mov     ecx, [esi+4]; jumptable 009238D3 case 8
0x9239FC: mov     edx, [edi]
0x9239FE: mov     [ecx], edx
0x923A00: fld     dword ptr [eax+0Ch]
0x923A03: mov     edx, [ebp+8]
0x923A06: fmul    dword ptr [edx+0F4h]
0x923A0C: add     edx, 0F4h ; 'ô'
0x923A12: mov     [esp+arg_14], edx
0x923A16: push    1
0x923A18: fstp    dword ptr [ecx+4]
0x923A1B: mov     edx, [esi+10h]
0x923A1E: add     ecx, edx
0x923A20: mov     edx, [edi+4]
0x923A23: mov     [ecx], edx
0x923A25: fld     dword ptr [eax+3Ch]
0x923A28: mov     edx, [esp+4+arg_14]
0x923A2C: fmul    dword ptr [edx]
0x923A2E: fstp    dword ptr [ecx+4]
0x923A31: mov     edx, [esi+10h]
0x923A34: add     ecx, edx
0x923A36: mov     edx, [edi+8]
0x923A39: mov     [ecx], edx
0x923A3B: fld     dword ptr [eax+7Ch]
0x923A3E: mov     edx, [esp+4+arg_14]
0x923A42: fmul    dword ptr [edx]
0x923A44: fstp    dword ptr [ecx+4]
0x923A47: lea     ecx, [eax+60h]
0x923A4A: call    sub_8F0ED0
0x923A4F: add     edi, 0Ch
0x923A52: add     esi, 18h
0x923A55: jmp     def_9238D3
0x923A5A: movzx   ecx, byte ptr [esi+1]; jumptable 009238D3 cases 14-16
0x923A5E: add     esi, ecx
0x923A60: jmp     def_9238D3
0x923A65: pop     edi; jumptable 009238D3 case 0
0x923A66: pop     esi
0x923A67: mov     eax, 1
0x923A6C: pop     ebx
0x923A6D: mov     esp, ebp
0x923A6F: pop     ebp
0x923A70: retn
