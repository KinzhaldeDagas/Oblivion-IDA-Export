0x9DC430: push    0FFFFFFFFh
0x9DC432: push    offset SEH_9DC430
0x9DC437: mov     eax, large fs:0
0x9DC43D: push    eax
0x9DC43E: mov     eax, ___security_cookie
0x9DC443: xor     eax, esp
0x9DC445: push    eax
0x9DC446: lea     eax, [esp+10h+var_C]
0x9DC44A: mov     large fs:0, eax
0x9DC450: push    offset unk_B068D8
0x9DC455: mov     ecx, offset INISettingCollection
0x9DC45A: mov     [esp+14h+var_4], 0
0x9DC462: call    SettingCollectionList_AddSetting
0x9DC467: push    offset sub_A18740; void (__cdecl *)()
0x9DC46C: call    _atexit
0x9DC471: add     esp, 4
0x9DC474: mov     ecx, [esp+10h+var_C]
0x9DC478: mov     large fs:0, ecx
0x9DC47F: pop     ecx
0x9DC480: add     esp, 0Ch
0x9DC483: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF6C0: mov     ecx, offset unk_B068D8
0x9AF6C5: jmp     loc_403BC0
0x9AF6CA: mov     edx, [esp+arg_4]
0x9AF6CE: lea     eax, [edx]
0x9AF6D0: mov     ecx, [edx-4]
0x9AF6D3: xor     ecx, eax
0x9AF6D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF6DA: mov     eax, offset stru_ADBC50
0x9AF6DF: jmp     ___CxxFrameHandler3
