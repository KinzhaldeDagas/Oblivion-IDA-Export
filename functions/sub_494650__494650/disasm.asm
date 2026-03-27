0x494650: mov     al, [esp+arg_0]
0x494654: push    esi
0x494655: mov     esi, ecx
0x494657: push    edi
0x494658: mov     dword ptr [esi], offset ??_7MessageHandler@@6B@; const MessageHandler::`vftable'
0x49465E: mov     [esi+4], al
0x494661: call    sub_494480
0x494666: mov     edi, ds:0A280ACh
0x49466C: push    eax; lpFileName
0x49466D: call    edi ; DeleteFileA
0x49466F: call    sub_4944F0
0x494674: push    eax; lpFileName
0x494675: call    edi ; DeleteFileA
0x494677: call    sub_494560
0x49467C: push    eax; lpFileName
0x49467D: call    edi ; DeleteFileA
0x49467F: xor     eax, eax
0x494681: mov     [esi+8], eax
0x494684: mov     [esi+0Ch], eax
0x494687: mov     [esi+10h], al
0x49468A: pop     edi
0x49468B: mov     ds:0B34D90h, esi
0x494691: mov     eax, esi
0x494693: mov     dword ptr ds:0B27E60h, offset nullsub_return0_0arg
0x49469D: mov     dword ptr ds:0B40608h, offset ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4946A7: pop     esi
0x4946A8: retn    4
