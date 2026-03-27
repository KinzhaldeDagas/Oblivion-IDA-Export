0x733880: push    esi
0x733881: mov     esi, ecx
0x733883: lea     eax, [esi+80h]
0x733889: push    eax; lpCriticalSection
0x73388A: mov     dword ptr [esi], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x733890: call    dword ptr ds:0A28068h
0x733896: test    [esp+4+arg_0], 1
0x73389B: jz      short loc_7338A6
0x73389D: push    esi
0x73389E: call    FormHeapFree
0x7338A3: add     esp, 4
0x7338A6: mov     eax, esi
0x7338A8: pop     esi
0x7338A9: retn    4
