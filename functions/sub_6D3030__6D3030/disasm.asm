0x6D3030: push    ebx
0x6D3031: push    esi
0x6D3032: mov     esi, [esp+8+arg_0]
0x6D3036: push    edi
0x6D3037: push    esi
0x6D3038: mov     ebx, ecx
0x6D303A: call    sub_6EC460
0x6D303F: mov     eax, ds:0B3CFBCh
0x6D3044: push    eax; ArgList
0x6D3045: call    TESOutput_PrintString
0x6D304A: movzx   edi, word ptr [esi+0Ah]
0x6D304E: movzx   ecx, word ptr [esi+8]
0x6D3052: add     esp, 4
0x6D3055: cmp     edi, ecx
0x6D3057: mov     [esp+0Ch+arg_0], eax
0x6D305B: jb      short loc_6D306B
0x6D305D: movzx   edx, word ptr [esi+0Eh]
0x6D3061: add     edx, edi
0x6D3063: push    edx
0x6D3064: mov     ecx, esi
0x6D3066: call    NiTArray_SetSize
0x6D306B: lea     eax, [esp+0Ch+arg_0]
0x6D306F: push    eax
0x6D3070: push    edi
0x6D3071: mov     ecx, esi
0x6D3073: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D3078: fld     dword ptr [ebx+0Ch]
0x6D307B: push    ecx
0x6D307C: fstp    [esp+10h+var_10]; float
0x6D307F: push    offset aM_ffloatvalue; "m_fFloatValue"
0x6D3084: call    TESOutput_PrintLabeledFloat
0x6D3089: movzx   edi, word ptr [esi+0Ah]
0x6D308D: movzx   ecx, word ptr [esi+8]
0x6D3091: add     esp, 8
0x6D3094: cmp     edi, ecx
0x6D3096: mov     [esp+0Ch+arg_0], eax
0x6D309A: jb      short loc_6D30AA
0x6D309C: movzx   edx, word ptr [esi+0Eh]
0x6D30A0: add     edx, edi
0x6D30A2: push    edx
0x6D30A3: mov     ecx, esi
0x6D30A5: call    NiTArray_SetSize
0x6D30AA: lea     eax, [esp+0Ch+arg_0]
0x6D30AE: push    eax
0x6D30AF: push    edi
0x6D30B0: mov     ecx, esi
0x6D30B2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D30B7: mov     ebx, [ebx+10h]
0x6D30BA: push    ebx; int
0x6D30BB: push    offset aM_spfloatdata; "m_spFloatData"
0x6D30C0: call    TESOutput_PrintLabeledPointer
0x6D30C5: movzx   edi, word ptr [esi+0Ah]
0x6D30C9: movzx   ecx, word ptr [esi+8]
0x6D30CD: add     esp, 8
0x6D30D0: cmp     edi, ecx
0x6D30D2: mov     [esp+0Ch+arg_0], eax
0x6D30D6: jb      short loc_6D30E6
0x6D30D8: movzx   edx, word ptr [esi+0Eh]
0x6D30DC: add     edx, edi
0x6D30DE: push    edx
0x6D30DF: mov     ecx, esi
0x6D30E1: call    NiTArray_SetSize
0x6D30E6: lea     eax, [esp+0Ch+arg_0]
0x6D30EA: push    eax
0x6D30EB: push    edi
0x6D30EC: mov     ecx, esi
0x6D30EE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D30F3: pop     edi
0x6D30F4: pop     esi
0x6D30F5: pop     ebx
0x6D30F6: retn    4
