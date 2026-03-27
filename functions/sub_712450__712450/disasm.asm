0x712450: push    esi
0x712451: mov     esi, ecx
0x712453: mov     eax, [esi+4]
0x712456: push    eax
0x712457: mov     dword ptr [esi], offset ??_7?$NiTArray@P6AXAAVNiStream@@PAVNiObject@@@Z@@6B@; const NiTArray<void (*)(NiStream &,NiObject *)>::`vftable'
0x71245D: call    FormHeapFree
0x712462: add     esp, 4
0x712465: test    [esp+4+arg_0], 1
0x71246A: jz      short loc_712475
0x71246C: push    esi
0x71246D: call    FormHeapFree
0x712472: add     esp, 4
0x712475: mov     eax, esi
0x712477: pop     esi
0x712478: retn    4
