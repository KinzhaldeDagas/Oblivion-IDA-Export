0x9DE560: push    0FFFFFFFFh
0x9DE562: push    offset SEH_9DE560
0x9DE567: mov     eax, large fs:0
0x9DE56D: push    eax
0x9DE56E: mov     eax, ___security_cookie
0x9DE573: xor     eax, esp
0x9DE575: push    eax
0x9DE576: lea     eax, [esp+10h+var_C]
0x9DE57A: mov     large fs:0, eax
0x9DE580: push    offset flt_B06E8C
0x9DE585: mov     ecx, offset INISettingCollection
0x9DE58A: mov     [esp+14h+var_4], 0
0x9DE592: call    SettingCollectionList_AddSetting
0x9DE597: push    offset sub_A19860; void (__cdecl *)()
0x9DE59C: call    _atexit
0x9DE5A1: add     esp, 4
0x9DE5A4: mov     ecx, [esp+10h+var_C]
0x9DE5A8: mov     large fs:0, ecx
0x9DE5AF: pop     ecx
0x9DE5B0: add     esp, 0Ch
0x9DE5B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B11B0: mov     ecx, offset flt_B06E8C
0x9B11B5: jmp     loc_403BC0
0x9B11BA: mov     edx, [esp+arg_4]
0x9B11BE: lea     eax, [edx]
0x9B11C0: mov     ecx, [edx-4]
0x9B11C3: xor     ecx, eax
0x9B11C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B11CA: mov     eax, offset stru_ADD3C4
0x9B11CF: jmp     ___CxxFrameHandler3
