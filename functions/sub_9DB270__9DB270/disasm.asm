0x9DB270: push    0FFFFFFFFh
0x9DB272: push    offset SEH_9DB270
0x9DB277: mov     eax, large fs:0
0x9DB27D: push    eax
0x9DB27E: mov     eax, ___security_cookie
0x9DB283: xor     eax, esp
0x9DB285: push    eax
0x9DB286: lea     eax, [esp+10h+var_C]
0x9DB28A: mov     large fs:0, eax
0x9DB290: push    offset bBipedWhenKeyframed
0x9DB295: mov     ecx, offset INISettingCollection
0x9DB29A: mov     [esp+14h+var_4], 0
0x9DB2A2: call    SettingCollectionList_AddSetting
0x9DB2A7: push    offset sub_A17EA0; void (__cdecl *)()
0x9DB2AC: call    _atexit
0x9DB2B1: add     esp, 4
0x9DB2B4: mov     ecx, [esp+10h+var_C]
0x9DB2B8: mov     large fs:0, ecx
0x9DB2BF: pop     ecx
0x9DB2C0: add     esp, 0Ch
0x9DB2C3: retn
