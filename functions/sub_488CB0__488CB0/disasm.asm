0x488CB0: sub     esp, 0Ch
0x488CB3: fld     dword ptr ds:0A30634h
0x488CB9: push    ebp
0x488CBA: mov     ebp, ecx
0x488CBC: fstp    [esp+10h+var_C]
0x488CC0: mov     eax, [ebp+8]
0x488CC3: cmp     byte ptr [eax+4], 14h
0x488CC7: jnz     loc_488DAC
0x488CCD: push    ebx
0x488CCE: push    esi
0x488CCF: mov     esi, [esp+18h+arg_0]
0x488CD3: mov     edx, [esi]
0x488CD5: mov     eax, [edx+288h]
0x488CDB: push    edi
0x488CDC: push    7
0x488CDE: mov     ecx, esi
0x488CE0: call    eax
0x488CE2: fstp    [esp+20h+var_10]
0x488CE6: mov     edi, [ebp+8]
0x488CE9: mov     ebx, [esi]
0x488CEB: mov     ecx, edi
0x488CED: call    TESObjectARMO_GetArmorSkillAV
0x488CF2: mov     edx, [ebx+288h]
0x488CF8: push    eax
0x488CF9: mov     ecx, esi
0x488CFB: call    edx
0x488CFD: fstp    [esp+24h+var_10]
0x488D01: push    edi
0x488D02: call    TESHealthForm_GetHealthForForm
0x488D07: add     esp, 4
0x488D0A: test    eax, eax
0x488D0C: mov     [esp+24h+var_4], eax
0x488D10: fild    [esp+24h+var_4]
0x488D14: jge     short loc_488D1C
0x488D16: fadd    dword ptr ds:0A2FC78h
0x488D1C: fstp    [esp+24h+var_4]
0x488D20: fldz
0x488D22: fcomp   [esp+24h+var_4]
0x488D26: fnstsw  ax
0x488D28: test    ah, 44h
0x488D2B: jp      short loc_488D31
0x488D2D: fldz
0x488D2F: jmp     short loc_488D3E
0x488D31: push    0
0x488D33: mov     ecx, ebp
0x488D35: call    ContainerEntryExtraData_GetHealth
0x488D3A: fdiv    [esp+24h+var_4]
0x488D3E: movzx   eax, word ptr [edi+0E4h]
0x488D45: mov     [esp+24h+var_4], eax
0x488D49: sub     esp, 0Ch
0x488D4C: fild    [esp+30h+var_4]
0x488D50: fdiv    qword ptr ds:0A309F0h
0x488D56: fstp    [esp+30h+var_C]
0x488D5A: fstp    [esp+30h+var_4]
0x488D5E: fld     [esp+30h+var_4]
0x488D62: fstp    [esp+30h+var_28]; float
0x488D66: fld     [esp+30h+var_14]
0x488D6A: fstp    [esp+30h+var_2C]; float
0x488D6E: fld     [esp+30h+var_10]
0x488D72: fnstcw  word ptr [esp+30h+var_4]
0x488D76: movzx   eax, word ptr [esp+30h+var_4]
0x488D7B: fstp    [esp+30h+var_30]; float
0x488D7E: fld     [esp+30h+var_C]
0x488D82: or      eax, 0C00h
0x488D87: mov     [esp+30h+var_C], eax
0x488D8B: fldcw   word ptr [esp+30h+var_C]
0x488D8F: fistp   [esp+30h+var_C]
0x488D93: movzx   ecx, word ptr [esp+30h+var_C]
0x488D98: push    ecx; int
0x488D99: fldcw   word ptr [esp+34h+var_4]
0x488D9D: call    Calc_ArmorRating
0x488DA2: fstp    [esp+34h+var_14]
0x488DA6: add     esp, 10h
0x488DA9: pop     edi
0x488DAA: pop     esi
0x488DAB: pop     ebx
0x488DAC: fld     [esp+18h+var_14]
0x488DB0: fld     st
0x488DB2: call    Double_To_SInt32
0x488DB7: mov     [esp+18h+var_4], eax
0x488DBB: fild    [esp+18h+var_4]
0x488DBF: pop     ebp
0x488DC0: fstp    [esp+14h+var_4]
0x488DC4: fld     [esp+14h+var_4]
0x488DC8: fld     st
0x488DCA: fsubrp  st(2), st
0x488DCC: fxch    st(1)
0x488DCE: fcomp   qword ptr ds:0A2FC68h
0x488DD4: fnstsw  ax
0x488DD6: test    ah, 1
0x488DD9: jz      short loc_488DE1
0x488DDB: fadd    qword ptr ds:0A2F928h
0x488DE1: fstp    [esp+14h+var_4]
0x488DE5: fld     [esp+14h+var_4]
0x488DE9: add     esp, 0Ch
0x488DEC: retn    4
