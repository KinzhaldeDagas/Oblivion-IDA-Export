0x434650: mov     eax, [ecx+24h]
0x434653: test    eax, eax
0x434655: jz      short loc_43466C
0x434657: push    0; ArgList
0x434659: push    0FFFFFFFFh; int
0x43465B: push    eax; int
0x43465C: mov     eax, [esp+0Ch+arg_0]
0x434660: push    eax; int
0x434661: call    sub_42EBC0
0x434666: add     esp, 10h
0x434669: retn    8
0x43466C: mov     ecx, [ecx+20h]
0x43466F: test    ecx, ecx
0x434671: jz      short loc_434686
0x434673: mov     edx, [esp+arg_4]
0x434677: push    edx; int
0x434678: push    0FFFFFFFFh; int
0x43467A: push    ecx; Str1
0x43467B: call    ArchiveManager_FindFileInBSA
0x434680: add     esp, 0Ch
0x434683: retn    8
0x434686: xor     eax, eax
0x434688: retn    8
