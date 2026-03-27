0x757B80: push    esi
0x757B81: push    edi
0x757B82: push    48h ; 'H'; Size
0x757B84: mov     edi, ecx
0x757B86: call    FormHeapAlloc
0x757B8B: mov     esi, eax
0x757B8D: add     esp, 4
0x757B90: test    esi, esi
0x757B92: jz      short loc_757BB5
0x757B94: mov     ecx, esi
0x757B96: call    sub_75F510
0x757B9B: mov     eax, [esp+8+arg_0]
0x757B9F: push    eax
0x757BA0: push    esi
0x757BA1: mov     ecx, edi
0x757BA3: mov     dword ptr [esi], offset ??_7NiPSysFieldAttenuationCtlr@@6B@; const NiPSysFieldAttenuationCtlr::`vftable'
0x757BA9: call    sub_75F5A0
0x757BAE: pop     edi
0x757BAF: mov     eax, esi
0x757BB1: pop     esi
0x757BB2: retn    4
0x757BB5: mov     eax, [esp+8+arg_0]
0x757BB9: push    eax
0x757BBA: xor     esi, esi
0x757BBC: push    esi
0x757BBD: mov     ecx, edi
0x757BBF: call    sub_75F5A0
0x757BC4: pop     edi
0x757BC5: mov     eax, esi
0x757BC7: pop     esi
0x757BC8: retn    4
