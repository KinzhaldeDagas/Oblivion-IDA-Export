0x42A620: push    esi
0x42A621: mov     esi, ecx
0x42A623: mov     dword ptr [esi], offset ??_7ExtraEnableStateChildren@@6B@; const ExtraEnableStateChildren::`vftable'
0x42A629: cmp     dword ptr [esi+10h], 0
0x42A62D: jz      short loc_42A647
0x42A62F: push    edi
0x42A630: mov     eax, [esi+10h]
0x42A633: mov     edi, [eax+4]
0x42A636: push    eax
0x42A637: call    FormHeapFree
0x42A63C: add     esp, 4
0x42A63F: test    edi, edi
0x42A641: mov     [esi+10h], edi
0x42A644: jnz     short loc_42A630
0x42A646: pop     edi
0x42A647: mov     dword ptr [esi+0Ch], 0
0x42A64E: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A654: pop     esi
0x42A655: retn
