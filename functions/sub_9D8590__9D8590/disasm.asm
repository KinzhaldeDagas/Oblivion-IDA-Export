0x9D8590: push    0FFFFFFFFh
0x9D8592: push    offset SEH_9D8590
0x9D8597: mov     eax, large fs:0
0x9D859D: push    eax
0x9D859E: mov     eax, ___security_cookie
0x9D85A3: xor     eax, esp
0x9D85A5: push    eax
0x9D85A6: lea     eax, [esp+10h+var_C]
0x9D85AA: mov     large fs:0, eax
0x9D85B0: push    offset off_B02CD0
0x9D85B5: mov     ecx, offset INISettingCollection
0x9D85BA: mov     [esp+14h+var_4], 0
0x9D85C2: call    SettingCollectionList_AddSetting
0x9D85C7: push    offset sub_A16880; void (__cdecl *)()
0x9D85CC: call    _atexit
0x9D85D1: add     esp, 4
0x9D85D4: mov     ecx, [esp+10h+var_C]
0x9D85D8: mov     large fs:0, ecx
0x9D85DF: pop     ecx
0x9D85E0: add     esp, 0Ch
0x9D85E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA300: mov     ecx, offset off_B02CD0
0x9AA305: jmp     loc_403BC0
0x9AA30A: mov     edx, [esp+arg_4]
0x9AA30E: lea     eax, [edx]
0x9AA310: mov     ecx, [edx-4]
0x9AA313: xor     ecx, eax
0x9AA315: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA31A: mov     eax, offset stru_AD7304
0x9AA31F: jmp     ___CxxFrameHandler3
