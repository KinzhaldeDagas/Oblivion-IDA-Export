0x84B3E0: push    0FFFFFFFFh
0x84B3E2: push    offset SEH_882120
0x84B3E7: mov     eax, large fs:0
0x84B3ED: push    eax
0x84B3EE: push    ebx
0x84B3EF: push    ebp
0x84B3F0: push    esi
0x84B3F1: push    edi
0x84B3F2: mov     eax, ds:0B30AACh
0x84B3F7: xor     eax, esp
0x84B3F9: push    eax
0x84B3FA: lea     eax, [esp+20h+var_C]
0x84B3FE: mov     large fs:0, eax
0x84B404: mov     ebx, ecx
0x84B406: mov     esi, [esp+20h+arg_8]
0x84B40A: mov     eax, [esi+10h]
0x84B40D: mov     edi, ds:0B45684h
0x84B413: push    eax
0x84B414: call    sub_848C40
0x84B419: mov     esi, [esi+0Ch]
0x84B41C: push    esi
0x84B41D: mov     ecx, ebx
0x84B41F: call    sub_848E50
0x84B424: mov     eax, [edi+24h]
0x84B427: mov     ebp, [esp+20h+arg_C]
0x84B42B: mov     esi, [eax]
0x84B42D: mov     edx, [ebp+0]
0x84B430: mov     eax, [edx+88h]
0x84B436: push    0
0x84B438: mov     ecx, ebp
0x84B43A: mov     [esp+24h+arg_8], esi
0x84B43E: call    eax
0x84B440: mov     esi, [esi+4]
0x84B443: cmp     esi, eax
0x84B445: mov     [esp+20h+arg_C], eax
0x84B449: jz      short loc_84B486
0x84B44B: test    esi, esi
0x84B44D: jz      short loc_84B46F
0x84B44F: lea     ecx, [esi+4]
0x84B452: push    ecx; lpAddend
0x84B453: call    dword ptr ds:0A2807Ch
0x84B459: test    eax, eax
0x84B45B: jnz     short loc_84B46B
0x84B45D: test    esi, esi
0x84B45F: jz      short loc_84B46B
0x84B461: mov     edx, [esi]
0x84B463: mov     eax, [edx]
0x84B465: push    1
0x84B467: mov     ecx, esi
0x84B469: call    eax
0x84B46B: mov     eax, [esp+20h+arg_C]
0x84B46F: test    eax, eax
0x84B471: mov     esi, [esp+20h+arg_8]
0x84B475: mov     [esi+4], eax
0x84B478: jz      short loc_84B48A
0x84B47A: add     eax, 4
0x84B47D: push    eax; lpAddend
0x84B47E: call    dword ptr ds:0A28078h
0x84B484: jmp     short loc_84B48A
0x84B486: mov     esi, [esp+20h+arg_8]
0x84B48A: test    esi, esi
0x84B48C: jz      short loc_84B4A9
0x84B48E: cmp     byte ptr ds:0B42CDDh, 0
0x84B495: jz      short loc_84B4A9
0x84B497: mov     edx, [ebp+0]
0x84B49A: mov     eax, [edx+78h]
0x84B49D: mov     ecx, ebp
0x84B49F: call    eax
0x84B4A1: push    eax
0x84B4A2: mov     ecx, esi
0x84B4A4: call    sub_7715E0
0x84B4A9: mov     ecx, [edi+24h]
0x84B4AC: mov     esi, [ecx+4]
0x84B4AF: mov     edx, [ebp+0]
0x84B4B2: mov     eax, [edx+8Ch]
0x84B4B8: push    0
0x84B4BA: mov     ecx, ebp
0x84B4BC: mov     [esp+24h+arg_8], esi
0x84B4C0: call    eax
0x84B4C2: test    eax, eax
0x84B4C4: jz      short loc_84B4DB
0x84B4C6: mov     edx, [ebp+0]
0x84B4C9: mov     eax, [edx+8Ch]
0x84B4CF: push    0
0x84B4D1: mov     ecx, ebp
0x84B4D3: call    eax
0x84B4D5: mov     [esp+20h+arg_C], eax
0x84B4D9: jmp     short loc_84B4FA
0x84B4DB: test    dword ptr [ebp+1Ch], 80h
0x84B4E2: jbe     short loc_84B4F0
0x84B4E4: mov     ecx, ds:0B430F0h
0x84B4EA: mov     [esp+20h+arg_C], ecx
0x84B4EE: jmp     short loc_84B4FA
0x84B4F0: mov     edx, ds:0B430DCh
0x84B4F6: mov     [esp+20h+arg_C], edx
0x84B4FA: mov     esi, [esi+4]
0x84B4FD: cmp     esi, [esp+20h+arg_C]
0x84B501: jz      short loc_84B53E
0x84B503: test    esi, esi
0x84B505: jz      short loc_84B523
0x84B507: lea     eax, [esi+4]
0x84B50A: push    eax; lpAddend
0x84B50B: call    dword ptr ds:0A2807Ch
0x84B511: test    eax, eax
0x84B513: jnz     short loc_84B523
0x84B515: test    esi, esi
0x84B517: jz      short loc_84B523
0x84B519: mov     edx, [esi]
0x84B51B: mov     eax, [edx]
0x84B51D: push    1
0x84B51F: mov     ecx, esi
0x84B521: call    eax
0x84B523: mov     eax, [esp+20h+arg_C]
0x84B527: test    eax, eax
0x84B529: mov     esi, [esp+20h+arg_8]
0x84B52D: mov     [esi+4], eax
0x84B530: jz      short loc_84B542
0x84B532: add     eax, 4
0x84B535: push    eax; lpAddend
0x84B536: call    dword ptr ds:0A28078h
0x84B53C: jmp     short loc_84B542
0x84B53E: mov     esi, [esp+20h+arg_8]
0x84B542: test    esi, esi
0x84B544: jz      short loc_84B561
0x84B546: cmp     byte ptr ds:0B42CDDh, 0
0x84B54D: jz      short loc_84B561
0x84B54F: mov     edx, [ebp+0]
0x84B552: mov     eax, [edx+78h]
0x84B555: mov     ecx, ebp
0x84B557: call    eax
0x84B559: push    eax
0x84B55A: mov     ecx, esi
0x84B55C: call    sub_7715E0
0x84B561: mov     esi, 1
0x84B566: add     [edi+60h], esi
0x84B569: mov     [esp+20h+arg_8], edi
0x84B56D: mov     edx, [ebx+38h]
0x84B570: lea     ecx, [esp+20h+arg_8]
0x84B574: push    ecx
0x84B575: push    edx
0x84B576: lea     ecx, [ebx+40h]
0x84B579: mov     [esp+28h+var_4], 0
0x84B581: call    sub_76CE40
0x84B586: or      eax, 0FFFFFFFFh
0x84B589: add     [edi+60h], eax
0x84B58C: mov     [esp+20h+var_4], eax
0x84B590: jnz     short loc_84B599
0x84B592: mov     ecx, edi
0x84B594: call    sub_7604D0
0x84B599: add     [ebx+38h], esi
0x84B59C: mov     ecx, [esp+20h+var_C]
0x84B5A0: mov     large fs:0, ecx
0x84B5A7: pop     ecx
0x84B5A8: pop     edi
0x84B5A9: pop     esi
0x84B5AA: pop     ebp
0x84B5AB: pop     ebx
0x84B5AC: add     esp, 0Ch
0x84B5AF: retn    10h
