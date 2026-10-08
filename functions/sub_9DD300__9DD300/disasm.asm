0x9DD300: push    0FFFFFFFFh
0x9DD302: push    offset SEH_9DD300
0x9DD307: mov     eax, large fs:0
0x9DD30D: push    eax
0x9DD30E: mov     eax, ___security_cookie
0x9DD313: xor     eax, esp
0x9DD315: push    eax
0x9DD316: lea     eax, [esp+10h+var_C]
0x9DD31A: mov     large fs:0, eax
0x9DD320: push    offset unk_B06D04
0x9DD325: mov     ecx, offset INISettingCollection
0x9DD32A: mov     [esp+14h+var_4], 0
0x9DD332: call    SettingCollectionList_AddSetting
0x9DD337: push    offset sub_A18F30; void (__cdecl *)()
0x9DD33C: call    _atexit
0x9DD341: add     esp, 4
0x9DD344: mov     ecx, [esp+10h+var_C]
0x9DD348: mov     large fs:0, ecx
0x9DD34F: pop     ecx
0x9DD350: add     esp, 0Ch
0x9DD353: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0880: mov     ecx, offset unk_B06D04
0x9B0885: jmp     loc_403BC0
0x9B088A: mov     edx, [esp+arg_4]
0x9B088E: lea     eax, [edx]
0x9B0890: mov     ecx, [edx-4]
0x9B0893: xor     ecx, eax
0x9B0895: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B089A: mov     eax, offset stru_ADCB58
0x9B089F: jmp     ___CxxFrameHandler3
