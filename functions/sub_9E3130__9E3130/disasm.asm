0x9E3130: push    0FFFFFFFFh
0x9E3132: push    offset SEH_9E3130
0x9E3137: mov     eax, large fs:0
0x9E313D: push    eax
0x9E313E: mov     eax, ___security_cookie
0x9E3143: xor     eax, esp
0x9E3145: push    eax
0x9E3146: lea     eax, [esp+10h+var_C]
0x9E314A: mov     large fs:0, eax
0x9E3150: push    offset g_iMaxDecalsPerFrame_Display
0x9E3155: mov     ecx, offset INISettingCollection
0x9E315A: mov     [esp+14h+var_4], 0
0x9E3162: call    SettingCollectionList_AddSetting
0x9E3167: push    offset sub_A1BB90; void (__cdecl *)()
0x9E316C: call    _atexit
0x9E3171: add     esp, 4
0x9E3174: mov     ecx, [esp+10h+var_C]
0x9E3178: mov     large fs:0, ecx
0x9E317F: pop     ecx
0x9E3180: add     esp, 0Ch
0x9E3183: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B59B0: mov     ecx, offset g_iMaxDecalsPerFrame_Display
0x9B59B5: jmp     loc_403BC0
0x9B59BA: mov     edx, [esp+arg_4]
0x9B59BE: lea     eax, [edx]
0x9B59C0: mov     ecx, [edx-4]
0x9B59C3: xor     ecx, eax
0x9B59C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B59CA: mov     eax, offset stru_AE09CC
0x9B59CF: jmp     ___CxxFrameHandler3
