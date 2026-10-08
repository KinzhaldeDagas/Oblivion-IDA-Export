0x687C30: push    0FFFFFFFFh
0x687C32: push    offset SEH_687C30
0x687C37: mov     eax, large fs:0
0x687C3D: push    eax
0x687C3E: sub     esp, 28h
0x687C41: push    ebx
0x687C42: push    ebp
0x687C43: push    esi
0x687C44: push    edi
0x687C45: mov     eax, ds:0B30AACh
0x687C4A: xor     eax, esp
0x687C4C: push    eax
0x687C4D: lea     eax, [esp+48h+var_C]
0x687C51: mov     large fs:0, eax
0x687C57: cmp     byte ptr ds:0B3C089h, 0
0x687C5E: jz      short loc_687C76
0x687C60: mov     al, 1
0x687C62: mov     ecx, [esp+48h+var_C]
0x687C66: mov     large fs:0, ecx
0x687C6D: pop     ecx
0x687C6E: pop     edi
0x687C6F: pop     esi
0x687C70: pop     ebp
0x687C71: pop     ebx
0x687C72: add     esp, 34h
0x687C75: retn
0x687C76: cmp     dword ptr ds:0B33A1Ch, 0
0x687C7D: mov     ebp, [esp+48h+arg_8]
0x687C81: mov     edi, [esp+48h+worldXY]
0x687C85: jz      short loc_687D06
0x687C87: mov     ecx, ds:0B333A0h
0x687C8D: cmp     dword ptr [ecx+34h], 0
0x687C91: jnz     short loc_687D06
0x687C93: call    TES__GetCurrentWorldspace
0x687C98: test    eax, eax
0x687C9A: jz      short loc_687D06
0x687C9C: mov     ecx, ds:0B333A0h
0x687CA2: push    edi; worldXY
0x687CA3: call    TES__GetCurrentWorldspace
0x687CA8: mov     ecx, eax; this
0x687CAA: call    TESWorldSpace_GetCellAtWorldPosition
0x687CAF: mov     esi, eax
0x687CB1: test    esi, esi
0x687CB3: jz      short loc_687CF0
0x687CB5: mov     ecx, ds:0B33A1Ch
0x687CBB: push    esi
0x687CBC: call    sub_43E000
0x687CC1: test    al, al
0x687CC3: jnz     short loc_687CF0
0x687CC5: mov     ecx, ds:0B333A0h
0x687CCB: push    ebp; worldXY
0x687CCC: call    TES__GetCurrentWorldspace
0x687CD1: mov     ecx, eax; this
0x687CD3: call    TESWorldSpace_GetCellAtWorldPosition
0x687CD8: cmp     eax, esi
0x687CDA: jz      short loc_687D06
0x687CDC: test    eax, eax
0x687CDE: jz      short loc_687CF0
0x687CE0: mov     ecx, ds:0B33A1Ch
0x687CE6: push    eax
0x687CE7: call    sub_43E000
0x687CEC: test    al, al
0x687CEE: jz      short loc_687D06
0x687CF0: xor     al, al
0x687CF2: mov     ecx, [esp+48h+var_C]
0x687CF6: mov     large fs:0, ecx
0x687CFD: pop     ecx
0x687CFE: pop     edi
0x687CFF: pop     esi
0x687D00: pop     ebp
0x687D01: pop     ebx
0x687D02: add     esp, 34h
0x687D05: retn
0x687D06: mov     esi, [esp+48h+arg_0]
0x687D0A: test    esi, esi
0x687D0C: jz      short loc_687CF0
0x687D0E: lea     ecx, [esp+48h+var_34]
0x687D12: xor     bl, bl
0x687D14: call    sub_68CB30
0x687D19: lea     ecx, [esp+48h+var_20]
0x687D1D: mov     [esp+48h+var_4], 0
0x687D25: call    sub_68CB30
0x687D2A: push    0
0x687D2C: push    1
0x687D2E: lea     eax, [esp+50h+var_34]
0x687D32: push    eax
0x687D33: push    edi
0x687D34: push    esi
0x687D35: mov     byte ptr [esp+5Ch+var_4], 1
0x687D3A: call    sub_686450
0x687D3F: add     esp, 14h
0x687D42: test    al, al
0x687D44: jz      short loc_687D61
0x687D46: push    0
0x687D48: push    ebp
0x687D49: lea     ecx, [esp+50h+var_34]
0x687D4D: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x687D52: push    eax
0x687D53: push    esi
0x687D54: call    sub_687060
0x687D59: add     esp, 10h
0x687D5C: test    al, al
0x687D5E: setz    bl
0x687D61: lea     ecx, [esp+48h+var_20]; this
0x687D65: mov     byte ptr [esp+48h+var_4], 0
0x687D6A: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x687D6F: lea     ecx, [esp+48h+var_34]; this
0x687D73: mov     [esp+48h+var_4], 0FFFFFFFFh
0x687D7B: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x687D80: mov     al, bl
0x687D82: mov     ecx, [esp+48h+var_C]
0x687D86: mov     large fs:0, ecx
0x687D8D: pop     ecx
0x687D8E: pop     edi
0x687D8F: pop     esi
0x687D90: pop     ebp
0x687D91: pop     ebx
0x687D92: add     esp, 34h
0x687D95: retn
0x9C5050: lea     ecx, [ebp-34h]; this
0x9C5053: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C5058: lea     ecx, [ebp-20h]; this
0x9C505B: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C5060: mov     edx, [esp+worldXY]
0x9C5064: lea     eax, [edx-38h]
0x9C5067: mov     ecx, [edx-3Ch]
0x9C506A: xor     ecx, eax
0x9C506C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5071: mov     eax, offset stru_AED8A4
0x9C5076: jmp     ___CxxFrameHandler3
