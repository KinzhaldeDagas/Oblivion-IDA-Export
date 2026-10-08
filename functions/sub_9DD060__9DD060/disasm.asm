0x9DD060: push    0FFFFFFFFh
0x9DD062: push    offset SEH_9DD060
0x9DD067: mov     eax, large fs:0
0x9DD06D: push    eax
0x9DD06E: mov     eax, ___security_cookie
0x9DD073: xor     eax, esp
0x9DD075: push    eax
0x9DD076: lea     eax, [esp+10h+var_C]
0x9DD07A: mov     large fs:0, eax
0x9DD080: push    offset byte_B06CCC
0x9DD085: mov     ecx, offset INISettingCollection
0x9DD08A: mov     [esp+14h+var_4], 0
0x9DD092: call    SettingCollectionList_AddSetting
0x9DD097: push    offset sub_A18DE0; void (__cdecl *)()
0x9DD09C: call    _atexit
0x9DD0A1: add     esp, 4
0x9DD0A4: mov     ecx, [esp+10h+var_C]
0x9DD0A8: mov     large fs:0, ecx
0x9DD0AF: pop     ecx
0x9DD0B0: add     esp, 0Ch
0x9DD0B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0730: mov     ecx, offset byte_B06CCC
0x9B0735: jmp     loc_403BC0
0x9B073A: mov     edx, [esp+arg_4]
0x9B073E: lea     eax, [edx]
0x9B0740: mov     ecx, [edx-4]
0x9B0743: xor     ecx, eax
0x9B0745: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B074A: mov     eax, offset stru_ADCA24
0x9B074F: jmp     ___CxxFrameHandler3
