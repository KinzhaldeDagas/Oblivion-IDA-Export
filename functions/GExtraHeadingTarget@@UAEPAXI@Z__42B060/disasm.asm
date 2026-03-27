0x42B060: test    byte ptr [esp+arg_0], 1
0x42B065: push    esi
0x42B066: mov     esi, ecx
0x42B068: mov     dword ptr [esi+0Ch], 0
0x42B06F: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42B075: jz      short loc_42B080
0x42B077: push    esi
0x42B078: call    FormHeapFree
0x42B07D: add     esp, 4
0x42B080: mov     eax, esi
0x42B082: pop     esi
0x42B083: retn    4
