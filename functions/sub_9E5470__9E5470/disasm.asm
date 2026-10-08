0x9E5470: push    0FFFFFFFFh
0x9E5472: push    offset SEH_9E5470
0x9E5477: mov     eax, large fs:0
0x9E547D: push    eax
0x9E547E: mov     eax, ___security_cookie
0x9E5483: xor     eax, esp
0x9E5485: push    eax
0x9E5486: lea     eax, [esp+10h+var_C]
0x9E548A: mov     large fs:0, eax
0x9E5490: push    offset off_B11B74; "1.0, 1.0"
0x9E5495: mov     ecx, offset BlendSettingCollection
0x9E549A: mov     [esp+14h+var_4], 0
0x9E54A2: call    SettingCollectionList_AddSetting
0x9E54A7: push    offset sub_A1CE80; void (__cdecl *)()
0x9E54AC: call    _atexit
0x9E54B1: add     esp, 4
0x9E54B4: mov     ecx, [esp+10h+var_C]
0x9E54B8: mov     large fs:0, ecx
0x9E54BF: pop     ecx
0x9E54C0: add     esp, 0Ch
0x9E54C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9E30: mov     ecx, offset off_B11B74; "1.0, 1.0"
0x9B9E35: jmp     loc_403BC0
0x9B9E3A: mov     edx, [esp+arg_4]
0x9B9E3E: lea     eax, [edx]
0x9B9E40: mov     ecx, [edx-4]
0x9B9E43: xor     ecx, eax
0x9B9E45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9E4A: mov     eax, offset stru_AE40A0
0x9B9E4F: jmp     ___CxxFrameHandler3
