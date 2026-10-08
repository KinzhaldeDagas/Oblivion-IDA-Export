0x9FC410: push    0FFFFFFFFh
0x9FC412: push    offset SEH_9FC410
0x9FC417: mov     eax, large fs:0
0x9FC41D: push    eax
0x9FC41E: mov     eax, ___security_cookie
0x9FC423: xor     eax, esp
0x9FC425: push    eax
0x9FC426: lea     eax, [esp+10h+var_C]
0x9FC42A: mov     large fs:0, eax
0x9FC430: push    offset dword_B14168
0x9FC435: mov     ecx, offset INISettingCollection
0x9FC43A: mov     [esp+14h+var_4], 0
0x9FC442: call    SettingCollectionList_AddSetting
0x9FC447: push    offset sub_A24CE0; void (__cdecl *)()
0x9FC44C: call    _atexit
0x9FC451: add     esp, 4
0x9FC454: mov     ecx, [esp+10h+var_C]
0x9FC458: mov     large fs:0, ecx
0x9FC45F: pop     ecx
0x9FC460: add     esp, 0Ch
0x9FC463: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C07A0: mov     ecx, offset dword_B14168
0x9C07A5: jmp     loc_403BC0
0x9C07AA: mov     edx, [esp+arg_4]
0x9C07AE: lea     eax, [edx]
0x9C07B0: mov     ecx, [edx-4]
0x9C07B3: xor     ecx, eax
0x9C07B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C07BA: mov     eax, offset stru_AE9A08
0x9C07BF: jmp     ___CxxFrameHandler3
