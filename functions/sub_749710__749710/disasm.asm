0x749710: sub     esp, 0Ch
0x749713: push    ebx
0x749714: mov     ebx, [esp+10h+arg_0]
0x749718: push    ebp
0x749719: push    ebx
0x74971A: mov     ebp, ecx
0x74971C: call    sub_722710
0x749721: test    al, al
0x749723: jnz     short loc_74972F
0x749725: pop     ebp
0x749726: xor     al, al
0x749728: pop     ebx
0x749729: add     esp, 0Ch
0x74972C: retn    4
0x74972F: mov     al, [ebp+0C0h]
0x749735: cmp     al, [ebx+0C0h]
0x74973B: jnz     short loc_749725
0x74973D: push    esi
0x74973E: push    edi
0x74973F: mov     edi, [ebp+0C8h]
0x749745: test    edi, edi
0x749747: jz      short loc_749782
0x749749: add     ebx, 0D4h ; 'Ô'
0x74974F: nop
0x749750: mov     esi, [edi+8]
0x749753: lea     eax, [edi+8]
0x749756: mov     eax, [esi+8]
0x749759: mov     edi, [edi]
0x74975B: lea     ecx, [esp+1Ch+var_C]
0x74975F: push    ecx
0x749760: push    eax
0x749761: mov     ecx, ebx
0x749763: call    NiTMap_GetAt
0x749768: mov     edx, [esi]
0x74976A: neg     al
0x74976C: mov     ecx, esi
0x74976E: sbb     eax, eax
0x749770: and     eax, [esp+1Ch+var_C]
0x749774: push    eax
0x749775: mov     eax, [edx+2Ch]
0x749778: call    eax
0x74977A: test    al, al
0x74977C: jz      short loc_7497F3
0x74977E: test    edi, edi
0x749780: jnz     short loc_749750
0x749782: lea     esi, [ebp+0D4h]
0x749788: mov     ecx, esi
0x74978A: call    sub_6A9030
0x74978F: test    eax, eax
0x749791: mov     [esp+1Ch+var_C], eax
0x749795: jz      short loc_7497E7
0x749797: mov     edi, [esp+1Ch+arg_0]
0x74979B: add     edi, 0D4h ; 'Ô'
0x7497A1: lea     ecx, [esp+1Ch+var_8]
0x7497A5: push    ecx
0x7497A6: lea     edx, [esp+20h+arg_0]
0x7497AA: push    edx
0x7497AB: lea     eax, [esp+24h+var_C]
0x7497AF: push    eax
0x7497B0: mov     ecx, esi
0x7497B2: call    sub_452600
0x7497B7: mov     edx, [esp+1Ch+arg_0]
0x7497BB: lea     ecx, [esp+1Ch+var_4]
0x7497BF: push    ecx
0x7497C0: push    edx
0x7497C1: mov     ecx, edi
0x7497C3: call    NiTMap_GetAt
0x7497C8: test    al, al
0x7497CA: jz      short loc_7497F3
0x7497CC: mov     ecx, [esp+1Ch+var_8]
0x7497D0: mov     eax, [ecx]
0x7497D2: mov     edx, [esp+1Ch+var_4]
0x7497D6: mov     eax, [eax+2Ch]
0x7497D9: push    edx
0x7497DA: call    eax
0x7497DC: test    al, al
0x7497DE: jz      short loc_7497F3
0x7497E0: cmp     [esp+1Ch+var_C], 0
0x7497E5: jnz     short loc_7497A1
0x7497E7: pop     edi
0x7497E8: pop     esi
0x7497E9: pop     ebp
0x7497EA: mov     al, 1
0x7497EC: pop     ebx
0x7497ED: add     esp, 0Ch
0x7497F0: retn    4
0x7497F3: pop     edi
0x7497F4: pop     esi
0x7497F5: pop     ebp
0x7497F6: xor     al, al
0x7497F8: pop     ebx
0x7497F9: add     esp, 0Ch
0x7497FC: retn    4
