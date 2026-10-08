0x9E4420: push    0FFFFFFFFh
0x9E4422: push    offset SEH_9E4420
0x9E4427: mov     eax, large fs:0
0x9E442D: push    eax
0x9E442E: mov     eax, ___security_cookie
0x9E4433: xor     eax, esp
0x9E4435: push    eax
0x9E4436: lea     eax, [esp+10h+var_C]
0x9E443A: mov     large fs:0, eax
0x9E4440: push    offset dword_B11920
0x9E4445: mov     ecx, offset INISettingCollection
0x9E444A: mov     [esp+14h+var_4], 0
0x9E4452: call    SettingCollectionList_AddSetting
0x9E4457: push    offset sub_A1C670; void (__cdecl *)()
0x9E445C: call    _atexit
0x9E4461: add     esp, 4
0x9E4464: mov     ecx, [esp+10h+var_C]
0x9E4468: mov     large fs:0, ecx
0x9E446F: pop     ecx
0x9E4470: add     esp, 0Ch
0x9E4473: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9530: mov     ecx, offset dword_B11920
0x9B9535: jmp     loc_403BC0
0x9B953A: mov     edx, [esp+arg_4]
0x9B953E: lea     eax, [edx]
0x9B9540: mov     ecx, [edx-4]
0x9B9543: xor     ecx, eax
0x9B9545: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B954A: mov     eax, offset stru_AE3898
0x9B954F: jmp     ___CxxFrameHandler3
