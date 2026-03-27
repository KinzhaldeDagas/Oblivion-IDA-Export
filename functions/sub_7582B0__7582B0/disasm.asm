0x7582B0: push    esi
0x7582B1: push    edi
0x7582B2: push    48h ; 'H'; Size
0x7582B4: mov     edi, ecx
0x7582B6: call    FormHeapAlloc
0x7582BB: mov     esi, eax
0x7582BD: add     esp, 4
0x7582C0: test    esi, esi
0x7582C2: jz      short loc_7582E5
0x7582C4: mov     ecx, esi
0x7582C6: call    sub_75F510
0x7582CB: mov     eax, [esp+8+arg_0]
0x7582CF: push    eax
0x7582D0: push    esi
0x7582D1: mov     ecx, edi
0x7582D3: mov     dword ptr [esi], offset ??_7NiPSysEmitterDeclinationCtlr@@6B@; const NiPSysEmitterDeclinationCtlr::`vftable'
0x7582D9: call    sub_75F5A0
0x7582DE: pop     edi
0x7582DF: mov     eax, esi
0x7582E1: pop     esi
0x7582E2: retn    4
0x7582E5: mov     eax, [esp+8+arg_0]
0x7582E9: push    eax
0x7582EA: xor     esi, esi
0x7582EC: push    esi
0x7582ED: mov     ecx, edi
0x7582EF: call    sub_75F5A0
0x7582F4: pop     edi
0x7582F5: mov     eax, esi
0x7582F7: pop     esi
0x7582F8: retn    4
