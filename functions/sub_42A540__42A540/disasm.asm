0x42A540: push    0FFFFFFFFh
0x42A542: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x42A547: mov     eax, large fs:0
0x42A54D: push    eax
0x42A54E: push    ecx
0x42A54F: push    esi
0x42A550: push    edi
0x42A551: mov     eax, ___security_cookie
0x42A556: xor     eax, esp
0x42A558: push    eax
0x42A559: lea     eax, [esp+1Ch+var_C]
0x42A55D: mov     large fs:0, eax
0x42A563: mov     esi, ecx
0x42A565: mov     [esp+1Ch+var_10], esi
0x42A569: xor     eax, eax
0x42A56B: mov     byte ptr [esi+4], 3Eh ; '>'
0x42A56F: mov     [esi+8], eax
0x42A572: mov     ecx, [esp+1Ch+arg_0]
0x42A576: cmp     ecx, eax
0x42A578: mov     [esp+1Ch+var_4], eax
0x42A57C: mov     dword ptr [esi], offset ??_7ExtraOblivionEntry@@6B@; const ExtraOblivionEntry::`vftable'
0x42A582: jz      short loc_42A5AC
0x42A584: mov     edi, [esp+1Ch+arg_4]
0x42A588: cmp     edi, eax
0x42A58A: jz      short loc_42A5AC
0x42A58C: mov     eax, [ecx]
0x42A58E: mov     edx, [eax+174h]
0x42A594: call    edx
0x42A596: mov     ecx, [eax]
0x42A598: mov     [esi+0Ch], ecx
0x42A59B: mov     edx, [eax+4]
0x42A59E: mov     [esi+10h], edx
0x42A5A1: mov     eax, [eax+8]
0x42A5A4: mov     [esi+14h], eax
0x42A5A7: mov     [esi+18h], edi
0x42A5AA: jmp     short loc_42A5CA
0x42A5AC: mov     ecx, dword ptr Vector3_InitValue?
0x42A5B2: mov     [esi+0Ch], ecx
0x42A5B5: mov     edx, dword ptr Vector3_InitValue?+4
0x42A5BB: mov     [esi+10h], edx
0x42A5BE: mov     ecx, dword_B3F9B0
0x42A5C4: mov     [esi+14h], ecx
0x42A5C7: mov     [esi+18h], eax
0x42A5CA: mov     eax, esi
0x42A5CC: mov     ecx, [esp+1Ch+var_C]
0x42A5D0: mov     large fs:0, ecx
0x42A5D7: pop     ecx
0x42A5D8: pop     edi
0x42A5D9: pop     esi
0x42A5DA: add     esp, 10h
0x42A5DD: retn    8
