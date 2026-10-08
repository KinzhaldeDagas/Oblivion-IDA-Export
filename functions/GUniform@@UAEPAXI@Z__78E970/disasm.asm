0x78E970: test    byte ptr [esp+flags], 1; Oblivion COMDAT-folded scalar deleting destructor shared by the Random and Uniform vtable slots at 0xA8C5D4 and 0xA8C600. Restores the Random base vftable, then calls FormHeapFree only when flags bit 0 is set.
0x78E975: push    esi
0x78E976: mov     esi, ecx
0x78E978: mov     dword ptr [esi], offset ??_7Random@@6B@; const Random::`vftable'
0x78E97E: jz      short loc_78E989
0x78E980: push    esi
0x78E981: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78E986: add     esp, 4
0x78E989: mov     eax, esi
0x78E98B: pop     esi
0x78E98C: retn    4
