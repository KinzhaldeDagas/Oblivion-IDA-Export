0x42B090: push    0FFFFFFFFh
0x42B092: push    offset SEH_42B090
0x42B097: mov     eax, large fs:0
0x42B09D: push    eax
0x42B09E: push    ecx
0x42B09F: push    esi
0x42B0A0: mov     eax, ___security_cookie
0x42B0A5: xor     eax, esp
0x42B0A7: push    eax
0x42B0A8: lea     eax, [esp+18h+var_C]
0x42B0AC: mov     large fs:0, eax
0x42B0B2: mov     esi, ecx
0x42B0B4: mov     [esp+18h+var_10], esi
0x42B0B8: xor     eax, eax
0x42B0BA: mov     byte ptr [esi+4], 57h ; 'W'
0x42B0BE: mov     [esi+8], eax
0x42B0C1: mov     ecx, [esp+18h+arg_0]
0x42B0C5: cmp     ecx, eax
0x42B0C7: mov     [esp+18h+var_4], eax
0x42B0CB: mov     dword ptr [esi], offset ??_7ExtraEditorRefMoveData@@6B@; const ExtraEditorRefMoveData::`vftable'
0x42B0D1: jz      short loc_42B111
0x42B0D3: mov     eax, [ecx+20h]
0x42B0D6: mov     [esi+0Ch], eax
0x42B0D9: mov     edx, [ecx+24h]
0x42B0DC: mov     [esi+10h], edx
0x42B0DF: mov     eax, [ecx+28h]
0x42B0E2: mov     [esi+14h], eax
0x42B0E5: mov     edx, [ecx]
0x42B0E7: mov     eax, [edx+174h]
0x42B0ED: call    eax
0x42B0EF: mov     ecx, [eax]
0x42B0F1: mov     [esi+18h], ecx
0x42B0F4: mov     edx, [eax+4]
0x42B0F7: mov     [esi+1Ch], edx
0x42B0FA: mov     ecx, [eax+8]
0x42B0FD: mov     [esi+20h], ecx
0x42B100: mov     edx, [eax]
0x42B102: mov     [esi+24h], edx
0x42B105: mov     ecx, [eax+4]
0x42B108: mov     [esi+28h], ecx
0x42B10B: mov     edx, [eax+8]
0x42B10E: mov     [esi+2Ch], edx
0x42B111: mov     eax, esi
0x42B113: mov     ecx, [esp+18h+var_C]
0x42B117: mov     large fs:0, ecx
0x42B11E: pop     ecx
0x42B11F: pop     esi
0x42B120: add     esp, 10h
0x42B123: retn    4
