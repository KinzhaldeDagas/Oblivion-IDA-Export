0x4BB120: push    esi
0x4BB121: mov     esi, ecx
0x4BB123: mov     eax, [esi+8]
0x4BB126: shr     eax, 3
0x4BB129: test    al, 1
0x4BB12B: jnz     short loc_4BB148
0x4BB12D: push    esi
0x4BB12E: lea     ecx, [esi+54h]
0x4BB131: call    TESScriptableForm_Link
0x4BB136: push    esi
0x4BB137: lea     ecx, [esi+60h]
0x4BB13A: call    TESEnchantableForm_LinkComponent
0x4BB13F: push    1; a2
0x4BB141: mov     ecx, esi; this
0x4BB143: call    TESForm_SetIsLinked
0x4BB148: pop     esi
0x4BB149: retn
