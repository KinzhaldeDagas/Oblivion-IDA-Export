0x5D3290: push    0FFFFFFFFh
0x5D3292: push    offset ??0SaveMenu@@QAE@XZ_SEH
0x5D3297: mov     eax, large fs:0
0x5D329D: push    eax
0x5D329E: push    ecx
0x5D329F: push    ebx
0x5D32A0: push    esi
0x5D32A1: mov     eax, ds:0B30AACh
0x5D32A6: xor     eax, esp
0x5D32A8: push    eax
0x5D32A9: lea     eax, [esp+1Ch+var_C]
0x5D32AD: mov     large fs:0, eax
0x5D32B3: mov     esi, ecx
0x5D32B5: call    ??0Menu@@QAE@XZ; Verified constructor sets ownsTemplates byte+0x1C=1, template list+8/+0xC empty, templateContextTile+0x10=NULL, fadeState+0x24=4. Other fields retain prior names when semantics not established.
0x5D32BA: xor     ebx, ebx
0x5D32BC: mov     dword ptr [esi], offset ??_7SaveMenu@@6B@; const SaveMenu::`vftable'
0x5D32C2: mov     [esi+50h], ebx
0x5D32C5: mov     [esi+54h], bx
0x5D32C9: mov     [esi+56h], bx
0x5D32CD: mov     [esi+28h], ebx
0x5D32D0: mov     [esi+34h], ebx
0x5D32D3: mov     [esi+38h], ebx
0x5D32D6: mov     [esi+30h], ebx
0x5D32D9: mov     [esi+2Ch], ebx
0x5D32DC: mov     [esi+4Ch], ebx
0x5D32DF: mov     [esi+58h], ebx
0x5D32E2: mov     eax, [esi+50h]
0x5D32E5: push    eax
0x5D32E6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D32EB: mov     [esi+50h], ebx
0x5D32EE: mov     [esi+56h], bx
0x5D32F2: mov     [esi+54h], bx
0x5D32F6: add     esp, 4
0x5D32F9: mov     [esi+5Ch], bl
0x5D32FC: mov     eax, esi
0x5D32FE: mov     ecx, [esp+1Ch+var_C]
0x5D3302: mov     large fs:0, ecx
0x5D3309: pop     ecx
0x5D330A: pop     esi
0x5D330B: pop     ebx
0x5D330C: add     esp, 10h
0x5D330F: retn
0x9C1E40: mov     ecx, [ebp-10h]; this
0x9C1E43: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C1E48: mov     ecx, [ebp-10h]
0x9C1E4B: add     ecx, 50h ; 'P'; void *
0x9C1E4E: jmp     BSStringT_Clear
0x9C1E53: mov     edx, [esp+arg_4]
0x9C1E57: lea     eax, [edx-0Ch]
0x9C1E5A: mov     ecx, [edx-10h]
0x9C1E5D: xor     ecx, eax
0x9C1E5F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1E64: mov     eax, offset stru_AEAE00
0x9C1E69: jmp     ___CxxFrameHandler3
