0x6CD3D0: push    0FFFFFFFFh
0x6CD3D2: push    offset SEH_6CED50
0x6CD3D7: mov     eax, large fs:0
0x6CD3DD: push    eax
0x6CD3DE: sub     esp, 8
0x6CD3E1: push    ebx
0x6CD3E2: push    ebp
0x6CD3E3: push    esi
0x6CD3E4: push    edi
0x6CD3E5: mov     eax, ds:0B30AACh
0x6CD3EA: xor     eax, esp
0x6CD3EC: push    eax
0x6CD3ED: lea     eax, [esp+28h+var_C]
0x6CD3F1: mov     large fs:0, eax
0x6CD3F7: mov     ebp, ecx
0x6CD3F9: mov     eax, [esp+28h+arg_4]
0x6CD3FD: mov     ebx, [esp+28h+arg_0]
0x6CD401: push    eax
0x6CD402: push    ebx
0x6CD403: call    sub_733850
0x6CD408: mov     cl, [ebp+0Ch]
0x6CD40B: mov     [ebx+0Ch], cl
0x6CD40E: mov     dl, [ebp+0Dh]
0x6CD411: mov     [ebx+0Dh], dl
0x6CD414: movzx   esi, byte ptr [ebp+0Dh]
0x6CD418: xor     ecx, ecx
0x6CD41A: mov     eax, esi
0x6CD41C: mov     edx, 18h
0x6CD421: mul     edx
0x6CD423: seto    cl
0x6CD426: neg     ecx
0x6CD428: or      ecx, eax
0x6CD42A: xor     eax, eax
0x6CD42C: add     ecx, 4
0x6CD42F: setb    al
0x6CD432: neg     eax
0x6CD434: or      eax, ecx
0x6CD436: push    eax; Size
0x6CD437: call    FormHeapAlloc
0x6CD43C: add     esp, 4
0x6CD43F: mov     [esp+28h+var_10], eax
0x6CD443: xor     edi, edi
0x6CD445: cmp     eax, edi
0x6CD447: mov     [esp+28h+var_4], edi
0x6CD44B: jz      short loc_6CD465
0x6CD44D: push    offset sub_7016A0; a5
0x6CD452: push    offset sub_6CCDE0; a4
0x6CD457: push    esi; size
0x6CD458: lea     edi, [eax+4]
0x6CD45B: push    18h; a2
0x6CD45D: push    edi; a1
0x6CD45E: mov     [eax], esi
0x6CD460: call    ArrayConstructor
0x6CD465: mov     [ebx+14h], edi
0x6CD468: fld     dword ptr [ebp+1Ch]
0x6CD46B: fstp    dword ptr [ebx+1Ch]
0x6CD46E: test    byte ptr [ebp+0Ch], 1
0x6CD472: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6CD47A: jnz     loc_6CD54C
0x6CD480: xor     al, al
0x6CD482: cmp     [ebp+0Dh], al
0x6CD485: mov     [esp+28h+var_11], al
0x6CD489: jbe     loc_6CD52C
0x6CD48F: nop
0x6CD490: mov     edi, [ebp+14h]
0x6CD493: mov     esi, [ebx+14h]
0x6CD496: movzx   eax, al
0x6CD499: lea     eax, [eax+eax*2]
0x6CD49C: add     eax, eax
0x6CD49E: add     eax, eax
0x6CD4A0: add     eax, eax
0x6CD4A2: mov     ecx, [edi+eax]
0x6CD4A5: add     edi, eax
0x6CD4A7: add     esi, eax
0x6CD4A9: test    ecx, ecx
0x6CD4AB: jz      short loc_6CD4FB
0x6CD4AD: mov     edx, [ecx]
0x6CD4AF: mov     eax, [esp+28h+arg_4]
0x6CD4B3: mov     edx, [edx+18h]
0x6CD4B6: push    eax
0x6CD4B7: call    edx
0x6CD4B9: mov     ebx, [esi]
0x6CD4BB: cmp     ebx, eax
0x6CD4BD: mov     [esp+28h+var_10], eax
0x6CD4C1: jz      short loc_6CD4F7
0x6CD4C3: test    ebx, ebx
0x6CD4C5: jz      short loc_6CD4E7
0x6CD4C7: lea     eax, [ebx+4]
0x6CD4CA: push    eax; lpAddend
0x6CD4CB: call    dword ptr ds:0A2807Ch
0x6CD4D1: test    eax, eax
0x6CD4D3: jnz     short loc_6CD4E3
0x6CD4D5: test    ebx, ebx
0x6CD4D7: jz      short loc_6CD4E3
0x6CD4D9: mov     edx, [ebx]
0x6CD4DB: mov     eax, [edx]
0x6CD4DD: push    1
0x6CD4DF: mov     ecx, ebx
0x6CD4E1: call    eax
0x6CD4E3: mov     eax, [esp+28h+var_10]
0x6CD4E7: test    eax, eax
0x6CD4E9: mov     [esi], eax
0x6CD4EB: jz      short loc_6CD4F7
0x6CD4ED: add     eax, 4
0x6CD4F0: push    eax; lpAddend
0x6CD4F1: call    dword ptr ds:0A28078h
0x6CD4F7: mov     ebx, [esp+28h+arg_0]
0x6CD4FB: fld     dword ptr [edi+4]
0x6CD4FE: mov     al, [esp+28h+var_11]
0x6CD502: fstp    dword ptr [esi+4]
0x6CD505: add     al, 1
0x6CD507: fld     dword ptr [edi+8]
0x6CD50A: mov     [esp+28h+var_11], al
0x6CD50E: fstp    dword ptr [esi+8]
0x6CD511: mov     cl, [edi+0Ch]
0x6CD514: mov     [esi+0Ch], cl
0x6CD517: fld     dword ptr [edi+10h]
0x6CD51A: fstp    dword ptr [esi+10h]
0x6CD51D: fld     dword ptr [edi+14h]
0x6CD520: fstp    dword ptr [esi+14h]
0x6CD523: cmp     al, [ebp+0Dh]
0x6CD526: jb      loc_6CD490
0x6CD52C: movzx   edx, byte ptr [ebp+0Eh]
0x6CD530: mov     [ebx+0Eh], dl
0x6CD533: mov     al, [ebp+0Fh]
0x6CD536: mov     [ebx+0Fh], al
0x6CD539: fld     dword ptr [ebp+20h]
0x6CD53C: fstp    dword ptr [ebx+20h]
0x6CD53F: mov     cl, [ebp+10h]
0x6CD542: mov     [ebx+10h], cl
0x6CD545: movzx   edx, byte ptr [ebp+11h]
0x6CD549: mov     [ebx+11h], dl
0x6CD54C: mov     ecx, [esp+28h+var_C]
0x6CD550: mov     large fs:0, ecx
0x6CD557: pop     ecx
0x6CD558: pop     edi
0x6CD559: pop     esi
0x6CD55A: pop     ebp
0x6CD55B: pop     ebx
0x6CD55C: add     esp, 14h
0x6CD55F: retn    8
