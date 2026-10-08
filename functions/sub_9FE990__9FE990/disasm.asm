0x9FE990: push    0FFFFFFFFh
0x9FE992: push    offset SEH_9FE990
0x9FE997: mov     eax, large fs:0
0x9FE99D: push    eax
0x9FE99E: mov     eax, ___security_cookie
0x9FE9A3: xor     eax, esp
0x9FE9A5: push    eax
0x9FE9A6: lea     eax, [esp+10h+var_C]
0x9FE9AA: mov     large fs:0, eax
0x9FE9B0: push    offset byte_B15834
0x9FE9B5: mov     ecx, offset INISettingCollection
0x9FE9BA: mov     [esp+14h+var_4], 0
0x9FE9C2: call    SettingCollectionList_AddSetting
0x9FE9C7: push    offset sub_A25F30; void (__cdecl *)()
0x9FE9CC: call    _atexit
0x9FE9D1: add     esp, 4
0x9FE9D4: mov     ecx, [esp+10h+var_C]
0x9FE9D8: mov     large fs:0, ecx
0x9FE9DF: pop     ecx
0x9FE9E0: add     esp, 0Ch
0x9FE9E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C5250: mov     ecx, offset byte_B15834
0x9C5255: jmp     loc_403BC0
0x9C525A: mov     edx, [esp+arg_4]
0x9C525E: lea     eax, [edx]
0x9C5260: mov     ecx, [edx-4]
0x9C5263: xor     ecx, eax
0x9C5265: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C526A: mov     eax, offset stru_AEDA64
0x9C526F: jmp     ___CxxFrameHandler3
