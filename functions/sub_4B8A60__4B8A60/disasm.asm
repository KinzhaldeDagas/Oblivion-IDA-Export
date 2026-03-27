0x4B8A60: sub     esp, 134h
0x4B8A66: mov     eax, ds:0B30AACh
0x4B8A6B: xor     eax, esp
0x4B8A6D: mov     [esp+134h+var_4], eax
0x4B8A74: push    ebx
0x4B8A75: push    ebp
0x4B8A76: push    esi
0x4B8A77: mov     esi, [esp+140h+arg_0]
0x4B8A7E: test    esi, esi
0x4B8A80: push    edi
0x4B8A81: mov     edi, [esp+144h+arg_4]
0x4B8A88: mov     ebx, ecx
0x4B8A8A: mov     [esp+144h+var_120], ebx
0x4B8A8E: mov     [esp+144h+var_10C], edi
0x4B8A92: jz      loc_4B8B1E
0x4B8A98: mov     eax, [esi+8]
0x4B8A9B: shr     eax, 0Dh
0x4B8A9E: test    al, 1
0x4B8AA0: jnz     short loc_4B8B1E
0x4B8AA2: mov     ecx, esi; this
0x4B8AA4: call    GetTeleportExtraData
0x4B8AA9: mov     ebp, eax
0x4B8AAB: mov     ecx, esi
0x4B8AAD: mov     [esp+144h+var_128], ebp
0x4B8AB1: call    sub_4D7740
0x4B8AB6: test    ebp, ebp
0x4B8AB8: mov     [esp+144h+var_12C], eax
0x4B8ABC: jnz     short loc_4B8AC2
0x4B8ABE: test    eax, eax
0x4B8AC0: jz      short loc_4B8AEA
0x4B8AC2: test    edi, edi
0x4B8AC4: jz      short loc_4B8AE6
0x4B8AC6: mov     edx, [edi]
0x4B8AC8: mov     eax, [edx+190h]
0x4B8ACE: mov     ecx, edi
0x4B8AD0: call    eax
0x4B8AD2: test    al, al
0x4B8AD4: jz      short loc_4B8AE6
0x4B8AD6: mov     edx, [edi]
0x4B8AD8: mov     eax, [edx+380h]
0x4B8ADE: mov     ecx, edi
0x4B8AE0: call    eax
0x4B8AE2: test    eax, eax
0x4B8AE4: jnz     short loc_4B8B1E
0x4B8AE6: test    ebp, ebp
0x4B8AE8: jnz     short loc_4B8B54
0x4B8AEA: cmp     dword ptr [ebx+6Ch], 0
0x4B8AEE: jnz     short loc_4B8AF6
0x4B8AF0: cmp     dword ptr [ebx+68h], 0
0x4B8AF4: jz      short loc_4B8B54
0x4B8AF6: push    edi
0x4B8AF7: push    esi
0x4B8AF8: mov     ecx, ebx
0x4B8AFA: call    sub_4B86C0
0x4B8AFF: test    eax, eax
0x4B8B01: jnz     short loc_4B8B3B
0x4B8B03: fld     dword ptr ds:0A30634h
0x4B8B09: push    ecx
0x4B8B0A: mov     ecx, ds:0B35B34h
0x4B8B10: fstp    [esp+148h+duration]; duration
0x4B8B13: push    eax; unk2
0x4B8B14: push    eax; unk1
0x4B8B15: push    ecx; string
0x4B8B16: call    GameUI_QueueMessage
0x4B8B1B: add     esp, 10h
0x4B8B1E: xor     al, al
0x4B8B20: mov     ecx, [esp+144h+var_4]
0x4B8B27: pop     edi
0x4B8B28: pop     esi
0x4B8B29: pop     ebp
0x4B8B2A: pop     ebx
0x4B8B2B: xor     ecx, esp
0x4B8B2D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B8B32: add     esp, 134h
0x4B8B38: retn    14h
0x4B8B3B: push    eax
0x4B8B3C: push    esi
0x4B8B3D: call    LinkDoors
0x4B8B42: add     esp, 8
0x4B8B45: mov     ecx, esi; this
0x4B8B47: call    GetTeleportExtraData
0x4B8B4C: test    eax, eax
0x4B8B4E: mov     [esp+144h+var_128], eax
0x4B8B52: jz      short loc_4B8B1E
0x4B8B54: push    0; int
0x4B8B56: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4B8B5B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4B8B60: push    0; int
0x4B8B62: push    edi; void *
0x4B8B63: call    OblivionDynamicCast
0x4B8B68: mov     edi, eax
0x4B8B6A: xor     ebx, ebx
0x4B8B6C: add     esp, 14h
0x4B8B6F: cmp     edi, ebx
0x4B8B71: jz      short loc_4B8B7C
0x4B8B73: mov     edx, [edi+58h]
0x4B8B76: mov     [esp+144h+var_130], edx
0x4B8B7A: jmp     short loc_4B8B80
0x4B8B7C: mov     [esp+144h+var_130], ebx
0x4B8B80: cmp     edi, ebx
0x4B8B82: jz      loc_4B90E6
0x4B8B88: push    edi
0x4B8B89: call    Actor__CanUSeDoor?
0x4B8B8E: add     esp, 4
0x4B8B91: test    al, al
0x4B8B93: jz      short loc_4B8B1E
0x4B8B95: mov     ecx, [edi+58h]
0x4B8B98: mov     eax, [ecx]
0x4B8B9A: mov     edx, [eax+378h]
0x4B8BA0: call    edx
0x4B8BA2: test    eax, eax
0x4B8BA4: jz      short loc_4B8BBA
0x4B8BA6: mov     eax, [edi]
0x4B8BA8: mov     edx, [eax+18Ch]
0x4B8BAE: mov     ecx, edi
0x4B8BB0: call    edx
0x4B8BB2: test    eax, eax
0x4B8BB4: jnz     loc_4B8B1E
0x4B8BBA: mov     eax, ds:0B333C4h
0x4B8BBF: cmp     edi, eax
0x4B8BC1: jnz     short loc_4B8BC9
0x4B8BC3: mov     [eax+110h], ebx
0x4B8BC9: mov     ecx, esi; this
0x4B8BCB: mov     byte ptr [esp+144h+anonymous_0+3], bl
0x4B8BCF: call    GetTeleportExtraData
0x4B8BD4: mov     ecx, esi
0x4B8BD6: mov     [esp+144h+var_124], eax
0x4B8BDA: xor     ebx, ebx
0x4B8BDC: call    sub_4D7740
0x4B8BE1: mov     ebp, eax
0x4B8BE3: test    ebp, ebp
0x4B8BE5: jnz     short loc_4B8BEE
0x4B8BE7: mov     bl, 1
0x4B8BE9: jmp     loc_4B8D42
0x4B8BEE: cmp     [esp+144h+var_124], ebx
0x4B8BF2: jz      short loc_4B8C60
0x4B8BF4: mov     ecx, [esp+144h+var_124]
0x4B8BF8: call    sub_42B460
0x4B8BFD: cmp     edi, ds:0B333C4h
0x4B8C03: mov     ebx, eax
0x4B8C05: jz      short loc_4B8C60
0x4B8C07: mov     ecx, edi; this
0x4B8C09: call    TESObjectREFR_GetParentCell
0x4B8C0E: test    eax, eax
0x4B8C10: jz      short loc_4B8C60
0x4B8C12: mov     ecx, edi; this
0x4B8C14: call    TESObjectREFR_GetParentCell
0x4B8C19: mov     ecx, eax
0x4B8C1B: call    TESObjectCELL_GetOwner
0x4B8C20: test    eax, eax
0x4B8C22: jz      short loc_4B8C60
0x4B8C24: push    edi
0x4B8C25: mov     ecx, edi; this
0x4B8C27: call    TESObjectREFR_GetParentCell
0x4B8C2C: mov     ecx, eax
0x4B8C2E: call    sub_4CAAC0
0x4B8C33: test    al, al
0x4B8C35: jz      short loc_4B8C60
0x4B8C37: test    ebx, ebx
0x4B8C39: jz      short loc_4B8C56
0x4B8C3B: mov     ecx, ebx
0x4B8C3D: call    TESObjectCELL_GetOwner
0x4B8C42: test    eax, eax
0x4B8C44: jz      short loc_4B8C56
0x4B8C46: push    edi
0x4B8C47: mov     ecx, ebx
0x4B8C49: call    sub_4CAAC0
0x4B8C4E: test    al, al
0x4B8C50: jz      loc_4B8D3E
0x4B8C56: mov     byte ptr [esp+144h+anonymous_0+3], 1
0x4B8C5B: jmp     loc_4B8D3E
0x4B8C60: push    1
0x4B8C62: push    edi
0x4B8C63: mov     ecx, esi
0x4B8C65: call    TESOBjectREFR_IsOwnedBy
0x4B8C6A: test    al, al
0x4B8C6C: jz      short loc_4B8C9E
0x4B8C6E: mov     ecx, ds:0B333C4h
0x4B8C74: cmp     edi, ecx
0x4B8C76: jnz     short loc_4B8C56
0x4B8C78: mov     eax, [ebp+4]
0x4B8C7B: test    eax, eax
0x4B8C7D: jz      short loc_4B8C56
0x4B8C7F: lea     edx, [esp+144h+var_108]
0x4B8C83: push    edx
0x4B8C84: push    0
0x4B8C86: push    1
0x4B8C88: push    0
0x4B8C8A: push    eax
0x4B8C8B: call    sub_5E4A00
0x4B8C90: test    al, al
0x4B8C92: jz      short loc_4B8C56
0x4B8C94: mov     byte ptr [esp+144h+anonymous_0+3], 0
0x4B8C99: jmp     loc_4B8D3E
0x4B8C9E: mov     ecx, edi; this
0x4B8CA0: call    sub_5E6C60
0x4B8CA5: test    al, al
0x4B8CA7: jz      short loc_4B8CBE
0x4B8CA9: mov     ecx, edi
0x4B8CAB: call    sub_5E6BA0
0x4B8CB0: test    al, al
0x4B8CB2: jz      short loc_4B8CBE
0x4B8CB4: mov     byte ptr [esp+144h+anonymous_0+3], 1
0x4B8CB9: jmp     loc_4B8D3E
0x4B8CBE: mov     ecx, ds:0B333C4h
0x4B8CC4: cmp     edi, ecx
0x4B8CC6: jnz     short loc_4B8D0C
0x4B8CC8: mov     eax, [ecx]
0x4B8CCA: mov     edx, [eax+354h]
0x4B8CD0: call    edx
0x4B8CD2: test    al, al
0x4B8CD4: jz      short loc_4B8D0C
0x4B8CD6: cmp     [esp+144h+var_124], 0
0x4B8CDB: jz      short loc_4B8D3E
0x4B8CDD: cmp     byte ptr [ebp+0], 64h ; 'd'
0x4B8CE1: jz      short loc_4B8D3E
0x4B8CE3: test    ebx, ebx
0x4B8CE5: jz      loc_4B8C56
0x4B8CEB: mov     ecx, ebx; this
0x4B8CED: call    TESObjectCELL_IsInterior
0x4B8CF2: test    al, al
0x4B8CF4: jz      loc_4B8C56
0x4B8CFA: mov     ecx, ebx
0x4B8CFC: call    sub_4C9830
0x4B8D01: test    al, al
0x4B8D03: jz      short loc_4B8D3E
0x4B8D05: mov     byte ptr [esp+144h+anonymous_0+3], 1
0x4B8D0A: jmp     short loc_4B8D3E
0x4B8D0C: mov     ecx, edi
0x4B8D0E: call    sub_5E3220
0x4B8D13: test    al, al
0x4B8D15: jz      short loc_4B8D3E
0x4B8D17: mov     ecx, [edi+58h]
0x4B8D1A: mov     eax, [ecx]
0x4B8D1C: mov     edx, [eax+0CCh]
0x4B8D22: call    edx
0x4B8D24: cmp     eax, ds:0B333C4h
0x4B8D2A: jnz     short loc_4B8D3E
0x4B8D2C: mov     eax, [edi]
0x4B8D2E: mov     edx, [eax+354h]
0x4B8D34: mov     ecx, edi
0x4B8D36: call    edx
0x4B8D38: test    al, al
0x4B8D3A: mov     bl, 1
0x4B8D3C: jnz     short loc_4B8D42
0x4B8D3E: mov     bl, byte ptr [esp+144h+anonymous_0+3]
0x4B8D42: mov     ebp, [esp+144h+var_12C]
0x4B8D46: test    ebp, ebp
0x4B8D48: jz      loc_4B909E
0x4B8D4E: mov     ecx, ebp
0x4B8D50: call    sub_428E70
0x4B8D55: test    al, al
0x4B8D57: jz      loc_4B909E
0x4B8D5D: test    bl, bl
0x4B8D5F: jnz     loc_4B909E
0x4B8D65: mov     ecx, ds:0B35EC8h
0x4B8D6B: lea     eax, [esp+144h+var_110]
0x4B8D6F: push    eax
0x4B8D70: push    0
0x4B8D72: push    1
0x4B8D74: push    0
0x4B8D76: push    ecx
0x4B8D77: mov     ecx, edi
0x4B8D79: call    sub_5E4A00
0x4B8D7E: mov     bl, al
0x4B8D80: test    bl, bl
0x4B8D82: jnz     short loc_4B8D9E
0x4B8D84: mov     eax, ds:0B35ECCh
0x4B8D89: lea     edx, [esp+144h+var_110]
0x4B8D8D: push    edx
0x4B8D8E: push    0
0x4B8D90: push    1
0x4B8D92: push    0
0x4B8D94: push    eax
0x4B8D95: mov     ecx, edi
0x4B8D97: call    sub_5E4A00
0x4B8D9C: mov     bl, al
0x4B8D9E: mov     eax, [ebp+4]
0x4B8DA1: test    eax, eax
0x4B8DA3: jz      loc_4B8EE2
0x4B8DA9: cmp     dword ptr ds:0B35B20h, 0
0x4B8DB0: jnz     loc_4B8E5D
0x4B8DB6: lea     ecx, [esp+144h+var_110]
0x4B8DBA: push    ecx
0x4B8DBB: push    0
0x4B8DBD: push    1
0x4B8DBF: push    0
0x4B8DC1: push    eax; a2
0x4B8DC2: mov     ecx, edi
0x4B8DC4: call    sub_5E4A00
0x4B8DC9: test    al, al
0x4B8DCB: jnz     loc_4B8E5D
0x4B8DD1: test    bl, bl
0x4B8DD3: jnz     short loc_4B8E12
0x4B8DD5: cmp     edi, ds:0B333C4h
0x4B8DDB: jnz     loc_4B8B1E
0x4B8DE1: mov     ecx, ebp
0x4B8DE3: call    sub_429990
0x4B8DE8: fld     dword ptr ds:0A379B4h
0x4B8DEE: cmp     eax, 64h ; 'd'
0x4B8DF1: push    ecx
0x4B8DF2: fstp    [esp+148h+duration]
0x4B8DF5: push    1
0x4B8DF7: push    0
0x4B8DF9: jl      short loc_4B8E07
0x4B8DFB: mov     edx, ds:0B38690h
0x4B8E01: push    edx
0x4B8E02: jmp     loc_4B8B16
0x4B8E07: mov     eax, ds:0B38698h
0x4B8E0C: push    eax
0x4B8E0D: jmp     loc_4B8B16
0x4B8E12: cmp     edi, ds:0B333C4h
0x4B8E18: jnz     loc_4B9029
0x4B8E1E: mov     ecx, esi
0x4B8E20: call    sub_4D77D0
0x4B8E25: test    eax, eax
0x4B8E27: jz      short loc_4B8E4F
0x4B8E29: mov     ecx, [eax+0Ch]
0x4B8E2C: call    sub_429990
0x4B8E31: cmp     eax, 64h ; 'd'
0x4B8E34: jl      short loc_4B8E4F
0x4B8E36: fld     dword ptr ds:0A379B4h
0x4B8E3C: push    ecx
0x4B8E3D: mov     ecx, ds:0B38690h
0x4B8E43: fstp    [esp+148h+duration]
0x4B8E46: push    1
0x4B8E48: push    0
0x4B8E4A: jmp     loc_4B8B15
0x4B8E4F: push    esi
0x4B8E50: call    sub_57B6A0
0x4B8E55: add     esp, 4
0x4B8E58: jmp     loc_4B8B1E
0x4B8E5D: cmp     edi, ds:0B333C4h
0x4B8E63: jnz     loc_4B90E6
0x4B8E69: cmp     dword ptr ds:0B35B20h, 0
0x4B8E70: jnz     loc_4B909E
0x4B8E76: mov     ecx, esi
0x4B8E78: mov     ds:0B35B20h, esi
0x4B8E7E: call    sub_4D77D0
0x4B8E83: test    eax, eax
0x4B8E85: jz      short loc_4B8E95
0x4B8E87: mov     ecx, eax
0x4B8E89: call    sub_428E90
0x4B8E8E: mov     ecx, esi
0x4B8E90: call    sub_4D9070
0x4B8E95: mov     ecx, ebp
0x4B8E97: mov     eax, [ecx+4]
0x4B8E9A: add     eax, 24h ; '$'
0x4B8E9D: mov     eax, [eax+4]
0x4B8EA0: test    eax, eax
0x4B8EA2: jnz     short loc_4B8EA9
0x4B8EA4: mov     eax, offset EmptyString
0x4B8EA9: mov     edx, ds:0B386A0h
0x4B8EAF: push    eax
0x4B8EB0: push    edx
0x4B8EB1: lea     eax, [esp+14Ch+var_104]
0x4B8EB5: push    offset aSS__0; "%s%s."
0x4B8EBA: push    eax
0x4B8EBB: call    __sprintf
0x4B8EC0: mov     ecx, ds:0B38CF0h
0x4B8EC6: push    0
0x4B8EC8: push    ecx
0x4B8EC9: push    1
0x4B8ECB: lea     edx, [esp+160h+var_104]
0x4B8ECF: push    offset sub_4B6D20
0x4B8ED4: push    edx
0x4B8ED5: call    ShowUIMessageBox
0x4B8EDA: add     esp, 24h
0x4B8EDD: jmp     loc_4B8B1E
0x4B8EE2: test    bl, bl
0x4B8EE4: jnz     loc_4B8FD8
0x4B8EEA: cmp     edi, ds:0B333C4h
0x4B8EF0: jnz     short loc_4B8F23
0x4B8EF2: mov     ecx, ebp
0x4B8EF4: call    sub_429990
0x4B8EF9: fld     dword ptr ds:0A30634h
0x4B8EFF: cmp     eax, 64h ; 'd'
0x4B8F02: push    0; int
0x4B8F04: push    0; int
0x4B8F06: push    ecx
0x4B8F07: fstp    [esp+150h+var_150]; float
0x4B8F0A: jl      short loc_4B8F14
0x4B8F0C: mov     eax, ds:0B38690h
0x4B8F11: push    eax
0x4B8F12: jmp     short loc_4B8F1B
0x4B8F14: mov     ecx, ds:0B386A8h
0x4B8F1A: push    ecx; int
0x4B8F1B: call    QueueUIMessage
0x4B8F20: add     esp, 10h
0x4B8F23: mov     edx, ds:0B33398h
0x4B8F29: mov     ebx, [edx+24h]
0x4B8F2C: test    ebx, ebx
0x4B8F2E: jz      loc_4B8B1E
0x4B8F34: cmp     edi, ds:0B333C4h
0x4B8F3A: jnz     short loc_4B8F45
0x4B8F3C: push    1
0x4B8F3E: push    121h
0x4B8F43: jmp     short loc_4B8F5B
0x4B8F45: mov     ecx, edi; this
0x4B8F47: call    Actor__GetProcessLevel
0x4B8F4C: test    eax, eax
0x4B8F4E: jnz     loc_4B8B1E
0x4B8F54: push    1
0x4B8F56: push    102h
0x4B8F5B: push    offset aDrslocked; "DRSLocked"
0x4B8F60: mov     ecx, ebx
0x4B8F62: call    PlaySound???
0x4B8F67: mov     ebp, eax
0x4B8F69: test    ebp, ebp
0x4B8F6B: jz      loc_4B8B1E
0x4B8F71: cmp     edi, ds:0B333C4h
0x4B8F77: jz      short loc_4B8FBA
0x4B8F79: mov     eax, [esi]
0x4B8F7B: mov     edx, [eax+174h]
0x4B8F81: mov     ecx, esi
0x4B8F83: call    edx
0x4B8F85: mov     ecx, [eax]
0x4B8F87: mov     edx, [eax+4]
0x4B8F8A: mov     eax, [eax+8]
0x4B8F8D: sub     esp, 0Ch
0x4B8F90: mov     [esp+150h+var_114], eax
0x4B8F94: fld     [esp+150h+var_114]
0x4B8F98: fstp    [esp+150h+duration]; float
0x4B8F9C: mov     [esp+150h+var_118], edx
0x4B8FA0: fld     [esp+150h+var_118]
0x4B8FA4: mov     [esp+150h+var_11C], ecx
0x4B8FA8: fstp    [esp+150h+var_14C]; float
0x4B8FAC: mov     ecx, ebp
0x4B8FAE: fld     [esp+150h+var_11C]
0x4B8FB2: fstp    [esp+150h+var_150]; float
0x4B8FB5: call    sub_6B7360
0x4B8FBA: push    0
0x4B8FBC: mov     ecx, ebp
0x4B8FBE: call    sub_6B7190
0x4B8FC3: mov     ecx, ebp; this
0x4B8FC5: call    sub_6B73E0
0x4B8FCA: push    ebp
0x4B8FCB: call    FormHeapFree
0x4B8FD0: add     esp, 4
0x4B8FD3: jmp     loc_4B8B1E
0x4B8FD8: cmp     edi, ds:0B333C4h
0x4B8FDE: jnz     short loc_4B9029
0x4B8FE0: mov     ecx, esi
0x4B8FE2: call    sub_4D77D0
0x4B8FE7: test    eax, eax
0x4B8FE9: jz      loc_4B8E4F
0x4B8FEF: mov     ecx, [eax+0Ch]
0x4B8FF2: call    sub_429990
0x4B8FF7: cmp     eax, 64h ; 'd'
0x4B8FFA: jl      loc_4B8E4F
0x4B9000: fld     dword ptr ds:0A379B4h
0x4B9006: push    ecx
0x4B9007: mov     ecx, ds:0B38690h
0x4B900D: fstp    [esp+148h+duration]; duration
0x4B9010: push    1; unk2
0x4B9012: push    0; unk1
0x4B9014: push    ecx; string
0x4B9015: call    GameUI_QueueMessage
0x4B901A: push    13h; int
0x4B901C: call    sub_57DE50
0x4B9021: add     esp, 14h
0x4B9024: jmp     loc_4B8B1E
0x4B9029: mov     edx, [edi]
0x4B902B: mov     eax, [edx+164h]
0x4B9031: mov     ecx, edi
0x4B9033: call    eax
0x4B9035: test    eax, eax
0x4B9037: jz      short loc_4B9044
0x4B9039: push    0
0x4B903B: push    1
0x4B903D: mov     ecx, eax
0x4B903F: call    sub_475440
0x4B9044: mov     ecx, ds:0B35EC8h
0x4B904A: push    ecx
0x4B904B: call    sub_520F00
0x4B9050: push    1
0x4B9052: call    sub_520F40
0x4B9057: push    1
0x4B9059: call    sub_520F20
0x4B905E: mov     ecx, [esp+150h+var_130]
0x4B9062: mov     edx, [ecx]
0x4B9064: mov     eax, [edx+48h]
0x4B9067: add     esp, 0Ch
0x4B906A: push    edi
0x4B906B: call    eax
0x4B906D: push    0
0x4B906F: call    sub_520F00
0x4B9074: push    0; a4
0x4B9076: call    sub_520F40
0x4B907B: push    0FFFFFFFFh; a3
0x4B907D: call    sub_520F20
0x4B9082: add     esp, 0Ch
0x4B9085: mov     ecx, esi
0x4B9087: call    sub_4D77D0
0x4B908C: test    eax, eax
0x4B908E: jz      short loc_4B909E
0x4B9090: mov     ecx, eax
0x4B9092: call    sub_428E90
0x4B9097: mov     ecx, esi
0x4B9099: call    sub_4D9070
0x4B909E: mov     ecx, ds:0B333C4h; this
0x4B90A4: cmp     ecx, edi
0x4B90A6: jnz     short loc_4B90E6
0x4B90A8: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x4B90AD: test    al, al
0x4B90AF: jz      short loc_4B90E6
0x4B90B1: cmp     [esp+148h+var_12C], 0
0x4B90B6: mov     ecx, ds:0B333C4h
0x4B90BC: jz      loc_4B9189
0x4B90C2: mov     dword ptr [ecx+608h], 0
0x4B90CC: mov     ecx, ds:0B333C4h
0x4B90D2: push    0
0x4B90D4: call    sub_65D670
0x4B90D9: mov     edx, ds:0B333C4h
0x4B90DF: mov     byte ptr [edx+200h], 0
0x4B90E6: mov     ebx, [esp+148h+var_12C]
0x4B90EA: test    ebx, ebx
0x4B90EC: jz      loc_4B91B3
0x4B90F2: test    edi, edi
0x4B90F4: jz      loc_4B91B3
0x4B90FA: mov     ecx, ds:0B333C4h; this
0x4B9100: call    PlayerCharacter__IsSleeping?
0x4B9105: test    al, al
0x4B9107: mov     ebp, [esp+148h+anonymous_0]
0x4B910B: jnz     loc_4B933B
0x4B9111: mov     eax, [ebp+0]
0x4B9114: mov     edx, [eax+8]
0x4B9117: mov     ecx, ebp
0x4B9119: call    edx
0x4B911B: test    eax, eax
0x4B911D: jnz     loc_4B933B
0x4B9123: mov     eax, [ebp+0]
0x4B9126: mov     edx, [eax+47Ch]
0x4B912C: mov     ecx, ebp
0x4B912E: call    edx
0x4B9130: cmp     eax, 4
0x4B9133: jz      loc_4B933B
0x4B9139: mov     ebx, [esp+148h+var_124]
0x4B913D: cmp     dword ptr [ebx+58h], 0
0x4B9141: jz      loc_4B9329
0x4B9147: mov     eax, [esi]
0x4B9149: mov     edx, [eax+154h]
0x4B914F: mov     ecx, esi
0x4B9151: call    edx
0x4B9153: test    eax, eax
0x4B9155: jz      loc_4B9329
0x4B915B: mov     eax, ds:0B33398h
0x4B9160: mov     ecx, [eax+24h]
0x4B9163: test    ecx, ecx
0x4B9165: jz      loc_4B9329
0x4B916B: cmp     edi, ds:0B333C4h
0x4B9171: push    0
0x4B9173: jnz     loc_4B92B0
0x4B9179: mov     edx, [ebx+58h]
0x4B917C: mov     eax, [edx+0Ch]
0x4B917F: push    121h
0x4B9184: jmp     loc_4B92BB
0x4B9189: cmp     byte ptr [ecx+116h], 0
0x4B9190: jnz     short loc_4B91B3
0x4B9192: push    1
0x4B9194: call    sub_65D670
0x4B9199: fild    dword ptr ds:0B36768h
0x4B919F: mov     ecx, ds:0B333C4h
0x4B91A5: mov     eax, [ecx]
0x4B91A7: mov     edx, [eax+254h]
0x4B91AD: push    ecx
0x4B91AE: fstp    [esp+14Ch+var_14C]
0x4B91B1: call    edx
0x4B91B3: mov     ecx, esi
0x4B91B5: call    sub_4D77D0
0x4B91BA: test    eax, eax
0x4B91BC: jz      short loc_4B91CC
0x4B91BE: mov     ecx, eax
0x4B91C0: call    sub_428E90
0x4B91C5: mov     ecx, esi
0x4B91C7: call    sub_4D9070
0x4B91CC: mov     edx, [esi]
0x4B91CE: mov     eax, [edx+154h]
0x4B91D4: mov     ecx, esi
0x4B91D6: call    eax
0x4B91D8: test    eax, eax
0x4B91DA: jz      loc_4B94BE
0x4B91E0: mov     edx, [esi]
0x4B91E2: mov     eax, [edx+154h]
0x4B91E8: push    0
0x4B91EA: mov     ecx, esi
0x4B91EC: call    eax
0x4B91EE: mov     ecx, eax
0x4B91F0: call    sub_405790
0x4B91F5: test    eax, eax
0x4B91F7: jz      loc_4B94BE
0x4B91FD: mov     edx, [esi]
0x4B91FF: mov     eax, [edx+154h]
0x4B9205: push    0
0x4B9207: mov     ecx, esi
0x4B9209: call    eax
0x4B920B: mov     ecx, eax
0x4B920D: call    sub_405790
0x4B9212: cmp     dword ptr [eax+0Ch], 0
0x4B9216: jz      loc_4B94BE
0x4B921C: mov     edx, [esi]
0x4B921E: mov     eax, [edx+154h]
0x4B9224: push    0
0x4B9226: mov     ecx, esi
0x4B9228: call    eax
0x4B922A: mov     ecx, eax
0x4B922C: call    sub_405790
0x4B9231: mov     eax, [eax+0Ch]
0x4B9234: push    eax
0x4B9235: push    offset stru_B3CAC0
0x4B923A: call    NiRTTI_Cast
0x4B923F: mov     edi, eax
0x4B9241: add     esp, 8
0x4B9244: test    edi, edi
0x4B9246: jz      loc_4B94E2
0x4B924C: push    offset aOpen; "Open"
0x4B9251: mov     ecx, edi
0x4B9253: call    sub_4715A0
0x4B9258: push    offset aClose; "Close"
0x4B925D: mov     ecx, edi
0x4B925F: mov     ebx, eax
0x4B9261: call    sub_4715A0
0x4B9266: test    ebx, ebx
0x4B9268: mov     ebp, eax
0x4B926A: jz      loc_4B94E2
0x4B9270: test    ebp, ebp
0x4B9272: jz      loc_4B94E2
0x4B9278: mov     eax, 1
0x4B927D: cmp     [ebx+44h], eax
0x4B9280: jz      loc_4B94E2
0x4B9286: cmp     [ebp+44h], eax
0x4B9289: jz      loc_4B94E2
0x4B928F: push    4
0x4B9291: mov     ecx, esi
0x4B9293: call    sub_4D8260
0x4B9298: test    al, al
0x4B929A: push    4
0x4B929C: mov     ecx, esi
0x4B929E: jnz     loc_4B9486
0x4B92A4: mov     ebp, ebx
0x4B92A6: call    sub_4D8270
0x4B92AB: jmp     loc_4B948B
0x4B92B0: mov     eax, [ebx+58h]
0x4B92B3: mov     eax, [eax+0Ch]
0x4B92B6: push    102h
0x4B92BB: push    eax
0x4B92BC: call    OSGLobals_PlaySound
0x4B92C1: mov     ebp, eax
0x4B92C3: test    ebp, ebp
0x4B92C5: jz      short loc_4B9329
0x4B92C7: cmp     edi, ds:0B333C4h
0x4B92CD: jz      short loc_4B9310
0x4B92CF: mov     edx, [esi]
0x4B92D1: mov     eax, [edx+174h]
0x4B92D7: mov     ecx, esi
0x4B92D9: call    eax
0x4B92DB: mov     ecx, [eax]
0x4B92DD: mov     edx, [eax+4]
0x4B92E0: mov     eax, [eax+8]
0x4B92E3: sub     esp, 0Ch
0x4B92E6: mov     [esp+154h+var_118], eax
0x4B92EA: fld     [esp+154h+var_118]
0x4B92EE: fstp    [esp+154h+var_14C]; float
0x4B92F2: mov     [esp+154h+var_11C], edx
0x4B92F6: fld     [esp+154h+var_11C]
0x4B92FA: mov     [esp+154h+var_120], ecx
0x4B92FE: fstp    [esp+154h+var_150]; float
0x4B9302: mov     ecx, ebp
0x4B9304: fld     [esp+154h+var_120]
0x4B9308: fstp    [esp+154h+var_154]; float
0x4B930B: call    sub_6B7360
0x4B9310: push    0
0x4B9312: mov     ecx, ebp
0x4B9314: call    sub_6B7190
0x4B9319: mov     ecx, ebp; this
0x4B931B: call    sub_6B73E0
0x4B9320: push    ebp
0x4B9321: call    FormHeapFree
0x4B9326: add     esp, 4
0x4B9329: mov     ecx, [esp+148h+anonymous_0]
0x4B932D: push    1
0x4B932F: push    esi
0x4B9330: push    edi
0x4B9331: call    sub_633080
0x4B9336: jmp     loc_4B8B1E
0x4B933B: mov     edx, [ebp+0]
0x4B933E: mov     eax, [edx+8]
0x4B9341: mov     ecx, ebp
0x4B9343: call    eax
0x4B9345: cmp     eax, 1
0x4B9348: jg      short loc_4B9352
0x4B934A: fldz
0x4B934C: fstp    dword ptr [ebp+0BCh]
0x4B9352: mov     ecx, ebx
0x4B9354: call    sub_42B460
0x4B9359: mov     ecx, ebx
0x4B935B: mov     ebp, eax
0x4B935D: call    sub_42B470
0x4B9362: mov     ecx, [esp+148h+var_124]
0x4B9366: test    byte ptr [ecx+64h], 1
0x4B936A: mov     [esp+148h+var_130], eax
0x4B936E: jz      short loc_4B9392
0x4B9370: mov     ecx, edi
0x4B9372: call    sub_4D8E40
0x4B9377: test    eax, eax
0x4B9379: mov     ecx, edi
0x4B937B: jz      short loc_4B938C
0x4B937D: call    sub_4D8E40
0x4B9382: cmp     eax, esi
0x4B9384: jz      short loc_4B9392
0x4B9386: push    0
0x4B9388: mov     ecx, edi
0x4B938A: jmp     short loc_4B938D
0x4B938C: push    esi
0x4B938D: call    sub_4D8E60
0x4B9392: mov     ecx, [edi+58h]
0x4B9395: mov     edx, [ecx]
0x4B9397: mov     eax, [edx+0D8h]
0x4B939D: push    esi
0x4B939E: call    eax
0x4B93A0: mov     eax, ds:0B333C4h
0x4B93A5: cmp     edi, eax
0x4B93A7: jnz     short loc_4B93E5
0x4B93A9: mov     [eax+570h], esi
0x4B93AF: mov     ecx, ds:0B333C4h
0x4B93B5: mov     byte ptr [ecx+12Ch], 1
0x4B93BC: mov     ecx, ds:0B333C4h
0x4B93C2: call    sub_663F00
0x4B93C7: mov     ecx, [esp+14Ch+var_128]
0x4B93CB: push    esi
0x4B93CC: call    sub_4B7B40
0x4B93D1: mov     edx, ds:0B333C4h
0x4B93D7: mov     byte ptr [edx+12Ch], 0
0x4B93DE: mov     al, 1
0x4B93E0: jmp     loc_4B8B20
0x4B93E5: mov     ecx, ebx
0x4B93E7: call    sub_6899C0
0x4B93EC: mov     edx, [eax]
0x4B93EE: mov     esi, [esp+14Ch+var_114]
0x4B93F2: sub     esp, 0Ch
0x4B93F5: mov     ecx, esp
0x4B93F7: mov     [ecx], edx
0x4B93F9: mov     edx, [eax+4]
0x4B93FC: mov     eax, [eax+8]
0x4B93FF: mov     [ecx+4], edx
0x4B9402: mov     [ecx+8], eax
0x4B9405: mov     ecx, esi; this
0x4B9407: call    TESObjectREFR_SetPosition
0x4B940C: test    ebp, ebp
0x4B940E: jz      short loc_4B943B
0x4B9410: mov     ecx, ds:0B333A0h
0x4B9416: push    0; a2
0x4B9418: push    ebp; a1
0x4B9419: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4B941E: test    al, al
0x4B9420: jz      short loc_4B943B
0x4B9422: mov     ecx, ebx
0x4B9424: call    sub_42B430
0x4B9429: fld     dword ptr [eax+8]
0x4B942C: push    ecx
0x4B942D: mov     ecx, esi
0x4B942F: fstp    [esp+150h+var_150]; float
0x4B9432: call    sub_4D8A10
0x4B9437: fldz
0x4B9439: jmp     short loc_4B9441
0x4B943B: fld     dword ptr ds:0A32048h
0x4B9441: push    ecx
0x4B9442: mov     ecx, esi
0x4B9444: fstp    [esp+154h+var_154]; float
0x4B9447: call    sub_4D89D0
0x4B944C: push    0; int
0x4B944E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4B9453: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4B9458: push    0; int
0x4B945A: push    esi; void *
0x4B945B: call    OblivionDynamicCast
0x4B9460: add     esp, 14h
0x4B9463: test    eax, eax
0x4B9465: jz      short loc_4B9470
0x4B9467: push    0
0x4B9469: mov     ecx, eax
0x4B946B: call    sub_5E1360
0x4B9470: mov     ecx, [esp+154h+var_13C]
0x4B9474: push    ecx; int
0x4B9475: push    ebp; int
0x4B9476: push    esi; Concurrency::details::SchedulerBase *
0x4B9477: call    sub_4DD4B0
0x4B947C: add     esp, 0Ch
0x4B947F: mov     al, 1
0x4B9481: jmp     loc_4B8B20
0x4B9486: call    sub_4D82E0
0x4B948B: fldz
0x4B948D: or      word ptr [edi+8], 8
0x4B9492: push    0; int
0x4B9494: sub     esp, 8
0x4B9497: fstp    [esp+154h+var_150]; float
0x4B949B: mov     ecx, edi
0x4B949D: fld1
0x4B949F: fstp    [esp+154h+var_154]; float
0x4B94A2: push    0; int
0x4B94A4: push    0; int
0x4B94A6: push    ebp; int
0x4B94A7: call    sub_470B20
0x4B94AC: fld     dword ptr ds:0A7DEB4h
0x4B94B2: fchs
0x4B94B4: mov     al, 1
0x4B94B6: fstp    dword ptr [ebp+48h]
0x4B94B9: jmp     loc_4B8B20
0x4B94BE: mov     ecx, esi
0x4B94C0: call    sub_4DE660
0x4B94C5: add     eax, 0FFFFFFFFh
0x4B94C8: cmp     eax, 1
0x4B94CB: push    4
0x4B94CD: mov     ecx, esi
0x4B94CF: ja      short loc_4B94DD
0x4B94D1: call    sub_4D82E0
0x4B94D6: mov     al, 1
0x4B94D8: jmp     loc_4B8B20
0x4B94DD: call    sub_4D8270
0x4B94E2: mov     al, 1
0x4B94E4: jmp     loc_4B8B20
