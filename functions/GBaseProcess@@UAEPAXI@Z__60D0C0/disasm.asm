0x60D0C0: test    byte ptr [esp+arg_0], 1
0x60D0C5: push    esi
0x60D0C6: mov     esi, ecx
0x60D0C8: mov     dword ptr [esi], offset ??_7BaseProcess@@6B@; Verified persistence family:3F0 size,3F4 save,3F8 load,404 revert; base/low/middle-low bodies decoded and MobileObject dispatch confirmed. Probable:3FC InitLoadGame and400 FinishInitLoadGame; derived middle-high/high overrides remain only family-mapped, not fully decoded.
0x60D0CE: jz      short loc_60D0D9
0x60D0D0: push    esi
0x60D0D1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x60D0D6: add     esp, 4
0x60D0D9: mov     eax, esi
0x60D0DB: pop     esi
0x60D0DC: retn    4
