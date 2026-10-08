0x5D3320: push    0FFFFFFFFh
0x5D3322: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5D3327: mov     eax, large fs:0
0x5D332D: push    eax
0x5D332E: push    ecx
0x5D332F: push    esi
0x5D3330: mov     eax, ds:0B30AACh
0x5D3335: xor     eax, esp
0x5D3337: push    eax
0x5D3338: lea     eax, [esp+18h+var_C]
0x5D333C: mov     large fs:0, eax
0x5D3342: mov     esi, ecx
0x5D3344: mov     dword ptr [esi], offset ??_7SaveMenu@@6B@; const SaveMenu::`vftable'
0x5D334A: mov     eax, [esi+50h]
0x5D334D: push    eax
0x5D334E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D3353: xor     eax, eax
0x5D3355: add     esp, 4
0x5D3358: mov     ecx, esi; this
0x5D335A: mov     [esi+50h], eax
0x5D335D: mov     [esi+56h], ax
0x5D3361: mov     [esi+54h], ax
0x5D3365: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5D336D: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5D3372: mov     ecx, [esp+18h+var_C]
0x5D3376: mov     large fs:0, ecx
0x5D337D: pop     ecx
0x5D337E: pop     esi
0x5D337F: add     esp, 10h
0x5D3382: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
