0x621170: push    edi
0x621171: mov     edi, [esp+4+arg_0]
0x621175: test    edi, edi
0x621177: jz      loc_621265
0x62117D: mov     ecx, [edi+58h]
0x621180: test    ecx, ecx
0x621182: jz      loc_621265
0x621188: mov     eax, [ecx]
0x62118A: mov     edx, [eax+8]
0x62118D: call    edx
0x62118F: test    eax, eax
0x621191: jnz     loc_621265
0x621197: mov     eax, [edi]
0x621199: mov     edx, [eax+330h]
0x62119F: push    ebx
0x6211A0: push    ebp
0x6211A1: push    esi
0x6211A2: mov     ecx, edi
0x6211A4: xor     ebx, ebx
0x6211A6: call    edx
0x6211A8: test    eax, eax
0x6211AA: jz      short loc_6211FD
0x6211AC: mov     eax, [edi]
0x6211AE: mov     edx, [eax+330h]
0x6211B4: mov     ecx, edi
0x6211B6: call    edx
0x6211B8: mov     esi, eax
0x6211BA: add     esi, 15Ch
0x6211C0: jz      loc_62125E
0x6211C6: mov     ebp, [esp+10h+arg_4]
0x6211CA: lea     ebx, [ebx+0]
0x6211D0: fld     [esp+10h+arg_10]
0x6211D4: mov     edx, [esp+10h+arg_8]
0x6211D8: mov     eax, [esi]
0x6211DA: mov     esi, [esi+4]
0x6211DD: push    ecx
0x6211DE: mov     ecx, [esp+14h+arg_C]
0x6211E2: fstp    [esp+14h+var_14]
0x6211E5: push    ecx
0x6211E6: push    edx
0x6211E7: push    eax
0x6211E8: push    ebp
0x6211E9: push    edi
0x6211EA: call    sub_620050
0x6211EF: add     esp, 18h
0x6211F2: test    esi, esi
0x6211F4: mov     ebx, eax
0x6211F6: jnz     short loc_6211D0
0x6211F8: pop     esi
0x6211F9: pop     ebp
0x6211FA: pop     ebx
0x6211FB: pop     edi
0x6211FC: retn
0x6211FD: push    0
0x6211FF: push    edi
0x621200: mov     ecx, offset dword_B3BDB0
0x621205: call    sub_67C880
0x62120A: mov     esi, eax
0x62120C: test    esi, esi
0x62120E: mov     [esp+10h+arg_0], esi
0x621212: jz      short loc_62125E
0x621214: mov     ebp, [esp+10h+arg_4]
0x621218: jmp     short loc_621220
0x62121A: align 10h
0x621220: fld     [esp+10h+arg_10]
0x621224: mov     eax, [esi]
0x621226: mov     edx, [esp+10h+arg_8]
0x62122A: mov     eax, [eax]
0x62122C: mov     esi, [esi+4]
0x62122F: push    ecx
0x621230: mov     ecx, [esp+14h+arg_C]
0x621234: fstp    [esp+14h+var_14]
0x621237: push    ecx
0x621238: push    edx
0x621239: push    eax
0x62123A: push    ebp
0x62123B: push    edi
0x62123C: call    sub_620050
0x621241: add     esp, 18h
0x621244: test    esi, esi
0x621246: mov     ebx, eax
0x621248: jnz     short loc_621220
0x62124A: mov     esi, [esp+10h+arg_0]
0x62124E: mov     ecx, esi
0x621250: call    BSSimpleList_Clear
0x621255: push    esi
0x621256: call    FormHeapFree
0x62125B: add     esp, 4
0x62125E: pop     esi
0x62125F: pop     ebp
0x621260: mov     eax, ebx
0x621262: pop     ebx
0x621263: pop     edi
0x621264: retn
0x621265: xor     eax, eax
0x621267: pop     edi
0x621268: retn
