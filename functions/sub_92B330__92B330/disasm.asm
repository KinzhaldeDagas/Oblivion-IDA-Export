0x92B330: sub     esp, 14h
0x92B333: push    ebx
0x92B334: push    esi
0x92B335: mov     esi, large fs:2Ch
0x92B33C: push    edi
0x92B33D: mov     edi, ds:0BA9DE4h
0x92B343: mov     eax, [esi+edi*4]
0x92B346: mov     edx, [eax+1A4h]
0x92B34C: cmp     edx, [eax+1A8h]
0x92B352: jnb     short loc_92B37A
0x92B354: push    ebp
0x92B355: mov     ebp, eax
0x92B357: mov     ebx, [ebp+1A4h]
0x92B35D: mov     dword ptr [ebx], offset aTtrcbvshape; "TtrcBvShape"
0x92B363: rdtsc
0x92B365: mov     [esp+24h+var_14], eax
0x92B369: mov     eax, [esp+24h+var_14]
0x92B36D: mov     [ebx+4], eax
0x92B370: add     ebx, 0Ch
0x92B373: mov     [ebp+1A4h], ebx
0x92B379: pop     ebp
0x92B37A: mov     eax, [esp+20h+arg_4]
0x92B37E: mov     edx, [eax+8]
0x92B381: mov     [esp+20h+var_8], edx
0x92B385: mov     edx, [ecx+10h]
0x92B388: mov     [esp+20h+var_4], eax
0x92B38C: mov     eax, [eax+4]
0x92B38F: mov     [esp+20h+var_10], edx
0x92B393: mov     ecx, edx
0x92B395: mov     edx, [esp+20h+arg_8]
0x92B399: push    edx
0x92B39A: lea     edx, [esp+24h+var_10]
0x92B39E: push    edx
0x92B39F: mov     edx, [esp+28h+arg_0]
0x92B3A3: mov     [esp+28h+var_C], eax
0x92B3A7: mov     eax, [ecx]
0x92B3A9: push    edx
0x92B3AA: call    dword ptr [eax+18h]
0x92B3AD: mov     eax, [esi+edi*4]
0x92B3B0: mov     ecx, [eax+1A4h]
0x92B3B6: cmp     ecx, [eax+1A8h]
0x92B3BC: jnb     short loc_92B3E2
0x92B3BE: mov     esi, eax
0x92B3C0: mov     ecx, [esi+1A4h]
0x92B3C6: mov     dword ptr [ecx], offset aEt; "Et"
0x92B3CC: rdtsc
0x92B3CE: mov     [esp+20h+arg_4], eax
0x92B3D2: mov     edx, [esp+20h+arg_4]
0x92B3D6: mov     [ecx+4], edx
0x92B3D9: add     ecx, 0Ch
0x92B3DC: mov     [esi+1A4h], ecx
0x92B3E2: pop     edi
0x92B3E3: pop     esi
0x92B3E4: pop     ebx
0x92B3E5: add     esp, 14h
0x92B3E8: retn    0Ch
