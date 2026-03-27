0x4A59C0: test    byte ptr [esp+arg_0], 1
0x4A59C5: push    esi
0x4A59C6: mov     esi, ecx
0x4A59C8: mov     dword ptr [esi], offset ??_7TESRegionGrassObject@@6B@; const TESRegionGrassObject::`vftable'
0x4A59CE: jz      short loc_4A59D9
0x4A59D0: push    esi
0x4A59D1: call    FormHeapFree
0x4A59D6: add     esp, 4
0x4A59D9: mov     eax, esi
0x4A59DB: pop     esi
0x4A59DC: retn    4
