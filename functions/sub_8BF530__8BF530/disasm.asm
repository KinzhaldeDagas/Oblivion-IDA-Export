0x8BF530: push    ecx
0x8BF531: push    ebx
0x8BF532: push    ebp
0x8BF533: mov     ebp, [ecx+4]
0x8BF536: push    edi
0x8BF537: mov     edi, [esp+10h+arg_0]
0x8BF53B: xor     ebx, ebx
0x8BF53D: cmp     edi, ebx
0x8BF53F: mov     [esp+10h+var_4], ecx
0x8BF543: jnz     short loc_8BF585
0x8BF545: mov     ecx, ds:0BA7D98h
0x8BF54B: mov     eax, [ecx]
0x8BF54D: mov     edx, [eax+10h]
0x8BF550: push    29h ; ')'
0x8BF552: push    20h ; ' '
0x8BF554: call    edx
0x8BF556: fld     dword ptr ds:0A31C80h
0x8BF55C: fstp    dword ptr [eax+14h]
0x8BF55F: mov     word ptr [eax+4], 20h ; ' '
0x8BF565: mov     word ptr [eax+6], 1
0x8BF56B: mov     [eax+10h], ebx
0x8BF56E: mov     [eax+0Ch], ebx
0x8BF571: mov     dword ptr [eax], offset ??_7ahkBreakableConstraintData@@6B@; const ahkBreakableConstraintData::`vftable'
0x8BF577: mov     [eax+1Ch], ebx
0x8BF57A: mov     [eax+18h], bl
0x8BF57D: mov     [eax+19h], bl
0x8BF580: mov     [eax+1Ah], bl
0x8BF583: mov     edi, eax
0x8BF585: mov     eax, [ebp+0Ch]
0x8BF588: cmp     eax, ebx
0x8BF58A: jz      short loc_8BF5C8
0x8BF58C: mov     ecx, [esp+10h+arg_4]
0x8BF590: push    esi
0x8BF591: push    ecx
0x8BF592: push    eax
0x8BF593: call    sub_8E7FD0
0x8BF598: mov     esi, eax
0x8BF59A: add     esp, 8
0x8BF59D: cmp     esi, ebx
0x8BF59F: jz      short loc_8BF5C7
0x8BF5A1: push    esi
0x8BF5A2: mov     ecx, edi
0x8BF5A4: call    sub_8BED90
0x8BF5A9: cmp     [esi+4], bx
0x8BF5AD: jz      short loc_8BF5C7
0x8BF5AF: add     word ptr [esi+6], 0FFFFh
0x8BF5B4: movzx   eax, word ptr [esi+6]
0x8BF5B8: cmp     ax, bx
0x8BF5BB: jnz     short loc_8BF5C7
0x8BF5BD: mov     edx, [esi]
0x8BF5BF: mov     eax, [edx]
0x8BF5C1: push    1
0x8BF5C3: mov     ecx, esi
0x8BF5C5: call    eax
0x8BF5C7: pop     esi
0x8BF5C8: fld     dword ptr [ebp+14h]
0x8BF5CB: mov     edx, [esp+10h+arg_4]
0x8BF5CF: fstp    dword ptr [edi+14h]
0x8BF5D2: mov     al, [ebp+19h]
0x8BF5D5: mov     [edi+19h], al
0x8BF5D8: mov     cl, [ebp+1Ah]
0x8BF5DB: push    edx
0x8BF5DC: mov     [edi+1Ah], cl
0x8BF5DF: mov     ecx, [esp+14h+var_4]
0x8BF5E3: push    edi
0x8BF5E4: call    sub_8A07B0
0x8BF5E9: pop     edi
0x8BF5EA: pop     ebp
0x8BF5EB: pop     ebx
0x8BF5EC: pop     ecx
0x8BF5ED: retn    8
