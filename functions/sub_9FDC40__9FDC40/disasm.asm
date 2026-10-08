0x9FDC40: push    0FFFFFFFFh
0x9FDC42: push    offset SEH_9FDC40
0x9FDC47: mov     eax, large fs:0
0x9FDC4D: push    eax
0x9FDC4E: mov     eax, ___security_cookie
0x9FDC53: xor     eax, esp
0x9FDC55: push    eax
0x9FDC56: lea     eax, [esp+10h+var_C]
0x9FDC5A: mov     large fs:0, eax
0x9FDC60: push    offset trackLevelUps
0x9FDC65: mov     ecx, offset INISettingCollection
0x9FDC6A: mov     [esp+14h+var_4], 0
0x9FDC72: call    SettingCollectionList_AddSetting
0x9FDC77: push    offset sub_A25920; void (__cdecl *)()
0x9FDC7C: call    _atexit
0x9FDC81: add     esp, 4
0x9FDC84: mov     ecx, [esp+10h+var_C]
0x9FDC88: mov     large fs:0, ecx
0x9FDC8F: pop     ecx
0x9FDC90: add     esp, 0Ch
0x9FDC93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4390: mov     ecx, offset trackLevelUps
0x9C4395: jmp     loc_403BC0
0x9C439A: mov     edx, [esp+arg_4]
0x9C439E: lea     eax, [edx]
0x9C43A0: mov     ecx, [edx-4]
0x9C43A3: xor     ecx, eax
0x9C43A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C43AA: mov     eax, offset stru_AECD64
0x9C43AF: jmp     ___CxxFrameHandler3
