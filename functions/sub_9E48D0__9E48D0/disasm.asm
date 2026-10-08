0x9E48D0: push    0FFFFFFFFh
0x9E48D2: push    offset SEH_9E48D0
0x9E48D7: mov     eax, large fs:0
0x9E48DD: push    eax
0x9E48DE: mov     eax, ___security_cookie
0x9E48E3: xor     eax, esp
0x9E48E5: push    eax
0x9E48E6: lea     eax, [esp+10h+var_C]
0x9E48EA: mov     large fs:0, eax
0x9E48F0: push    offset off_B11A7C; "1.0, 1.0"
0x9E48F5: mov     ecx, offset BlendSettingCollection
0x9E48FA: mov     [esp+14h+var_4], 0
0x9E4902: call    SettingCollectionList_AddSetting
0x9E4907: push    offset sub_A1C8B0; void (__cdecl *)()
0x9E490C: call    _atexit
0x9E4911: add     esp, 4
0x9E4914: mov     ecx, [esp+10h+var_C]
0x9E4918: mov     large fs:0, ecx
0x9E491F: pop     ecx
0x9E4920: add     esp, 0Ch
0x9E4923: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9860: mov     ecx, offset off_B11A7C; "1.0, 1.0"
0x9B9865: jmp     loc_403BC0
0x9B986A: mov     edx, [esp+arg_4]
0x9B986E: lea     eax, [edx]
0x9B9870: mov     ecx, [edx-4]
0x9B9873: xor     ecx, eax
0x9B9875: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B987A: mov     eax, offset stru_AE3B4C
0x9B987F: jmp     ___CxxFrameHandler3
