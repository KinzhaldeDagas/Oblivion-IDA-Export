0x9E5650: push    0FFFFFFFFh
0x9E5652: push    offset SEH_9E5650
0x9E5657: mov     eax, large fs:0
0x9E565D: push    eax
0x9E565E: mov     eax, ___security_cookie
0x9E5663: xor     eax, esp
0x9E5665: push    eax
0x9E5666: lea     eax, [esp+10h+var_C]
0x9E566A: mov     large fs:0, eax
0x9E5670: push    offset off_B11B9C; "1.0, 1.0"
0x9E5675: mov     ecx, offset BlendSettingCollection
0x9E567A: mov     [esp+14h+var_4], 0
0x9E5682: call    SettingCollectionList_AddSetting
0x9E5687: push    offset sub_A1CF70; void (__cdecl *)()
0x9E568C: call    _atexit
0x9E5691: add     esp, 4
0x9E5694: mov     ecx, [esp+10h+var_C]
0x9E5698: mov     large fs:0, ecx
0x9E569F: pop     ecx
0x9E56A0: add     esp, 0Ch
0x9E56A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9F20: mov     ecx, offset off_B11B9C; "1.0, 1.0"
0x9B9F25: jmp     loc_403BC0
0x9B9F2A: mov     edx, [esp+arg_4]
0x9B9F2E: lea     eax, [edx]
0x9B9F30: mov     ecx, [edx-4]
0x9B9F33: xor     ecx, eax
0x9B9F35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9F3A: mov     eax, offset stru_AE417C
0x9B9F3F: jmp     ___CxxFrameHandler3
