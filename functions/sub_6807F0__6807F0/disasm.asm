0x6807F0: push    ecx
0x6807F1: fldz
0x6807F3: push    esi
0x6807F4: push    edi
0x6807F5: fstp    [esp+0Ch+var_4]
0x6807F9: mov     esi, ecx
0x6807FB: call    sub_67F0A0
0x680800: test    al, al
0x680802: mov     edi, [esp+0Ch+arg_0]
0x680806: jnz     short loc_68086A
0x680808: test    edi, edi
0x68080A: jz      short loc_68086A
0x68080C: mov     eax, [esi+4]
0x68080F: test    eax, eax
0x680811: jz      short loc_68086A
0x680813: push    1
0x680815: push    0
0x680817: push    edi
0x680818: push    eax
0x680819: call    sub_4B72C0
0x68081E: add     esp, 10h
0x680821: test    al, al
0x680823: jnz     short loc_68086A
0x680825: mov     ecx, [esi+4]
0x680828: mov     byte ptr [esp+0Ch+arg_0], al
0x68082C: lea     eax, [esp+0Ch+arg_0]
0x680830: push    eax
0x680831: push    edi
0x680832: push    ecx
0x680833: call    sub_4B7490
0x680838: add     esp, 0Ch
0x68083B: test    al, al
0x68083D: jnz     short loc_68084D
0x68083F: mov     ecx, offset unk_B3A430
0x680844: call    GameSetting_GetSafeFloatPointer
0x680849: fld     dword ptr [eax]
0x68084B: jmp     short loc_680866
0x68084D: cmp     byte ptr [esp+0Ch+arg_0], 0
0x680852: jz      short loc_68086A
0x680854: mov     ecx, offset unk_B3A438
0x680859: call    GameSetting_GetSafeFloatPointer
0x68085E: fld     dword ptr [eax]
0x680860: fadd    qword ptr ds:0A2FC68h
0x680866: fstp    [esp+0Ch+var_4]
0x68086A: call    sub_67F0C0
0x68086F: test    al, al
0x680871: jnz     loc_68091B
0x680877: test    edi, edi
0x680879: jz      loc_68091B
0x68087F: cmp     dword ptr [esi+4], 0
0x680883: jz      loc_68091B
0x680889: cmp     dword ptr [esi+0Ch], 0
0x68088D: jz      loc_68091B
0x680893: cmp     edi, ds:0B333C4h
0x680899: jz      short loc_6808AD
0x68089B: mov     edx, [edi]
0x68089D: mov     eax, [edx+334h]
0x6808A3: push    1
0x6808A5: mov     ecx, edi
0x6808A7: call    eax
0x6808A9: test    al, al
0x6808AB: jnz     short loc_68091B
0x6808AD: mov     ecx, [esi+4]
0x6808B0: mov     edx, [ecx]
0x6808B2: mov     eax, [edx+170h]
0x6808B8: push    ebp
0x6808B9: xor     ebp, ebp
0x6808BB: call    eax
0x6808BD: cmp     byte ptr [eax+4], 18h
0x6808C1: jnz     short loc_6808D2
0x6808C3: mov     ecx, [esi+4]
0x6808C6: mov     edx, [ecx]
0x6808C8: mov     eax, [edx+170h]
0x6808CE: call    eax
0x6808D0: mov     ebp, eax
0x6808D2: mov     ecx, [esi+0Ch]
0x6808D5: mov     edx, [ecx]
0x6808D7: mov     eax, [edx+170h]
0x6808DD: xor     edi, edi
0x6808DF: call    eax
0x6808E1: cmp     byte ptr [eax+4], 18h
0x6808E5: jnz     short loc_6808F6
0x6808E7: mov     ecx, [esi+0Ch]
0x6808EA: mov     edx, [ecx]
0x6808EC: mov     eax, [edx+170h]
0x6808F2: call    eax
0x6808F4: mov     edi, eax
0x6808F6: mov     ecx, ebp
0x6808F8: call    sub_4B6D10
0x6808FD: test    al, al
0x6808FF: pop     ebp
0x680900: jnz     short loc_68090D
0x680902: mov     ecx, edi
0x680904: call    sub_4B6D10
0x680909: test    al, al
0x68090B: jz      short loc_68091B
0x68090D: fld     dword ptr ds:0B3A440h
0x680913: fadd    [esp+0Ch+var_4]
0x680917: fstp    [esp+0Ch+var_4]
0x68091B: fld     [esp+0Ch+var_4]
0x68091F: pop     edi
0x680920: pop     esi
0x680921: pop     ecx
0x680922: retn    4
