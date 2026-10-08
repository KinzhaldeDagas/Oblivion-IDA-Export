0x9E0630: push    0FFFFFFFFh
0x9E0632: push    offset SEH_9E0630
0x9E0637: mov     eax, large fs:0
0x9E063D: push    eax
0x9E063E: mov     eax, ___security_cookie
0x9E0643: xor     eax, esp
0x9E0645: push    eax
0x9E0646: lea     eax, [esp+10h+var_C]
0x9E064A: mov     large fs:0, eax
0x9E0650: push    offset unk_B0764C
0x9E0655: mov     ecx, offset INISettingCollection
0x9E065A: mov     [esp+14h+var_4], 0
0x9E0662: call    SettingCollectionList_AddSetting
0x9E0667: push    offset sub_A1A970; void (__cdecl *)()
0x9E066C: call    _atexit
0x9E0671: add     esp, 4
0x9E0674: mov     ecx, [esp+10h+var_C]
0x9E0678: mov     large fs:0, ecx
0x9E067F: pop     ecx
0x9E0680: add     esp, 0Ch
0x9E0683: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2620: mov     ecx, offset unk_B0764C
0x9B2625: jmp     loc_403BC0
0x9B262A: mov     edx, [esp+arg_4]
0x9B262E: lea     eax, [edx]
0x9B2630: mov     ecx, [edx-4]
0x9B2633: xor     ecx, eax
0x9B2635: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B263A: mov     eax, offset stru_ADE5CC
0x9B263F: jmp     ___CxxFrameHandler3
