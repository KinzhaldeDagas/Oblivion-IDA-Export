0x650BA0: sub     esp, 0Ch
0x650BA3: push    esi
0x650BA4: push    edi
0x650BA5: mov     edi, ecx
0x650BA7: mov     eax, [edi+8]
0x650BAA: mov     esi, [eax+24h]
0x650BAD: test    esi, esi
0x650BAF: jz      loc_650D14
0x650BB5: mov     ecx, esi
0x650BB7: call    sub_569740
0x650BBC: test    eax, eax
0x650BBE: mov     ecx, esi
0x650BC0: jnz     short loc_650BD2
0x650BC2: call    sub_5697E0
0x650BC7: mov     [edi+30h], eax
0x650BCA: pop     edi
0x650BCB: pop     esi
0x650BCC: add     esp, 0Ch
0x650BCF: retn    4
0x650BD2: call    sub_569A10
0x650BD7: test    al, al
0x650BD9: jz      loc_650D14
0x650BDF: cmp     dword ptr [edi+50h], 0
0x650BE3: push    ebx
0x650BE4: mov     ebx, [esp+18h+arg_0]
0x650BE8: push    ebp
0x650BE9: lea     ebp, [edi+4Ch]
0x650BEC: jnz     loc_650CEC
0x650BF2: cmp     dword ptr [ebp+0], 0
0x650BF6: jnz     loc_650CE0
0x650BFC: mov     ecx, ebx; this
0x650BFE: call    TESObjectREFR_GetParentCell
0x650C03: mov     edx, [ebx]
0x650C05: mov     [esp+1Ch+arg_0], eax
0x650C09: mov     eax, [edx+174h]
0x650C0F: mov     ecx, ebx
0x650C11: call    eax
0x650C13: mov     ecx, [eax]
0x650C15: mov     [esp+1Ch+a2], ecx
0x650C19: mov     edx, [eax+4]
0x650C1C: mov     [esp+1Ch+var_8], edx
0x650C20: mov     eax, [eax+8]
0x650C23: mov     ecx, esi
0x650C25: mov     [esp+1Ch+var_4], eax
0x650C29: call    sub_569740
0x650C2E: cmp     eax, 4
0x650C31: jnz     short loc_650C46
0x650C33: mov     ecx, esi
0x650C35: call    sub_569820
0x650C3A: mov     [edi+68h], eax
0x650C3D: mov     dword ptr [edi+6Ch], 0
0x650C44: jmp     short loc_650C5C
0x650C46: cmp     eax, 5
0x650C49: jnz     short loc_650C5C
0x650C4B: mov     ecx, esi
0x650C4D: mov     dword ptr [edi+68h], 0
0x650C54: call    sub_569830
0x650C59: mov     [edi+6Ch], eax
0x650C5C: mov     edx, [ebx]
0x650C5E: fld     dword ptr ds:0B368E8h
0x650C64: mov     eax, [edx+174h]
0x650C6A: push    ebx; a7
0x650C6B: push    offset sub_646A80; a6
0x650C70: push    ecx
0x650C71: mov     ecx, ebx
0x650C73: fstp    [esp+28h+a5]; a5
0x650C76: call    eax
0x650C78: fld     dword ptr ds:0B368E8h
0x650C7E: mov     edx, [esp+28h+arg_0]
0x650C82: push    eax; a4
0x650C83: push    ecx
0x650C84: fstp    [esp+30h+a3]; a3
0x650C87: lea     ecx, [esp+30h+a2]
0x650C8B: push    ecx; a2
0x650C8C: mov     ecx, ds:0B33A98h
0x650C92: push    edx; a1
0x650C93: call    sub_446B90
0x650C98: xor     eax, eax
0x650C9A: lea     esi, [edi+5Ch]
0x650C9D: test    esi, esi
0x650C9F: mov     [edi+6Ch], eax
0x650CA2: mov     [edi+68h], eax
0x650CA5: jz      short loc_650CD9
0x650CA7: mov     eax, [esi]
0x650CA9: test    eax, eax
0x650CAB: jz      short loc_650CD9
0x650CAD: push    eax
0x650CAE: mov     ecx, ebp
0x650CB0: call    BSSimpleList_PushFront
0x650CB5: mov     eax, [esi+4]
0x650CB8: test    eax, eax
0x650CBA: jz      short loc_650CD1
0x650CBC: mov     ecx, [eax+4]
0x650CBF: mov     [esi+4], ecx
0x650CC2: mov     edx, [eax]
0x650CC4: push    eax
0x650CC5: mov     [esi], edx
0x650CC7: call    FormHeapFree
0x650CCC: add     esp, 4
0x650CCF: jmp     short loc_650CA7
0x650CD1: mov     dword ptr [esi], 0
0x650CD7: jmp     short loc_650CA7
0x650CD9: mov     ecx, esi
0x650CDB: call    BSSimpleList_Clear
0x650CE0: cmp     dword ptr [ebp+4], 0
0x650CE4: jnz     short loc_650CEC
0x650CE6: cmp     dword ptr [ebp+0], 0
0x650CEA: jz      short loc_650D03
0x650CEC: mov     eax, [ebp+0]
0x650CEF: mov     ecx, ebp
0x650CF1: mov     [edi+30h], eax
0x650CF4: call    sub_67F100
0x650CF9: pop     ebp
0x650CFA: pop     ebx
0x650CFB: pop     edi
0x650CFC: pop     esi
0x650CFD: add     esp, 0Ch
0x650D00: retn    4
0x650D03: mov     edx, [edi]
0x650D05: mov     eax, [edx+188h]
0x650D0B: push    1
0x650D0D: push    ebx
0x650D0E: mov     ecx, edi
0x650D10: call    eax
0x650D12: pop     ebp
0x650D13: pop     ebx
0x650D14: pop     edi
0x650D15: pop     esi
0x650D16: add     esp, 0Ch
0x650D19: retn    4
