0x9F9310: push    0FFFFFFFFh
0x9F9312: push    offset SEH_9F9310
0x9F9317: mov     eax, large fs:0
0x9F931D: push    eax
0x9F931E: mov     eax, ___security_cookie
0x9F9323: xor     eax, esp
0x9F9325: push    eax
0x9F9326: lea     eax, [esp+10h+var_C]
0x9F932A: mov     large fs:0, eax
0x9F9330: push    offset OB_INI_fTreeForceLeafDimming_SpeedTree_010201A0
0x9F9335: mov     ecx, offset INISettingCollection
0x9F933A: mov     [esp+14h+var_4], 0
0x9F9342: call    SettingCollectionList_AddSetting
0x9F9347: push    offset sub_A23720; void (__cdecl *)()
0x9F934C: call    _atexit
0x9F9351: add     esp, 4
0x9F9354: mov     ecx, [esp+10h+var_C]
0x9F9358: mov     large fs:0, ecx
0x9F935F: pop     ecx
0x9F9360: add     esp, 0Ch
0x9F9363: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCE90: mov     ecx, offset OB_INI_fTreeForceLeafDimming_SpeedTree_010201A0
0x9BCE95: jmp     loc_403BC0
0x9BCE9A: mov     edx, [esp+arg_4]
0x9BCE9E: lea     eax, [edx]
0x9BCEA0: mov     ecx, [edx-4]
0x9BCEA3: xor     ecx, eax
0x9BCEA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCEAA: mov     eax, offset stru_AE6998
0x9BCEAF: jmp     ___CxxFrameHandler3
