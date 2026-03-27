0x716460: sub     esp, 0Ch
0x716463: push    ebx
0x716464: mov     ebx, [esp+10h+arg0]
0x716468: push    ebp
0x716469: push    esi
0x71646A: push    ebx; arg0
0x71646B: mov     esi, ecx
0x71646D: call    sub_700750
0x716472: mov     ecx, [ebx]
0x716474: lea     eax, [esp+18h+arg0]
0x716478: push    eax
0x716479: push    esi
0x71647A: call    NiTMap_GetAt
0x71647F: mov     eax, [esi+1Ch]
0x716482: test    eax, eax
0x716484: mov     ebp, [esp+18h+arg0]
0x716488: jz      short loc_71649E
0x71648A: lea     ecx, [esp+18h+arg0]
0x71648E: push    ecx
0x71648F: mov     ecx, [ebx]
0x716491: push    eax
0x716492: call    NiTMap_GetAt
0x716497: mov     edx, [esp+18h+arg0]
0x71649B: mov     [ebp+1Ch], edx
0x71649E: cmp     dword ptr [esi+14h], 0
0x7164A2: jz      short loc_71651F
0x7164A4: mov     edx, [esi+0Ch]
0x7164A7: push    edi
0x7164A8: lea     edi, [esi+8]
0x7164AB: xor     eax, eax
0x7164AD: test    edx, edx
0x7164AF: jbe     short loc_7164C5
0x7164B1: mov     esi, [edi+8]
0x7164B4: mov     ecx, esi
0x7164B6: cmp     dword ptr [ecx], 0
0x7164B9: jnz     short loc_716528
0x7164BB: add     eax, 1
0x7164BE: add     ecx, 4
0x7164C1: cmp     eax, edx
0x7164C3: jb      short loc_7164B6
0x7164C5: xor     eax, eax
0x7164C7: test    eax, eax
0x7164C9: mov     [esp+1Ch+arg0], eax
0x7164CD: jz      short loc_71651E
0x7164CF: nop
0x7164D0: lea     eax, [esp+1Ch+var_8]
0x7164D4: push    eax
0x7164D5: lea     ecx, [esp+20h+var_C]
0x7164D9: push    ecx
0x7164DA: lea     edx, [esp+24h+arg0]
0x7164DE: push    edx
0x7164DF: mov     ecx, edi
0x7164E1: call    sub_452600
0x7164E6: mov     esi, [esp+1Ch+var_C]
0x7164EA: test    esi, esi
0x7164EC: jz      short loc_716517
0x7164EE: mov     eax, [esp+1Ch+var_8]
0x7164F2: test    eax, eax
0x7164F4: jz      short loc_716517
0x7164F6: lea     ecx, [esp+1Ch+var_4]
0x7164FA: push    ecx
0x7164FB: mov     ecx, [ebx]
0x7164FD: push    eax
0x7164FE: call    NiTMap_GetAt
0x716503: test    al, al
0x716505: jz      short loc_716517
0x716507: mov     eax, [esp+1Ch+var_4]
0x71650B: mov     edx, [ebp+0]
0x71650E: mov     edx, [edx+50h]
0x716511: push    eax
0x716512: push    esi
0x716513: mov     ecx, ebp
0x716515: call    edx
0x716517: cmp     [esp+1Ch+arg0], 0
0x71651C: jnz     short loc_7164D0
0x71651E: pop     edi
0x71651F: pop     esi
0x716520: pop     ebp
0x716521: pop     ebx
0x716522: add     esp, 0Ch
0x716525: retn    4
0x716528: mov     eax, [esi+eax*4]
0x71652B: jmp     short loc_7164C7
