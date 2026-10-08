0x9E5170: push    0FFFFFFFFh
0x9E5172: push    offset SEH_9E5170
0x9E5177: mov     eax, large fs:0
0x9E517D: push    eax
0x9E517E: mov     eax, ___security_cookie
0x9E5183: xor     eax, esp
0x9E5185: push    eax
0x9E5186: lea     eax, [esp+10h+var_C]
0x9E518A: mov     large fs:0, eax
0x9E5190: push    offset off_B11B34; "1.0, 1.0"
0x9E5195: mov     ecx, offset BlendSettingCollection
0x9E519A: mov     [esp+14h+var_4], 0
0x9E51A2: call    SettingCollectionList_AddSetting
0x9E51A7: push    offset sub_A1CD00; void (__cdecl *)()
0x9E51AC: call    _atexit
0x9E51B1: add     esp, 4
0x9E51B4: mov     ecx, [esp+10h+var_C]
0x9E51B8: mov     large fs:0, ecx
0x9E51BF: pop     ecx
0x9E51C0: add     esp, 0Ch
0x9E51C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9CB0: mov     ecx, offset off_B11B34; "1.0, 1.0"
0x9B9CB5: jmp     loc_403BC0
0x9B9CBA: mov     edx, [esp+arg_4]
0x9B9CBE: lea     eax, [edx]
0x9B9CC0: mov     ecx, [edx-4]
0x9B9CC3: xor     ecx, eax
0x9B9CC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9CCA: mov     eax, offset stru_AE3F40
0x9B9CCF: jmp     ___CxxFrameHandler3
