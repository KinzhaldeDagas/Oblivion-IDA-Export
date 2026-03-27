0x8A7530: push    esi
0x8A7531: mov     esi, ecx
0x8A7533: mov     dword ptr [esi], offset off_A975C8
0x8A7539: call    sub_8A71B0
0x8A753E: test    [esp+4+arg_0], 1
0x8A7543: jz      short loc_8A754E
0x8A7545: push    esi
0x8A7546: call    FormHeapFree
0x8A754B: add     esp, 4
0x8A754E: mov     eax, esi
0x8A7550: pop     esi
0x8A7551: retn    4
