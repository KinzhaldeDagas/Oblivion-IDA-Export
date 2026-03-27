0x9E47B0: push    0FFFFFFFFh
0x9E47B2: push    offset SEH_9E47B0
0x9E47B7: mov     eax, large fs:0
0x9E47BD: push    eax
0x9E47BE: mov     eax, ___security_cookie
0x9E47C3: xor     eax, esp
0x9E47C5: push    eax
0x9E47C6: lea     eax, [esp+10h+var_C]
0x9E47CA: mov     large fs:0, eax
0x9E47D0: push    offset off_B11A64; "Bip01 Spine2"
0x9E47D5: mov     ecx, offset BlendSettingCollection
0x9E47DA: mov     [esp+14h+var_4], 0
0x9E47E2: call    SettingCollectionList_AddSetting
0x9E47E7: push    offset sub_A1C820; void (__cdecl *)()
0x9E47EC: call    _atexit
0x9E47F1: add     esp, 4
0x9E47F4: mov     ecx, [esp+10h+var_C]
0x9E47F8: mov     large fs:0, ecx
0x9E47FF: pop     ecx
0x9E4800: add     esp, 0Ch
0x9E4803: retn
