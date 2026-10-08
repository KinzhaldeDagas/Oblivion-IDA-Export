0x9E4B10: push    0FFFFFFFFh
0x9E4B12: push    offset SEH_9E4B10
0x9E4B17: mov     eax, large fs:0
0x9E4B1D: push    eax
0x9E4B1E: mov     eax, ___security_cookie
0x9E4B23: xor     eax, esp
0x9E4B25: push    eax
0x9E4B26: lea     eax, [esp+10h+var_C]
0x9E4B2A: mov     large fs:0, eax
0x9E4B30: push    offset off_B11AAC; "0.6, 0.8"
0x9E4B35: mov     ecx, offset BlendSettingCollection
0x9E4B3A: mov     [esp+14h+var_4], 0
0x9E4B42: call    SettingCollectionList_AddSetting
0x9E4B47: push    offset sub_A1C9D0; void (__cdecl *)()
0x9E4B4C: call    _atexit
0x9E4B51: add     esp, 4
0x9E4B54: mov     ecx, [esp+10h+var_C]
0x9E4B58: mov     large fs:0, ecx
0x9E4B5F: pop     ecx
0x9E4B60: add     esp, 0Ch
0x9E4B63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9980: mov     ecx, offset off_B11AAC; "0.6, 0.8"
0x9B9985: jmp     loc_403BC0
0x9B998A: mov     edx, [esp+arg_4]
0x9B998E: lea     eax, [edx]
0x9B9990: mov     ecx, [edx-4]
0x9B9993: xor     ecx, eax
0x9B9995: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B999A: mov     eax, offset stru_AE3C54
0x9B999F: jmp     ___CxxFrameHandler3
