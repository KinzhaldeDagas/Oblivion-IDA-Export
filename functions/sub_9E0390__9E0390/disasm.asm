0x9E0390: push    0FFFFFFFFh
0x9E0392: push    offset SEH_9E0390
0x9E0397: mov     eax, large fs:0
0x9E039D: push    eax
0x9E039E: mov     eax, ___security_cookie
0x9E03A3: xor     eax, esp
0x9E03A5: push    eax
0x9E03A6: lea     eax, [esp+10h+var_C]
0x9E03AA: mov     large fs:0, eax
0x9E03B0: push    offset unk_B07614
0x9E03B5: mov     ecx, offset INISettingCollection
0x9E03BA: mov     [esp+14h+var_4], 0
0x9E03C2: call    SettingCollectionList_AddSetting
0x9E03C7: push    offset sub_A1A820; void (__cdecl *)()
0x9E03CC: call    _atexit
0x9E03D1: add     esp, 4
0x9E03D4: mov     ecx, [esp+10h+var_C]
0x9E03D8: mov     large fs:0, ecx
0x9E03DF: pop     ecx
0x9E03E0: add     esp, 0Ch
0x9E03E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B24D0: mov     ecx, offset unk_B07614
0x9B24D5: jmp     loc_403BC0
0x9B24DA: mov     edx, [esp+arg_4]
0x9B24DE: lea     eax, [edx]
0x9B24E0: mov     ecx, [edx-4]
0x9B24E3: xor     ecx, eax
0x9B24E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B24EA: mov     eax, offset stru_ADE498
0x9B24EF: jmp     ___CxxFrameHandler3
