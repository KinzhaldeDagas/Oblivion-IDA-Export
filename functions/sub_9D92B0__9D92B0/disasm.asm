0x9D92B0: push    0FFFFFFFFh
0x9D92B2: push    offset SEH_9D92B0
0x9D92B7: mov     eax, large fs:0
0x9D92BD: push    eax
0x9D92BE: mov     eax, ___security_cookie
0x9D92C3: xor     eax, esp
0x9D92C5: push    eax
0x9D92C6: lea     eax, [esp+10h+var_C]
0x9D92CA: mov     large fs:0, eax
0x9D92D0: push    offset lpDefault
0x9D92D5: mov     ecx, offset INISettingCollection
0x9D92DA: mov     [esp+14h+var_4], 0
0x9D92E2: call    SettingCollectionList_AddSetting
0x9D92E7: push    offset sub_A16F10; void (__cdecl *)()
0x9D92EC: call    _atexit
0x9D92F1: add     esp, 4
0x9D92F4: mov     ecx, [esp+10h+var_C]
0x9D92F8: mov     large fs:0, ecx
0x9D92FF: pop     ecx
0x9D9300: add     esp, 0Ch
0x9D9303: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA990: mov     ecx, offset lpDefault
0x9AA995: jmp     loc_403BC0
0x9AA99A: mov     edx, [esp+arg_4]
0x9AA99E: lea     eax, [edx]
0x9AA9A0: mov     ecx, [edx-4]
0x9AA9A3: xor     ecx, eax
0x9AA9A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA9AA: mov     eax, offset stru_AD7908
0x9AA9AF: jmp     ___CxxFrameHandler3
