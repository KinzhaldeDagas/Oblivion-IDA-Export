0x70DC20: sub     esp, 0Ch
0x70DC23: push    ebx
0x70DC24: push    esi
0x70DC25: mov     esi, [esp+14h+arg_0]
0x70DC29: push    edi
0x70DC2A: push    esi
0x70DC2B: mov     edi, ecx
0x70DC2D: call    sub_7086B0
0x70DC32: mov     eax, ds:0B3FACCh
0x70DC37: push    eax; ArgList
0x70DC38: call    TESOutput_PrintString
0x70DC3D: movzx   ebx, word ptr [esi+0Ah]
0x70DC41: movzx   ecx, word ptr [esi+8]
0x70DC45: add     esp, 4
0x70DC48: cmp     ebx, ecx
0x70DC4A: mov     [esp+18h+arg_0], eax
0x70DC4E: jb      short loc_70DC5E
0x70DC50: movzx   edx, word ptr [esi+0Eh]
0x70DC54: add     edx, ebx
0x70DC56: push    edx
0x70DC57: mov     ecx, esi
0x70DC59: call    NiTArray_SetSize
0x70DC5E: lea     eax, [esp+18h+arg_0]
0x70DC62: push    eax
0x70DC63: push    ebx
0x70DC64: mov     ecx, esi
0x70DC66: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DC6B: push    offset aM_kviewfrustum; "m_kViewFrustum"
0x70DC70: lea     ecx, [edi+0ECh]
0x70DC76: call    sub_70DEB0
0x70DC7B: movzx   ebx, word ptr [esi+0Ah]
0x70DC7F: movzx   ecx, word ptr [esi+8]
0x70DC83: cmp     ebx, ecx
0x70DC85: mov     [esp+18h+arg_0], eax
0x70DC89: jb      short loc_70DC99
0x70DC8B: movzx   edx, word ptr [esi+0Eh]
0x70DC8F: add     edx, ebx
0x70DC91: push    edx
0x70DC92: mov     ecx, esi
0x70DC94: call    NiTArray_SetSize
0x70DC99: lea     eax, [esp+18h+arg_0]
0x70DC9D: push    eax
0x70DC9E: push    ebx
0x70DC9F: mov     ecx, esi
0x70DCA1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DCA6: push    offset aM_kport; "m_kPort"
0x70DCAB: lea     ecx, [edi+110h]
0x70DCB1: call    sub_70D270
0x70DCB6: movzx   ebx, word ptr [esi+0Ah]
0x70DCBA: movzx   ecx, word ptr [esi+8]
0x70DCBE: cmp     ebx, ecx
0x70DCC0: mov     [esp+18h+arg_0], eax
0x70DCC4: jb      short loc_70DCD4
0x70DCC6: movzx   edx, word ptr [esi+0Eh]
0x70DCCA: add     edx, ebx
0x70DCCC: push    edx
0x70DCCD: mov     ecx, esi
0x70DCCF: call    NiTArray_SetSize
0x70DCD4: lea     eax, [esp+18h+arg_0]
0x70DCD8: push    eax
0x70DCD9: push    ebx
0x70DCDA: mov     ecx, esi
0x70DCDC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DCE1: fld     dword ptr [edi+64h]
0x70DCE4: fstp    [esp+18h+var_C]
0x70DCE8: push    offset aM_kworlddir; "m_kWorldDir"
0x70DCED: fld     dword ptr [edi+70h]
0x70DCF0: lea     ecx, [esp+1Ch+var_C]
0x70DCF4: fstp    [esp+1Ch+var_8]
0x70DCF8: fld     dword ptr [edi+7Ch]
0x70DCFB: fstp    [esp+1Ch+var_4]
0x70DCFF: call    sub_707280
0x70DD04: movzx   ebx, word ptr [esi+0Ah]
0x70DD08: movzx   ecx, word ptr [esi+8]
0x70DD0C: cmp     ebx, ecx
0x70DD0E: mov     [esp+18h+arg_0], eax
0x70DD12: jb      short loc_70DD22
0x70DD14: movzx   edx, word ptr [esi+0Eh]
0x70DD18: add     edx, ebx
0x70DD1A: push    edx
0x70DD1B: mov     ecx, esi
0x70DD1D: call    NiTArray_SetSize
0x70DD22: lea     eax, [esp+18h+arg_0]
0x70DD26: push    eax
0x70DD27: push    ebx
0x70DD28: mov     ecx, esi
0x70DD2A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DD2F: fld     dword ptr [edi+68h]
0x70DD32: fstp    [esp+18h+var_C]
0x70DD36: push    offset aM_kworldup; "m_kWorldUp"
0x70DD3B: fld     dword ptr [edi+74h]
0x70DD3E: lea     ecx, [esp+1Ch+var_C]
0x70DD42: fstp    [esp+1Ch+var_8]
0x70DD46: fld     dword ptr [edi+80h]
0x70DD4C: fstp    [esp+1Ch+var_4]
0x70DD50: call    sub_707280
0x70DD55: movzx   ebx, word ptr [esi+0Ah]
0x70DD59: movzx   ecx, word ptr [esi+8]
0x70DD5D: cmp     ebx, ecx
0x70DD5F: mov     [esp+18h+arg_0], eax
0x70DD63: jb      short loc_70DD73
0x70DD65: movzx   edx, word ptr [esi+0Eh]
0x70DD69: add     edx, ebx
0x70DD6B: push    edx
0x70DD6C: mov     ecx, esi
0x70DD6E: call    NiTArray_SetSize
0x70DD73: lea     eax, [esp+18h+arg_0]
0x70DD77: push    eax
0x70DD78: push    ebx
0x70DD79: mov     ecx, esi
0x70DD7B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DD80: fld     dword ptr [edi+6Ch]
0x70DD83: fstp    [esp+18h+var_C]
0x70DD87: push    offset aM_kworldright; "m_kWorldRight"
0x70DD8C: fld     dword ptr [edi+78h]
0x70DD8F: lea     ecx, [esp+1Ch+var_C]
0x70DD93: fstp    [esp+1Ch+var_8]
0x70DD97: fld     dword ptr [edi+84h]
0x70DD9D: fstp    [esp+1Ch+var_4]
0x70DDA1: call    sub_707280
0x70DDA6: movzx   ebx, word ptr [esi+0Ah]
0x70DDAA: movzx   ecx, word ptr [esi+8]
0x70DDAE: cmp     ebx, ecx
0x70DDB0: mov     [esp+18h+arg_0], eax
0x70DDB4: jb      short loc_70DDC4
0x70DDB6: movzx   edx, word ptr [esi+0Eh]
0x70DDBA: add     edx, ebx
0x70DDBC: push    edx
0x70DDBD: mov     ecx, esi
0x70DDBF: call    NiTArray_SetSize
0x70DDC4: lea     eax, [esp+18h+arg_0]
0x70DDC8: push    eax
0x70DDC9: push    ebx
0x70DDCA: mov     ecx, esi
0x70DDCC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DDD1: fld     dword ptr [edi+108h]
0x70DDD7: push    ecx
0x70DDD8: fstp    [esp+1Ch+var_1C]; float
0x70DDDB: push    offset aM_fminnearplan; "m_fMinNearPlaneDist"
0x70DDE0: call    TESOutput_PrintLabeledFloat
0x70DDE5: movzx   ebx, word ptr [esi+0Ah]
0x70DDE9: movzx   ecx, word ptr [esi+8]
0x70DDED: add     esp, 8
0x70DDF0: cmp     ebx, ecx
0x70DDF2: mov     [esp+18h+arg_0], eax
0x70DDF6: jb      short loc_70DE06
0x70DDF8: movzx   edx, word ptr [esi+0Eh]
0x70DDFC: add     edx, ebx
0x70DDFE: push    edx
0x70DDFF: mov     ecx, esi
0x70DE01: call    NiTArray_SetSize
0x70DE06: lea     eax, [esp+18h+arg_0]
0x70DE0A: push    eax
0x70DE0B: push    ebx
0x70DE0C: mov     ecx, esi
0x70DE0E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DE13: fld     dword ptr [edi+10Ch]
0x70DE19: push    ecx
0x70DE1A: fstp    [esp+1Ch+var_1C]; float
0x70DE1D: push    offset aM_fmaxfarnearr; "m_fMaxFarNearRatio"
0x70DE22: call    TESOutput_PrintLabeledFloat
0x70DE27: movzx   edi, word ptr [esi+0Ah]
0x70DE2B: movzx   ecx, word ptr [esi+8]
0x70DE2F: add     esp, 8
0x70DE32: cmp     edi, ecx
0x70DE34: mov     [esp+18h+arg_0], eax
0x70DE38: jb      short loc_70DE48
0x70DE3A: movzx   edx, word ptr [esi+0Eh]
0x70DE3E: add     edx, edi
0x70DE40: push    edx
0x70DE41: mov     ecx, esi
0x70DE43: call    NiTArray_SetSize
0x70DE48: lea     eax, [esp+18h+arg_0]
0x70DE4C: push    eax
0x70DE4D: push    edi
0x70DE4E: mov     ecx, esi
0x70DE50: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70DE55: pop     edi
0x70DE56: pop     esi
0x70DE57: pop     ebx
0x70DE58: add     esp, 0Ch
0x70DE5B: retn    4
