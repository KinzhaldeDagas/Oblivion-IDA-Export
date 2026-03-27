0x918520: test    [esp+arg_0], 1
0x918525: push    esi
0x918526: mov     esi, ecx
0x918528: mov     dword ptr [esi], offset off_A9D1D8
0x91852E: jz      short loc_918539
0x918530: push    esi
0x918531: call    FormHeapFree
0x918536: add     esp, 4
0x918539: mov     eax, esi
0x91853B: pop     esi
0x91853C: retn    4
