0x687AA0: push    0FFFFFFFFh
0x687AA2: push    offset SEH_687AA0
0x687AA7: mov     eax, large fs:0
0x687AAD: push    eax
0x687AAE: sub     esp, 28h
0x687AB1: push    ebx
0x687AB2: push    ebp
0x687AB3: push    esi
0x687AB4: push    edi
0x687AB5: mov     eax, ds:0B30AACh
0x687ABA: xor     eax, esp
0x687ABC: push    eax
0x687ABD: lea     eax, [esp+48h+var_C]
0x687AC1: mov     large fs:0, eax
0x687AC7: cmp     byte ptr ds:0B3C089h, 0
0x687ACE: jz      short loc_687AE6
0x687AD0: mov     al, 1
0x687AD2: mov     ecx, [esp+48h+var_C]
0x687AD6: mov     large fs:0, ecx
0x687ADD: pop     ecx
0x687ADE: pop     edi
0x687ADF: pop     esi
0x687AE0: pop     ebp
0x687AE1: pop     ebx
0x687AE2: add     esp, 34h
0x687AE5: retn
0x687AE6: cmp     dword ptr ds:0B33A1Ch, 0
0x687AED: mov     ebp, [esp+48h+arg_8]
0x687AF1: mov     edi, [esp+48h+worldXY]
0x687AF5: jz      short loc_687B76
0x687AF7: mov     ecx, ds:0B333A0h
0x687AFD: cmp     dword ptr [ecx+34h], 0
0x687B01: jnz     short loc_687B76
0x687B03: call    TES__GetCurrentWorldspace
0x687B08: test    eax, eax
0x687B0A: jz      short loc_687B76
0x687B0C: mov     ecx, ds:0B333A0h
0x687B12: push    edi; worldXY
0x687B13: call    TES__GetCurrentWorldspace
0x687B18: mov     ecx, eax; this
0x687B1A: call    TESWorldSpace_GetCellAtWorldPosition
0x687B1F: mov     esi, eax
0x687B21: test    esi, esi
0x687B23: jz      short loc_687B60
0x687B25: mov     ecx, ds:0B33A1Ch
0x687B2B: push    esi
0x687B2C: call    sub_43E000
0x687B31: test    al, al
0x687B33: jnz     short loc_687B60
0x687B35: mov     ecx, ds:0B333A0h
0x687B3B: push    ebp; worldXY
0x687B3C: call    TES__GetCurrentWorldspace
0x687B41: mov     ecx, eax; this
0x687B43: call    TESWorldSpace_GetCellAtWorldPosition
0x687B48: cmp     eax, esi
0x687B4A: jz      short loc_687B76
0x687B4C: test    eax, eax
0x687B4E: jz      short loc_687B60
0x687B50: mov     ecx, ds:0B33A1Ch
0x687B56: push    eax
0x687B57: call    sub_43E000
0x687B5C: test    al, al
0x687B5E: jz      short loc_687B76
0x687B60: xor     al, al
0x687B62: mov     ecx, [esp+48h+var_C]
0x687B66: mov     large fs:0, ecx
0x687B6D: pop     ecx
0x687B6E: pop     edi
0x687B6F: pop     esi
0x687B70: pop     ebp
0x687B71: pop     ebx
0x687B72: add     esp, 34h
0x687B75: retn
0x687B76: mov     esi, [esp+48h+arg_0]
0x687B7A: test    esi, esi
0x687B7C: jz      short loc_687B60
0x687B7E: lea     ecx, [esp+48h+var_20]
0x687B82: xor     bl, bl
0x687B84: call    sub_68CB30
0x687B89: lea     ecx, [esp+48h+var_34]
0x687B8D: mov     [esp+48h+var_4], 0
0x687B95: call    sub_68CB30
0x687B9A: push    0
0x687B9C: push    1
0x687B9E: lea     eax, [esp+50h+var_20]
0x687BA2: push    eax
0x687BA3: push    edi
0x687BA4: push    esi
0x687BA5: mov     byte ptr [esp+5Ch+var_4], 1
0x687BAA: call    sub_686450
0x687BAF: add     esp, 14h
0x687BB2: test    al, al
0x687BB4: jz      short loc_687BF1
0x687BB6: push    0
0x687BB8: push    1
0x687BBA: lea     ecx, [esp+50h+var_34]
0x687BBE: push    ecx
0x687BBF: push    ebp
0x687BC0: push    esi
0x687BC1: call    sub_686450
0x687BC6: add     esp, 14h
0x687BC9: test    al, al
0x687BCB: jz      short loc_687BF1
0x687BCD: push    0
0x687BCF: lea     ecx, [esp+4Ch+var_34]
0x687BD3: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x687BD8: push    eax
0x687BD9: lea     ecx, [esp+50h+var_20]
0x687BDD: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x687BE2: push    eax
0x687BE3: push    esi
0x687BE4: call    sub_687060
0x687BE9: add     esp, 10h
0x687BEC: test    al, al
0x687BEE: setz    bl
0x687BF1: lea     ecx, [esp+48h+var_34]; this
0x687BF5: mov     byte ptr [esp+48h+var_4], 0
0x687BFA: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x687BFF: lea     ecx, [esp+48h+var_20]; this
0x687C03: mov     [esp+48h+var_4], 0FFFFFFFFh
0x687C0B: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x687C10: mov     al, bl
0x687C12: mov     ecx, [esp+48h+var_C]
0x687C16: mov     large fs:0, ecx
0x687C1D: pop     ecx
0x687C1E: pop     edi
0x687C1F: pop     esi
0x687C20: pop     ebp
0x687C21: pop     ebx
0x687C22: add     esp, 34h
0x687C25: retn
0x9C5020: lea     ecx, [ebp-20h]; this
0x9C5023: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C5028: lea     ecx, [ebp-34h]; this
0x9C502B: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C5030: mov     edx, [esp+worldXY]
0x9C5034: lea     eax, [edx-38h]
0x9C5037: mov     ecx, [edx-3Ch]
0x9C503A: xor     ecx, eax
0x9C503C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5041: mov     eax, offset stru_AED870
0x9C5046: jmp     ___CxxFrameHandler3
