0x712420: push    esi
0x712421: mov     esi, ecx
0x712423: mov     eax, [esi+4]
0x712426: push    eax
0x712427: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiObjectGroup@@@@6B@; const NiTArray<NiObjectGroup *>::`vftable'
0x71242D: call    FormHeapFree
0x712432: add     esp, 4
0x712435: test    [esp+4+arg_0], 1
0x71243A: jz      short loc_712445
0x71243C: push    esi
0x71243D: call    FormHeapFree
0x712442: add     esp, 4
0x712445: mov     eax, esi
0x712447: pop     esi
0x712448: retn    4
