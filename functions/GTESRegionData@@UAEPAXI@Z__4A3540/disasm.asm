0x4A3540: test    byte ptr [esp+arg_0], 1
0x4A3545: push    esi
0x4A3546: mov     esi, ecx
0x4A3548: mov     dword ptr [esi], offset ??_7TESRegionData@@6B@; const TESRegionData::`vftable'
0x4A354E: jz      short loc_4A3559
0x4A3550: push    esi
0x4A3551: call    FormHeapFree
0x4A3556: add     esp, 4
0x4A3559: mov     eax, esi
0x4A355B: pop     esi
0x4A355C: retn    4
