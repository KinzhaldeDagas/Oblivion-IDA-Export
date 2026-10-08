0x9E4810: push    0FFFFFFFFh
0x9E4812: push    offset SEH_9E4810
0x9E4817: mov     eax, large fs:0
0x9E481D: push    eax
0x9E481E: mov     eax, ___security_cookie
0x9E4823: xor     eax, esp
0x9E4825: push    eax
0x9E4826: lea     eax, [esp+10h+var_C]
0x9E482A: mov     large fs:0, eax
0x9E4830: push    offset off_B11A6C; "Bip01 Spine1"
0x9E4835: mov     ecx, offset BlendSettingCollection
0x9E483A: mov     [esp+14h+var_4], 0
0x9E4842: call    SettingCollectionList_AddSetting
0x9E4847: push    offset sub_A1C850; void (__cdecl *)()
0x9E484C: call    _atexit
0x9E4851: add     esp, 4
0x9E4854: mov     ecx, [esp+10h+var_C]
0x9E4858: mov     large fs:0, ecx
0x9E485F: pop     ecx
0x9E4860: add     esp, 0Ch
0x9E4863: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9800: mov     ecx, offset off_B11A6C; "Bip01 Spine1"
0x9B9805: jmp     loc_403BC0
0x9B980A: mov     edx, [esp+arg_4]
0x9B980E: lea     eax, [edx]
0x9B9810: mov     ecx, [edx-4]
0x9B9813: xor     ecx, eax
0x9B9815: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B981A: mov     eax, offset stru_AE3AF4
0x9B981F: jmp     ___CxxFrameHandler3
