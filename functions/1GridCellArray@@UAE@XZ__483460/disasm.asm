0x483460: push    0FFFFFFFFh
0x483462: push    offset ??1GridCellArray@@UAE@XZ_SEH
0x483467: mov     eax, large fs:0
0x48346D: push    eax
0x48346E: sub     esp, 8
0x483471: push    ebx
0x483472: push    ebp
0x483473: push    esi
0x483474: push    edi
0x483475: mov     eax, ds:0B30AACh
0x48347A: xor     eax, esp
0x48347C: push    eax
0x48347D: lea     eax, [esp+28h+var_C]
0x483481: mov     large fs:0, eax
0x483487: mov     esi, ecx
0x483489: mov     [esp+28h+var_10], esi
0x48348D: mov     dword ptr [esi], offset ??_7GridCellArray@@6B@; const GridCellArray::`vftable'
0x483493: mov     [esp+28h+var_4], 1
0x48349B: call    sub_481E10
0x4834A0: mov     eax, ds:0B33A98h
0x4834A5: mov     al, [eax+0CD4h]
0x4834AB: test    al, al
0x4834AD: jz      short loc_4834B4
0x4834AF: call    sub_4CA390
0x4834B4: mov     ecx, esi
0x4834B6: call    sub_482670
0x4834BB: xor     ecx, ecx
0x4834BD: cmp     [esi+0Ch], ecx
0x4834C0: mov     [esp+28h+var_14], ecx
0x4834C4: jbe     short loc_483515
0x4834C6: xor     ebp, ebp
0x4834C8: cmp     [esi+0Ch], ebp
0x4834CB: jbe     short loc_483509
0x4834CD: lea     ecx, [ecx+0]
0x4834D0: mov     eax, [esi+0Ch]
0x4834D3: mov     edx, [esi+10h]
0x4834D6: imul    eax, ecx
0x4834D9: add     eax, ebp
0x4834DB: mov     ebx, [edx+eax*8+4]
0x4834DF: test    ebx, ebx
0x4834E1: lea     edi, [edx+eax*8]
0x4834E4: jz      short loc_4834FA
0x4834E6: mov     ecx, ebx
0x4834E8: call    sub_49E500
0x4834ED: push    ebx
0x4834EE: call    FormHeapFree
0x4834F3: mov     ecx, [esp+2Ch+var_14]
0x4834F7: add     esp, 4
0x4834FA: add     ebp, 1
0x4834FD: mov     dword ptr [edi+4], 0
0x483504: cmp     ebp, [esi+0Ch]
0x483507: jb      short loc_4834D0
0x483509: add     ecx, 1
0x48350C: cmp     ecx, [esi+0Ch]
0x48350F: mov     [esp+28h+var_14], ecx
0x483513: jb      short loc_4834C6
0x483515: mov     eax, [esi+10h]
0x483518: push    eax
0x483519: call    FormHeapFree
0x48351E: mov     edi, [esi+24h]
0x483521: add     esp, 4
0x483524: test    edi, edi
0x483526: mov     byte ptr [esp+28h+var_4], 0
0x48352B: jz      short loc_483549
0x48352D: lea     eax, [edi+4]
0x483530: push    eax; lpAddend
0x483531: call    dword ptr ds:0A2807Ch
0x483537: test    eax, eax
0x483539: jnz     short loc_483549
0x48353B: test    edi, edi
0x48353D: jz      short loc_483549
0x48353F: mov     edx, [edi]
0x483541: mov     eax, [edx]
0x483543: push    1
0x483545: mov     ecx, edi
0x483547: call    eax
0x483549: mov     ecx, esi
0x48354B: mov     [esp+28h+var_4], 0FFFFFFFFh
0x483553: call    sub_481DF0
0x483558: mov     ecx, dword ptr [esp+28h+var_C]
0x48355C: mov     large fs:0, ecx
0x483563: pop     ecx
0x483564: pop     edi
0x483565: pop     esi
0x483566: pop     ebp
0x483567: pop     ebx
0x483568: add     esp, 14h
0x48356B: retn
