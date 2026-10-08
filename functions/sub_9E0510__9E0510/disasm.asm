0x9E0510: push    0FFFFFFFFh
0x9E0512: push    offset SEH_9E0510
0x9E0517: mov     eax, large fs:0
0x9E051D: push    eax
0x9E051E: mov     eax, ___security_cookie
0x9E0523: xor     eax, esp
0x9E0525: push    eax
0x9E0526: lea     eax, [esp+10h+var_C]
0x9E052A: mov     large fs:0, eax
0x9E0530: push    offset byte_B07634
0x9E0535: mov     ecx, offset INISettingCollection
0x9E053A: mov     [esp+14h+var_4], 0
0x9E0542: call    SettingCollectionList_AddSetting
0x9E0547: push    offset sub_A1A8E0; void (__cdecl *)()
0x9E054C: call    _atexit
0x9E0551: add     esp, 4
0x9E0554: mov     ecx, [esp+10h+var_C]
0x9E0558: mov     large fs:0, ecx
0x9E055F: pop     ecx
0x9E0560: add     esp, 0Ch
0x9E0563: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2590: mov     ecx, offset byte_B07634
0x9B2595: jmp     loc_403BC0
0x9B259A: mov     edx, [esp+arg_4]
0x9B259E: lea     eax, [edx]
0x9B25A0: mov     ecx, [edx-4]
0x9B25A3: xor     ecx, eax
0x9B25A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B25AA: mov     eax, offset stru_ADE548
0x9B25AF: jmp     ___CxxFrameHandler3
