0x596C70: push    0FFFFFFFFh; ClassMenu destruction boundary. Sidecar staged custom-class selections are menu-lifetime state and must be discarded here (as well as on back/cancel) without committing them; a wrapper must preserve the caller's integer and x87 state before tail-calling the relocated prologue.
0x596C72: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x596C77: mov     eax, large fs:0
0x596C7D: push    eax
0x596C7E: push    ecx
0x596C7F: push    esi
0x596C80: mov     eax, ds:0B30AACh
0x596C85: xor     eax, esp
0x596C87: push    eax
0x596C88: lea     eax, [esp+18h+var_C]
0x596C8C: mov     large fs:0, eax
0x596C92: mov     esi, ecx
0x596C94: mov     dword ptr [esi], offset ??_7ClassMenu@@6B@; const ClassMenu::`vftable'
0x596C9A: mov     eax, [esi+84h]
0x596CA0: push    eax
0x596CA1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x596CA6: xor     eax, eax
0x596CA8: add     esp, 4
0x596CAB: mov     ecx, esi; this
0x596CAD: mov     [esi+84h], eax
0x596CB3: mov     [esi+8Ah], ax
0x596CBA: mov     [esi+88h], ax
0x596CC1: mov     [esp+18h+var_4], 0FFFFFFFFh
0x596CC9: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x596CCE: mov     ecx, [esp+18h+var_C]
0x596CD2: mov     large fs:0, ecx
0x596CD9: pop     ecx
0x596CDA: pop     esi
0x596CDB: add     esp, 10h
0x596CDE: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
