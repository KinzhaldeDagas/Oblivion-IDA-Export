0x568BB0: push    ebx
0x568BB1: mov     ebx, ecx
0x568BB3: mov     ecx, [ebx+28h]
0x568BB6: test    ecx, ecx
0x568BB8: jz      loc_568E0A
0x568BBE: push    esi
0x568BBF: push    edi
0x568BC0: call    TargetData__GetTargetType
0x568BC5: mov     esi, [esp+0Ch+arg_0]
0x568BC9: xor     edi, edi
0x568BCB: sub     eax, edi
0x568BCD: jz      loc_568CF1
0x568BD3: sub     eax, 1
0x568BD6: jz      short loc_568C45
0x568BD8: sub     eax, 1
0x568BDB: jnz     loc_568E00
0x568BE1: mov     ecx, [ebx+28h]
0x568BE4: call    sub_569E80
0x568BE9: fld     dword ptr ds:0B3A3C8h
0x568BEF: mov     eax, [esi]
0x568BF1: mov     edx, [eax+174h]
0x568BF7: push    edi; a7
0x568BF8: push    offset sub_567730; a6
0x568BFD: push    ecx
0x568BFE: mov     ecx, esi
0x568C00: fstp    [esp+18h+a5]; a5
0x568C03: call    edx
0x568C05: fld     dword ptr ds:0B3A3C8h
0x568C0B: push    eax; a4
0x568C0C: mov     eax, [esi]
0x568C0E: mov     edx, [eax+174h]
0x568C14: push    ecx
0x568C15: mov     ecx, esi
0x568C17: fstp    [esp+20h+a3]; a3
0x568C1A: call    edx
0x568C1C: push    eax; a2
0x568C1D: mov     ecx, esi; this
0x568C1F: call    TESObjectREFR_GetParentCell
0x568C24: mov     ecx, ds:0B33A98h
0x568C2A: push    eax; a1
0x568C2B: call    sub_446B90
0x568C30: mov     edi, ds:0B3A3C4h
0x568C36: mov     dword ptr ds:0B3A3C4h, 0
0x568C40: jmp     loc_568D1C
0x568C45: mov     ecx, [ebx+28h]
0x568C48: xor     edi, edi
0x568C4A: call    sub_569E70
0x568C4F: test    eax, eax
0x568C51: jz      short loc_568C75
0x568C53: mov     ecx, [ebx+28h]
0x568C56: call    sub_569E70
0x568C5B: mov     edx, [eax]
0x568C5D: mov     ecx, eax
0x568C5F: mov     eax, [edx+0A4h]
0x568C65: call    eax
0x568C67: test    al, al
0x568C69: jz      short loc_568C75
0x568C6B: mov     ecx, [ebx+28h]
0x568C6E: call    sub_569E70
0x568C73: mov     edi, eax
0x568C75: mov     ecx, ds:0B333C4h
0x568C7B: test    ecx, ecx
0x568C7D: jz      short loc_568C98
0x568C7F: mov     edx, [ecx]
0x568C81: mov     eax, [edx+170h]
0x568C87: call    eax
0x568C89: cmp     edi, eax
0x568C8B: jnz     short loc_568C98
0x568C8D: mov     edi, ds:0B333C4h
0x568C93: jmp     loc_568D1C
0x568C98: mov     edx, [esi]
0x568C9A: fld     dword ptr ds:0B3A3C8h
0x568CA0: mov     eax, [edx+174h]
0x568CA6: push    edi; a7
0x568CA7: push    offset sub_567730; a6
0x568CAC: push    ecx
0x568CAD: mov     ecx, esi
0x568CAF: fstp    [esp+18h+a5]; a5
0x568CB2: call    eax
0x568CB4: fld     dword ptr ds:0B3A3C8h
0x568CBA: mov     edx, [esi]
0x568CBC: push    eax; a4
0x568CBD: mov     eax, [edx+174h]
0x568CC3: push    ecx
0x568CC4: mov     ecx, esi
0x568CC6: fstp    [esp+20h+a3]; a3
0x568CC9: call    eax
0x568CCB: push    eax; a2
0x568CCC: mov     ecx, esi; this
0x568CCE: call    TESObjectREFR_GetParentCell
0x568CD3: mov     ecx, ds:0B33A98h
0x568CD9: push    eax; a1
0x568CDA: call    sub_446B90
0x568CDF: mov     edi, ds:0B3A3C4h
0x568CE5: mov     dword ptr ds:0B3A3C4h, 0
0x568CEF: jmp     short loc_568D1C
0x568CF1: mov     ecx, [ebx+28h]
0x568CF4: call    sub_569E60
0x568CF9: mov     edi, eax
0x568CFB: test    edi, edi
0x568CFD: jz      loc_568E00
0x568D03: mov     ecx, [edi+8]
0x568D06: shr     ecx, 5
0x568D09: test    cl, 1
0x568D0C: jz      short loc_568D1C
0x568D0E: lea     ecx, [edi+44h]
0x568D11: test    ecx, ecx
0x568D13: jz      short loc_568D1C
0x568D15: call    ExtraDataList_GetReferencePointer
0x568D1A: mov     edi, eax
0x568D1C: test    edi, edi
0x568D1E: jz      loc_568E00
0x568D24: mov     edx, [edi]
0x568D26: mov     eax, [edx+190h]
0x568D2C: mov     ecx, edi
0x568D2E: call    eax
0x568D30: test    al, al
0x568D32: jz      loc_568E00
0x568D38: test    dword ptr [ebx+1Ch], 800h
0x568D3F: jnz     loc_568E00
0x568D45: mov     bl, [ebx+20h]
0x568D48: cmp     bl, 1
0x568D4B: jz      short loc_568D72
0x568D4D: cmp     bl, 7
0x568D50: jz      short loc_568D72
0x568D52: cmp     bl, 2
0x568D55: jnz     loc_568E00
0x568D5B: push    edi
0x568D5C: lea     ecx, [esi+44h]
0x568D5F: call    sub_424C50
0x568D64: push    edi
0x568D65: mov     ecx, esi
0x568D67: call    sub_5E03C0
0x568D6C: pop     edi
0x568D6D: pop     esi
0x568D6E: pop     ebx
0x568D6F: retn    4
0x568D72: mov     ecx, ds:0B333C4h
0x568D78: add     ecx, 44h ; 'D'
0x568D7B: call    GetExtraDataFollower
0x568D80: cmp     edi, ds:0B333C4h
0x568D86: jnz     short loc_568DF7
0x568D88: mov     ecx, [esi+58h]
0x568D8B: mov     edx, [ecx]
0x568D8D: mov     eax, [edx+3D0h]
0x568D93: call    eax
0x568D95: mov     ecx, ds:0B333C4h
0x568D9B: cmp     eax, ecx
0x568D9D: jz      short loc_568DF7
0x568D9F: push    esi
0x568DA0: call    sub_663A60
0x568DA5: test    al, al
0x568DA7: jnz     short loc_568DF7
0x568DA9: mov     ecx, ds:0B333C4h
0x568DAF: call    sub_663A00
0x568DB4: cmp     eax, ds:0B36A80h
0x568DBA: jle     short loc_568DF7
0x568DBC: mov     ecx, [esi+58h]
0x568DBF: mov     edx, [ecx]
0x568DC1: mov     eax, [edx+188h]
0x568DC7: push    0FFFFFFFFh
0x568DC9: push    esi
0x568DCA: call    eax
0x568DCC: fld     dword ptr ds:0A30634h
0x568DD2: push    ecx
0x568DD3: mov     ecx, ds:0B394E8h
0x568DD9: fstp    [esp+10h+duration]; duration
0x568DDC: push    1; unk2
0x568DDE: push    0; unk1
0x568DE0: push    ecx; string
0x568DE1: call    GameUI_QueueMessage
0x568DE6: add     esp, 10h
0x568DE9: push    edi
0x568DEA: mov     ecx, esi
0x568DEC: call    sub_5E03C0
0x568DF1: pop     edi
0x568DF2: pop     esi
0x568DF3: pop     ebx
0x568DF4: retn    4
0x568DF7: push    esi
0x568DF8: lea     ecx, [edi+44h]
0x568DFB: call    sub_424C50
0x568E00: push    edi
0x568E01: mov     ecx, esi
0x568E03: call    sub_5E03C0
0x568E08: pop     edi
0x568E09: pop     esi
0x568E0A: pop     ebx
0x568E0B: retn    4
