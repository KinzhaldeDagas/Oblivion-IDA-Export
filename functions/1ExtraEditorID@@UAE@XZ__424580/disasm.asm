0x424580: push    0FFFFFFFFh
0x424582: push    offset SEH_42B090
0x424587: mov     eax, large fs:0
0x42458D: push    eax
0x42458E: push    ecx
0x42458F: push    esi
0x424590: mov     eax, ___security_cookie
0x424595: xor     eax, esp
0x424597: push    eax
0x424598: lea     eax, [esp+18h+var_C]
0x42459C: mov     large fs:0, eax
0x4245A2: mov     esi, ecx
0x4245A4: mov     eax, [esi+0Ch]
0x4245A7: push    eax
0x4245A8: call    FormHeapFree
0x4245AD: add     esp, 4
0x4245B0: xor     eax, eax
0x4245B2: mov     [esi+0Ch], eax
0x4245B5: mov     [esi+12h], ax
0x4245B9: mov     [esi+10h], ax
0x4245BD: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x4245C3: mov     ecx, [esp+18h+var_C]
0x4245C7: mov     large fs:0, ecx
0x4245CE: pop     ecx
0x4245CF: pop     esi
0x4245D0: add     esp, 10h
0x4245D3: retn
