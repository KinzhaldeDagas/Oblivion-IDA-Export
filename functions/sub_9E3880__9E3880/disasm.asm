0x9E3880: push    0FFFFFFFFh
0x9E3882: push    offset SEH_9E3880
0x9E3887: mov     eax, large fs:0
0x9E388D: push    eax
0x9E388E: mov     eax, ___security_cookie
0x9E3893: xor     eax, esp
0x9E3895: push    eax
0x9E3896: lea     eax, [esp+10h+var_C]
0x9E389A: mov     large fs:0, eax
0x9E38A0: push    offset unk_B09C08
0x9E38A5: mov     ecx, offset INISettingCollection
0x9E38AA: mov     [esp+14h+var_4], 0
0x9E38B2: call    SettingCollectionList_AddSetting
0x9E38B7: push    offset sub_A1BFD0; void (__cdecl *)()
0x9E38BC: call    _atexit
0x9E38C1: add     esp, 4
0x9E38C4: mov     ecx, [esp+10h+var_C]
0x9E38C8: mov     large fs:0, ecx
0x9E38CF: pop     ecx
0x9E38D0: add     esp, 0Ch
0x9E38D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6610: mov     ecx, offset unk_B09C08
0x9B6615: jmp     loc_403BC0
0x9B661A: mov     edx, [esp+arg_4]
0x9B661E: lea     eax, [edx]
0x9B6620: mov     ecx, [edx-4]
0x9B6623: xor     ecx, eax
0x9B6625: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B662A: mov     eax, offset stru_AE14B0
0x9B662F: jmp     ___CxxFrameHandler3
