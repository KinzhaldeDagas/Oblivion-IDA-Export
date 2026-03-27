0x513C90: push    0FFFFFFFFh
0x513C92: push    offset SEH_513C90
0x513C97: mov     eax, large fs:0
0x513C9D: push    eax
0x513C9E: sub     esp, 41Ch
0x513CA4: mov     eax, ds:0B30AACh
0x513CA9: xor     eax, esp
0x513CAB: mov     [esp+428h+var_10], eax
0x513CB2: push    ebx
0x513CB3: push    ebp
0x513CB4: push    esi
0x513CB5: push    edi
0x513CB6: mov     eax, ds:0B30AACh
0x513CBB: xor     eax, esp
0x513CBD: push    eax
0x513CBE: lea     eax, [esp+43Ch+var_C]
0x513CC5: mov     large fs:0, eax
0x513CCB: mov     ebx, [esp+43Ch+arg_1C]
0x513CD2: mov     edx, [esp+43Ch+arg_8]
0x513CD9: mov     eax, [esp+43Ch+a1]
0x513CE0: mov     ecx, [esp+43Ch+arg_4]
0x513CE7: mov     esi, [esp+43Ch+arg_10]
0x513CEE: mov     edi, [esp+43Ch+l]
0x513CF5: mov     [esp+43Ch+a3], ebx
0x513CF9: xor     ebx, ebx
0x513CFB: mov     [esp+43Ch+a4], edx
0x513CFF: mov     edx, [esp+43Ch+arg_C]
0x513D06: mov     [esp+43Ch+var_41C], ebx
0x513D0A: mov     [esp+43Ch+var_418], bx
0x513D0F: mov     [esp+43Ch+var_416], bx
0x513D14: lea     ebp, [esp+43Ch+var_428]
0x513D18: push    ebp
0x513D19: lea     ebp, [esp+440h+var_424]
0x513D1D: push    ebp
0x513D1E: lea     ebp, [esp+444h+ArgList]
0x513D22: push    ebp; UInt16
0x513D23: push    edi; l
0x513D24: push    esi; a6
0x513D25: mov     esi, [esp+450h+a4]
0x513D29: push    edx; a5
0x513D2A: mov     edx, [esp+454h+a3]
0x513D2E: push    esi; a4
0x513D2F: push    edx; a3
0x513D30: push    ecx; a2
0x513D31: push    eax; a1
0x513D32: mov     [esp+464h+var_4], ebx
0x513D39: mov     [esp+464h+var_424], ebx
0x513D3D: mov     [esp+464h+var_428], 32h ; '2'
0x513D45: call    Script_ExtractArgs
0x513D4A: add     esp, 28h
0x513D4D: test    al, al
0x513D4F: jz      loc_513E5C
0x513D55: xor     eax, eax
0x513D57: mov     cl, [esp+eax+43Ch+ArgList]
0x513D5B: add     eax, 1
0x513D5E: cmp     cl, bl
0x513D60: jnz     short loc_513D57
0x513D62: cmp     esi, ebx
0x513D64: push    ebx; int
0x513D65: jz      loc_513E5D
0x513D6B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x513D70: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x513D75: push    ebx; int
0x513D76: push    esi; void *
0x513D77: call    OblivionDynamicCast
0x513D7C: mov     esi, eax
0x513D7E: add     esp, 14h
0x513D81: cmp     esi, ebx
0x513D83: jz      loc_513E5C
0x513D89: cmp     [esi+58h], ebx
0x513D8C: jz      loc_513E5C
0x513D92: mov     ecx, esi; this
0x513D94: call    Actor__GetProcessLevel
0x513D99: test    eax, eax
0x513D9B: jnz     loc_513E5C
0x513DA1: mov     eax, [esp+43Ch+var_424]
0x513DA5: cmp     eax, ebx
0x513DA7: jl      short loc_513DAE
0x513DA9: cmp     eax, 7
0x513DAC: jl      short loc_513DB2
0x513DAE: mov     [esp+43Ch+var_424], ebx
0x513DB2: mov     eax, [esp+43Ch+var_428]
0x513DB6: cmp     eax, ebx
0x513DB8: jge     short loc_513DC0
0x513DBA: mov     [esp+43Ch+var_428], ebx
0x513DBE: jmp     short loc_513DCD
0x513DC0: cmp     eax, 64h ; 'd'
0x513DC3: jle     short loc_513DCD
0x513DC5: mov     [esp+43Ch+var_428], 64h ; 'd'
0x513DCD: lea     eax, [esp+43Ch+ArgList]
0x513DD1: push    eax; ArgList
0x513DD2: lea     ecx, [esp+440h+var_41C]
0x513DD6: push    offset aS; "%s"
0x513DDB: push    ecx; int
0x513DDC: call    BSStringT_Static_Format
0x513DE1: mov     edx, [esp+448h+var_428]
0x513DE5: mov     eax, [esp+448h+var_424]
0x513DE9: add     esp, 0Ch
0x513DEC: push    1
0x513DEE: push    ebx
0x513DEF: push    ebx
0x513DF0: push    ebx
0x513DF1: push    ebx
0x513DF2: push    edx
0x513DF3: mov     edx, [esp+454h+var_41C]
0x513DF7: push    eax
0x513DF8: lea     ecx, [esp+458h+a4]
0x513DFC: push    ecx
0x513DFD: push    edx
0x513DFE: mov     ecx, esi
0x513E00: call    Actor__InitDialogue
0x513E05: fstp    [esp+43Ch+a3]
0x513E09: mov     ecx, [esi+58h]
0x513E0C: mov     eax, [ecx]
0x513E0E: mov     edx, [eax+204h]
0x513E14: push    1
0x513E16: call    edx
0x513E18: fld     [esp+43Ch+a3]
0x513E1C: mov     esi, [esi+58h]
0x513E1F: mov     eax, [esi]
0x513E21: mov     edx, [eax+20Ch]
0x513E27: push    ecx
0x513E28: mov     ecx, esi
0x513E2A: fstp    [esp+440h+var_440]
0x513E2D: call    edx
0x513E2F: cmp     ds:0B361ACh, bl
0x513E35: jz      short loc_513E44
0x513E37: push    offset aTheNpcWillSpea; "The NPC will speak the sound now."
0x513E3C: call    Interface_ConsolePrint
0x513E41: add     esp, 4
0x513E44: lea     ecx, [esp+43Ch+var_41C]; void *
0x513E48: mov     [esp+43Ch+var_4], 0FFFFFFFFh
0x513E53: call    BSStringT_Clear
0x513E58: mov     al, 1
0x513E5A: jmp     short loc_513E67
0x513E5C: push    ebx
0x513E5D: call    FormHeapFree
0x513E62: add     esp, 4
0x513E65: xor     al, al
0x513E67: mov     ecx, [esp+43Ch+var_C]
0x513E6E: mov     large fs:0, ecx
0x513E75: pop     ecx
0x513E76: pop     edi
0x513E77: pop     esi
0x513E78: pop     ebp
0x513E79: pop     ebx
0x513E7A: mov     ecx, [esp+428h+var_10]
0x513E81: xor     ecx, esp
0x513E83: call    @__security_check_cookie@4; __security_check_cookie(x)
0x513E88: add     esp, 428h
0x513E8E: retn
