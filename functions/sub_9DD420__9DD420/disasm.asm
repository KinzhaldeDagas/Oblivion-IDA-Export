0x9DD420: push    0FFFFFFFFh
0x9DD422: push    offset SEH_9DD420
0x9DD427: mov     eax, large fs:0
0x9DD42D: push    eax
0x9DD42E: mov     eax, ___security_cookie
0x9DD433: xor     eax, esp
0x9DD435: push    eax
0x9DD436: lea     eax, [esp+10h+var_C]
0x9DD43A: mov     large fs:0, eax
0x9DD440: push    offset byte_B06D1C
0x9DD445: mov     ecx, offset INISettingCollection
0x9DD44A: mov     [esp+14h+var_4], 0
0x9DD452: call    SettingCollectionList_AddSetting
0x9DD457: push    offset sub_A18FC0; void (__cdecl *)()
0x9DD45C: call    _atexit
0x9DD461: add     esp, 4
0x9DD464: mov     ecx, [esp+10h+var_C]
0x9DD468: mov     large fs:0, ecx
0x9DD46F: pop     ecx
0x9DD470: add     esp, 0Ch
0x9DD473: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0910: mov     ecx, offset byte_B06D1C
0x9B0915: jmp     loc_403BC0
0x9B091A: mov     edx, [esp+arg_4]
0x9B091E: lea     eax, [edx]
0x9B0920: mov     ecx, [edx-4]
0x9B0923: xor     ecx, eax
0x9B0925: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B092A: mov     eax, offset stru_ADCBDC
0x9B092F: jmp     ___CxxFrameHandler3
