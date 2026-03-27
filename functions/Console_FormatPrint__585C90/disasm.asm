0x585C90: push    0FFFFFFFFh
0x585C92: push    offset Console_FormatPrint_SEH
0x585C97: mov     eax, large fs:0
0x585C9D: push    eax
0x585C9E: sub     esp, 834h
0x585CA4: mov     eax, ds:0B30AACh
0x585CA9: xor     eax, esp
0x585CAB: mov     [esp+840h+var_10], eax
0x585CB2: push    ebx
0x585CB3: push    ebp
0x585CB4: push    esi
0x585CB5: push    edi
0x585CB6: mov     eax, ds:0B30AACh
0x585CBB: xor     eax, esp
0x585CBD: push    eax
0x585CBE: lea     eax, [esp+854h+var_C]
0x585CC5: mov     large fs:0, eax
0x585CCB: mov     eax, [esp+854h+Format]
0x585CD2: xor     ebx, ebx
0x585CD4: mov     edi, ecx
0x585CD6: mov     ecx, [esp+854h+ArgList]
0x585CDD: mov     [esp+854h+var_83C], edi
0x585CE1: mov     [esp+854h+var_838], ebx
0x585CE5: mov     [esp+854h+var_834], bx
0x585CEA: mov     [esp+854h+var_832], bx
0x585CEF: push    ecx; ArgList
0x585CF0: push    eax; Format
0x585CF1: lea     ecx, [esp+85Ch+var_838]
0x585CF5: mov     [esp+85Ch+var_4], ebx
0x585CFC: call    BSStringT_Format
0x585D01: mov     esi, ds:0B13994h
0x585D07: mov     [esp+854h+var_814], 4B0h
0x585D0F: mov     [esp+854h+var_818], ebx
0x585D13: add     esi, 0FFFFFFFFh
0x585D16: call    FontManager_GetSingleton
0x585D1B: mov     eax, [eax+esi*4]
0x585D1E: push    ebx
0x585D1F: push    ebx
0x585D20: lea     ecx, [esp+85Ch+var_818]
0x585D24: push    ecx
0x585D25: lea     edx, [esp+860h+var_814]
0x585D29: push    edx
0x585D2A: lea     ecx, [esp+864h+var_838]
0x585D2E: push    ecx
0x585D2F: mov     ecx, eax
0x585D31: call    sub_574A80
0x585D36: cmp     eax, ebx
0x585D38: mov     [esp+854h+var_828], eax
0x585D3C: jz      loc_585EC0
0x585D42: mov     ebp, [esp+854h+var_838]
0x585D46: lea     eax, [esp+854h+var_810]
0x585D4A: xor     esi, esi
0x585D4C: sub     ebp, eax
0x585D4E: mov     edi, edi
0x585D50: mov     ax, [esp+854h+var_834]
0x585D55: cmp     ax, 0FFFFh
0x585D59: jnz     short loc_585D6F
0x585D5B: mov     eax, [esp+854h+var_838]
0x585D5F: lea     edx, [eax+1]
0x585D62: mov     cl, [eax]
0x585D64: add     eax, 1
0x585D67: cmp     cl, bl
0x585D69: jnz     short loc_585D62
0x585D6B: sub     eax, edx
0x585D6D: jmp     short loc_585D72
0x585D6F: movzx   eax, ax
0x585D72: cmp     esi, eax
0x585D74: ja      short loc_585D84
0x585D76: lea     eax, [esp+esi+854h+var_810]
0x585D7A: mov     cl, [eax+ebp]
0x585D7D: mov     [eax], cl
0x585D7F: add     esi, 1
0x585D82: jmp     short loc_585D50
0x585D84: cmp     [esp+854h+var_828], ebx
0x585D88: lea     ebp, [esp+854h+var_810]
0x585D8C: mov     [esp+854h+var_824], ebx
0x585D90: jle     loc_585EB1
0x585D96: lea     esi, [edi+4]
0x585D99: lea     esp, [esp+0]
0x585DA0: mov     eax, [edi+10h]
0x585DA3: cmp     [edi+2Ch], eax
0x585DA6: mov     [esp+854h+var_83D], bl
0x585DAA: jnz     short loc_585DB1
0x585DAC: mov     [esp+854h+var_83D], 1
0x585DB1: mov     [esp+854h+var_830.m_data], ebx
0x585DB5: mov     [esp+854h+var_830.m_dataLen], bx
0x585DBA: mov     [esp+854h+var_830.m_bufLen], bx
0x585DBF: push    ebx; a3
0x585DC0: push    ebp; a2
0x585DC1: lea     ecx, [esp+85Ch+var_830]; this
0x585DC5: mov     byte ptr [esp+85Ch+var_4], 1
0x585DCD: call    BSStringT_Set
0x585DD2: mov     edx, [esi]
0x585DD4: mov     eax, [edx+4]
0x585DD7: mov     ecx, esi
0x585DD9: call    eax
0x585DDB: mov     edx, [esp+854h+var_830.m_data]
0x585DDF: mov     edi, eax
0x585DE1: push    ebx; a3
0x585DE2: lea     ecx, [edi+8]; this
0x585DE5: push    edx; a2
0x585DE6: call    BSStringT_Set
0x585DEB: mov     [edi], ebx
0x585DED: mov     eax, [esi+8]
0x585DF0: mov     [edi+4], eax
0x585DF3: mov     eax, [esi+8]
0x585DF6: cmp     eax, ebx
0x585DF8: jz      short loc_585DFE
0x585DFA: mov     [eax], edi
0x585DFC: jmp     short loc_585E01
0x585DFE: mov     [esi+4], edi
0x585E01: add     dword ptr [esi+0Ch], 1
0x585E05: cmp     [esp+854h+var_83D], bl
0x585E09: mov     [esi+8], edi
0x585E0C: mov     edi, [esp+854h+var_83C]
0x585E10: jz      short loc_585E20
0x585E12: mov     ecx, [edi+10h]
0x585E15: mov     [edi+2Ch], ecx
0x585E18: jmp     short loc_585E20
0x585E1A: align 10h
0x585E20: mov     eax, [edi+10h]
0x585E23: cmp     eax, ds:0B13984h
0x585E29: jle     short loc_585E58
0x585E2B: lea     edx, [esp+854h+var_820]
0x585E2F: push    edx
0x585E30: mov     ecx, esi
0x585E32: call    sub_585AC0
0x585E37: mov     eax, [esp+854h+var_820]
0x585E3B: push    eax
0x585E3C: call    FormHeapFree
0x585E41: add     esp, 4
0x585E44: add     dword ptr [edi+2Ch], 0FFFFFFFFh
0x585E48: mov     [esp+854h+var_820], ebx
0x585E4C: mov     [esp+854h+var_81A], bx
0x585E51: mov     [esp+854h+var_81C], bx
0x585E56: jmp     short loc_585E20
0x585E58: mov     edi, [esp+854h+var_824]
0x585E5C: add     edi, 1
0x585E5F: cmp     edi, [esp+854h+var_828]
0x585E63: jge     short loc_585E7B
0x585E65: cmp     [ebp+0], bl
0x585E68: jz      short loc_585E78
0x585E6A: lea     ebx, [ebx+0]
0x585E70: add     ebp, 1
0x585E73: cmp     [ebp+0], bl
0x585E76: jnz     short loc_585E70
0x585E78: add     ebp, 1
0x585E7B: mov     ecx, [esp+854h+var_830.m_data]
0x585E7F: push    ecx
0x585E80: mov     byte ptr [esp+858h+var_4], bl
0x585E87: call    FormHeapFree
0x585E8C: mov     eax, edi
0x585E8E: mov     edi, [esp+858h+var_83C]
0x585E92: add     esp, 4
0x585E95: cmp     eax, [esp+854h+var_828]
0x585E99: mov     [esp+854h+var_830.m_data], ebx
0x585E9D: mov     [esp+854h+var_830.m_bufLen], bx
0x585EA2: mov     [esp+854h+var_830.m_dataLen], bx
0x585EA7: mov     [esp+854h+var_824], eax
0x585EAB: jl      loc_585DA0
0x585EB1: mov     eax, [edi+10h]
0x585EB4: cmp     [edi+2Ch], eax
0x585EB7: jnz     short loc_585EC0
0x585EB9: mov     ecx, edi
0x585EBB: call    sub_585620
0x585EC0: mov     edx, [esp+854h+var_838]
0x585EC4: push    edx
0x585EC5: call    FormHeapFree
0x585ECA: add     esp, 4
0x585ECD: mov     ecx, [esp+854h+var_C]
0x585ED4: mov     large fs:0, ecx
0x585EDB: pop     ecx
0x585EDC: pop     edi
0x585EDD: pop     esi
0x585EDE: pop     ebp
0x585EDF: pop     ebx
0x585EE0: mov     ecx, [esp+840h+var_10]
0x585EE7: xor     ecx, esp
0x585EE9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x585EEE: add     esp, 840h
0x585EF4: retn    8
