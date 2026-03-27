0x429BA0: push    ebx
0x429BA1: mov     ebx, ecx
0x429BA3: push    esi
0x429BA4: mov     esi, [ebx+0Ch]
0x429BA7: mov     dword ptr [ebx], offset ??_7ExtraFollower@@6B@; const ExtraFollower::`vftable'
0x429BAD: cmp     dword ptr [esi+4], 0
0x429BB1: jz      short loc_429BCB
0x429BB3: push    edi
0x429BB4: mov     eax, [esi+4]
0x429BB7: mov     edi, [eax+4]
0x429BBA: push    eax
0x429BBB: call    FormHeapFree
0x429BC0: add     esp, 4
0x429BC3: test    edi, edi
0x429BC5: mov     [esi+4], edi
0x429BC8: jnz     short loc_429BB4
0x429BCA: pop     edi
0x429BCB: mov     dword ptr [esi], 0
0x429BD1: mov     eax, [ebx+0Ch]
0x429BD4: push    eax
0x429BD5: call    FormHeapFree
0x429BDA: add     esp, 4
0x429BDD: pop     esi
0x429BDE: mov     dword ptr [ebx], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x429BE4: pop     ebx
0x429BE5: retn
