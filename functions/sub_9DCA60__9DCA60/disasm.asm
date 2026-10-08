0x9DCA60: push    0FFFFFFFFh
0x9DCA62: push    offset SEH_9DCA60
0x9DCA67: mov     eax, large fs:0
0x9DCA6D: push    eax
0x9DCA6E: mov     eax, ___security_cookie
0x9DCA73: xor     eax, esp
0x9DCA75: push    eax
0x9DCA76: lea     eax, [esp+10h+var_C]
0x9DCA7A: mov     large fs:0, eax
0x9DCA80: push    offset bBlockMessageBoxes_MESSAGES
0x9DCA85: mov     ecx, offset INISettingCollection
0x9DCA8A: mov     [esp+14h+var_4], 0
0x9DCA92: call    SettingCollectionList_AddSetting
0x9DCA97: push    offset sub_A18AE0; void (__cdecl *)()
0x9DCA9C: call    _atexit
0x9DCAA1: add     esp, 4
0x9DCAA4: mov     ecx, [esp+10h+var_C]
0x9DCAA8: mov     large fs:0, ecx
0x9DCAAF: pop     ecx
0x9DCAB0: add     esp, 0Ch
0x9DCAB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0150: mov     ecx, offset bBlockMessageBoxes_MESSAGES
0x9B0155: jmp     loc_403BC0
0x9B015A: mov     edx, [esp+arg_4]
0x9B015E: lea     eax, [edx]
0x9B0160: mov     ecx, [edx-4]
0x9B0163: xor     ecx, eax
0x9B0165: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B016A: mov     eax, offset stru_ADC53C
0x9B016F: jmp     ___CxxFrameHandler3
