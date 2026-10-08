0x9E5290: push    0FFFFFFFFh
0x9E5292: push    offset SEH_9E5290
0x9E5297: mov     eax, large fs:0
0x9E529D: push    eax
0x9E529E: mov     eax, ___security_cookie
0x9E52A3: xor     eax, esp
0x9E52A5: push    eax
0x9E52A6: lea     eax, [esp+10h+var_C]
0x9E52AA: mov     large fs:0, eax
0x9E52B0: push    offset off_B11B4C; "1.0, 1.0"
0x9E52B5: mov     ecx, offset BlendSettingCollection
0x9E52BA: mov     [esp+14h+var_4], 0
0x9E52C2: call    SettingCollectionList_AddSetting
0x9E52C7: push    offset sub_A1CD90; void (__cdecl *)()
0x9E52CC: call    _atexit
0x9E52D1: add     esp, 4
0x9E52D4: mov     ecx, [esp+10h+var_C]
0x9E52D8: mov     large fs:0, ecx
0x9E52DF: pop     ecx
0x9E52E0: add     esp, 0Ch
0x9E52E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9D40: mov     ecx, offset off_B11B4C; "1.0, 1.0"
0x9B9D45: jmp     loc_403BC0
0x9B9D4A: mov     edx, [esp+arg_4]
0x9B9D4E: lea     eax, [edx]
0x9B9D50: mov     ecx, [edx-4]
0x9B9D53: xor     ecx, eax
0x9B9D55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9D5A: mov     eax, offset stru_AE3FC4
0x9B9D5F: jmp     ___CxxFrameHandler3
