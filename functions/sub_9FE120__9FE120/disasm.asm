0x9FE120: push    0FFFFFFFFh
0x9FE122: push    offset SEH_9FE120
0x9FE127: mov     eax, large fs:0
0x9FE12D: push    eax
0x9FE12E: mov     eax, ___security_cookie
0x9FE133: xor     eax, esp
0x9FE135: push    eax
0x9FE136: lea     eax, [esp+10h+var_C]
0x9FE13A: mov     large fs:0, eax
0x9FE140: push    offset unk_B14F10
0x9FE145: mov     ecx, offset INISettingCollection
0x9FE14A: mov     [esp+14h+var_4], 0
0x9FE152: call    SettingCollectionList_AddSetting
0x9FE157: push    offset sub_A25B90; void (__cdecl *)()
0x9FE15C: call    _atexit
0x9FE161: add     esp, 4
0x9FE164: mov     ecx, [esp+10h+var_C]
0x9FE168: mov     large fs:0, ecx
0x9FE16F: pop     ecx
0x9FE170: add     esp, 0Ch
0x9FE173: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4600: mov     ecx, offset unk_B14F10
0x9C4605: jmp     loc_403BC0
0x9C460A: mov     edx, [esp+arg_4]
0x9C460E: lea     eax, [edx]
0x9C4610: mov     ecx, [edx-4]
0x9C4613: xor     ecx, eax
0x9C4615: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C461A: mov     eax, offset stru_AECFA0
0x9C461F: jmp     ___CxxFrameHandler3
