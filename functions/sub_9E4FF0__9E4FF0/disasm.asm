0x9E4FF0: push    0FFFFFFFFh
0x9E4FF2: push    offset SEH_9E4FF0
0x9E4FF7: mov     eax, large fs:0
0x9E4FFD: push    eax
0x9E4FFE: mov     eax, ___security_cookie
0x9E5003: xor     eax, esp
0x9E5005: push    eax
0x9E5006: lea     eax, [esp+10h+var_C]
0x9E500A: mov     large fs:0, eax
0x9E5010: push    offset off_B11B14; "1.0, 1.0"
0x9E5015: mov     ecx, offset BlendSettingCollection
0x9E501A: mov     [esp+14h+var_4], 0
0x9E5022: call    SettingCollectionList_AddSetting
0x9E5027: push    offset sub_A1CC40; void (__cdecl *)()
0x9E502C: call    _atexit
0x9E5031: add     esp, 4
0x9E5034: mov     ecx, [esp+10h+var_C]
0x9E5038: mov     large fs:0, ecx
0x9E503F: pop     ecx
0x9E5040: add     esp, 0Ch
0x9E5043: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9BF0: mov     ecx, offset off_B11B14; "1.0, 1.0"
0x9B9BF5: jmp     loc_403BC0
0x9B9BFA: mov     edx, [esp+arg_4]
0x9B9BFE: lea     eax, [edx]
0x9B9C00: mov     ecx, [edx-4]
0x9B9C03: xor     ecx, eax
0x9B9C05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9C0A: mov     eax, offset stru_AE3E90
0x9B9C0F: jmp     ___CxxFrameHandler3
