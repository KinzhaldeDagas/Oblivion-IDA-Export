0x9DD660: push    0FFFFFFFFh
0x9DD662: push    offset SEH_9DD660
0x9DD667: mov     eax, large fs:0
0x9DD66D: push    eax
0x9DD66E: mov     eax, ___security_cookie
0x9DD673: xor     eax, esp
0x9DD675: push    eax
0x9DD676: lea     eax, [esp+10h+var_C]
0x9DD67A: mov     large fs:0, eax
0x9DD680: push    offset flt_B06D4C
0x9DD685: mov     ecx, offset INISettingCollection
0x9DD68A: mov     [esp+14h+var_4], 0
0x9DD692: call    SettingCollectionList_AddSetting
0x9DD697: push    offset sub_A190E0; void (__cdecl *)()
0x9DD69C: call    _atexit
0x9DD6A1: add     esp, 4
0x9DD6A4: mov     ecx, [esp+10h+var_C]
0x9DD6A8: mov     large fs:0, ecx
0x9DD6AF: pop     ecx
0x9DD6B0: add     esp, 0Ch
0x9DD6B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0A30: mov     ecx, offset flt_B06D4C
0x9B0A35: jmp     loc_403BC0
0x9B0A3A: mov     edx, [esp+arg_4]
0x9B0A3E: lea     eax, [edx]
0x9B0A40: mov     ecx, [edx-4]
0x9B0A43: xor     ecx, eax
0x9B0A45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0A4A: mov     eax, offset stru_ADCCE4
0x9B0A4F: jmp     ___CxxFrameHandler3
