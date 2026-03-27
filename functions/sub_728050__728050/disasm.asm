0x728050: push    0FFFFFFFFh
0x728052: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x728057: mov     eax, large fs:0
0x72805D: push    eax
0x72805E: push    ecx
0x72805F: push    ebx
0x728060: push    esi
0x728061: push    edi
0x728062: mov     eax, ds:0B30AACh
0x728067: xor     eax, esp
0x728069: push    eax
0x72806A: lea     eax, [esp+20h+var_C]
0x72806E: mov     large fs:0, eax
0x728074: mov     edi, ecx
0x728076: push    14h; Size
0x728078: call    FormHeapAlloc
0x72807D: mov     esi, eax
0x72807F: add     esp, 4
0x728082: mov     [esp+20h+var_10], esi
0x728086: xor     ebx, ebx
0x728088: cmp     esi, ebx
0x72808A: mov     [esp+20h+var_4], ebx
0x72808E: jz      short loc_7280A5
0x728090: mov     ecx, esi
0x728092: call    sub_721350
0x728097: mov     dword ptr [esi], offset ??_7NiBinaryExtraData@@6B@; const NiBinaryExtraData::`vftable'
0x72809D: mov     [esi+10h], ebx
0x7280A0: mov     [esi+0Ch], ebx
0x7280A3: jmp     short loc_7280A7
0x7280A5: xor     esi, esi
0x7280A7: mov     eax, [esp+20h+arg_0]
0x7280AB: push    eax
0x7280AC: push    esi
0x7280AD: mov     ecx, edi
0x7280AF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7280B7: call    sub_7214A0
0x7280BC: mov     eax, [edi+10h]
0x7280BF: cmp     eax, ebx
0x7280C1: jbe     short loc_7280E5
0x7280C3: push    eax; Size
0x7280C4: call    FormHeapAlloc
0x7280C9: mov     [esi+0Ch], eax
0x7280CC: mov     ecx, [edi+10h]
0x7280CF: mov     edx, [edi+0Ch]
0x7280D2: push    ecx; Size
0x7280D3: push    edx; Src
0x7280D4: push    eax; Dst
0x7280D5: call    _memcpy
0x7280DA: mov     eax, [edi+10h]
0x7280DD: add     esp, 10h
0x7280E0: mov     [esi+10h], eax
0x7280E3: jmp     short loc_7280EB
0x7280E5: mov     [esi+10h], ebx
0x7280E8: mov     [esi+0Ch], ebx
0x7280EB: mov     eax, esi
0x7280ED: mov     ecx, [esp+20h+var_C]
0x7280F1: mov     large fs:0, ecx
0x7280F8: pop     ecx
0x7280F9: pop     edi
0x7280FA: pop     esi
0x7280FB: pop     ebx
0x7280FC: add     esp, 10h
0x7280FF: retn    4
