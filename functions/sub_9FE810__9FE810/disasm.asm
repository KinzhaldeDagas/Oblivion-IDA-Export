0x9FE810: push    0FFFFFFFFh
0x9FE812: push    offset SEH_9FE810
0x9FE817: mov     eax, large fs:0
0x9FE81D: push    eax
0x9FE81E: mov     eax, ___security_cookie
0x9FE823: xor     eax, esp
0x9FE825: push    eax
0x9FE826: lea     eax, [esp+10h+var_C]
0x9FE82A: mov     large fs:0, eax
0x9FE830: push    offset bSnapToAngle
0x9FE835: mov     ecx, offset INISettingCollection
0x9FE83A: mov     [esp+14h+var_4], 0
0x9FE842: call    SettingCollectionList_AddSetting
0x9FE847: push    offset sub_A25E70; void (__cdecl *)()
0x9FE84C: call    _atexit
0x9FE851: add     esp, 4
0x9FE854: mov     ecx, [esp+10h+var_C]
0x9FE858: mov     large fs:0, ecx
0x9FE85F: pop     ecx
0x9FE860: add     esp, 0Ch
0x9FE863: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C5190: mov     ecx, offset bSnapToAngle
0x9C5195: jmp     loc_403BC0
0x9C519A: mov     edx, [esp+arg_4]
0x9C519E: lea     eax, [edx]
0x9C51A0: mov     ecx, [edx-4]
0x9C51A3: xor     ecx, eax
0x9C51A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C51AA: mov     eax, offset stru_AED9B4
0x9C51AF: jmp     ___CxxFrameHandler3
