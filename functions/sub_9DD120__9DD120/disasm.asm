0x9DD120: push    0FFFFFFFFh
0x9DD122: push    offset SEH_9DD120
0x9DD127: mov     eax, large fs:0
0x9DD12D: push    eax
0x9DD12E: mov     eax, ___security_cookie
0x9DD133: xor     eax, esp
0x9DD135: push    eax
0x9DD136: lea     eax, [esp+10h+var_C]
0x9DD13A: mov     large fs:0, eax
0x9DD140: push    offset byte_B06CDC
0x9DD145: mov     ecx, offset INISettingCollection
0x9DD14A: mov     [esp+14h+var_4], 0
0x9DD152: call    SettingCollectionList_AddSetting
0x9DD157: push    offset sub_A18E40; void (__cdecl *)()
0x9DD15C: call    _atexit
0x9DD161: add     esp, 4
0x9DD164: mov     ecx, [esp+10h+var_C]
0x9DD168: mov     large fs:0, ecx
0x9DD16F: pop     ecx
0x9DD170: add     esp, 0Ch
0x9DD173: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0790: mov     ecx, offset byte_B06CDC
0x9B0795: jmp     loc_403BC0
0x9B079A: mov     edx, [esp+arg_4]
0x9B079E: lea     eax, [edx]
0x9B07A0: mov     ecx, [edx-4]
0x9B07A3: xor     ecx, eax
0x9B07A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B07AA: mov     eax, offset stru_ADCA7C
0x9B07AF: jmp     ___CxxFrameHandler3
