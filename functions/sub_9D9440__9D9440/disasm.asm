0x9D9440: push    0FFFFFFFFh
0x9D9442: push    offset SEH_9D9440
0x9D9447: mov     eax, large fs:0
0x9D944D: push    eax
0x9D944E: mov     eax, ___security_cookie
0x9D9453: xor     eax, esp
0x9D9455: push    eax
0x9D9456: lea     eax, [esp+10h+var_C]
0x9D945A: mov     large fs:0, eax
0x9D9460: push    offset bShowMenuTextureUse
0x9D9465: mov     ecx, offset INISettingCollection
0x9D946A: mov     [esp+14h+var_4], 0
0x9D9472: call    SettingCollectionList_AddSetting
0x9D9477: push    offset sub_A16FD0; void (__cdecl *)()
0x9D947C: call    _atexit
0x9D9481: add     esp, 4
0x9D9484: mov     ecx, [esp+10h+var_C]
0x9D9488: mov     large fs:0, ecx
0x9D948F: pop     ecx
0x9D9490: add     esp, 0Ch
0x9D9493: retn
