0x9E5830: push    0FFFFFFFFh
0x9E5832: push    offset SEH_9E5830
0x9E5837: mov     eax, large fs:0
0x9E583D: push    eax
0x9E583E: mov     eax, ___security_cookie
0x9E5843: xor     eax, esp
0x9E5845: push    eax
0x9E5846: lea     eax, [esp+10h+var_C]
0x9E584A: mov     large fs:0, eax
0x9E5850: push    offset off_B11BC4; "1.0, 1.0"
0x9E5855: mov     ecx, offset BlendSettingCollection
0x9E585A: mov     [esp+14h+var_4], 0
0x9E5862: call    SettingCollectionList_AddSetting
0x9E5867: push    offset sub_A1D060; void (__cdecl *)()
0x9E586C: call    _atexit
0x9E5871: add     esp, 4
0x9E5874: mov     ecx, [esp+10h+var_C]
0x9E5878: mov     large fs:0, ecx
0x9E587F: pop     ecx
0x9E5880: add     esp, 0Ch
0x9E5883: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA010: mov     ecx, offset off_B11BC4; "1.0, 1.0"
0x9BA015: jmp     loc_403BC0
0x9BA01A: mov     edx, [esp+arg_4]
0x9BA01E: lea     eax, [edx]
0x9BA020: mov     ecx, [edx-4]
0x9BA023: xor     ecx, eax
0x9BA025: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA02A: mov     eax, offset stru_AE4258
0x9BA02F: jmp     ___CxxFrameHandler3
