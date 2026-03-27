0x712880: push    esi
0x712881: mov     esi, ecx
0x712883: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVNiObject@@I@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject const *,uint>::`vftable'
0x712889: call    NiTMap_Clear
0x71288E: mov     eax, [esi+8]
0x712891: push    eax
0x712892: call    FormHeapFree
0x712897: add     esp, 4
0x71289A: test    [esp+4+arg_0], 1
0x71289F: jz      short loc_7128AA
0x7128A1: push    esi
0x7128A2: call    FormHeapFree
0x7128A7: add     esp, 4
0x7128AA: mov     eax, esi
0x7128AC: pop     esi
0x7128AD: retn    4
