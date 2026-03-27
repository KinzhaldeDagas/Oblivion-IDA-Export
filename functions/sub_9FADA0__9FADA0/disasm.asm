0x9FADA0: push    0FFFFFFFFh
0x9FADA2: push    offset SEH_9FADA0
0x9FADA7: mov     eax, large fs:0
0x9FADAD: push    eax
0x9FADAE: mov     eax, ___security_cookie
0x9FADB3: xor     eax, esp
0x9FADB5: push    eax
0x9FADB6: lea     eax, [esp+10h+var_C]
0x9FADBA: mov     large fs:0, eax
0x9FADC0: push    offset off_B12E24; "Data\\Fonts\\Kingthings_Shadowed.fnt"
0x9FADC5: mov     ecx, offset INISettingCollection
0x9FADCA: mov     [esp+14h+var_4], 0
0x9FADD2: call    SettingCollectionList_AddSetting
0x9FADD7: push    offset sub_A24310; void (__cdecl *)()
0x9FADDC: call    _atexit
0x9FADE1: add     esp, 4
0x9FADE4: mov     ecx, [esp+10h+var_C]
0x9FADE8: mov     large fs:0, ecx
0x9FADEF: pop     ecx
0x9FADF0: add     esp, 0Ch
0x9FADF3: retn
