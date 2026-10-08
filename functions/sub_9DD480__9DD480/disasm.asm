0x9DD480: push    0FFFFFFFFh
0x9DD482: push    offset SEH_9DD480
0x9DD487: mov     eax, large fs:0
0x9DD48D: push    eax
0x9DD48E: mov     eax, ___security_cookie
0x9DD493: xor     eax, esp
0x9DD495: push    eax
0x9DD496: lea     eax, [esp+10h+var_C]
0x9DD49A: mov     large fs:0, eax
0x9DD4A0: push    offset texmipmapskip
0x9DD4A5: mov     ecx, offset INISettingCollection
0x9DD4AA: mov     [esp+14h+var_4], 0
0x9DD4B2: call    SettingCollectionList_AddSetting
0x9DD4B7: push    offset sub_A18FF0; void (__cdecl *)()
0x9DD4BC: call    _atexit
0x9DD4C1: add     esp, 4
0x9DD4C4: mov     ecx, [esp+10h+var_C]
0x9DD4C8: mov     large fs:0, ecx
0x9DD4CF: pop     ecx
0x9DD4D0: add     esp, 0Ch
0x9DD4D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0940: mov     ecx, offset texmipmapskip
0x9B0945: jmp     loc_403BC0
0x9B094A: mov     edx, [esp+arg_4]
0x9B094E: lea     eax, [edx]
0x9B0950: mov     ecx, [edx-4]
0x9B0953: xor     ecx, eax
0x9B0955: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B095A: mov     eax, offset stru_ADCC08
0x9B095F: jmp     ___CxxFrameHandler3
