0x7ED6C0: mov     eax, [esp+arg_0]
0x7ED6C4: sub     esp, 2Ch
0x7ED6C7: cmp     eax, 8
0x7ED6CA: push    ebx
0x7ED6CB: push    ebp
0x7ED6CC: push    esi
0x7ED6CD: push    edi
0x7ED6CE: jge     loc_7EDCC4
0x7ED6D4: mov     ebp, [esp+3Ch+arg_4]
0x7ED6D8: test    ebp, ebp
0x7ED6DA: jnz     short loc_7ED715
0x7ED6DC: mov     ecx, ds:0B25AD0h
0x7ED6E2: mov     edx, ds:0B25AD4h
0x7ED6E8: add     eax, 1
0x7ED6EB: movzx   eax, ax
0x7ED6EE: shl     eax, 4
0x7ED6F1: add     eax, offset dword_B46498
0x7ED6F6: mov     [eax], ecx
0x7ED6F8: mov     ecx, ds:0B25AD8h
0x7ED6FE: mov     [eax+4], edx
0x7ED701: mov     edx, ds:0B25ADCh
0x7ED707: mov     [eax+8], ecx
0x7ED70A: mov     [eax+0Ch], edx
0x7ED70D: pop     edi
0x7ED70E: pop     esi
0x7ED70F: pop     ebp
0x7ED710: pop     ebx
0x7ED711: add     esp, 2Ch
0x7ED714: retn
0x7ED715: lea     eax, [esp+3Ch+var_28]
0x7ED719: push    eax
0x7ED71A: mov     ecx, ebp
0x7ED71C: call    sub_405AD0
0x7ED721: mov     esi, [eax]
0x7ED723: mov     eax, [esp+3Ch+var_28]
0x7ED727: test    eax, eax
0x7ED729: jz      short loc_7ED749
0x7ED72B: mov     edi, eax
0x7ED72D: add     eax, 4
0x7ED730: push    eax; lpAddend
0x7ED731: call    dword ptr ds:0A2807Ch
0x7ED737: test    eax, eax
0x7ED739: jnz     short loc_7ED749
0x7ED73B: test    edi, edi
0x7ED73D: jz      short loc_7ED749
0x7ED73F: mov     edx, [edi]
0x7ED741: mov     eax, [edx]
0x7ED743: push    1
0x7ED745: mov     ecx, edi
0x7ED747: call    eax
0x7ED749: mov     bl, [ebp+0FCh]
0x7ED74F: fld     [esp+3Ch+arg_8]
0x7ED753: test    bl, bl
0x7ED755: fld1
0x7ED757: jnz     loc_7ED8FC
0x7ED75D: test    esi, esi
0x7ED75F: fstp    st
0x7ED761: jz      short loc_7ED7E0
0x7ED763: mov     ecx, [esi+108h]
0x7ED769: fstp    st
0x7ED76B: mov     edx, [esi+10Ch]
0x7ED771: mov     eax, [esi+110h]
0x7ED777: mov     [esp+3Ch+var_10], ecx
0x7ED77B: lea     ecx, [esp+3Ch+var_10]
0x7ED77F: mov     [esp+3Ch+var_C], edx
0x7ED783: mov     [esp+3Ch+var_8], eax
0x7ED787: call    sub_43F350
0x7ED78C: fstp    st
0x7ED78E: fld     [esp+3Ch+var_10]
0x7ED792: sub     esp, 10h
0x7ED795: fstp    [esp+4Ch+var_20]
0x7ED799: mov     ecx, [esp+4Ch+var_20]
0x7ED79D: fld     [esp+4Ch+var_C]
0x7ED7A1: mov     eax, esp
0x7ED7A3: fstp    [esp+4Ch+var_1C]
0x7ED7A7: mov     edx, [esp+4Ch+var_1C]
0x7ED7AB: fld     [esp+4Ch+var_8]
0x7ED7AF: mov     [eax], ecx
0x7ED7B1: fstp    [esp+4Ch+var_18]
0x7ED7B5: mov     ecx, [esp+4Ch+var_18]
0x7ED7B9: fld1
0x7ED7BB: mov     [eax+4], edx
0x7ED7BE: mov     [eax+8], ecx
0x7ED7C1: fstp    [esp+4Ch+var_14]
0x7ED7C5: mov     edx, [esp+4Ch+var_14]
0x7ED7C9: mov     [eax+0Ch], edx
0x7ED7CC: mov     eax, [esp+4Ch+arg_0]
0x7ED7D0: add     eax, 11h
0x7ED7D3: push    eax
0x7ED7D4: call    sub_7ECAE0
0x7ED7D9: fld     [esp+50h+arg_8]
0x7ED7DD: add     esp, 14h
0x7ED7E0: cmp     byte ptr ds:0B42EA7h, 0
0x7ED7E7: jz      short loc_7ED805
0x7ED7E9: push    esi
0x7ED7EA: fstp    st
0x7ED7EC: push    offset dword_B40224
0x7ED7F1: call    NiRTTI__IsObjectOfRTTIType
0x7ED7F6: fld     [esp+44h+arg_8]
0x7ED7FA: add     esp, 8
0x7ED7FD: test    al, al
0x7ED7FF: jz      loc_7EDA20
0x7ED805: cmp     byte ptr ds:0B43070h, 0
0x7ED80C: fld     dword ptr [esi+0DCh]
0x7ED812: fstp    [esp+3Ch+var_2C]
0x7ED816: fld     [esp+3Ch+var_2C]
0x7ED81A: jnz     short loc_7ED835
0x7ED81C: fcom    qword ptr ds:0A2F928h
0x7ED822: fnstsw  ax
0x7ED824: test    ah, 41h
0x7ED827: jnz     short loc_7ED835
0x7ED829: fstp    st
0x7ED82B: fld1
0x7ED82D: fstp    [esp+3Ch+var_2C]
0x7ED831: fld     [esp+3Ch+var_2C]
0x7ED835: mov     ecx, [esi+0E0h]
0x7ED83B: mov     edx, [esi+0E4h]
0x7ED841: mov     eax, [esi+0E8h]
0x7ED847: mov     [esp+3Ch+var_20], ecx
0x7ED84B: fld     [esp+3Ch+var_20]
0x7ED84F: fmul    st, st(1)
0x7ED851: mov     [esp+3Ch+var_1C], edx
0x7ED855: mov     [esp+3Ch+var_18], eax
0x7ED859: fstp    [esp+3Ch+var_20]
0x7ED85D: fld     [esp+3Ch+var_1C]
0x7ED861: fmul    st, st(1)
0x7ED863: fstp    [esp+3Ch+var_1C]
0x7ED867: fmul    [esp+3Ch+var_18]
0x7ED86B: fstp    [esp+3Ch+var_18]
0x7ED86F: fldz
0x7ED871: fld     dword ptr ds:0B46924h
0x7ED877: fcom    st(1)
0x7ED879: fnstsw  ax
0x7ED87B: fstp    st(1)
0x7ED87D: test    ah, 41h
0x7ED880: jnz     loc_7ED9B7
0x7ED886: fld     [esp+3Ch+var_1C]
0x7ED88A: fld     qword ptr ds:0A924F8h
0x7ED890: fmul    st, st(1)
0x7ED892: fld     [esp+3Ch+var_20]
0x7ED896: fld     st
0x7ED898: fld     qword ptr ds:0A924F0h
0x7ED89E: fmul    st(1), st
0x7ED8A0: fxch    st(3)
0x7ED8A2: faddp   st(1), st
0x7ED8A4: fld     [esp+3Ch+var_18]
0x7ED8A8: fld     st
0x7ED8AA: faddp   st(2), st
0x7ED8AC: fxch    st(1)
0x7ED8AE: faddp   st(3), st
0x7ED8B0: fxch    st(2)
0x7ED8B2: fstp    [esp+3Ch+var_2C]
0x7ED8B6: fldz
0x7ED8B8: fld     [esp+3Ch+var_2C]
0x7ED8BC: fcom    st(1)
0x7ED8BE: fnstsw  ax
0x7ED8C0: fstp    st(1)
0x7ED8C2: test    ah, 41h
0x7ED8C5: jp      loc_7ED973
0x7ED8CB: fstp    st
0x7ED8CD: fstp    st
0x7ED8CF: fstp    st(1)
0x7ED8D1: fstp    st
0x7ED8D3: fst     [esp+3Ch+var_10]
0x7ED8D7: fst     [esp+3Ch+var_C]
0x7ED8DB: mov     ecx, [esp+3Ch+var_10]
0x7ED8DF: fstp    [esp+3Ch+var_8]
0x7ED8E3: mov     edx, [esp+3Ch+var_C]
0x7ED8E7: mov     eax, [esp+3Ch+var_8]
0x7ED8EB: mov     [esp+3Ch+var_20], ecx
0x7ED8EF: mov     [esp+3Ch+var_1C], edx
0x7ED8F3: mov     [esp+3Ch+var_18], eax
0x7ED8F7: jmp     loc_7ED9B9
0x7ED8FC: test    esi, esi
0x7ED8FE: jz      loc_7EDA1E
0x7ED904: mov     ecx, [esi+88h]
0x7ED90A: mov     edx, [esi+8Ch]
0x7ED910: mov     eax, [esi+90h]
0x7ED916: mov     [esp+3Ch+var_10], ecx
0x7ED91A: fld     [esp+3Ch+var_10]
0x7ED91E: fstp    [esp+3Ch+var_20]
0x7ED922: mov     ecx, [esp+3Ch+var_20]
0x7ED926: mov     [esp+3Ch+var_C], edx
0x7ED92A: fld     [esp+3Ch+var_C]
0x7ED92E: mov     [esp+3Ch+var_8], eax
0x7ED932: fstp    [esp+3Ch+var_1C]
0x7ED936: fld     [esp+3Ch+var_8]
0x7ED93A: mov     edx, [esp+3Ch+var_1C]
0x7ED93E: sub     esp, 10h
0x7ED941: fstp    [esp+4Ch+var_18]
0x7ED945: mov     eax, esp
0x7ED947: mov     [eax], ecx
0x7ED949: fst     [esp+4Ch+var_14]
0x7ED94D: mov     ecx, [esp+4Ch+var_18]
0x7ED951: mov     [eax+4], edx
0x7ED954: mov     edx, [esp+4Ch+var_14]
0x7ED958: mov     [eax+8], ecx
0x7ED95B: mov     [eax+0Ch], edx
0x7ED95E: mov     eax, [esp+4Ch+arg_0]
0x7ED962: add     eax, 9
0x7ED965: push    eax
0x7ED966: call    sub_7ECAE0
0x7ED96B: add     esp, 14h
0x7ED96E: jmp     loc_7EDA22
0x7ED973: fcom    st(4)
0x7ED975: fnstsw  ax
0x7ED977: test    ah, 41h
0x7ED97A: jnz     short loc_7ED984
0x7ED97C: fstp    st
0x7ED97E: fstp    st(3)
0x7ED980: fld1
0x7ED982: jmp     short loc_7ED988
0x7ED984: fdivp   st(4), st
0x7ED986: fxch    st(3)
0x7ED988: fstp    [esp+3Ch+var_2C]
0x7ED98C: fld     qword ptr ds:0A2FC80h
0x7ED992: fadd    st(3), st
0x7ED994: fld     [esp+3Ch+var_2C]
0x7ED998: fld     st
0x7ED99A: fmulp   st(5), st
0x7ED99C: fxch    st(4)
0x7ED99E: fstp    [esp+3Ch+var_10]
0x7ED9A2: fadd    st(2), st
0x7ED9A4: fld     st(3)
0x7ED9A6: fmulp   st(3), st
0x7ED9A8: fxch    st(2)
0x7ED9AA: fstp    [esp+3Ch+var_C]
0x7ED9AE: faddp   st(1), st
0x7ED9B0: fmulp   st(1), st
0x7ED9B2: jmp     loc_7ED8DB
0x7ED9B7: fstp    st
0x7ED9B9: fld     [esp+3Ch+var_20]
0x7ED9BD: fmul    st, st(1)
0x7ED9BF: fstp    [esp+3Ch+var_20]
0x7ED9C3: fld     [esp+3Ch+var_1C]
0x7ED9C7: fmul    st, st(1)
0x7ED9C9: fstp    [esp+3Ch+var_1C]
0x7ED9CD: fld     [esp+3Ch+var_18]
0x7ED9D1: fmul    st, st(1)
0x7ED9D3: fstp    [esp+3Ch+var_18]
0x7ED9D7: fld     [esp+3Ch+var_20]
0x7ED9DB: fstp    [esp+3Ch+var_10]
0x7ED9DF: mov     ecx, [esp+3Ch+var_10]
0x7ED9E3: fld     [esp+3Ch+var_1C]
0x7ED9E7: mov     ds:0B46498h, ecx
0x7ED9ED: fstp    [esp+3Ch+var_C]
0x7ED9F1: mov     edx, [esp+3Ch+var_C]
0x7ED9F5: fld     [esp+3Ch+var_18]
0x7ED9F9: mov     ds:0B4649Ch, edx
0x7ED9FF: fstp    [esp+3Ch+var_8]
0x7EDA03: mov     eax, [esp+3Ch+var_8]
0x7EDA07: fld1
0x7EDA09: mov     ds:0B464A0h, eax
0x7EDA0E: fst     [esp+3Ch+var_4]
0x7EDA12: mov     ecx, [esp+3Ch+var_4]
0x7EDA16: mov     ds:0B464A4h, ecx
0x7EDA1C: jmp     short loc_7EDA22
0x7EDA1E: fstp    st
0x7EDA20: fld1
0x7EDA22: fld     dword ptr [esi+0DCh]
0x7EDA28: mov     cl, ds:0B43070h
0x7EDA2E: test    cl, cl
0x7EDA30: fstp    [esp+3Ch+var_2C]
0x7EDA34: fld     [esp+3Ch+var_2C]
0x7EDA38: jnz     short loc_7EDA51
0x7EDA3A: fcom    qword ptr ds:0A2F928h
0x7EDA40: fnstsw  ax
0x7EDA42: test    ah, 41h
0x7EDA45: jnz     short loc_7EDA51
0x7EDA47: fstp    st
0x7EDA49: fst     [esp+3Ch+var_2C]
0x7EDA4D: fld     [esp+3Ch+var_2C]
0x7EDA51: test    bl, bl
0x7EDA53: mov     edx, [esi+0ECh]
0x7EDA59: mov     eax, [esi+0F0h]
0x7EDA5F: mov     [esp+3Ch+var_10], edx
0x7EDA63: fld     [esp+3Ch+var_10]
0x7EDA67: fmul    st, st(1)
0x7EDA69: mov     edx, [esi+0F4h]
0x7EDA6F: mov     [esp+3Ch+var_C], eax
0x7EDA73: mov     [esp+3Ch+var_8], edx
0x7EDA77: fstp    [esp+3Ch+var_10]
0x7EDA7B: mov     eax, [esp+3Ch+var_10]
0x7EDA7F: fld     [esp+3Ch+var_C]
0x7EDA83: mov     [esp+3Ch+var_20], eax
0x7EDA87: fmul    st, st(1)
0x7EDA89: fstp    [esp+3Ch+var_C]
0x7EDA8D: mov     edx, [esp+3Ch+var_C]
0x7EDA91: mov     [esp+3Ch+var_1C], edx
0x7EDA95: fmul    [esp+3Ch+var_8]
0x7EDA99: fstp    [esp+3Ch+var_8]
0x7EDA9D: mov     eax, [esp+3Ch+var_8]
0x7EDAA1: fld     [esp+3Ch+var_10]
0x7EDAA5: mov     [esp+3Ch+var_18], eax
0x7EDAA9: fmul    st, st(2)
0x7EDAAB: fstp    [esp+3Ch+var_20]
0x7EDAAF: fld     [esp+3Ch+var_1C]
0x7EDAB3: fmul    st, st(2)
0x7EDAB5: fstp    [esp+3Ch+var_1C]
0x7EDAB9: fld     [esp+3Ch+var_18]
0x7EDABD: fmul    st, st(2)
0x7EDABF: fstp    [esp+3Ch+var_18]
0x7EDAC3: fld     dword ptr [ebp+0D4h]
0x7EDAC9: fstp    [esp+3Ch+var_2C]
0x7EDACD: fld     [esp+3Ch+var_2C]
0x7EDAD1: fld     st
0x7EDAD3: fmul    [esp+3Ch+var_20]
0x7EDAD7: fstp    [esp+3Ch+var_20]
0x7EDADB: fld     st
0x7EDADD: fmul    [esp+3Ch+var_1C]
0x7EDAE1: fstp    [esp+3Ch+var_1C]
0x7EDAE5: fmul    [esp+3Ch+var_18]
0x7EDAE9: fstp    [esp+3Ch+var_18]
0x7EDAED: jz      short loc_7EDB17
0x7EDAEF: fcompp
0x7EDAF1: fnstsw  ax
0x7EDAF3: test    ah, 41h
0x7EDAF6: jnz     short loc_7EDB3B
0x7EDAF8: mov     ecx, ds:0B3FA90h
0x7EDAFE: mov     edx, ds:0B3FA94h
0x7EDB04: mov     eax, ds:0B3FA98h
0x7EDB09: mov     [esp+3Ch+var_20], ecx
0x7EDB0D: mov     [esp+3Ch+var_1C], edx
0x7EDB11: mov     [esp+3Ch+var_18], eax
0x7EDB15: jmp     short loc_7EDB3B
0x7EDB17: test    cl, cl
0x7EDB19: fstp    st
0x7EDB1B: fstp    st
0x7EDB1D: jz      short loc_7EDB3B
0x7EDB1F: cmp     byte ptr ds:0B43074h, 0
0x7EDB26: jnz     short loc_7EDB3B
0x7EDB28: fld     dword ptr ds:0B42F4Ch
0x7EDB2E: push    ecx
0x7EDB2F: lea     ecx, [esp+40h+var_20]
0x7EDB33: fstp    [esp+40h+var_40]; float
0x7EDB36: call    NiPoint3__MutliplyByValue
0x7EDB3B: movzx   eax, word ptr ds:0B42E90h
0x7EDB42: fld     dword ptr [ebp+0D8h]
0x7EDB48: cmp     ax, 10Fh
0x7EDB4C: fstp    [esp+3Ch+var_24]
0x7EDB50: jb      short loc_7EDB58
0x7EDB52: cmp     ax, 129h
0x7EDB56: jbe     short loc_7EDB73
0x7EDB58: cmp     ax, 16Ah
0x7EDB5C: jz      short loc_7EDB73
0x7EDB5E: cmp     ax, 16Ch
0x7EDB62: jz      short loc_7EDB73
0x7EDB64: add     eax, 0FFFFFE8Dh
0x7EDB69: cmp     ax, 2
0x7EDB6D: ja      loc_7EDBFD
0x7EDB73: mov     ecx, ds:0B42EB8h
0x7EDB79: mov     ecx, [ecx]
0x7EDB7B: push    4
0x7EDB7D: call    NiNode_GetNiPropertyByID
0x7EDB82: test    eax, eax
0x7EDB84: jz      short loc_7EDBFD
0x7EDB86: mov     edx, ds:0B42EB8h
0x7EDB8C: mov     ecx, [edx]
0x7EDB8E: push    4
0x7EDB90: call    NiNode_GetNiPropertyByID
0x7EDB95: mov     edx, [eax]
0x7EDB97: mov     ecx, eax
0x7EDB99: mov     eax, [edx+54h]
0x7EDB9C: call    eax
0x7EDB9E: cmp     eax, 5
0x7EDBA1: jl      short loc_7EDBFD
0x7EDBA3: mov     ecx, ds:0B42EB8h
0x7EDBA9: mov     ecx, [ecx]
0x7EDBAB: push    4
0x7EDBAD: call    NiNode_GetNiPropertyByID
0x7EDBB2: mov     edx, [eax]
0x7EDBB4: mov     ecx, eax
0x7EDBB6: mov     eax, [edx+54h]
0x7EDBB9: call    eax
0x7EDBBB: cmp     eax, 0Ah
0x7EDBBE: jg      short loc_7EDBFD
0x7EDBC0: mov     ecx, ds:0B42EB8h
0x7EDBC6: mov     ecx, [ecx]
0x7EDBC8: push    4
0x7EDBCA: call    NiNode_GetNiPropertyByID
0x7EDBCF: test    eax, eax
0x7EDBD1: jz      short loc_7EDBFD
0x7EDBD3: fld     dword ptr [eax+9Ch]
0x7EDBD9: fstp    [esp+3Ch+var_2C]
0x7EDBDD: fld     [esp+3Ch+var_2C]
0x7EDBE1: fld     st
0x7EDBE3: fmul    [esp+3Ch+var_20]
0x7EDBE7: fstp    [esp+3Ch+var_20]
0x7EDBEB: fld     st
0x7EDBED: fmul    [esp+3Ch+var_1C]
0x7EDBF1: fstp    [esp+3Ch+var_1C]
0x7EDBF5: fmul    [esp+3Ch+var_18]
0x7EDBF9: fstp    [esp+3Ch+var_18]
0x7EDBFD: mov     ecx, [esp+3Ch+arg_0]
0x7EDC01: fld     [esp+3Ch+var_20]
0x7EDC05: lea     edx, [ecx+1]
0x7EDC08: fstp    [esp+3Ch+var_10]
0x7EDC0C: fld     [esp+3Ch+var_1C]
0x7EDC10: movzx   eax, dx
0x7EDC13: mov     edx, [esp+3Ch+var_10]
0x7EDC17: fstp    [esp+3Ch+var_C]
0x7EDC1B: fld     [esp+3Ch+var_18]
0x7EDC1F: shl     eax, 4
0x7EDC22: add     eax, offset dword_B46498
0x7EDC27: fstp    [esp+3Ch+var_8]
0x7EDC2B: test    bl, bl
0x7EDC2D: fld     [esp+3Ch+var_24]
0x7EDC31: mov     [eax], edx
0x7EDC33: fstp    [esp+3Ch+var_4]
0x7EDC37: mov     edx, [esp+3Ch+var_C]
0x7EDC3B: mov     [eax+4], edx
0x7EDC3E: mov     edx, [esp+3Ch+var_8]
0x7EDC42: mov     [eax+8], edx
0x7EDC45: mov     edx, [esp+3Ch+var_4]
0x7EDC49: mov     [eax+0Ch], edx
0x7EDC4C: jz      short loc_7EDCAD
0x7EDC4E: mov     eax, [esi+0F8h]
0x7EDC54: mov     edx, [esi+0FCh]
0x7EDC5A: mov     [esp+3Ch+var_10], eax
0x7EDC5E: fld     [esp+3Ch+var_10]
0x7EDC62: mov     eax, [esi+100h]
0x7EDC68: fstp    [esp+3Ch+var_10]
0x7EDC6C: fldz
0x7EDC6E: mov     [esp+3Ch+var_C], edx
0x7EDC72: mov     [esp+3Ch+var_8], eax
0x7EDC76: fst     [esp+3Ch+var_C]
0x7EDC7A: lea     edx, [ecx+11h]
0x7EDC7D: fstp    [esp+3Ch+var_8]
0x7EDC81: fld1
0x7EDC83: movzx   eax, dx
0x7EDC86: mov     edx, [esp+3Ch+var_10]
0x7EDC8A: fstp    [esp+3Ch+var_4]
0x7EDC8E: shl     eax, 4
0x7EDC91: add     eax, offset dword_B46498
0x7EDC96: mov     [eax], edx
0x7EDC98: mov     edx, [esp+3Ch+var_C]
0x7EDC9C: mov     [eax+4], edx
0x7EDC9F: mov     edx, [esp+3Ch+var_8]
0x7EDCA3: mov     [eax+8], edx
0x7EDCA6: mov     edx, [esp+3Ch+var_4]
0x7EDCAA: mov     [eax+0Ch], edx
0x7EDCAD: xor     eax, eax
0x7EDCAF: test    bl, bl
0x7EDCB1: setnz   al
0x7EDCB4: mov     ds:0B42F3Dh, bl
0x7EDCBA: add     eax, 1
0x7EDCBD: mov     ds:0B46138h[ecx*4], eax
0x7EDCC4: pop     edi
0x7EDCC5: pop     esi
0x7EDCC6: pop     ebp
0x7EDCC7: pop     ebx
0x7EDCC8: add     esp, 2Ch
0x7EDCCB: retn
