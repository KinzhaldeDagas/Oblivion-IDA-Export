0x436500: push    esi
0x436501: mov     esi, ecx
0x436503: push    edi
0x436504: xor     edi, edi
0x436506: mov     dword ptr [esi], offset ??_7?$BSTask@_J@@6B@; const BSTask<__int64>::`vftable'
0x43650C: push    offset Addend; lpAddend
0x436511: mov     [esi+8], edi
0x436514: mov     [esi+0Ch], edi
0x436517: mov     [esi+10h], edi
0x43651A: mov     [esi+14h], edi
0x43651D: call    ds:InterlockedIncrement
0x436523: movzx   eax, [esp+8+a2]
0x436528: push    edi
0x436529: cdq
0x43652A: push    10000h
0x43652F: push    edx
0x436530: push    eax
0x436531: mov     dword ptr [esi], offset ??_7IOTask@@6B@; const IOTask::`vftable'
0x436537: call    __allmul
0x43653C: mov     ecx, [esi+10h]
0x43653F: mov     edi, [esi+14h]
0x436542: and     ecx, 0FF00FFFFh
0x436548: add     eax, ecx
0x43654A: adc     edx, edi
0x43654C: mov     [esi+10h], eax
0x43654F: pop     edi
0x436550: mov     [esi+14h], edx
0x436553: mov     eax, esi
0x436555: pop     esi
0x436556: retn    4
