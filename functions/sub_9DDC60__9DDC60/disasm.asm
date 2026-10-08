0x9DDC60: push    0FFFFFFFFh
0x9DDC62: push    offset SEH_9DDC60
0x9DDC67: mov     eax, large fs:0
0x9DDC6D: push    eax
0x9DDC6E: mov     eax, ___security_cookie
0x9DDC73: xor     eax, esp
0x9DDC75: push    eax
0x9DDC76: lea     eax, [esp+10h+var_C]
0x9DDC7A: mov     large fs:0, eax
0x9DDC80: push    offset unk_B06DCC
0x9DDC85: mov     ecx, offset INISettingCollection
0x9DDC8A: mov     [esp+14h+var_4], 0
0x9DDC92: call    SettingCollectionList_AddSetting
0x9DDC97: push    offset sub_A193E0; void (__cdecl *)()
0x9DDC9C: call    _atexit
0x9DDCA1: add     esp, 4
0x9DDCA4: mov     ecx, [esp+10h+var_C]
0x9DDCA8: mov     large fs:0, ecx
0x9DDCAF: pop     ecx
0x9DDCB0: add     esp, 0Ch
0x9DDCB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0D30: mov     ecx, offset unk_B06DCC
0x9B0D35: jmp     loc_403BC0
0x9B0D3A: mov     edx, [esp+arg_4]
0x9B0D3E: lea     eax, [edx]
0x9B0D40: mov     ecx, [edx-4]
0x9B0D43: xor     ecx, eax
0x9B0D45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0D4A: mov     eax, offset stru_ADCFA4
0x9B0D4F: jmp     ___CxxFrameHandler3
