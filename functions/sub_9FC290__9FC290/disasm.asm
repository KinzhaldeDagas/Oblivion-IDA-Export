0x9FC290: push    0FFFFFFFFh
0x9FC292: push    offset SEH_9FC290
0x9FC297: mov     eax, large fs:0
0x9FC29D: push    eax
0x9FC29E: mov     eax, ___security_cookie
0x9FC2A3: xor     eax, esp
0x9FC2A5: push    eax
0x9FC2A6: lea     eax, [esp+10h+var_C]
0x9FC2AA: mov     large fs:0, eax
0x9FC2B0: push    offset aOgsJ
0x9FC2B5: mov     ecx, offset INISettingCollection
0x9FC2BA: mov     [esp+14h+var_4], 0
0x9FC2C2: call    SettingCollectionList_AddSetting
0x9FC2C7: push    offset sub_A24C20; void (__cdecl *)()
0x9FC2CC: call    _atexit
0x9FC2D1: add     esp, 4
0x9FC2D4: mov     ecx, [esp+10h+var_C]
0x9FC2D8: mov     large fs:0, ecx
0x9FC2DF: pop     ecx
0x9FC2E0: add     esp, 0Ch
0x9FC2E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C06E0: mov     ecx, offset aOgsJ
0x9C06E5: jmp     loc_403BC0
0x9C06EA: mov     edx, [esp+arg_4]
0x9C06EE: lea     eax, [edx]
0x9C06F0: mov     ecx, [edx-4]
0x9C06F3: xor     ecx, eax
0x9C06F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C06FA: mov     eax, offset stru_AE9958
0x9C06FF: jmp     ___CxxFrameHandler3
