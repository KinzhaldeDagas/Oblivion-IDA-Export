0x9FBB30: push    0FFFFFFFFh
0x9FBB32: push    offset SEH_9FBB30
0x9FBB37: mov     eax, large fs:0
0x9FBB3D: push    eax
0x9FBB3E: mov     eax, ___security_cookie
0x9FBB43: xor     eax, esp
0x9FBB45: push    eax
0x9FBB46: lea     eax, [esp+10h+var_C]
0x9FBB4A: mov     large fs:0, eax
0x9FBB50: push    offset dword_B13994
0x9FBB55: mov     ecx, offset INISettingCollection
0x9FBB5A: mov     [esp+14h+var_4], 0
0x9FBB62: call    SettingCollectionList_AddSetting
0x9FBB67: push    offset sub_A249B0; void (__cdecl *)()
0x9FBB6C: call    _atexit
0x9FBB71: add     esp, 4
0x9FBB74: mov     ecx, [esp+10h+var_C]
0x9FBB78: mov     large fs:0, ecx
0x9FBB7F: pop     ecx
0x9FBB80: add     esp, 0Ch
0x9FBB83: retn
