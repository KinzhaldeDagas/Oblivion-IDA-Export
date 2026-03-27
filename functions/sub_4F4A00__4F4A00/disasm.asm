0x4F4A00: fldz
0x4F4A02: push    ebx
0x4F4A03: mov     ebx, [esp+4+arg_C]
0x4F4A07: fstp    qword ptr [ebx]
0x4F4A09: mov     ecx, ds:0B33A98h
0x4F4A0F: push    esi
0x4F4A10: push    edi
0x4F4A11: push    0Fh
0x4F4A13: call    TESDataHandler_LookupFormByID
0x4F4A18: mov     esi, [esp+0Ch+arg_0]
0x4F4A1C: test    esi, esi
0x4F4A1E: mov     edi, eax
0x4F4A20: jz      short loc_4F4A51
0x4F4A22: test    edi, edi
0x4F4A24: jz      short loc_4F4A51
0x4F4A26: mov     ecx, esi; this
0x4F4A28: call    TESObjectREFR_GetContainer
0x4F4A2D: test    eax, eax
0x4F4A2F: jz      short loc_4F4A51
0x4F4A31: push    eax
0x4F4A32: push    esi; a1
0x4F4A33: call    ContainerExtraData_GetContainerExtraDataForRef
0x4F4A38: add     esp, 8
0x4F4A3B: test    eax, eax
0x4F4A3D: jz      short loc_4F4A51
0x4F4A3F: push    edi; a2
0x4F4A40: mov     ecx, eax; this
0x4F4A42: call    ContainerExtraData_GetItemCount
0x4F4A47: mov     [esp+0Ch+arg_C], eax
0x4F4A4B: fild    [esp+0Ch+arg_C]
0x4F4A4F: fstp    qword ptr [ebx]
0x4F4A51: cmp     byte ptr ds:0B361ACh, 0
0x4F4A58: jz      short loc_4F4A6F
0x4F4A5A: fld     qword ptr [ebx]
0x4F4A5C: sub     esp, 8
0x4F4A5F: fstp    [esp+14h+var_18+4]
0x4F4A62: push    offset aGetgold0_2f; "GetGold >> %0.2f"
0x4F4A67: call    Interface_ConsolePrint
0x4F4A6C: add     esp, 0Ch
0x4F4A6F: pop     edi
0x4F4A70: pop     esi
0x4F4A71: mov     al, 1
0x4F4A73: pop     ebx
0x4F4A74: retn
