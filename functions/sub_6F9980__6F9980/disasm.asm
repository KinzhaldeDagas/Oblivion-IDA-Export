0x6F9980: push    ebx
0x6F9981: push    ebp
0x6F9982: mov     ebp, [esp+8+Src]
0x6F9986: push    esi
0x6F9987: mov     esi, [esp+0Ch+arg_4]
0x6F998B: test    esi, esi
0x6F998D: mov     ebx, ecx
0x6F998F: jnz     short loc_6F99A3
0x6F9991: push    2800h
0x6F9996: push    0
0x6F9998: push    ebp
0x6F9999: call    NiFile_GetNiFile_Indirect
0x6F999E: add     esp, 0Ch
0x6F99A1: mov     esi, eax
0x6F99A3: xor     al, al
0x6F99A5: test    esi, esi
0x6F99A7: jz      short loc_6F99E8
0x6F99A9: push    edi; Src
0x6F99AA: push    ebp; Src
0x6F99AB: lea     edi, [ebx+0E0h]
0x6F99B1: push    104h; SizeInBytes
0x6F99B6: push    edi; Dst
0x6F99B7: call    _strcpy_s
0x6F99BC: push    edi
0x6F99BD: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6F99C2: mov     ecx, [ebx+1E8h]
0x6F99C8: add     esp, 10h
0x6F99CB: push    edi; FullPath
0x6F99CC: call    sub_747930
0x6F99D1: push    esi
0x6F99D2: mov     ecx, ebx
0x6F99D4: call    sub_7120F0
0x6F99D9: mov     bl, al
0x6F99DB: mov     eax, [esi]
0x6F99DD: mov     edx, [eax]
0x6F99DF: push    1
0x6F99E1: mov     ecx, esi
0x6F99E3: call    edx
0x6F99E5: mov     al, bl
0x6F99E7: pop     edi
0x6F99E8: pop     esi
0x6F99E9: pop     ebp
0x6F99EA: pop     ebx
0x6F99EB: retn    8
