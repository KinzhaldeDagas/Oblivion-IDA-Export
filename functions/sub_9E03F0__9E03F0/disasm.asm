0x9E03F0: push    0FFFFFFFFh
0x9E03F2: push    offset SEH_9E03F0
0x9E03F7: mov     eax, large fs:0
0x9E03FD: push    eax
0x9E03FE: mov     eax, ___security_cookie
0x9E0403: xor     eax, esp
0x9E0405: push    eax
0x9E0406: lea     eax, [esp+10h+var_C]
0x9E040A: mov     large fs:0, eax
0x9E0410: push    offset SettingLODFadeOutMultObjects
0x9E0415: mov     ecx, offset INISettingCollection
0x9E041A: mov     [esp+14h+var_4], 0
0x9E0422: call    SettingCollectionList_AddSetting
0x9E0427: push    offset sub_A1A850; void (__cdecl *)()
0x9E042C: call    _atexit
0x9E0431: add     esp, 4
0x9E0434: mov     ecx, [esp+10h+var_C]
0x9E0438: mov     large fs:0, ecx
0x9E043F: pop     ecx
0x9E0440: add     esp, 0Ch
0x9E0443: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2500: mov     ecx, offset SettingLODFadeOutMultObjects
0x9B2505: jmp     loc_403BC0
0x9B250A: mov     edx, [esp+arg_4]
0x9B250E: lea     eax, [edx]
0x9B2510: mov     ecx, [edx-4]
0x9B2513: xor     ecx, eax
0x9B2515: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B251A: mov     eax, offset stru_ADE4C4
0x9B251F: jmp     ___CxxFrameHandler3
