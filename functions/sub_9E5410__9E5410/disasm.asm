0x9E5410: push    0FFFFFFFFh
0x9E5412: push    offset SEH_9E5410
0x9E5417: mov     eax, large fs:0
0x9E541D: push    eax
0x9E541E: mov     eax, ___security_cookie
0x9E5423: xor     eax, esp
0x9E5425: push    eax
0x9E5426: lea     eax, [esp+10h+var_C]
0x9E542A: mov     large fs:0, eax
0x9E5430: push    offset off_B11B6C; "1.0, 1.0"
0x9E5435: mov     ecx, offset BlendSettingCollection
0x9E543A: mov     [esp+14h+var_4], 0
0x9E5442: call    SettingCollectionList_AddSetting
0x9E5447: push    offset sub_A1CE50; void (__cdecl *)()
0x9E544C: call    _atexit
0x9E5451: add     esp, 4
0x9E5454: mov     ecx, [esp+10h+var_C]
0x9E5458: mov     large fs:0, ecx
0x9E545F: pop     ecx
0x9E5460: add     esp, 0Ch
0x9E5463: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9E00: mov     ecx, offset off_B11B6C; "1.0, 1.0"
0x9B9E05: jmp     loc_403BC0
0x9B9E0A: mov     edx, [esp+arg_4]
0x9B9E0E: lea     eax, [edx]
0x9B9E10: mov     ecx, [edx-4]
0x9B9E13: xor     ecx, eax
0x9B9E15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9E1A: mov     eax, offset stru_AE4074
0x9B9E1F: jmp     ___CxxFrameHandler3
