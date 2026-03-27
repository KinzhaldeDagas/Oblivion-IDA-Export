0x546930: sub     esp, 14h
0x546933: cmp     byte ptr [esp+14h+arg_10], 0
0x546938: jz      short loc_546940
0x54693A: xor     al, al
0x54693C: add     esp, 14h
0x54693F: retn
0x546940: push    esi
0x546941: mov     esi, [esp+18h+arg_0]
0x546945: mov     eax, [esi]
0x546947: mov     edx, [eax+11Ch]
0x54694D: mov     ecx, esi
0x54694F: call    edx
0x546951: movsx   eax, al
0x546954: mov     [esp+18h+arg_10], eax
0x546958: fild    [esp+18h+arg_10]
0x54695C: fstp    [esp+18h+var_10]
0x546960: fldz
0x546962: fld     st
0x546964: fld     [esp+18h+var_10]
0x546968: fucom   st(1)
0x54696A: fnstsw  ax
0x54696C: fstp    st(1)
0x54696E: test    ah, 44h
0x546971: jp      short loc_54697E
0x546973: fstp    st(1)
0x546975: xor     al, al
0x546977: fstp    st
0x546979: pop     esi
0x54697A: add     esp, 14h
0x54697D: retn
0x54697E: fcomp   qword ptr ds:0A309F0h
0x546984: fnstsw  ax
0x546986: test    ah, 1
0x546989: jnz     short loc_546994
0x54698B: fstp    st
0x54698D: mov     al, 1
0x54698F: pop     esi
0x546990: add     esp, 14h
0x546993: retn
0x546994: cmp     [esp+18h+arg_8], 0
0x546999: jz      short loc_5469B1
0x54699B: mov     edx, [esi]
0x54699D: fstp    st
0x54699F: mov     eax, [edx+120h]
0x5469A5: mov     ecx, esi
0x5469A7: call    eax
0x5469A9: fstp    [esp+18h+var_14]
0x5469AD: fldz
0x5469AF: jmp     short loc_5469B5
0x5469B1: fst     [esp+18h+var_14]
0x5469B5: cmp     [esp+18h+arg_C], 0
0x5469BA: jz      short loc_5469CA
0x5469BC: mov     edx, [esi]
0x5469BE: fstp    st
0x5469C0: mov     eax, [edx+124h]
0x5469C6: mov     ecx, esi
0x5469C8: call    eax
0x5469CA: mov     ecx, esi
0x5469CC: fstp    [esp+18h+arg_10]
0x5469D0: call    sub_4AA1B0
0x5469D5: fld     [esp+18h+arg_4]
0x5469D9: fld1
0x5469DB: mov     ecx, esi
0x5469DD: fsubrp  st(1), st
0x5469DF: fmulp   st(1), st
0x5469E1: fstp    [esp+18h+var_8]
0x5469E5: call    sub_4AA170
0x5469EA: fadd    [esp+18h+var_8]
0x5469EE: push    0; Seed
0x5469F0: fstp    dword ptr [esp+1Ch+var_8]
0x5469F4: call    GetRandomLargeInteger?
0x5469F9: cdq
0x5469FA: mov     ecx, 64h ; 'd'
0x5469FF: idiv    ecx
0x546A01: add     esp, 4
0x546A04: mov     [esp+18h+var_C], edx
0x546A08: fild    [esp+18h+var_C]
0x546A0C: fld     [esp+18h+arg_10]
0x546A10: fadd    [esp+18h+var_14]
0x546A14: fadd    dword ptr [esp+18h+var_8]
0x546A18: fadd    [esp+18h+var_10]
0x546A1C: fstp    [esp+18h+arg_10]
0x546A20: fld     [esp+18h+arg_10]
0x546A24: fcompp
0x546A26: fnstsw  ax
0x546A28: test    ah, 1
0x546A2B: jnz     short loc_546A37
0x546A2D: mov     eax, 1
0x546A32: pop     esi
0x546A33: add     esp, 14h
0x546A36: retn
0x546A37: xor     eax, eax
0x546A39: pop     esi
0x546A3A: add     esp, 14h
0x546A3D: retn
