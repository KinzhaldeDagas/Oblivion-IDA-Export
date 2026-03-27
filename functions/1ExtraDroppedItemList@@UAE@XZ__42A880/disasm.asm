0x42A880: push    esi
0x42A881: mov     esi, ecx
0x42A883: mov     dword ptr [esi], offset ??_7ExtraDroppedItemList@@6B@; const ExtraDroppedItemList::`vftable'
0x42A889: cmp     dword ptr [esi+10h], 0
0x42A88D: jz      short loc_42A8A7
0x42A88F: push    edi
0x42A890: mov     eax, [esi+10h]
0x42A893: mov     edi, [eax+4]
0x42A896: push    eax
0x42A897: call    FormHeapFree
0x42A89C: add     esp, 4
0x42A89F: test    edi, edi
0x42A8A1: mov     [esi+10h], edi
0x42A8A4: jnz     short loc_42A890
0x42A8A6: pop     edi
0x42A8A7: mov     dword ptr [esi+0Ch], 0
0x42A8AE: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A8B4: pop     esi
0x42A8B5: retn
