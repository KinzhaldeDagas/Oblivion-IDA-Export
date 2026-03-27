0x4A5FF0: mov     eax, [esp+arg_0]
0x4A5FF4: push    esi
0x4A5FF5: mov     esi, ecx
0x4A5FF7: push    eax
0x4A5FF8: lea     ecx, [esi+4]
0x4A5FFB: call    BSSimpleList_PushBack
0x4A6000: add     dword ptr [esi+10h], 1
0x4A6004: pop     esi
0x4A6005: retn    4
