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
