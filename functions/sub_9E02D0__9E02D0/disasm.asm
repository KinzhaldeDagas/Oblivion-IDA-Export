0x9E02D0: push    0FFFFFFFFh
0x9E02D2: push    offset SEH_9E02D0
0x9E02D7: mov     eax, large fs:0
0x9E02DD: push    eax
0x9E02DE: mov     eax, ___security_cookie
0x9E02E3: xor     eax, esp
0x9E02E5: push    eax
0x9E02E6: lea     eax, [esp+10h+var_C]
0x9E02EA: mov     large fs:0, eax
0x9E02F0: push    offset unk_B07604
0x9E02F5: mov     ecx, offset INISettingCollection
0x9E02FA: mov     [esp+14h+var_4], 0
0x9E0302: call    SettingCollectionList_AddSetting
0x9E0307: push    offset sub_A1A7C0; void (__cdecl *)()
0x9E030C: call    _atexit
0x9E0311: add     esp, 4
0x9E0314: mov     ecx, [esp+10h+var_C]
0x9E0318: mov     large fs:0, ecx
0x9E031F: pop     ecx
0x9E0320: add     esp, 0Ch
0x9E0323: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2470: mov     ecx, offset unk_B07604
0x9B2475: jmp     loc_403BC0
0x9B247A: mov     edx, [esp+arg_4]
0x9B247E: lea     eax, [edx]
0x9B2480: mov     ecx, [edx-4]
0x9B2483: xor     ecx, eax
0x9B2485: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B248A: mov     eax, offset stru_ADE440
0x9B248F: jmp     ___CxxFrameHandler3
