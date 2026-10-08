0x9E0450: push    0FFFFFFFFh
0x9E0452: push    offset SEH_9E0450
0x9E0457: mov     eax, large fs:0
0x9E045D: push    eax
0x9E045E: mov     eax, ___security_cookie
0x9E0463: xor     eax, esp
0x9E0465: push    eax
0x9E0466: lea     eax, [esp+10h+var_C]
0x9E046A: mov     large fs:0, eax
0x9E0470: push    offset SettingLODFadeOutMultItems
0x9E0475: mov     ecx, offset INISettingCollection
0x9E047A: mov     [esp+14h+var_4], 0
0x9E0482: call    SettingCollectionList_AddSetting
0x9E0487: push    offset sub_A1A880; void (__cdecl *)()
0x9E048C: call    _atexit
0x9E0491: add     esp, 4
0x9E0494: mov     ecx, [esp+10h+var_C]
0x9E0498: mov     large fs:0, ecx
0x9E049F: pop     ecx
0x9E04A0: add     esp, 0Ch
0x9E04A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2530: mov     ecx, offset SettingLODFadeOutMultItems
0x9B2535: jmp     loc_403BC0
0x9B253A: mov     edx, [esp+arg_4]
0x9B253E: lea     eax, [edx]
0x9B2540: mov     ecx, [edx-4]
0x9B2543: xor     ecx, eax
0x9B2545: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B254A: mov     eax, offset stru_ADE4F0
0x9B254F: jmp     ___CxxFrameHandler3
