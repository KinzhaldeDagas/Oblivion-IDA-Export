0x6FA410: push    esi
0x6FA411: mov     esi, [esp+4+C]
0x6FA415: mov     al, [esi]
0x6FA417: add     esi, 1
0x6FA41A: test    al, al
0x6FA41C: mov     byte ptr [esp+4+C], al
0x6FA420: jnz     short loc_6FA42F
0x6FA422: mov     ecx, [esp+4+arg_0]
0x6FA426: xor     eax, eax
0x6FA428: cmp     [ecx], al
0x6FA42A: pop     esi
0x6FA42B: setz    al
0x6FA42E: retn
0x6FA42F: cmp     al, 3Fh ; '?'
0x6FA431: jnz     short loc_6FA44E
0x6FA433: mov     eax, [esp+4+arg_0]
0x6FA437: test    eax, eax
0x6FA439: jz      short loc_6FA44A
0x6FA43B: add     eax, 1
0x6FA43E: push    esi; C
0x6FA43F: push    eax; int
0x6FA440: call    sub_6FA410
0x6FA445: add     esp, 8
0x6FA448: pop     esi
0x6FA449: retn
0x6FA44A: xor     eax, eax
0x6FA44C: pop     esi
0x6FA44D: retn
0x6FA44E: cmp     al, 2Ah ; '*'
0x6FA450: push    edi
0x6FA451: jnz     short loc_6FA491
0x6FA453: cmp     byte ptr [esi], 0
0x6FA456: jnz     short loc_6FA460
0x6FA458: pop     edi
0x6FA459: mov     eax, 1
0x6FA45E: pop     esi
0x6FA45F: retn
0x6FA460: mov     edi, [esp+8+arg_0]
0x6FA464: cmp     byte ptr [edi], 0
0x6FA467: jz      short loc_6FA489
0x6FA469: lea     esp, [esp+0]
0x6FA470: push    esi; C
0x6FA471: push    edi; int
0x6FA472: call    sub_6FA410
0x6FA477: add     esp, 8
0x6FA47A: test    eax, eax
0x6FA47C: jnz     loc_6FA58C
0x6FA482: add     edi, 1
0x6FA485: cmp     [edi], al
0x6FA487: jnz     short loc_6FA470
0x6FA489: pop     edi
0x6FA48A: mov     eax, 2
0x6FA48F: pop     esi
0x6FA490: retn
0x6FA491: cmp     al, 5Bh ; '['
0x6FA493: push    ebx
0x6FA494: jnz     loc_6FA5B6
0x6FA49A: mov     edi, [esp+0Ch+arg_0]
0x6FA49E: cmp     byte ptr [edi], 0
0x6FA4A1: jz      loc_6FA5F8
0x6FA4A7: cmp     byte ptr [esi], 5Eh ; '^'
0x6FA4AA: setz    al
0x6FA4AD: test    al, al
0x6FA4AF: mov     byte ptr [esp+0Ch+C], al
0x6FA4B3: jz      short loc_6FA4B8
0x6FA4B5: add     esi, 1
0x6FA4B8: mov     dl, [esi]
0x6FA4BA: xor     cl, cl
0x6FA4BC: test    dl, dl
0x6FA4BE: push    ebp
0x6FA4BF: mov     ebp, esi
0x6FA4C1: jz      short loc_6FA4E3
0x6FA4C3: test    cl, cl
0x6FA4C5: jz      short loc_6FA4CB
0x6FA4C7: xor     cl, cl
0x6FA4C9: jmp     short loc_6FA4DA
0x6FA4CB: mov     al, [ebp+0]
0x6FA4CE: cmp     al, 5Ch ; '\'
0x6FA4D0: jnz     short loc_6FA4D6
0x6FA4D2: mov     cl, 1
0x6FA4D4: jmp     short loc_6FA4DA
0x6FA4D6: cmp     al, 5Dh ; ']'
0x6FA4D8: jz      short loc_6FA4ED
0x6FA4DA: add     ebp, 1
0x6FA4DD: cmp     byte ptr [ebp+0], 0
0x6FA4E1: jnz     short loc_6FA4C3
0x6FA4E3: cmp     byte ptr [ebp+0], 5Dh ; ']'
0x6FA4E7: jnz     loc_6FA5AF
0x6FA4ED: xor     bl, bl
0x6FA4EF: cmp     dl, 2Dh ; '-'
0x6FA4F2: setz    cl
0x6FA4F5: cmp     esi, ebp
0x6FA4F7: jnb     short loc_6FA573
0x6FA4F9: lea     esp, [esp+0]
0x6FA500: test    cl, cl
0x6FA502: jnz     short loc_6FA517
0x6FA504: mov     al, [esi]
0x6FA506: cmp     al, 5Ch ; '\'
0x6FA508: jnz     short loc_6FA50E
0x6FA50A: mov     cl, 1
0x6FA50C: jmp     short loc_6FA56C
0x6FA50E: cmp     al, 2Dh ; '-'
0x6FA510: jnz     short loc_6FA517
0x6FA512: mov     bl, [esi-1]
0x6FA515: jmp     short loc_6FA56C
0x6FA517: test    byte ptr ds:0B3F480h, 1
0x6FA51E: mov     al, [edi]
0x6FA520: jnz     short loc_6FA52E
0x6FA522: movsx   edx, al
0x6FA525: push    edx; C
0x6FA526: call    _toupper
0x6FA52B: add     esp, 4
0x6FA52E: cmp     byte ptr [esi+1], 2Dh ; '-'
0x6FA532: jz      short loc_6FA568
0x6FA534: test    bl, bl
0x6FA536: jnz     short loc_6FA53A
0x6FA538: mov     bl, [esi]
0x6FA53A: cmp     bl, [esi]
0x6FA53C: jg      short loc_6FA568
0x6FA53E: movsx   edi, al
0x6FA541: test    byte ptr ds:0B3F480h, 1
0x6FA548: movsx   eax, bl
0x6FA54B: jnz     short loc_6FA556
0x6FA54D: push    eax; C
0x6FA54E: call    _toupper
0x6FA553: add     esp, 4
0x6FA556: movzx   ecx, al
0x6FA559: cmp     ecx, edi
0x6FA55B: jz      short loc_6FA58F
0x6FA55D: add     bl, 1
0x6FA560: cmp     bl, [esi]
0x6FA562: jle     short loc_6FA541
0x6FA564: mov     edi, [esp+10h+arg_0]
0x6FA568: xor     cl, cl
0x6FA56A: xor     bl, bl
0x6FA56C: add     esi, 1
0x6FA56F: cmp     esi, ebp
0x6FA571: jb      short loc_6FA500
0x6FA573: cmp     byte ptr [esp+10h+C], 0
0x6FA578: jz      short loc_6FA5AF
0x6FA57A: add     ebp, 1
0x6FA57D: push    ebp; C
0x6FA57E: add     edi, 1
0x6FA581: push    edi; int
0x6FA582: call    sub_6FA410
0x6FA587: add     esp, 8
0x6FA58A: pop     ebp
0x6FA58B: pop     ebx
0x6FA58C: pop     edi
0x6FA58D: pop     esi
0x6FA58E: retn
0x6FA58F: cmp     byte ptr [esp+10h+C], 0
0x6FA594: jnz     short loc_6FA5AF
0x6FA596: mov     edx, [esp+10h+arg_0]
0x6FA59A: add     ebp, 1
0x6FA59D: add     edx, 1
0x6FA5A0: push    ebp; C
0x6FA5A1: push    edx; int
0x6FA5A2: call    sub_6FA410
0x6FA5A7: add     esp, 8
0x6FA5AA: pop     ebp
0x6FA5AB: pop     ebx
0x6FA5AC: pop     edi
0x6FA5AD: pop     esi
0x6FA5AE: retn
0x6FA5AF: pop     ebp
0x6FA5B0: pop     ebx
0x6FA5B1: pop     edi
0x6FA5B2: xor     eax, eax
0x6FA5B4: pop     esi
0x6FA5B5: retn
0x6FA5B6: cmp     al, 5Ch ; '\'
0x6FA5B8: jnz     short loc_6FA5C7
0x6FA5BA: mov     al, [esi]
0x6FA5BC: add     esi, 1
0x6FA5BF: test    al, al
0x6FA5C1: mov     byte ptr [esp+0Ch+C], al
0x6FA5C5: jz      short loc_6FA5F8
0x6FA5C7: mov     edi, [esp+0Ch+arg_0]
0x6FA5CB: movzx   eax, byte ptr [edi]
0x6FA5CE: push    eax; C
0x6FA5CF: call    sub_6FA3F0
0x6FA5D4: mov     ecx, [esp+10h+C]
0x6FA5D8: push    ecx; C
0x6FA5D9: mov     bl, al
0x6FA5DB: call    sub_6FA3F0
0x6FA5E0: add     esp, 8
0x6FA5E3: cmp     al, bl
0x6FA5E5: jnz     short loc_6FA5F8
0x6FA5E7: push    esi; C
0x6FA5E8: add     edi, 1
0x6FA5EB: push    edi; int
0x6FA5EC: call    sub_6FA410
0x6FA5F1: add     esp, 8
0x6FA5F4: pop     ebx
0x6FA5F5: pop     edi
0x6FA5F6: pop     esi
0x6FA5F7: retn
0x6FA5F8: pop     ebx
0x6FA5F9: pop     edi
0x6FA5FA: xor     eax, eax
0x6FA5FC: pop     esi
0x6FA5FD: retn
