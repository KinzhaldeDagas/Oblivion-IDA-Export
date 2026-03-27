0x552C10: push    0FFFFFFFFh
0x552C12: push    offset SEH_552C10
0x552C17: mov     eax, large fs:0
0x552C1D: push    eax
0x552C1E: sub     esp, 20h
0x552C21: push    ebx
0x552C22: push    ebp
0x552C23: push    esi
0x552C24: push    edi
0x552C25: mov     eax, ds:0B30AACh
0x552C2A: xor     eax, esp
0x552C2C: push    eax
0x552C2D: lea     eax, [esp+40h+var_C]
0x552C31: mov     large fs:0, eax
0x552C37: mov     edi, [esp+40h+arg_0]
0x552C3B: test    edi, edi
0x552C3D: jz      loc_552D20
0x552C43: mov     ebp, [esp+40h+arg_4]
0x552C47: test    ebp, ebp
0x552C49: jz      loc_552D20
0x552C4F: mov     eax, [esp+40h+arg_8]
0x552C53: test    eax, eax
0x552C55: jz      loc_552D20
0x552C5B: mov     ebx, edi
0x552C5D: sub     ebx, eax
0x552C5F: mov     [esp+40h+var_28], ebx
0x552C63: sub     ebp, edi
0x552C65: lea     esi, [eax+4]
0x552C68: mov     [esp+40h+var_2C], 2
0x552C70: mov     [esp+40h+arg_0], 2
0x552C78: mov     eax, [edi]
0x552C7A: fldz
0x552C7C: test    eax, eax
0x552C7E: jz      short loc_552CE9
0x552C80: mov     ecx, [ebx+esi]
0x552C83: test    ecx, ecx
0x552C85: jz      short loc_552CE9
0x552C87: lea     ebx, [esi-4]
0x552C8A: mov     [ebx], eax
0x552C8C: imul    eax, ecx
0x552C8F: push    ecx
0x552C90: mov     [esi], ecx
0x552C92: lea     ecx, [esi+4]; int
0x552C95: fstp    [esp+44h+var_44]; int
0x552C98: push    eax; int
0x552C99: call    sub_527160
0x552C9E: push    edi
0x552C9F: lea     eax, [esp+44h+var_24]
0x552CA3: push    eax
0x552CA4: lea     ecx, [edi+ebp]
0x552CA7: call    sub_552630
0x552CAC: push    eax
0x552CAD: mov     ecx, ebx
0x552CAF: mov     [esp+44h+var_4], 0
0x552CB7: call    sub_5520E0
0x552CBC: mov     eax, [esp+40h+var_18]
0x552CC0: xor     ebx, ebx
0x552CC2: cmp     eax, ebx
0x552CC4: mov     [esp+40h+var_4], 0FFFFFFFFh
0x552CCC: jz      short loc_552CD7
0x552CCE: push    eax
0x552CCF: call    FormHeapFree
0x552CD4: add     esp, 4
0x552CD7: mov     [esp+40h+var_18], ebx
0x552CDB: mov     [esp+40h+var_14], ebx
0x552CDF: mov     [esp+40h+var_10], ebx
0x552CE3: mov     ebx, [esp+40h+var_28]
0x552CE7: jmp     short loc_552D04
0x552CE9: push    ecx
0x552CEA: fstp    [esp+44h+var_44]; int
0x552CED: push    0; int
0x552CEF: lea     ecx, [esi+4]; int
0x552CF2: mov     dword ptr [esi-4], 0
0x552CF9: mov     dword ptr [esi], 0
0x552CFF: call    sub_527160
0x552D04: add     edi, 18h
0x552D07: add     esi, 18h
0x552D0A: sub     [esp+40h+arg_0], 1
0x552D0F: jnz     loc_552C78
0x552D15: sub     [esp+40h+var_2C], 1
0x552D1A: jnz     loc_552C70
0x552D20: mov     ecx, [esp+40h+var_C]
0x552D24: mov     large fs:0, ecx
0x552D2B: pop     ecx
0x552D2C: pop     edi
0x552D2D: pop     esi
0x552D2E: pop     ebp
0x552D2F: pop     ebx
0x552D30: add     esp, 2Ch
0x552D33: retn
