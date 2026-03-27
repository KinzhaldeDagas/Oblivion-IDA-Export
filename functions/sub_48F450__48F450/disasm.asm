0x48F450: push    esi
0x48F451: xor     esi, esi
0x48F453: test    byte ptr ds:0B34434h, 1
0x48F45A: push    edi; ArgList
0x48F45B: mov     edi, ecx
0x48F45D: jnz     short loc_48F487
0x48F45F: or      dword ptr ds:0B34434h, 1
0x48F466: push    offset sub_A18920; void (__cdecl *)()
0x48F46B: mov     ds:0B3442Ch, esi
0x48F471: mov     ds:0B34430h, si
0x48F478: mov     ds:0B34432h, si
0x48F47F: call    _atexit
0x48F484: add     esp, 4
0x48F487: mov     eax, ds:0B3442Ch
0x48F48C: push    eax
0x48F48D: call    FormHeapFree
0x48F492: mov     eax, [esp+0Ch+arg_0]
0x48F496: add     esp, 4
0x48F499: cmp     eax, esi
0x48F49B: mov     ds:0B3442Ch, esi
0x48F4A1: mov     ds:0B34432h, si
0x48F4A8: mov     ds:0B34430h, si
0x48F4AF: jnz     loc_48F562
0x48F4B5: mov     ecx, [edi+4]
0x48F4B8: cmp     ecx, 0F423Fh
0x48F4BE: jle     short loc_48F4EE
0x48F4C0: mov     eax, 431BDE83h
0x48F4C5: imul    ecx
0x48F4C7: sar     edx, 12h
0x48F4CA: mov     ecx, edx
0x48F4CC: shr     ecx, 1Fh
0x48F4CF: add     ecx, edx
0x48F4D1: push    ecx; ArgList
0x48F4D2: push    offset off_A3D904; Format
0x48F4D7: push    offset dword_B3442C; int
0x48F4DC: call    BSStringT_Static_Format
0x48F4E1: mov     eax, ds:0B3442Ch
0x48F4E6: add     esp, 0Ch
0x48F4E9: pop     edi
0x48F4EA: pop     esi
0x48F4EB: retn    14h
0x48F4EE: cmp     ecx, 3E7h
0x48F4F4: jle     short loc_48F524
0x48F4F6: mov     eax, 10624DD3h
0x48F4FB: imul    ecx
0x48F4FD: sar     edx, 6
0x48F500: mov     eax, edx
0x48F502: shr     eax, 1Fh
0x48F505: add     eax, edx
0x48F507: push    eax; ArgList
0x48F508: push    offset off_A3D900; Format
0x48F50D: push    offset dword_B3442C; int
0x48F512: call    BSStringT_Static_Format
0x48F517: mov     eax, ds:0B3442Ch
0x48F51C: add     esp, 0Ch
0x48F51F: pop     edi
0x48F520: pop     esi
0x48F521: retn    14h
0x48F524: cmp     ecx, 1
0x48F527: jle     short loc_48F546
0x48F529: push    ecx; ArgList
0x48F52A: push    offset aI; "%i"
0x48F52F: push    offset dword_B3442C; int
0x48F534: call    BSStringT_Static_Format
0x48F539: mov     eax, ds:0B3442Ch
0x48F53E: add     esp, 0Ch
0x48F541: pop     edi
0x48F542: pop     esi
0x48F543: retn    14h
0x48F546: push    offset word_A36430; Format
0x48F54B: push    offset dword_B3442C; int
0x48F550: call    BSStringT_Static_Format
0x48F555: mov     eax, ds:0B3442Ch
0x48F55A: add     esp, 8
0x48F55D: pop     edi
0x48F55E: pop     esi
0x48F55F: retn    14h
0x48F562: cmp     eax, 1
0x48F565: jnz     short loc_48F57F
0x48F567: mov     ecx, [esp+8+arg_10]
0x48F56B: mov     edx, [esp+8+arg_C]
0x48F56F: mov     eax, [esp+8+arg_8]
0x48F573: push    ecx
0x48F574: push    edx
0x48F575: push    eax
0x48F576: mov     ecx, edi
0x48F578: call    sub_488E50
0x48F57D: jmp     short loc_48F5DD
0x48F57F: cmp     eax, 2
0x48F582: jnz     short loc_48F59C
0x48F584: mov     ecx, [esp+8+arg_10]
0x48F588: mov     edx, [esp+8+arg_C]
0x48F58C: mov     eax, [esp+8+arg_8]
0x48F590: push    ecx
0x48F591: push    edx
0x48F592: push    eax
0x48F593: mov     ecx, edi
0x48F595: call    sub_485260
0x48F59A: jmp     short loc_48F5DD
0x48F59C: cmp     eax, 3
0x48F59F: jnz     short loc_48F5B9
0x48F5A1: mov     ecx, [esp+8+arg_10]
0x48F5A5: mov     edx, [esp+8+arg_C]
0x48F5A9: mov     eax, [esp+8+arg_8]
0x48F5AD: push    ecx
0x48F5AE: push    edx
0x48F5AF: push    eax
0x48F5B0: mov     ecx, edi
0x48F5B2: call    sub_4891C0
0x48F5B7: jmp     short loc_48F5DD
0x48F5B9: cmp     eax, 4
0x48F5BC: jnz     loc_48F68C
0x48F5C2: mov     ecx, [esp+8+arg_10]
0x48F5C6: mov     edx, [esp+8+arg_C]
0x48F5CA: mov     eax, [esp+8+arg_8]
0x48F5CE: push    ecx
0x48F5CF: mov     ecx, [esp+0Ch+arg_4]
0x48F5D3: push    edx
0x48F5D4: push    eax
0x48F5D5: push    ecx
0x48F5D6: mov     ecx, edi
0x48F5D8: call    ContainerEntryExtraData_GetHealthFracOrUses
0x48F5DD: fstp    [esp+8+arg_10]
0x48F5E1: fldz
0x48F5E3: fld     [esp+8+arg_10]
0x48F5E7: fcom    st(1)
0x48F5E9: fnstsw  ax
0x48F5EB: fstp    st(1)
0x48F5ED: test    ah, 1
0x48F5F0: jnz     loc_48F68A
0x48F5F6: fcom    qword ptr ds:0A2FC68h
0x48F5FC: fnstsw  ax
0x48F5FE: test    ah, 41h
0x48F601: jnz     short loc_48F62E
0x48F603: fld1
0x48F605: fcomp   st(1)
0x48F607: fnstsw  ax
0x48F609: test    ah, 41h
0x48F60C: jnz     short loc_48F62E
0x48F60E: fld     dword ptr ds:0A2FAACh
0x48F614: sub     esp, 8
0x48F617: fstp    [esp+10h+var_10+4]; float
0x48F61B: fstp    [esp+10h+var_10]; float
0x48F61E: call    Round_Float
0x48F623: fstp    [esp+10h+arg_10]
0x48F627: add     esp, 8
0x48F62A: fld     [esp+8+arg_10]
0x48F62E: fcom    qword ptr ds:0A2FC68h
0x48F634: fnstsw  ax
0x48F636: test    ah, 41h
0x48F639: jnz     short loc_48F668
0x48F63B: fld1
0x48F63D: fcomp   st(1)
0x48F63F: fnstsw  ax
0x48F641: test    ah, 41h
0x48F644: jnz     short loc_48F668
0x48F646: sub     esp, 8
0x48F649: fstp    qword ptr [esp+10h+var_10]; ArgList
0x48F64C: push    offset a_1f; "%.1f"
0x48F651: push    offset dword_B3442C; int
0x48F656: call    BSStringT_Static_Format
0x48F65B: mov     eax, ds:0B3442Ch
0x48F660: add     esp, 10h
0x48F663: pop     edi
0x48F664: pop     esi
0x48F665: retn    14h
0x48F668: call    Double_To_SInt32
0x48F66D: push    eax; ArgList
0x48F66E: push    offset aD_0; "%d"
0x48F673: push    offset dword_B3442C; int
0x48F678: call    BSStringT_Static_Format
0x48F67D: mov     eax, ds:0B3442Ch
0x48F682: add     esp, 0Ch
0x48F685: pop     edi
0x48F686: pop     esi
0x48F687: retn    14h
0x48F68A: fstp    st
0x48F68C: mov     eax, ds:0B3442Ch
0x48F691: pop     edi
0x48F692: pop     esi
0x48F693: retn    14h
