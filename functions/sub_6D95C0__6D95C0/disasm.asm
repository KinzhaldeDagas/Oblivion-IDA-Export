0x6D95C0: sub     esp, 18h
0x6D95C3: push    ebp
0x6D95C4: mov     ebp, ecx
0x6D95C6: mov     eax, [ebp+1Ch]
0x6D95C9: test    eax, eax
0x6D95CB: jz      loc_6D9700
0x6D95D1: mov     ecx, [eax+8]
0x6D95D4: test    ecx, ecx
0x6D95D6: mov     dl, [eax+14h]
0x6D95D9: push    esi
0x6D95DA: mov     esi, [eax+0Ch]
0x6D95DD: push    edi
0x6D95DE: mov     edi, [eax+10h]
0x6D95E1: mov     [esp+24h+var_14], ecx
0x6D95E5: mov     [esp+24h+var_15], dl
0x6D95E9: jnz     short loc_6D963E
0x6D95EB: mov     esi, eax
0x6D95ED: test    esi, esi
0x6D95EF: jz      short loc_6D9614
0x6D95F1: lea     eax, [esi+4]
0x6D95F4: push    eax; lpAddend
0x6D95F5: call    dword ptr ds:0A2807Ch
0x6D95FB: test    eax, eax
0x6D95FD: jnz     short loc_6D960D
0x6D95FF: test    esi, esi
0x6D9601: jz      short loc_6D960D
0x6D9603: mov     edx, [esi]
0x6D9605: mov     eax, [edx]
0x6D9607: push    1
0x6D9609: mov     ecx, esi
0x6D960B: call    eax
0x6D960D: mov     dword ptr [ebp+1Ch], 0
0x6D9614: mov     ecx, ds:0B3EBA0h
0x6D961A: mov     [ebp+0Ch], ecx
0x6D961D: mov     edx, ds:0B3EBA4h
0x6D9623: mov     [ebp+10h], edx
0x6D9626: mov     eax, ds:0B3EBA8h
0x6D962B: mov     [ebp+14h], eax
0x6D962E: mov     ecx, ds:0B3EBACh
0x6D9634: pop     edi
0x6D9635: pop     esi
0x6D9636: mov     [ebp+18h], ecx
0x6D9639: pop     ebp
0x6D963A: add     esp, 18h
0x6D963D: retn
0x6D963E: cmp     ecx, 1
0x6D9641: mov     edx, [esi+4]
0x6D9644: mov     eax, [esi+8]
0x6D9647: mov     [esp+24h+var_10], edx
0x6D964B: mov     edx, [esi+0Ch]
0x6D964E: mov     [esp+24h+var_C], eax
0x6D9652: mov     eax, [esi+10h]
0x6D9655: push    ebx
0x6D9656: mov     [esp+28h+var_8], edx
0x6D965A: mov     [esp+28h+var_4], eax
0x6D965E: jnz     short loc_6D9665
0x6D9660: cmp     edi, 4
0x6D9663: jnz     short loc_6D96B7
0x6D9665: cmp     edi, 1
0x6D9668: jz      short loc_6D9673
0x6D966A: cmp     edi, 5
0x6D966D: jnz     loc_6D96FD
0x6D9673: mov     bl, 1
0x6D9675: mov     edi, 1
0x6D967A: jmp     short loc_6D9684
0x6D967C: align 10h
0x6D9680: mov     ecx, [esp+28h+var_14]
0x6D9684: cmp     edi, ecx
0x6D9686: jnb     short loc_6D96B3
0x6D9688: movzx   edx, [esp+28h+var_15]
0x6D968D: imul    edx, edi
0x6D9690: lea     ecx, [esp+28h+var_10]
0x6D9694: push    ecx
0x6D9695: lea     ecx, [edx+esi+4]
0x6D9699: call    sub_6D5A40
0x6D969E: test    al, al
0x6D96A0: jz      short loc_6D96A4
0x6D96A2: xor     bl, bl
0x6D96A4: add     edi, 1
0x6D96A7: test    bl, bl
0x6D96A9: jnz     short loc_6D9680
0x6D96AB: pop     ebx
0x6D96AC: pop     edi
0x6D96AD: pop     esi
0x6D96AE: pop     ebp
0x6D96AF: add     esp, 18h
0x6D96B2: retn
0x6D96B3: test    bl, bl
0x6D96B5: jz      short loc_6D96FD
0x6D96B7: mov     esi, [ebp+1Ch]
0x6D96BA: test    esi, esi
0x6D96BC: jz      short loc_6D96E1
0x6D96BE: lea     eax, [esi+4]
0x6D96C1: push    eax; lpAddend
0x6D96C2: call    dword ptr ds:0A2807Ch
0x6D96C8: test    eax, eax
0x6D96CA: jnz     short loc_6D96DA
0x6D96CC: test    esi, esi
0x6D96CE: jz      short loc_6D96DA
0x6D96D0: mov     edx, [esi]
0x6D96D2: mov     eax, [edx]
0x6D96D4: push    1
0x6D96D6: mov     ecx, esi
0x6D96D8: call    eax
0x6D96DA: mov     dword ptr [ebp+1Ch], 0
0x6D96E1: mov     ecx, [esp+28h+var_10]
0x6D96E5: mov     edx, [esp+28h+var_C]
0x6D96E9: mov     eax, [esp+28h+var_8]
0x6D96ED: mov     [ebp+0Ch], ecx
0x6D96F0: mov     ecx, [esp+28h+var_4]
0x6D96F4: mov     [ebp+10h], edx
0x6D96F7: mov     [ebp+14h], eax
0x6D96FA: mov     [ebp+18h], ecx
0x6D96FD: pop     ebx
0x6D96FE: pop     edi
0x6D96FF: pop     esi
0x6D9700: pop     ebp
0x6D9701: add     esp, 18h
0x6D9704: retn
