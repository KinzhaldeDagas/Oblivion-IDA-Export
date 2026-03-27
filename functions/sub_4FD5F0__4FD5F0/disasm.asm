0x4FD5F0: sub     esp, 8
0x4FD5F3: push    ebx
0x4FD5F4: push    ebp
0x4FD5F5: push    esi
0x4FD5F6: mov     esi, [esp+14h+Str2]
0x4FD5FA: mov     ebp, ecx
0x4FD5FC: mov     eax, esi
0x4FD5FE: push    edi
0x4FD5FF: mov     [esp+18h+var_8], ebp
0x4FD603: lea     edx, [eax+1]
0x4FD606: mov     cl, [eax]
0x4FD608: add     eax, 1
0x4FD60B: test    cl, cl
0x4FD60D: jnz     short loc_4FD606
0x4FD60F: sub     eax, edx
0x4FD611: mov     ebx, eax
0x4FD613: mov     eax, [esi+210h]
0x4FD619: test    eax, eax
0x4FD61B: mov     [esp+18h+var_4], ebx
0x4FD61F: jz      loc_4FD6BD
0x4FD625: push    0; int
0x4FD627: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4FD62C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FD631: push    0; int
0x4FD633: push    eax; void *
0x4FD634: call    OblivionDynamicCast
0x4FD639: mov     edi, eax
0x4FD63B: add     esp, 14h
0x4FD63E: test    edi, edi
0x4FD640: jz      short loc_4FD652
0x4FD642: mov     ecx, edi
0x4FD644: call    sub_4D70E0
0x4FD649: mov     ecx, edi
0x4FD64B: call    sub_4D7240
0x4FD650: jmp     short loc_4FD67A
0x4FD652: mov     eax, [esi+210h]
0x4FD658: push    0; int
0x4FD65A: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x4FD65F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FD664: push    0; int
0x4FD666: push    eax; void *
0x4FD667: call    OblivionDynamicCast
0x4FD66C: add     esp, 14h
0x4FD66F: test    eax, eax
0x4FD671: jz      short loc_4FD678
0x4FD673: mov     eax, [eax+4]
0x4FD676: jmp     short loc_4FD67A
0x4FD678: xor     eax, eax
0x4FD67A: test    eax, eax
0x4FD67C: jnz     short loc_4FD690
0x4FD67E: pop     edi
0x4FD67F: mov     [esi+20Ch], eax
0x4FD685: pop     esi
0x4FD686: pop     ebp
0x4FD687: xor     al, al
0x4FD689: pop     ebx
0x4FD68A: add     esp, 8
0x4FD68D: retn    4
0x4FD690: lea     edi, [esi+20Ch]
0x4FD696: push    edi
0x4FD697: push    esi
0x4FD698: mov     ecx, eax
0x4FD69A: call    sub_4FAA90
0x4FD69F: test    al, al
0x4FD6A1: mov     [esi+204h], al
0x4FD6A7: jnz     loc_4FD790
0x4FD6AD: mov     dword ptr [edi], 0
0x4FD6B3: pop     edi
0x4FD6B4: pop     esi
0x4FD6B5: pop     ebp
0x4FD6B6: pop     ebx
0x4FD6B7: add     esp, 8
0x4FD6BA: retn    4
0x4FD6BD: add     ebp, 3Ch ; '<'
0x4FD6C0: lea     eax, [esi+20Ch]
0x4FD6C6: mov     [esp+18h+Str2], eax
0x4FD6CA: mov     dword ptr [eax], 0
0x4FD6D0: jz      short loc_4FD716
0x4FD6D2: mov     edi, [ebp+0]
0x4FD6D5: test    edi, edi
0x4FD6D7: jz      short loc_4FD716
0x4FD6D9: mov     eax, [edi+18h]
0x4FD6DC: push    ebx; MaxCount
0x4FD6DD: push    esi; Str2
0x4FD6DE: push    eax; Str1
0x4FD6DF: call    __strnicmp
0x4FD6E4: add     esp, 0Ch
0x4FD6E7: test    eax, eax
0x4FD6E9: jnz     short loc_4FD70F
0x4FD6EB: mov     eax, [edi+18h]
0x4FD6EE: mov     bl, [ebx+eax]
0x4FD6F1: movsx   ecx, bl
0x4FD6F4: push    ecx; C
0x4FD6F5: call    _isalnum
0x4FD6FA: add     esp, 4
0x4FD6FD: test    eax, eax
0x4FD6FF: jnz     short loc_4FD70B
0x4FD701: cmp     bl, 2Dh ; '-'
0x4FD704: jz      short loc_4FD70B
0x4FD706: cmp     bl, 5Fh ; '_'
0x4FD709: jnz     short loc_4FD775
0x4FD70B: mov     ebx, [esp+18h+var_4]
0x4FD70F: mov     ebp, [ebp+4]
0x4FD712: test    ebp, ebp
0x4FD714: jnz     short loc_4FD6D2
0x4FD716: mov     edx, [esp+18h+var_8]
0x4FD71A: mov     ecx, [edx+4Ch]
0x4FD71D: test    ecx, ecx
0x4FD71F: jz      short loc_4FD736
0x4FD721: mov     eax, [esp+18h+Str2]
0x4FD725: push    eax
0x4FD726: push    esi
0x4FD727: call    sub_4FAA90
0x4FD72C: test    al, al
0x4FD72E: mov     [esi+204h], al
0x4FD734: jnz     short loc_4FD790
0x4FD736: mov     ecx, ds:0B33A98h
0x4FD73C: push    esi
0x4FD73D: call    sub_4474D0
0x4FD742: test    eax, eax
0x4FD744: jz      short loc_4FD79C
0x4FD746: mov     ecx, [esp+18h+var_8]
0x4FD74A: push    0; char
0x4FD74C: push    0; char
0x4FD74E: push    esi; Str
0x4FD74F: call    sub_4FD0A0
0x4FD754: test    al, al
0x4FD756: jz      short loc_4FD79C
0x4FD758: mov     ecx, [esp+18h+Str2]
0x4FD75C: pop     edi
0x4FD75D: mov     byte ptr [esi+204h], 47h ; 'G'
0x4FD764: pop     esi
0x4FD765: pop     ebp
0x4FD766: mov     dword ptr [ecx], 0
0x4FD76C: mov     al, 1
0x4FD76E: pop     ebx
0x4FD76F: add     esp, 8
0x4FD772: retn    4
0x4FD775: mov     dl, [edi+10h]
0x4FD778: mov     ecx, [esp+18h+Str2]
0x4FD77C: neg     dl
0x4FD77E: sbb     dl, dl
0x4FD780: and     dl, 0Dh
0x4FD783: add     dl, 66h ; 'f'
0x4FD786: mov     [esi+204h], dl
0x4FD78C: mov     eax, [edi]
0x4FD78E: mov     [ecx], eax
0x4FD790: pop     edi
0x4FD791: pop     esi
0x4FD792: pop     ebp
0x4FD793: mov     al, 1
0x4FD795: pop     ebx
0x4FD796: add     esp, 8
0x4FD799: retn    4
0x4FD79C: mov     edx, [esp+18h+Str2]
0x4FD7A0: pop     edi
0x4FD7A1: mov     byte ptr [esi+204h], 0
0x4FD7A8: pop     esi
0x4FD7A9: pop     ebp
0x4FD7AA: mov     dword ptr [edx], 0
0x4FD7B0: xor     al, al
0x4FD7B2: pop     ebx
0x4FD7B3: add     esp, 8
0x4FD7B6: retn    4
