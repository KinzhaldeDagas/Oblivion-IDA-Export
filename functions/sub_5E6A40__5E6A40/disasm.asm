0x5E6A40: sub     esp, 84h
0x5E6A46: push    esi
0x5E6A47: mov     esi, ecx
0x5E6A49: mov     eax, [esi]
0x5E6A4B: mov     edx, [eax+154h]
0x5E6A51: push    edi
0x5E6A52: call    edx
0x5E6A54: mov     edi, eax
0x5E6A56: test    edi, edi
0x5E6A58: jnz     short loc_5E6A86
0x5E6A5A: mov     eax, [esp+8Ch+arg_0]
0x5E6A61: mov     ecx, ds:0B3F9A8h
0x5E6A67: mov     edx, ds:0B3F9ACh
0x5E6A6D: mov     [eax], ecx
0x5E6A6F: mov     ecx, ds:0B3F9B0h
0x5E6A75: pop     edi
0x5E6A76: mov     [eax+4], edx
0x5E6A79: mov     [eax+8], ecx
0x5E6A7C: pop     esi
0x5E6A7D: add     esp, 84h
0x5E6A83: retn    4
0x5E6A86: mov     ecx, [esi+58h]
0x5E6A89: mov     edx, [ecx]
0x5E6A8B: mov     eax, [edx+0ECh]
0x5E6A91: push    1
0x5E6A93: call    eax
0x5E6A95: test    eax, eax
0x5E6A97: jz      short loc_5E6AB8
0x5E6A99: mov     ecx, [eax+8]
0x5E6A9C: fld     dword ptr [ecx+98h]
0x5E6AA2: push    ecx
0x5E6AA3: fstp    [esp+90h+var_84]
0x5E6AA7: fld     [esp+90h+var_84]
0x5E6AAB: fstp    [esp+90h+var_90]; float
0x5E6AAE: call    Calc_GetCombatDistance
0x5E6AB3: add     esp, 4
0x5E6AB6: jmp     short loc_5E6ABA
0x5E6AB8: fldz
0x5E6ABA: mov     edx, ds:0B0655Ch
0x5E6AC0: fstp    [esp+8Ch+var_84]
0x5E6AC4: push    edx; a2
0x5E6AC5: push    edi; a1
0x5E6AC6: call    NiObjectNET_LookupObjectByName
0x5E6ACB: mov     esi, eax
0x5E6ACD: add     esp, 8
0x5E6AD0: test    esi, esi
0x5E6AD2: jz      short loc_5E6A5A
0x5E6AD4: lea     edx, [esp+8Ch+var_68]
0x5E6AD8: push    edx
0x5E6AD9: lea     ecx, [edi+64h]
0x5E6ADC: call    sub_718A80
0x5E6AE1: add     esi, 64h ; 'd'
0x5E6AE4: push    esi
0x5E6AE5: lea     eax, [esp+90h+var_34]
0x5E6AE9: push    eax
0x5E6AEA: lea     ecx, [esp+94h+var_68]
0x5E6AEE: call    sub_53D7A0
0x5E6AF3: fldz
0x5E6AF5: fst     [esp+8Ch+var_74]
0x5E6AF9: lea     ecx, [esp+8Ch+var_74]
0x5E6AFD: fld     [esp+8Ch+var_84]
0x5E6B01: push    ecx
0x5E6B02: fstp    [esp+90h+var_70]
0x5E6B06: lea     edx, [esp+90h+var_80]
0x5E6B0A: push    edx
0x5E6B0B: lea     ecx, [esp+94h+var_34]
0x5E6B0F: fstp    [esp+94h+var_6C]
0x5E6B13: call    sub_53D4B0
0x5E6B18: mov     eax, [esp+8Ch+arg_0]
0x5E6B1F: mov     ecx, [esp+8Ch+var_80]
0x5E6B23: mov     edx, [esp+8Ch+var_7C]
0x5E6B27: mov     [eax], ecx
0x5E6B29: mov     ecx, [esp+8Ch+var_78]
0x5E6B2D: pop     edi
0x5E6B2E: mov     [eax+4], edx
0x5E6B31: mov     [eax+8], ecx
0x5E6B34: pop     esi
0x5E6B35: add     esp, 84h
0x5E6B3B: retn    4
