0x9DB0F0: push    0FFFFFFFFh
0x9DB0F2: push    offset SEH_9DB0F0
0x9DB0F7: mov     eax, large fs:0
0x9DB0FD: push    eax
0x9DB0FE: mov     eax, ___security_cookie
0x9DB103: xor     eax, esp
0x9DB105: push    eax
0x9DB106: lea     eax, [esp+10h+var_C]
0x9DB10A: mov     large fs:0, eax
0x9DB110: push    offset unk_B051FC
0x9DB115: mov     ecx, offset INISettingCollection
0x9DB11A: mov     [esp+14h+var_4], 0
0x9DB122: call    SettingCollectionList_AddSetting
0x9DB127: push    offset sub_A17DE0; void (__cdecl *)()
0x9DB12C: call    _atexit
0x9DB131: add     esp, 4
0x9DB134: mov     ecx, [esp+10h+var_C]
0x9DB138: mov     large fs:0, ecx
0x9DB13F: pop     ecx
0x9DB140: add     esp, 0Ch
0x9DB143: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD390: mov     ecx, offset unk_B051FC
0x9AD395: jmp     loc_403BC0
0x9AD39A: mov     edx, [esp+arg_4]
0x9AD39E: lea     eax, [edx]
0x9AD3A0: mov     ecx, [edx-4]
0x9AD3A3: xor     ecx, eax
0x9AD3A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD3AA: mov     eax, offset stru_AD9F38
0x9AD3AF: jmp     ___CxxFrameHandler3
