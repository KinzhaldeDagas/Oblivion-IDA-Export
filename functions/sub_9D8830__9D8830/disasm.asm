0x9D8830: push    0FFFFFFFFh
0x9D8832: push    offset SEH_9D8830
0x9D8837: mov     eax, large fs:0
0x9D883D: push    eax
0x9D883E: mov     eax, ___security_cookie
0x9D8843: xor     eax, esp
0x9D8845: push    eax
0x9D8846: lea     eax, [esp+10h+var_C]
0x9D884A: mov     large fs:0, eax
0x9D8850: push    offset dword_B02D08
0x9D8855: mov     ecx, offset INISettingCollection
0x9D885A: mov     [esp+14h+var_4], 0
0x9D8862: call    SettingCollectionList_AddSetting
0x9D8867: push    offset sub_A169D0; void (__cdecl *)()
0x9D886C: call    _atexit
0x9D8871: add     esp, 4
0x9D8874: mov     ecx, [esp+10h+var_C]
0x9D8878: mov     large fs:0, ecx
0x9D887F: pop     ecx
0x9D8880: add     esp, 0Ch
0x9D8883: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA450: mov     ecx, offset dword_B02D08
0x9AA455: jmp     loc_403BC0
0x9AA45A: mov     edx, [esp+arg_4]
0x9AA45E: lea     eax, [edx]
0x9AA460: mov     ecx, [edx-4]
0x9AA463: xor     ecx, eax
0x9AA465: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA46A: mov     eax, offset stru_AD7438
0x9AA46F: jmp     ___CxxFrameHandler3
