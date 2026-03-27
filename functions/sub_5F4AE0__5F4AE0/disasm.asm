0x5F4AE0: push    ebx
0x5F4AE1: mov     bl, byte ptr [esp+4+arg_0]
0x5F4AE5: test    bl, bl
0x5F4AE7: push    esi
0x5F4AE8: mov     esi, ecx
0x5F4AEA: jz      short loc_5F4B3F
0x5F4AEC: mov     ecx, [esi+58h]
0x5F4AEF: mov     eax, [ecx]
0x5F4AF1: mov     edx, [eax+0F8h]
0x5F4AF7: push    1
0x5F4AF9: call    edx
0x5F4AFB: test    eax, eax
0x5F4AFD: jnz     short loc_5F4B3F
0x5F4AFF: mov     ecx, [esi+58h]
0x5F4B02: mov     eax, [ecx]
0x5F4B04: mov     edx, [eax+304h]
0x5F4B0A: call    edx
0x5F4B0C: test    al, al
0x5F4B0E: jnz     short loc_5F4B3F
0x5F4B10: mov     eax, [esi]
0x5F4B12: mov     edx, [eax+330h]
0x5F4B18: mov     ecx, esi
0x5F4B1A: call    edx
0x5F4B1C: test    eax, eax
0x5F4B1E: jz      short loc_5F4B38
0x5F4B20: mov     ecx, esi
0x5F4B22: call    Actor_IsBlocking
0x5F4B27: mov     bl, al
0x5F4B29: mov     eax, [esi]
0x5F4B2B: mov     edx, [eax+330h]
0x5F4B31: mov     ecx, esi
0x5F4B33: call    edx
0x5F4B35: mov     [eax+49h], bl
0x5F4B38: pop     esi
0x5F4B39: xor     al, al
0x5F4B3B: pop     ebx
0x5F4B3C: retn    4
0x5F4B3F: mov     eax, [esi]
0x5F4B41: mov     edx, [eax+164h]
0x5F4B47: push    ebp
0x5F4B48: mov     ecx, esi
0x5F4B4A: call    edx
0x5F4B4C: mov     ebp, eax
0x5F4B4E: test    ebp, ebp
0x5F4B50: jnz     short loc_5F4B96
0x5F4B52: mov     eax, [esi]
0x5F4B54: mov     edx, [eax+330h]
0x5F4B5A: mov     ecx, esi
0x5F4B5C: call    edx
0x5F4B5E: test    eax, eax
0x5F4B60: jz      short loc_5F4B8E
0x5F4B62: cmp     [esi+58h], ebp
0x5F4B65: jz      short loc_5F4B79
0x5F4B67: mov     ecx, [esi+58h]
0x5F4B6A: mov     eax, [ecx]
0x5F4B6C: mov     edx, [eax+2D0h]
0x5F4B72: call    edx
0x5F4B74: cmp     eax, 6
0x5F4B77: jz      short loc_5F4B7D
0x5F4B79: xor     bl, bl
0x5F4B7B: jmp     short loc_5F4B7F
0x5F4B7D: mov     bl, 1
0x5F4B7F: mov     eax, [esi]
0x5F4B81: mov     edx, [eax+330h]
0x5F4B87: mov     ecx, esi
0x5F4B89: call    edx
0x5F4B8B: mov     [eax+49h], bl
0x5F4B8E: pop     ebp
0x5F4B8F: pop     esi
0x5F4B90: xor     al, al
0x5F4B92: pop     ebx
0x5F4B93: retn    4
0x5F4B96: push    edi
0x5F4B97: push    1
0x5F4B99: mov     ecx, ebp
0x5F4B9B: call    sub_4706E0
0x5F4BA0: mov     edi, eax
0x5F4BA2: test    edi, edi
0x5F4BA4: jz      short loc_5F4BDD
0x5F4BA6: cmp     dword ptr [edi+44h], 1
0x5F4BAA: jz      short loc_5F4BDD
0x5F4BAC: mov     eax, [esi]
0x5F4BAE: mov     edx, [eax+330h]
0x5F4BB4: mov     ecx, esi
0x5F4BB6: call    edx
0x5F4BB8: test    eax, eax
0x5F4BBA: jz      short loc_5F4BD4
0x5F4BBC: mov     ecx, esi
0x5F4BBE: call    Actor_IsBlocking
0x5F4BC3: mov     bl, al
0x5F4BC5: mov     eax, [esi]
0x5F4BC7: mov     edx, [eax+330h]
0x5F4BCD: mov     ecx, esi
0x5F4BCF: call    edx
0x5F4BD1: mov     [eax+49h], bl
0x5F4BD4: pop     edi
0x5F4BD5: pop     ebp
0x5F4BD6: pop     esi
0x5F4BD7: xor     al, al
0x5F4BD9: pop     ebx
0x5F4BDA: retn    4
0x5F4BDD: cmp     dword ptr [esi+58h], 0
0x5F4BE1: jz      short loc_5F4C53
0x5F4BE3: mov     ecx, [esi+58h]
0x5F4BE6: mov     eax, [ecx]
0x5F4BE8: mov     edx, [eax+2D0h]
0x5F4BEE: call    edx
0x5F4BF0: cmp     eax, 0FFFFFFFFh
0x5F4BF3: jz      short loc_5F4C53
0x5F4BF5: cmp     eax, 3
0x5F4BF8: jnz     short loc_5F4C55
0x5F4BFA: push    eax
0x5F4BFB: mov     ecx, ebp
0x5F4BFD: call    ActorAnimData_GetAnimGroupFromField8Value
0x5F4C02: push    eax
0x5F4C03: call    sub_51AC80
0x5F4C08: add     esp, 4
0x5F4C0B: test    al, al
0x5F4C0D: mov     ecx, ebp
0x5F4C0F: jz      short loc_5F4C3B
0x5F4C11: push    3
0x5F4C13: call    ActorAnimData_GetAnimGroupFromField8Value
0x5F4C18: push    eax
0x5F4C19: call    sub_51ACC0
0x5F4C1E: add     esp, 4
0x5F4C21: test    al, al
0x5F4C23: jz      short loc_5F4C29
0x5F4C25: xor     bl, bl
0x5F4C27: jmp     short loc_5F4C55
0x5F4C29: push    3
0x5F4C2B: mov     ecx, ebp
0x5F4C2D: call    ActorAnimData_GetSomethingFromField8Value
0x5F4C32: cmp     eax, 2
0x5F4C35: jge     short loc_5F4C55
0x5F4C37: xor     bl, bl
0x5F4C39: jmp     short loc_5F4C55
0x5F4C3B: push    1
0x5F4C3D: call    ActorAnimData_GetAnimGroupFromField8Value
0x5F4C42: push    eax
0x5F4C43: call    sub_51ACC0
0x5F4C48: add     esp, 4
0x5F4C4B: test    al, al
0x5F4C4D: jz      short loc_5F4C55
0x5F4C4F: xor     bl, bl
0x5F4C51: jmp     short loc_5F4C55
0x5F4C53: mov     bl, 1
0x5F4C55: cmp     dword ptr [esi+58h], 0
0x5F4C59: jz      loc_5F4D3E
0x5F4C5F: mov     ecx, [esi+58h]
0x5F4C62: mov     eax, [ecx]
0x5F4C64: mov     edx, [eax+2D0h]
0x5F4C6A: call    edx
0x5F4C6C: cmp     eax, 0FFFFFFFFh
0x5F4C6F: jz      loc_5F4D3E
0x5F4C75: cmp     eax, 3
0x5F4C78: jz      loc_5F4D3E
0x5F4C7E: cmp     eax, 6
0x5F4C81: jnz     loc_5F4BD4
0x5F4C87: cmp     byte ptr [esp+10h+arg_0], 0
0x5F4C8C: jnz     loc_5F4BD4
0x5F4C92: push    1
0x5F4C94: mov     ecx, ebp
0x5F4C96: call    ActorAnimData_GetAnimGroupFromField8Value
0x5F4C9B: test    ax, ax
0x5F4C9E: jz      loc_5F4BD4
0x5F4CA4: mov     ecx, offset flt_B06538
0x5F4CA9: call    GameSetting_GetSafeFloatPointer
0x5F4CAE: fld     dword ptr [eax]
0x5F4CB0: test    edi, edi
0x5F4CB2: fstp    [esp+10h+arg_0]
0x5F4CB6: jz      short loc_5F4CD7
0x5F4CB8: mov     eax, [edi+68h]
0x5F4CBB: mov     al, [eax+21h]
0x5F4CBE: test    al, al
0x5F4CC0: jz      short loc_5F4CD7
0x5F4CC2: movzx   ecx, al
0x5F4CC5: mov     [esp+10h+arg_0], ecx
0x5F4CC9: fild    [esp+10h+arg_0]
0x5F4CCD: fdiv    qword ptr ds:0A3AA50h
0x5F4CD3: fstp    [esp+10h+arg_0]
0x5F4CD7: fld     [esp+10h+arg_0]
0x5F4CDB: push    ecx
0x5F4CDC: fstp    [esp+14h+var_14]; float
0x5F4CDF: push    1; int
0x5F4CE1: mov     ecx, ebp
0x5F4CE3: call    sub_470FC0
0x5F4CE8: mov     ecx, ds:0B333C4h; this
0x5F4CEE: cmp     esi, ecx
0x5F4CF0: jnz     short loc_5F4D0A
0x5F4CF2: fld     [esp+10h+arg_0]
0x5F4CF6: push    ecx
0x5F4CF7: fstp    [esp+14h+var_14]; float
0x5F4CFA: push    1; int
0x5F4CFC: push    1; a2
0x5F4CFE: call    Player_GetAnimData
0x5F4D03: mov     ecx, eax
0x5F4D05: call    sub_470FC0
0x5F4D0A: push    0
0x5F4D0C: push    0FFFFFFFFh
0x5F4D0E: mov     ecx, esi
0x5F4D10: call    HighPRocess_DoAction?????
0x5F4D15: mov     edx, [esi]
0x5F4D17: mov     eax, [edx+330h]
0x5F4D1D: mov     ecx, esi
0x5F4D1F: call    eax
0x5F4D21: test    eax, eax
0x5F4D23: jz      short loc_5F4D35
0x5F4D25: mov     edx, [esi]
0x5F4D27: mov     eax, [edx+330h]
0x5F4D2D: mov     ecx, esi
0x5F4D2F: call    eax
0x5F4D31: mov     byte ptr [eax+49h], 0
0x5F4D35: pop     edi
0x5F4D36: pop     ebp
0x5F4D37: pop     esi
0x5F4D38: mov     al, 1
0x5F4D3A: pop     ebx
0x5F4D3B: retn    4
0x5F4D3E: cmp     byte ptr [esp+10h+arg_0], 0
0x5F4D43: jz      loc_5F4BD4
0x5F4D49: test    bl, bl
0x5F4D4B: jz      loc_5F4BD4
0x5F4D51: push    0
0x5F4D53: push    0
0x5F4D55: push    1Bh
0x5F4D57: mov     ecx, esi
0x5F4D59: call    Actor_LoadAnimGroup?
0x5F4D5E: push    1
0x5F4D60: mov     ecx, ebp
0x5F4D62: movzx   edi, ax
0x5F4D65: call    ActorAnimData_GetAnimGroupFromField8Value
0x5F4D6A: cmp     ax, di
0x5F4D6D: mov     ecx, ebp
0x5F4D6F: jnz     short loc_5F4DAE
0x5F4D71: push    1
0x5F4D73: call    sub_4706E0
0x5F4D78: push    eax
0x5F4D79: push    6
0x5F4D7B: mov     ecx, esi
0x5F4D7D: call    HighPRocess_DoAction?????
0x5F4D82: mov     edx, [esi]
0x5F4D84: mov     eax, [edx+330h]
0x5F4D8A: mov     ecx, esi
0x5F4D8C: call    eax
0x5F4D8E: test    eax, eax
0x5F4D90: jz      short loc_5F4DFD
0x5F4D92: mov     edx, [esi]
0x5F4D94: mov     eax, [edx+330h]
0x5F4D9A: mov     ecx, esi
0x5F4D9C: call    eax
0x5F4D9E: mov     cl, byte ptr [esp+10h+arg_0]
0x5F4DA2: pop     edi
0x5F4DA3: pop     ebp
0x5F4DA4: pop     esi
0x5F4DA5: mov     [eax+49h], cl
0x5F4DA8: mov     al, 1
0x5F4DAA: pop     ebx
0x5F4DAB: retn    4
0x5F4DAE: push    0FFFFFFFFh
0x5F4DB0: push    1
0x5F4DB2: push    edi
0x5F4DB3: call    ActorAnimData_PlayAnimGroup
0x5F4DB8: push    1
0x5F4DBA: mov     ecx, ebp
0x5F4DBC: call    sub_4706E0
0x5F4DC1: push    eax
0x5F4DC2: push    6
0x5F4DC4: mov     ecx, esi
0x5F4DC6: call    HighPRocess_DoAction?????
0x5F4DCB: mov     edx, [esi]
0x5F4DCD: mov     eax, [edx+3A4h]
0x5F4DD3: push    1
0x5F4DD5: push    edi
0x5F4DD6: mov     ecx, esi
0x5F4DD8: call    eax
0x5F4DDA: mov     edx, [esi]
0x5F4DDC: mov     eax, [edx+330h]
0x5F4DE2: mov     ecx, esi
0x5F4DE4: call    eax
0x5F4DE6: test    eax, eax
0x5F4DE8: jz      short loc_5F4DFD
0x5F4DEA: mov     edx, [esi]
0x5F4DEC: mov     eax, [edx+330h]
0x5F4DF2: mov     ecx, esi
0x5F4DF4: call    eax
0x5F4DF6: mov     cl, byte ptr [esp+10h+arg_0]
0x5F4DFA: mov     [eax+49h], cl
0x5F4DFD: pop     edi
0x5F4DFE: pop     ebp
0x5F4DFF: pop     esi
0x5F4E00: mov     al, 1
0x5F4E02: pop     ebx
0x5F4E03: retn    4
