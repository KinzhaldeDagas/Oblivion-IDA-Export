0x8A45A0: push    0FFFFFFFFh
0x8A45A2: push    offset SEH_6C4C20
0x8A45A7: mov     eax, large fs:0
0x8A45AD: push    eax
0x8A45AE: sub     esp, 10h
0x8A45B1: push    ebx
0x8A45B2: push    esi
0x8A45B3: push    edi
0x8A45B4: mov     eax, ds:0B30AACh
0x8A45B9: xor     eax, esp
0x8A45BB: push    eax
0x8A45BC: lea     eax, [esp+2Ch+var_C]
0x8A45C0: mov     large fs:0, eax
0x8A45C6: mov     esi, ecx
0x8A45C8: mov     eax, [esp+2Ch+arg_0]
0x8A45CC: push    eax
0x8A45CD: mov     [esp+30h+var_18], 0
0x8A45D5: call    sub_89F390
0x8A45DA: test    al, al
0x8A45DC: mov     [esp+2Ch+var_19], al
0x8A45E0: jz      loc_8A46A0
0x8A45E6: lea     edi, [esi+10h]
0x8A45E9: lea     esp, [esp+0]
0x8A45F0: test    edi, edi
0x8A45F2: jz      short loc_8A460E
0x8A45F4: lea     ecx, [esp+2Ch+var_14]
0x8A45F8: push    ecx
0x8A45F9: mov     ecx, edi
0x8A45FB: call    sub_677C70
0x8A4600: or      [esp+2Ch+var_18], 1
0x8A4605: cmp     dword ptr [eax], 0
0x8A4608: jz      short loc_8A460E
0x8A460A: mov     bl, 1
0x8A460C: jmp     short loc_8A4610
0x8A460E: xor     bl, bl
0x8A4610: test    byte ptr [esp+2Ch+var_18], 1
0x8A4615: jz      short loc_8A4640
0x8A4617: mov     esi, [esp+2Ch+var_14]
0x8A461B: and     [esp+2Ch+var_18], 0FFFFFFFEh
0x8A4620: test    esi, esi
0x8A4622: jz      short loc_8A4640
0x8A4624: lea     edx, [esi+4]
0x8A4627: push    edx; lpAddend
0x8A4628: call    dword ptr ds:0A2807Ch
0x8A462E: test    eax, eax
0x8A4630: jnz     short loc_8A4640
0x8A4632: test    esi, esi
0x8A4634: jz      short loc_8A4640
0x8A4636: mov     eax, [esi]
0x8A4638: mov     edx, [eax]
0x8A463A: push    1
0x8A463C: mov     ecx, esi
0x8A463E: call    edx
0x8A4640: test    bl, bl
0x8A4642: jz      short loc_8A469C
0x8A4644: lea     eax, [esp+2Ch+var_10]
0x8A4648: push    eax
0x8A4649: mov     ecx, edi
0x8A464B: call    sub_677C70
0x8A4650: mov     ecx, [eax]
0x8A4652: mov     edx, [ecx]
0x8A4654: mov     eax, [esp+2Ch+arg_0]
0x8A4658: mov     edx, [edx+24h]
0x8A465B: push    eax
0x8A465C: mov     [esp+30h+var_4], 0
0x8A4664: call    edx
0x8A4666: mov     eax, [esp+2Ch+var_10]
0x8A466A: test    eax, eax
0x8A466C: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8A4674: jz      short loc_8A4694
0x8A4676: mov     esi, eax
0x8A4678: add     eax, 4
0x8A467B: push    eax; lpAddend
0x8A467C: call    dword ptr ds:0A2807Ch
0x8A4682: test    eax, eax
0x8A4684: jnz     short loc_8A4694
0x8A4686: test    esi, esi
0x8A4688: jz      short loc_8A4694
0x8A468A: mov     eax, [esi]
0x8A468C: mov     edx, [eax]
0x8A468E: push    1
0x8A4690: mov     ecx, esi
0x8A4692: call    edx
0x8A4694: mov     edi, [edi+4]
0x8A4697: jmp     loc_8A45F0
0x8A469C: mov     al, [esp+2Ch+var_19]
0x8A46A0: mov     ecx, [esp+2Ch+var_C]
0x8A46A4: mov     large fs:0, ecx
0x8A46AB: pop     ecx
0x8A46AC: pop     edi
0x8A46AD: pop     esi
0x8A46AE: pop     ebx
0x8A46AF: add     esp, 1Ch
0x8A46B2: retn    4
