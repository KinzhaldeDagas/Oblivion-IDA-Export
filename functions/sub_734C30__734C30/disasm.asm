0x734C30: push    esi
0x734C31: mov     esi, ecx
0x734C33: mov     eax, [esi+164h]
0x734C39: push    eax
0x734C3A: mov     dword ptr [esi], offset ??_7NiTGAReader@@6B@; const NiTGAReader::`vftable'
0x734C40: call    FormHeapFree
0x734C45: mov     ecx, [esi+16Ch]
0x734C4B: push    ecx
0x734C4C: call    FormHeapFree
0x734C51: add     esp, 8
0x734C54: lea     edx, [esi+80h]
0x734C5A: push    edx; lpCriticalSection
0x734C5B: mov     dword ptr [esi], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x734C61: call    dword ptr ds:0A28068h
0x734C67: test    [esp+4+arg_0], 1
0x734C6C: jz      short loc_734C77
0x734C6E: push    esi
0x734C6F: call    FormHeapFree
0x734C74: add     esp, 4
0x734C77: mov     eax, esi
0x734C79: pop     esi
0x734C7A: retn    4
