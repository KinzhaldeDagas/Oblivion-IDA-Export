0x9FF460: push    0FFFFFFFFh
0x9FF462: push    offset SEH_9FF460
0x9FF467: mov     eax, large fs:0
0x9FF46D: push    eax
0x9FF46E: mov     eax, ___security_cookie
0x9FF473: xor     eax, esp
0x9FF475: push    eax
0x9FF476: lea     eax, [esp+10h+var_C]
0x9FF47A: mov     large fs:0, eax
0x9FF480: push    offset dword_B1625C
0x9FF485: mov     ecx, offset INISettingCollection
0x9FF48A: mov     [esp+14h+var_4], 0
0x9FF492: call    SettingCollectionList_AddSetting
0x9FF497: push    offset sub_A26310; void (__cdecl *)()
0x9FF49C: call    _atexit
0x9FF4A1: add     esp, 4
0x9FF4A4: mov     ecx, [esp+10h+var_C]
0x9FF4A8: mov     large fs:0, ecx
0x9FF4AF: pop     ecx
0x9FF4B0: add     esp, 0Ch
0x9FF4B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C69B0: mov     ecx, offset dword_B1625C
0x9C69B5: jmp     loc_403BC0
0x9C69BA: mov     edx, [esp+arg_4]
0x9C69BE: lea     eax, [edx]
0x9C69C0: mov     ecx, [edx-4]
0x9C69C3: xor     ecx, eax
0x9C69C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C69CA: mov     eax, offset stru_AEEEA4
0x9C69CF: jmp     ___CxxFrameHandler3
