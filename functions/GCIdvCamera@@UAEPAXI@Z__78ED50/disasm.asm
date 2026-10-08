0x78ED50: test    byte ptr [esp+flags], 1; Oblivion CIdvCamera scalar deleting destructor. Restores the base vftable and frees the object through FormHeap only when flags bit 0 is set.
0x78ED55: push    esi
0x78ED56: mov     esi, ecx
0x78ED58: mov     dword ptr [esi], offset ??_7CIdvCamera@@6B@; const CIdvCamera::`vftable'
0x78ED5E: jz      short loc_78ED69
0x78ED60: push    esi
0x78ED61: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78ED66: add     esp, 4
0x78ED69: mov     eax, esi
0x78ED6B: pop     esi
0x78ED6C: retn    4
