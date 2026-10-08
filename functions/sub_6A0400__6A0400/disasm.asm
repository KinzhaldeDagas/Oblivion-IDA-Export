0x6A0400: mov     eax, [esp+targetReference]; Verified (Oblivion): virtual receives owner ActiveEffect* and target TESObjectREFR*. Returns base payload size +4, plus 9 bytes for save version >=0x37.
0x6A0404: mov     edx, [esp+linkContext]
0x6A0408: push    eax; targetReference
0x6A0409: push    edx; ownerActiveEffect
0x6A040A: call    MagicHitEffect_GetExtraSaveSize; Verified (Oblivion): base GetExtraSaveSize receives owner ActiveEffect* and target TESObjectREFR*; it returns 5 bytes before version 0x72 and 9 bytes from version 0x72.
0x6A040F: mov     ecx, ds:0B33B00h
0x6A0415: add     ax, 4
0x6A0419: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x6A041D: movzx   eax, ax
0x6A0420: jb      short locret_6A0425
0x6A0422: add     eax, 9
0x6A0425: retn    8
