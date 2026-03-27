0x5D0BE0: sub     esp, 8
0x5D0BE3: cmp     dword ptr ds:0B333C4h, 0
0x5D0BEA: jz      loc_5D0CC7
0x5D0BF0: push    ebx
0x5D0BF1: mov     ebx, [ecx+6Ch]
0x5D0BF4: push    ebp
0x5D0BF5: xor     ebp, ebp
0x5D0BF7: test    ebx, ebx
0x5D0BF9: jz      loc_5D0CBF
0x5D0BFF: push    esi
0x5D0C00: push    edi
0x5D0C01: mov     ecx, ds:0B333C4h; this
0x5D0C07: lea     eax, [ebx+8]
0x5D0C0A: mov     eax, [eax]
0x5D0C0C: mov     eax, [eax+4]
0x5D0C0F: mov     ebx, [ebx]
0x5D0C11: push    0; a3
0x5D0C13: push    eax; a2
0x5D0C14: call    GetInventoryEntryOfItem
0x5D0C19: mov     esi, eax
0x5D0C1B: test    esi, esi
0x5D0C1D: jz      loc_5D0CB5
0x5D0C23: mov     ecx, [esi+8]
0x5D0C26: movzx   eax, byte ptr [ecx+4]
0x5D0C2A: cmp     eax, 14h
0x5D0C2D: jz      short loc_5D0C34
0x5D0C2F: cmp     eax, 21h ; '!'
0x5D0C32: jnz     short loc_5D0CA5
0x5D0C34: push    1
0x5D0C36: mov     ecx, esi
0x5D0C38: call    ContainerEntryExtraData_GetHealth
0x5D0C3D: fcomp   qword ptr ds:0A309F0h
0x5D0C43: fnstsw  ax
0x5D0C45: test    ah, 5
0x5D0C48: jp      short loc_5D0CA5
0x5D0C4A: mov     eax, [esi+8]
0x5D0C4D: push    eax
0x5D0C4E: call    TESHealthForm_GetHealthForForm
0x5D0C53: mov     [esp+1Ch+var_4], eax
0x5D0C57: mov     eax, [esi+8]
0x5D0C5A: push    eax
0x5D0C5B: call    sub_470520
0x5D0C60: mov     [esp+20h+var_8], eax
0x5D0C64: fild    [esp+20h+var_8]
0x5D0C68: add     esp, 4
0x5D0C6B: mov     ecx, esi
0x5D0C6D: fstp    [esp+1Ch+var_1C]; float
0x5D0C70: push    0
0x5D0C72: call    ContainerEntryExtraData_GetHealth
0x5D0C77: sub     esp, 8
0x5D0C7A: fstp    [esp+24h+var_20]; float
0x5D0C7E: fild    [esp+24h+var_4]
0x5D0C82: fstp    [esp+24h+var_24]; float
0x5D0C85: call    sub_5483C0
0x5D0C8A: mov     edi, eax
0x5D0C8C: add     esp, 0Ch
0x5D0C8F: cmp     edi, 1
0x5D0C92: jg      short loc_5D0C99
0x5D0C94: mov     edi, 1
0x5D0C99: mov     ecx, esi
0x5D0C9B: call    TESHealthForm_GetHealth
0x5D0CA0: imul    eax, edi
0x5D0CA3: add     ebp, eax
0x5D0CA5: mov     ecx, esi
0x5D0CA7: call    ContainerEntryExtraData_DestroyDataTable
0x5D0CAC: push    esi
0x5D0CAD: call    FormHeapFree
0x5D0CB2: add     esp, 4
0x5D0CB5: test    ebx, ebx
0x5D0CB7: jnz     loc_5D0C01
0x5D0CBD: pop     edi
0x5D0CBE: pop     esi
0x5D0CBF: mov     eax, ebp
0x5D0CC1: pop     ebp
0x5D0CC2: pop     ebx
0x5D0CC3: add     esp, 8
0x5D0CC6: retn
0x5D0CC7: xor     eax, eax
0x5D0CC9: add     esp, 8
0x5D0CCC: retn
