0x4A5CA0: sub     esp, 30h
0x4A5CA3: push    ebx
0x4A5CA4: push    esi
0x4A5CA5: mov     esi, ecx
0x4A5CA7: push    edi
0x4A5CA8: lea     ecx, [esp+3Ch+var_20]
0x4A5CAC: call    sub_4A6920
0x4A5CB1: mov     ebx, [esi+4]
0x4A5CB4: test    ebx, ebx
0x4A5CB6: jz      def_4A5DB4
0x4A5CBC: mov     eax, [esp+3Ch+arg_C]
0x4A5CC0: fld     [esp+3Ch+arg_4]
0x4A5CC4: mov     ecx, ds:0B33A98h
0x4A5CCA: push    0; int
0x4A5CCC: push    eax; int
0x4A5CCD: sub     esp, 8
0x4A5CD0: fstp    [esp+4Ch+var_48]; float
0x4A5CD4: fld     [esp+4Ch+arg_0]
0x4A5CD8: fstp    [esp+4Ch+var_4C]; float
0x4A5CDB: call    sub_44A270
0x4A5CE0: mov     edi, eax
0x4A5CE2: test    edi, edi
0x4A5CE4: jz      def_4A5DB4
0x4A5CEA: mov     ecx, edi; this
0x4A5CEC: call    TESObjectCELL_IsInterior
0x4A5CF1: test    al, al
0x4A5CF3: jnz     def_4A5DB4
0x4A5CF9: mov     edx, [ebx]
0x4A5CFB: mov     eax, [edx+120h]
0x4A5D01: mov     ecx, ebx
0x4A5D03: call    eax
0x4A5D05: movzx   ecx, al
0x4A5D08: mov     [esp+3Ch+arg_C], ecx
0x4A5D0C: mov     edx, [esi]
0x4A5D0E: fild    [esp+3Ch+arg_C]
0x4A5D12: mov     eax, [edx+0Ch]
0x4A5D15: mov     ecx, esi
0x4A5D17: fdiv    qword ptr ds:0A309F0h
0x4A5D1D: fstp    [esp+3Ch+var_24]
0x4A5D21: fld     [esp+3Ch+arg_0]
0x4A5D25: fstp    [esp+3Ch+var_20]
0x4A5D29: fld     [esp+3Ch+arg_4]
0x4A5D2D: fstp    [esp+3Ch+var_1C]
0x4A5D31: call    eax
0x4A5D33: test    eax, eax
0x4A5D35: jz      short loc_4A5D63
0x4A5D37: lea     ecx, [esp+3Ch+arg_0]
0x4A5D3B: push    ecx
0x4A5D3C: mov     ecx, edi; this
0x4A5D3E: call    sub_4CE3C0
0x4A5D43: mov     ecx, eax
0x4A5D45: call    sub_4C5AA0
0x4A5D4A: test    eax, eax
0x4A5D4C: jz      def_4A5DB4
0x4A5D52: mov     edx, [esi]
0x4A5D54: mov     ebx, [eax+0Ch]
0x4A5D57: mov     eax, [edx+0Ch]
0x4A5D5A: mov     ecx, esi
0x4A5D5C: call    eax
0x4A5D5E: cmp     ebx, [eax+0Ch]
0x4A5D61: jnz     short def_4A5DB4
0x4A5D63: mov     ecx, [esi+4]
0x4A5D66: mov     edx, [ecx]
0x4A5D68: mov     eax, [edx+140h]
0x4A5D6E: call    eax
0x4A5D70: movzx   ecx, ax
0x4A5D73: mov     dword ptr [esp+3Ch+var_2C], ecx
0x4A5D77: mov     ecx, edi
0x4A5D79: fild    dword ptr [esp+3Ch+var_2C]
0x4A5D7D: fstp    dword ptr [esp+3Ch+var_2C]
0x4A5D81: call    TESObjectCELL_GetWaterHeight
0x4A5D86: lea     edx, [esp+3Ch+arg_C]
0x4A5D8A: fstp    [esp+3Ch+var_30]
0x4A5D8E: push    edx
0x4A5D8F: lea     eax, [esp+40h+arg_0]
0x4A5D93: push    eax
0x4A5D94: mov     ecx, edi; this
0x4A5D96: call    sub_4CE3C0
0x4A5D9B: mov     ecx, eax
0x4A5D9D: call    sub_4C5B50
0x4A5DA2: mov     ecx, [esi+4]
0x4A5DA5: mov     edx, [ecx]
0x4A5DA7: mov     eax, [edx+148h]
0x4A5DAD: call    eax
0x4A5DAF: cmp     eax, 7; switch 8 cases
0x4A5DB2: ja      short def_4A5DB4
0x4A5DB4: jmp     ds:jpt_4A5DB4[eax*4]; switch jump
0x4A5DBB: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 0
0x4A5DBF: fld     [esp+3Ch+var_30]
0x4A5DC3: fadd    dword ptr [esp+3Ch+var_2C]
0x4A5DC7: fcompp
0x4A5DC9: fnstsw  ax
0x4A5DCB: test    ah, 41h
0x4A5DCE: jnz     loc_4A5EE9
