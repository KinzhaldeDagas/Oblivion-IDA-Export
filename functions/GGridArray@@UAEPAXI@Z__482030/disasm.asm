0x482030: test    byte ptr [esp+arg_0], 1
0x482035: push    esi
0x482036: mov     esi, ecx
0x482038: mov     dword ptr [esi], offset ??_7GridArray@@6B@; const GridArray::`vftable'
0x48203E: jz      short loc_482049
0x482040: push    esi
0x482041: call    FormHeapFree
0x482046: add     esp, 4
0x482049: mov     eax, esi
0x48204B: pop     esi
0x48204C: retn    4
