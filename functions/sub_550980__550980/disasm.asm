0x550980: sub     esp, 0Ch
0x550983: push    esi
0x550984: mov     esi, [esp+10h+arg_0]
0x550988: test    esi, esi
0x55098A: jz      loc_550A29
0x550990: fldz
0x550992: fcomp   [esp+10h+arg_4]
0x550996: fnstsw  ax
0x550998: test    ah, 41h
0x55099B: jz      loc_550A29
0x5509A1: push    edi
0x5509A2: push    esi
0x5509A3: call    sub_550850
0x5509A8: mov     edi, eax
0x5509AA: add     esp, 4
0x5509AD: test    edi, edi
0x5509AF: jz      short loc_550A28
0x5509B1: mov     ecx, [esi+0B4h]
0x5509B7: push    1
0x5509B9: call    sub_728AB0
0x5509BE: test    al, al
0x5509C0: jz      short loc_550A28
0x5509C2: mov     ecx, [esi+0B4h]
0x5509C8: lea     eax, [esp+14h+var_C]
0x5509CC: push    eax
0x5509CD: mov     [esp+18h+var_C], 0
0x5509D5: mov     [esp+18h+var_8], 0
0x5509DD: mov     [esp+18h+var_4], 0
0x5509E2: call    sub_728B60
0x5509E7: lea     ecx, [esp+14h+var_C]
0x5509EB: push    ecx
0x5509EC: push    esi
0x5509ED: call    sub_5508F0
0x5509F2: add     esp, 8
0x5509F5: cmp     [esp+14h+var_C], 0
0x5509FA: jz      short loc_550A1D
0x5509FC: mov     eax, [esi+0B4h]
0x550A02: fld     [esp+14h+arg_4]
0x550A06: mov     edx, [edi]
0x550A08: mov     edx, [edx+18h]
0x550A0B: push    ecx
0x550A0C: movzx   ecx, word ptr [eax+8]
0x550A10: fstp    [esp+18h+var_18]
0x550A13: push    ecx
0x550A14: lea     eax, [esp+1Ch+var_C]
0x550A18: push    eax
0x550A19: mov     ecx, edi
0x550A1B: call    edx
0x550A1D: mov     ecx, [esi+0B4h]
0x550A23: call    sub_728B20
0x550A28: pop     edi
0x550A29: pop     esi
0x550A2A: add     esp, 0Ch
0x550A2D: retn
