0x9E58F0: push    0FFFFFFFFh
0x9E58F2: push    offset SEH_9E58F0
0x9E58F7: mov     eax, large fs:0
0x9E58FD: push    eax
0x9E58FE: mov     eax, ___security_cookie
0x9E5903: xor     eax, esp
0x9E5905: push    eax
0x9E5906: lea     eax, [esp+10h+var_C]
0x9E590A: mov     large fs:0, eax
0x9E5910: push    offset off_B11BD4; "1.0, 1.0"
0x9E5915: mov     ecx, offset BlendSettingCollection
0x9E591A: mov     [esp+14h+var_4], 0
0x9E5922: call    SettingCollectionList_AddSetting
0x9E5927: push    offset sub_A1D0C0; void (__cdecl *)()
0x9E592C: call    _atexit
0x9E5931: add     esp, 4
0x9E5934: mov     ecx, [esp+10h+var_C]
0x9E5938: mov     large fs:0, ecx
0x9E593F: pop     ecx
0x9E5940: add     esp, 0Ch
0x9E5943: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA070: mov     ecx, offset off_B11BD4; "1.0, 1.0"
0x9BA075: jmp     loc_403BC0
0x9BA07A: mov     edx, [esp+arg_4]
0x9BA07E: lea     eax, [edx]
0x9BA080: mov     ecx, [edx-4]
0x9BA083: xor     ecx, eax
0x9BA085: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA08A: mov     eax, offset stru_AE42B0
0x9BA08F: jmp     ___CxxFrameHandler3
