0x450A10: push    ebx
0x450A11: push    esi
0x450A12: push    edi
0x450A13: mov     edi, [esp+0Ch+arg_0]
0x450A17: push    edi
0x450A18: mov     esi, ecx
0x450A1A: call    TESFile_UpdateOpenGroups
0x450A1F: mov     ecx, [esi+10h]
0x450A22: mov     edx, ds:0A853D8h
0x450A28: mov     eax, [ecx]
0x450A2A: mov     eax, [eax+0Ch]
0x450A2D: push    edx
0x450A2E: push    0
0x450A30: call    eax
0x450A32: mov     ecx, ds:0B33C18h
0x450A38: mov     edx, ds:0B33C14h
0x450A3E: push    ecx
0x450A3F: push    edx
0x450A40: mov     ecx, esi
0x450A42: call    TESFile_WriteData
0x450A47: cmp     dword ptr ds:0B33C14h, 0
0x450A4E: mov     ebx, eax
0x450A50: jz      short loc_450A62
0x450A52: cmp     dword ptr ds:0B33C18h, 0
0x450A59: jz      short loc_450A62
0x450A5B: add     dword ptr [esi+3D4h], 1
0x450A62: mov     ecx, edi
0x450A64: call    TESFile_ClearFormRecord
0x450A69: pop     edi
0x450A6A: pop     esi
0x450A6B: mov     eax, ebx
0x450A6D: pop     ebx
0x450A6E: retn    4
