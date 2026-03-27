0x659C90: push    0FFFFFFFFh
0x659C92: push    offset SEH_7FCC80
0x659C97: mov     eax, large fs:0
0x659C9D: push    eax
0x659C9E: sub     esp, 8
0x659CA1: push    ebp
0x659CA2: push    esi
0x659CA3: push    edi
0x659CA4: mov     eax, ds:0B30AACh
0x659CA9: xor     eax, esp
0x659CAB: push    eax
0x659CAC: lea     eax, [esp+24h+var_C]
0x659CB0: mov     large fs:0, eax
0x659CB6: mov     esi, ecx
0x659CB8: push    1; a2
0x659CBA: lea     eax, [esp+28h+var_11]
0x659CBE: push    eax; a1
0x659CBF: call    TESForm_LoadDataFromCurrentSaveGame
0x659CC4: movsx   eax, [esp+24h+var_11]
0x659CC9: add     eax, 1; switch 5 cases
0x659CCC: cmp     eax, 4
0x659CCF: ja      MobileObject_LoadModifiedForm___def_659CD5
0x659CD5: jmp     ds:jpt_659CD5[eax*4]; switch jump
0x659CDC: mov     ecx, [esi+58h]; jumptable 00659CD5 case -1
0x659CDF: test    ecx, ecx
0x659CE1: jz      MobileObject_LoadModifiedForm___def_659CD5
0x659CE7: mov     edx, [ecx]
0x659CE9: mov     eax, [edx+8]
0x659CEC: call    eax
0x659CEE: push    eax
0x659CEF: push    esi
0x659CF0: mov     ecx, offset ActorProcessManager_ptr
0x659CF5: call    sub_674550
0x659CFA: mov     ecx, [esi+58h]
0x659CFD: test    ecx, ecx
0x659CFF: jz      short loc_659D09
0x659D01: mov     edx, [ecx]
0x659D03: mov     eax, [edx]
0x659D05: push    1
0x659D07: call    eax
0x659D09: mov     dword ptr [esi+58h], 0
0x659D10: jmp     MobileObject_LoadModifiedForm___def_659CD5
0x659D15: mov     ecx, [esi+58h]; jumptable 00659CD5 case 0
0x659D18: test    ecx, ecx
0x659D1A: jz      short loc_659D3C
0x659D1C: mov     edx, [ecx]
0x659D1E: mov     eax, [edx+8]
0x659D21: call    eax
0x659D23: test    eax, eax
0x659D25: jz      MobileObject_LoadModifiedForm___def_659CD5
0x659D2B: mov     edx, [esi]
0x659D2D: mov     eax, [edx+1A4h]
0x659D33: mov     ecx, esi
0x659D35: call    eax
0x659D37: jmp     MobileObject_LoadModifiedForm___def_659CD5
0x659D3C: push    2ECh; Size
0x659D41: call    FormHeapAlloc
0x659D46: add     esp, 4
0x659D49: mov     [esp+24h+var_10], eax
0x659D4D: test    eax, eax
0x659D4F: mov     [esp+24h+var_4], 0
0x659D57: jz      short loc_659D6D
0x659D59: mov     ecx, eax; this
0x659D5B: call    ??0HighProcess@@QAE@XZ
0x659D60: push    0
0x659D62: push    0
0x659D64: push    0
0x659D66: push    0
0x659D68: jmp     loc_659E8D
0x659D6D: xor     eax, eax
0x659D6F: push    eax
0x659D70: push    eax
0x659D71: push    eax
0x659D72: push    eax
0x659D73: jmp     loc_659E8D
0x659D78: mov     ecx, [esi+58h]; jumptable 00659CD5 case 1
0x659D7B: test    ecx, ecx
0x659D7D: jz      short loc_659DA0
0x659D7F: mov     edx, [ecx]
0x659D81: mov     eax, [edx+8]
0x659D84: call    eax
0x659D86: cmp     eax, 1
0x659D89: jz      MobileObject_LoadModifiedForm___def_659CD5
0x659D8F: mov     edx, [esi]
0x659D91: mov     eax, [edx+1B0h]
0x659D97: mov     ecx, esi
0x659D99: call    eax
0x659D9B: jmp     MobileObject_LoadModifiedForm___def_659CD5
0x659DA0: push    18Ch; Size
0x659DA5: call    FormHeapAlloc
0x659DAA: add     esp, 4
0x659DAD: mov     [esp+24h+var_10], eax
0x659DB1: test    eax, eax
0x659DB3: mov     [esp+24h+var_4], 1
0x659DBB: jz      short loc_659DD1
0x659DBD: mov     ecx, eax; this
0x659DBF: call    ??0MiddleHighProcess@@QAE@XZ
0x659DC4: push    0
0x659DC6: push    0
0x659DC8: push    0
0x659DCA: push    1
0x659DCC: jmp     loc_659E8D
0x659DD1: xor     eax, eax
0x659DD3: push    eax
0x659DD4: push    eax
0x659DD5: push    eax
0x659DD6: push    1
0x659DD8: jmp     loc_659E8D
0x659DDD: mov     ecx, [esi+58h]; jumptable 00659CD5 case 2
0x659DE0: test    ecx, ecx
0x659DE2: jz      short loc_659E05
0x659DE4: mov     edx, [ecx]
0x659DE6: mov     eax, [edx+8]
0x659DE9: call    eax
0x659DEB: cmp     eax, 2
0x659DEE: jz      MobileObject_LoadModifiedForm___def_659CD5
0x659DF4: mov     edx, [esi]
0x659DF6: mov     eax, [edx+1ACh]
0x659DFC: mov     ecx, esi
0x659DFE: call    eax
0x659E00: jmp     MobileObject_LoadModifiedForm___def_659CD5
0x659E05: push    0A8h ; '¨'; Size
0x659E0A: call    FormHeapAlloc
0x659E0F: add     esp, 4
0x659E12: mov     [esp+24h+var_10], eax
0x659E16: test    eax, eax
0x659E18: mov     [esp+24h+var_4], 2
0x659E20: jz      short loc_659E33
0x659E22: mov     ecx, eax; this
0x659E24: call    ??0MiddleLowProcess@@QAE@XZ
0x659E29: push    0
0x659E2B: push    0
0x659E2D: push    0
0x659E2F: push    2
0x659E31: jmp     short loc_659E8D
0x659E33: xor     eax, eax
0x659E35: push    eax
0x659E36: push    eax
0x659E37: push    eax
0x659E38: push    2
0x659E3A: jmp     short loc_659E8D
0x659E3C: mov     ecx, [esi+58h]; jumptable 00659CD5 case 3
0x659E3F: test    ecx, ecx
0x659E41: jz      short loc_659E5D
0x659E43: mov     edx, [ecx]
0x659E45: mov     eax, [edx+8]
0x659E48: call    eax
0x659E4A: cmp     eax, 3
0x659E4D: jz      short MobileObject_LoadModifiedForm___def_659CD5
0x659E4F: mov     edx, [esi]
0x659E51: mov     eax, [edx+1A8h]
0x659E57: mov     ecx, esi
0x659E59: call    eax
0x659E5B: jmp     short MobileObject_LoadModifiedForm___def_659CD5
0x659E5D: push    90h; Size
0x659E62: call    FormHeapAlloc
0x659E67: add     esp, 4
0x659E6A: mov     [esp+24h+var_10], eax
0x659E6E: test    eax, eax
0x659E70: mov     [esp+24h+var_4], 3
0x659E78: jz      short loc_659E83
0x659E7A: mov     ecx, eax; this
0x659E7C: call    ??0LowProcess@@QAE@XZ
0x659E81: jmp     short loc_659E85
0x659E83: xor     eax, eax
0x659E85: push    0
0x659E87: push    0
0x659E89: push    0
0x659E8B: push    3
0x659E8D: push    esi
0x659E8E: mov     ecx, offset ActorProcessManager_ptr
0x659E93: mov     [esp+38h+var_4], 0FFFFFFFFh
0x659E9B: mov     [esi+58h], eax
0x659E9E: call    sub_673A90
