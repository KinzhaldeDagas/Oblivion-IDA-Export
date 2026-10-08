0x9E5050: push    0FFFFFFFFh
0x9E5052: push    offset SEH_9E5050
0x9E5057: mov     eax, large fs:0
0x9E505D: push    eax
0x9E505E: mov     eax, ___security_cookie
0x9E5063: xor     eax, esp
0x9E5065: push    eax
0x9E5066: lea     eax, [esp+10h+var_C]
0x9E506A: mov     large fs:0, eax
0x9E5070: push    offset off_B11B1C; "1.0, 1.0"
0x9E5075: mov     ecx, offset BlendSettingCollection
0x9E507A: mov     [esp+14h+var_4], 0
0x9E5082: call    SettingCollectionList_AddSetting
0x9E5087: push    offset sub_A1CC70; void (__cdecl *)()
0x9E508C: call    _atexit
0x9E5091: add     esp, 4
0x9E5094: mov     ecx, [esp+10h+var_C]
0x9E5098: mov     large fs:0, ecx
0x9E509F: pop     ecx
0x9E50A0: add     esp, 0Ch
0x9E50A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9C20: mov     ecx, offset off_B11B1C; "1.0, 1.0"
0x9B9C25: jmp     loc_403BC0
0x9B9C2A: mov     edx, [esp+arg_4]
0x9B9C2E: lea     eax, [edx]
0x9B9C30: mov     ecx, [edx-4]
0x9B9C33: xor     ecx, eax
0x9B9C35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9C3A: mov     eax, offset stru_AE3EBC
0x9B9C3F: jmp     ___CxxFrameHandler3
