0x46C460: sub     esp, 0Ch
0x46C463: push    esi
0x46C464: mov     esi, ecx
0x46C466: push    edi; ArgList
0x46C467: xor     edi, edi
0x46C469: cmp     byte ptr ds:0B33C10h, 0
0x46C470: mov     dword ptr [esi], offset ??_7TESForm@@6B@; const TESForm::`vftable'
0x46C476: mov     [esp+14h+var_4], esi
0x46C47A: mov     [esi+10h], edi
0x46C47D: mov     [esi+14h], edi
0x46C480: jnz     loc_46C557
0x46C486: mov     al, ds:0B06B18h
0x46C48B: push    ebx
0x46C48C: push    ebp
0x46C48D: xor     cl, cl
0x46C48F: mov     [esp+1Ch+var_9], al
0x46C493: mov     byte ptr ds:0B06B18h, 1
0x46C49A: mov     ebp, offset off_B05E04; "NONE"
0x46C49F: mov     [esp+1Ch+var_8], 45h ; 'E'
0x46C4A7: jmp     short loc_46C4B0
0x46C4A9: align 10h
0x46C4B0: mov     eax, [ebp+0]
0x46C4B3: movsx   edx, byte ptr [eax+3]
0x46C4B7: movsx   esi, byte ptr [eax+2]
0x46C4BB: shl     edx, 8
0x46C4BE: or      edx, esi
0x46C4C0: movsx   esi, byte ptr [eax+1]
0x46C4C4: movsx   eax, byte ptr [eax]
0x46C4C7: shl     edx, 8
0x46C4CA: or      edx, esi
0x46C4CC: shl     edx, 8
0x46C4CF: or      edx, eax
0x46C4D1: mov     [ebp+4], edx
0x46C4D4: movzx   edx, byte ptr [ebp-4]
0x46C4D8: cmp     edx, edi
0x46C4DA: jz      short loc_46C4EC
0x46C4DC: push    edi; ArgList
0x46C4DD: push    offset aFormenumstring; "formEnumString[ %d ].cFormID in TESForm"...
0x46C4E2: call    PrintError
0x46C4E7: add     esp, 8
0x46C4EA: mov     cl, 1
0x46C4EC: xor     esi, esi
0x46C4EE: xor     ebx, ebx
0x46C4F0: cmp     edi, esi
0x46C4F2: jz      short loc_46C514
0x46C4F4: mov     eax, [ebp+4]
0x46C4F7: cmp     eax, ds:dword_B05E08[ebx]
0x46C4FD: jnz     short loc_46C514
0x46C4FF: mov     ecx, [ebp+0]
0x46C502: push    ecx
0x46C503: push    esi
0x46C504: push    edi; ArgList
0x46C505: push    offset aFormenumstri_0; "formEnumString[ %d ] and formEnumString"...
0x46C50A: call    PrintError
0x46C50F: add     esp, 10h
0x46C512: mov     cl, 1
0x46C514: add     ebx, 0Ch
0x46C517: add     esi, 1
0x46C51A: cmp     ebx, 33Ch
0x46C520: jb      short loc_46C4F0
0x46C522: add     edi, 1
0x46C525: add     ebp, 0Ch
0x46C528: sub     [esp+1Ch+var_8], 1
0x46C52D: jnz     short loc_46C4B0
0x46C52F: test    cl, cl
0x46C531: mov     dl, [esp+1Ch+var_9]
0x46C535: pop     ebp
0x46C536: mov     ds:0B06B18h, dl
0x46C53C: pop     ebx
0x46C53D: jz      short loc_46C54C
0x46C53F: push    offset aYouMustFixTheP; "You must fix the problems in TESForm.cp"...
0x46C544: call    sub_404EC0
0x46C549: add     esp, 4
0x46C54C: mov     esi, [esp+14h+var_4]
0x46C550: mov     byte ptr ds:0B33C10h, 1
0x46C557: mov     byte ptr [esi+4], 0
0x46C55B: mov     dword ptr [esi+8], 8
0x46C562: mov     dword ptr [esi+0Ch], 0
0x46C569: mov     ecx, ds:0B33A98h
0x46C56F: test    ecx, ecx
0x46C571: jz      TESForm_constr___AddToFormIDTable
0x46C577: mov     eax, ds:0BA9DE4h
0x46C57C: mov     edx, large fs:2Ch
0x46C583: mov     eax, [edx+eax*4]
0x46C586: cmp     byte ptr [eax+184h], 0
0x46C58D: jnz     short TESForm_constr___AddToFormIDTable
0x46C58F: call    TESDataHandler_ReserveNextFormID
0x46C594: mov     [esi+0Ch], eax
0x46C597: mov     ecx, ds:0B33A98h
0x46C59D: mov     eax, [ecx+8C4h]
0x46C5A3: test    eax, eax
0x46C5A5: jz      short loc_46C5AF
0x46C5A7: push    eax
0x46C5A8: mov     ecx, esi
0x46C5AA: call    sub_46B6C0
0x46C5AF: mov     eax, [esi+0Ch]
0x46C5B2: cmp     eax, 7FFh
0x46C5B7: ja      short TESForm_constr___AddToFormIDTable
0x46C5B9: cmp     eax, 800h
0x46C5BE: jz      short TESForm_constr___AddToFormIDTable
0x46C5C0: mov     edx, [esi+8]
0x46C5C3: shr     edx, 0Eh
0x46C5C6: test    dl, 1
0x46C5C9: jnz     short loc_46C5FD
0x46C5CB: test    eax, eax
0x46C5CD: jz      short loc_46C5DA
0x46C5CF: push    eax
0x46C5D0: mov     ecx, offset TESForm_FormIDMap
0x46C5D5: call    NiTMap_RemoveAt
0x46C5DA: mov     eax, [esi+0Ch]
0x46C5DD: test    eax, eax
0x46C5DF: jz      short loc_46C5ED
0x46C5E1: mov     ecx, ds:0B33A98h
0x46C5E7: push    eax
0x46C5E8: call    TESDataHandler_ReleaseFormID
0x46C5ED: push    esi; a3
0x46C5EE: push    800h; a2
0x46C5F3: mov     ecx, offset TESForm_FormIDMap; this
0x46C5F8: call    NiTMap_SetAt
0x46C5FD: mov     dword ptr [esi+0Ch], 800h
0x46C604: mov     eax, [esi+0Ch]
0x46C607: test    eax, eax
0x46C609: jz      short TESForm_constr___Done
0x46C60B: push    esi; a3
0x46C60C: push    eax; a2
0x46C60D: mov     ecx, offset TESForm_FormIDMap; this
0x46C612: call    NiTMap_SetAt
0x46C617: pop     edi
0x46C618: mov     eax, esi
0x46C61A: pop     esi
0x46C61B: add     esp, 0Ch
0x46C61E: retn
