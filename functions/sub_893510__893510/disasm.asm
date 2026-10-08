0x893510: push    0FFFFFFFFh
0x893512: push    offset SEH_893510
0x893517: mov     eax, large fs:0
0x89351D: push    eax
0x89351E: push    ecx
0x89351F: push    ebx
0x893520: push    esi
0x893521: push    edi
0x893522: mov     eax, ds:0B30AACh
0x893527: xor     eax, esp
0x893529: push    eax
0x89352A: lea     eax, [esp+20h+var_C]
0x89352E: mov     large fs:0, eax
0x893534: mov     esi, ecx
0x893536: mov     [esp+20h+var_10], esi
0x89353A: mov     eax, [esi+18h]
0x89353D: test    eax, eax
0x89353F: mov     edi, ds:0BA9DE4h
0x893545: mov     ebx, large fs:2Ch
0x89354C: mov     [esp+20h+var_4], 0
0x893554: js      short loc_89357E
0x893556: mov     ecx, [ebx+edi*4]
0x893559: mov     ecx, [ecx+19Ch]
0x89355F: test    ecx, ecx
0x893561: jnz     short loc_893569
0x893563: mov     ecx, ds:0BA7D9Ch
0x893569: mov     edx, [esi+10h]
0x89356C: and     eax, 3FFFFFFFh
0x893571: add     eax, eax
0x893573: push    14h
0x893575: add     eax, eax
0x893577: push    eax
0x893578: push    edx
0x893579: call    sub_8A75D0
0x89357E: mov     eax, [esi+0Ch]
0x893581: test    eax, eax
0x893583: mov     [esp+20h+var_4], 0FFFFFFFFh
0x89358B: js      short loc_8935B5
0x89358D: mov     ecx, [ebx+edi*4]
0x893590: mov     ecx, [ecx+19Ch]
0x893596: test    ecx, ecx
0x893598: jnz     short loc_8935A0
0x89359A: mov     ecx, ds:0BA7D9Ch
0x8935A0: mov     edx, [esi+4]
0x8935A3: and     eax, 3FFFFFFFh
0x8935A8: add     eax, eax
0x8935AA: push    14h
0x8935AC: add     eax, eax
0x8935AE: push    eax
0x8935AF: push    edx
0x8935B0: call    sub_8A75D0
0x8935B5: mov     ecx, [esp+20h+var_C]
0x8935B9: mov     large fs:0, ecx
0x8935C0: pop     ecx
0x8935C1: pop     edi
0x8935C2: pop     esi
0x8935C3: pop     ebx
0x8935C4: add     esp, 10h
0x8935C7: retn
0x536DD0: mov     edx, ecx
0x536DD2: mov     eax, [edx+8]
0x536DD5: test    eax, eax
0x536DD7: js      short locret_536E0F
0x536DD9: mov     ecx, ds:0BA9DE4h
0x536DDF: push    esi
0x536DE0: mov     esi, large fs:2Ch
0x536DE7: mov     ecx, [esi+ecx*4]
0x536DEA: mov     ecx, [ecx+19Ch]
0x536DF0: test    ecx, ecx
0x536DF2: pop     esi
0x536DF3: jnz     short loc_536DFB
0x536DF5: mov     ecx, ds:0BA7D9Ch
0x536DFB: mov     edx, [edx]
0x536DFD: and     eax, 3FFFFFFFh
0x536E02: add     eax, eax
0x536E04: push    14h
0x536E06: add     eax, eax
0x536E08: push    eax
0x536E09: push    edx
0x536E0A: call    sub_8A75D0
0x536E0F: retn
0x9D6440: mov     ecx, [ebp-10h]
0x9D6443: add     ecx, 4
0x9D6446: jmp     loc_536DD0
0x9D644B: mov     edx, [esp+arg_4]
0x9D644F: lea     eax, [edx-10h]
0x9D6452: mov     ecx, [edx-14h]
0x9D6455: xor     ecx, eax
0x9D6457: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D645C: mov     eax, offset stru_AFE2FC
0x9D6461: jmp     ___CxxFrameHandler3
