0x9187A0: push    ebx
0x9187A1: push    ebp
0x9187A2: push    esi
0x9187A3: mov     esi, ecx
0x9187A5: mov     eax, 1
0x9187AA: mov     [esi+6], ax
0x9187AE: mov     dword ptr [esi+8], offset off_A9D1D8
0x9187B5: mov     dword ptr [esi+0Ch], offset off_A9D1C0
0x9187BC: mov     byte ptr [esi+10h], 0
0x9187C0: push    edi
0x9187C1: lea     edi, [esi+0Ch]
0x9187C4: lea     ebp, [esi+24h]
0x9187C7: mov     dword ptr [esi], offset off_A9D230
0x9187CD: mov     dword ptr [esi+8], offset off_A9D214
0x9187D4: mov     dword ptr [edi], offset off_A9D1FC
0x9187DA: lea     ecx, [ebp+8]
0x9187DD: mov     [ebp+6], ax
0x9187E1: mov     dword ptr [ebp+0], offset off_A9D1F4
0x9187E8: call    sub_8B0E10
0x9187ED: xor     eax, eax
0x9187EF: mov     [esi+38h], eax
0x9187F2: mov     [esi+3Ch], eax
0x9187F5: mov     ebx, 80000000h
0x9187FA: mov     [esi+40h], ebx
0x9187FD: push    edi
0x9187FE: mov     ecx, ebp
0x918800: mov     [esi+44h], eax
0x918803: mov     [esi+48h], eax
0x918806: mov     [esi+4Ch], ebx
0x918809: call    sub_947EE0
0x91880E: mov     ecx, [esi+4Ch]
0x918811: mov     edi, [esp+10h+arg_0]
0x918815: mov     edx, [edi+4]
0x918818: mov     eax, ecx
0x91881A: and     eax, 3FFFFFFFh
0x91881F: cmp     eax, edx
0x918821: jge     short loc_918891
0x918823: mov     ebp, large fs:2Ch
0x91882A: test    ebx, ecx
0x91882C: mov     ebx, ds:0BA9DE4h
0x918832: jnz     short loc_91885B
0x918834: mov     ecx, [ebp+ebx*4+0]
0x918838: mov     ecx, [ecx+19Ch]
0x91883E: test    ecx, ecx
0x918840: jnz     short loc_918848
0x918842: mov     ecx, ds:0BA7D9Ch
0x918848: push    14h
0x91884A: lea     edx, ds:0[eax*4]
0x918851: mov     eax, [esi+44h]
0x918854: push    edx
0x918855: push    eax
0x918856: call    sub_8A75D0
0x91885B: mov     ecx, [ebp+ebx*4+0]
0x91885F: mov     eax, [ecx+19Ch]
0x918865: test    eax, eax
0x918867: jnz     short loc_91886E
0x918869: mov     eax, ds:0BA7D9Ch
0x91886E: mov     edx, [edi+4]
0x918871: push    14h
0x918873: shl     edx, 2
0x918876: push    edx
0x918877: mov     ecx, eax
0x918879: call    sub_8A7560
0x91887E: mov     [esi+44h], eax
0x918881: mov     eax, [esi+4Ch]
0x918884: mov     ecx, [edi+4]
0x918887: and     eax, 40000000h
0x91888C: or      eax, ecx
0x91888E: mov     [esi+4Ch], eax
0x918891: mov     ecx, [edi+4]
0x918894: test    ecx, ecx
0x918896: mov     eax, [esi+44h]
0x918899: mov     [esi+48h], ecx
0x91889C: mov     edx, [edi]
0x91889E: jle     short loc_9188AD
0x9188A0: sub     edx, eax
0x9188A2: mov     edi, [edx+eax]
0x9188A5: mov     [eax], edi
0x9188A7: add     eax, 4
0x9188AA: dec     ecx
0x9188AB: jnz     short loc_9188A2
0x9188AD: mov     edi, [esp+10h+arg_4]
0x9188B1: test    edi, edi
0x9188B3: mov     ebx, 10h
0x9188B8: jz      short loc_9188D6
0x9188BA: mov     ecx, ds:0BA7D98h
0x9188C0: mov     edx, [ecx]
0x9188C2: push    17h
0x9188C4: push    ebx
0x9188C5: call    dword ptr [edx+10h]
0x9188C8: push    edi
0x9188C9: mov     ecx, eax
0x9188CB: mov     [eax+4], bx
0x9188CF: call    sub_948C30
0x9188D4: jmp     short loc_9188D8
0x9188D6: xor     eax, eax
0x9188D8: mov     edi, [esp+10h+arg_8]
0x9188DC: test    edi, edi
0x9188DE: mov     [esi+14h], eax
0x9188E1: jz      short loc_9188FF
0x9188E3: mov     ecx, ds:0BA7D98h
0x9188E9: mov     eax, [ecx]
0x9188EB: push    17h
0x9188ED: push    ebx
0x9188EE: call    dword ptr [eax+10h]
0x9188F1: push    edi
0x9188F2: mov     ecx, eax
0x9188F4: mov     [eax+4], bx
0x9188F8: call    sub_948770
0x9188FD: jmp     short loc_918901
0x9188FF: xor     eax, eax
0x918901: mov     [esi+18h], eax
0x918904: mov     ecx, ds:0BA7D98h
0x91890A: mov     edx, [ecx]
0x91890C: push    32h ; '2'
0x91890E: push    ebx
0x91890F: call    dword ptr [edx+10h]
0x918912: mov     [eax+4], bx
0x918916: mov     ecx, [esi+18h]
0x918919: push    ecx
0x91891A: mov     ecx, eax
0x91891C: call    sub_9484E0
0x918921: test    eax, eax
0x918923: jz      short loc_91893A
0x918925: add     eax, 8
0x918928: mov     [esi+1Ch], eax
0x91892B: lea     eax, [esi+8]
0x91892E: pop     edi
0x91892F: mov     [esi+20h], eax
0x918932: mov     eax, esi
0x918934: pop     esi
0x918935: pop     ebp
0x918936: pop     ebx
0x918937: retn    0Ch
0x91893A: xor     eax, eax
0x91893C: mov     [esi+1Ch], eax
0x91893F: lea     eax, [esi+8]
0x918942: pop     edi
0x918943: mov     [esi+20h], eax
0x918946: mov     eax, esi
0x918948: pop     esi
0x918949: pop     ebp
0x91894A: pop     ebx
0x91894B: retn    0Ch
