0x758070: push    esi
0x758071: push    edi
0x758072: push    48h ; 'H'; Size
0x758074: mov     edi, ecx
0x758076: call    FormHeapAlloc
0x75807B: mov     esi, eax
0x75807D: add     esp, 4
0x758080: test    esi, esi
0x758082: jz      short loc_7580A5
0x758084: mov     ecx, esi
0x758086: call    sub_75F510
0x75808B: mov     eax, [esp+8+arg_0]
0x75808F: push    eax
0x758090: push    esi
0x758091: mov     ecx, edi
0x758093: mov     dword ptr [esi], offset ??_7NiPSysEmitterInitialRadiusCtlr@@6B@; const NiPSysEmitterInitialRadiusCtlr::`vftable'
0x758099: call    sub_75F5A0
0x75809E: pop     edi
0x75809F: mov     eax, esi
0x7580A1: pop     esi
0x7580A2: retn    4
0x7580A5: mov     eax, [esp+8+arg_0]
0x7580A9: push    eax
0x7580AA: xor     esi, esi
0x7580AC: push    esi
0x7580AD: mov     ecx, edi
0x7580AF: call    sub_75F5A0
0x7580B4: pop     edi
0x7580B5: mov     eax, esi
0x7580B7: pop     esi
0x7580B8: retn    4
