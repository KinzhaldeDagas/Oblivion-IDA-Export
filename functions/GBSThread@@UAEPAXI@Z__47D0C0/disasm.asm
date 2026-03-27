0x47D0C0: push    esi
0x47D0C1: mov     esi, ecx
0x47D0C3: mov     dword ptr [esi], offset ??_7BSThread@@6B@; const BSThread::`vftable'
0x47D0C9: call    sub_47D060
0x47D0CE: test    byte ptr [esp+4+arg_0], 1
0x47D0D3: jz      short loc_47D0DE
0x47D0D5: push    esi
0x47D0D6: call    FormHeapFree
0x47D0DB: add     esp, 4
0x47D0DE: mov     eax, esi
0x47D0E0: pop     esi
0x47D0E1: retn    4
