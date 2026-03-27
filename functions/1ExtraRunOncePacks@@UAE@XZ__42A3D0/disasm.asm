0x42A3D0: push    ebx
0x42A3D1: mov     ebx, ecx
0x42A3D3: push    esi
0x42A3D4: mov     esi, [ebx+0Ch]
0x42A3D7: test    esi, esi
0x42A3D9: mov     dword ptr [ebx], offset ??_7ExtraRunOncePacks@@6B@; const ExtraRunOncePacks::`vftable'
0x42A3DF: jz      short loc_42A3F7
0x42A3E1: mov     eax, [esi]
0x42A3E3: test    eax, eax
0x42A3E5: jz      short loc_42A3F7
0x42A3E7: push    eax
0x42A3E8: call    FormHeapFree
0x42A3ED: mov     esi, [esi+4]
0x42A3F0: add     esp, 4
0x42A3F3: test    esi, esi
0x42A3F5: jnz     short loc_42A3E1
0x42A3F7: mov     esi, [ebx+0Ch]
0x42A3FA: cmp     dword ptr [esi+4], 0
0x42A3FE: jz      short loc_42A418
0x42A400: push    edi
0x42A401: mov     eax, [esi+4]
0x42A404: mov     edi, [eax+4]
0x42A407: push    eax
0x42A408: call    FormHeapFree
0x42A40D: add     esp, 4
0x42A410: test    edi, edi
0x42A412: mov     [esi+4], edi
0x42A415: jnz     short loc_42A401
0x42A417: pop     edi
0x42A418: mov     dword ptr [esi], 0
0x42A41E: mov     eax, [ebx+0Ch]
0x42A421: push    eax
0x42A422: call    FormHeapFree
0x42A427: add     esp, 4
0x42A42A: pop     esi
0x42A42B: mov     dword ptr [ebx], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A431: pop     ebx
0x42A432: retn
