0x711FC0: mov     eax, [esp+Src]
0x711FC4: push    esi
0x711FC5: push    edi; Src
0x711FC6: push    eax; Src
0x711FC7: mov     edi, ecx
0x711FC9: lea     esi, [edi+0E0h]
0x711FCF: push    104h; SizeInBytes
0x711FD4: push    esi; Dst
0x711FD5: call    _strcpy_s
0x711FDA: push    esi
0x711FDB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x711FE0: mov     ecx, [edi+1E8h]
0x711FE6: add     esp, 10h
0x711FE9: push    esi; FullPath
0x711FEA: call    sub_747930
0x711FEF: push    8000h
0x711FF4: push    0
0x711FF6: push    esi
0x711FF7: call    NiFile_GetNiFile_Indirect
0x711FFC: mov     esi, eax
0x711FFE: add     esp, 0Ch
0x712001: test    esi, esi
0x712003: jz      short loc_71203B
0x712005: mov     edx, [esi]
0x712007: mov     eax, [edx+4]
0x71200A: mov     ecx, esi
0x71200C: call    eax
0x71200E: test    al, al
0x712010: jz      short loc_712031
0x712012: mov     edx, [edi]
0x712014: mov     eax, [edx+4]
0x712017: push    ebx
0x712018: push    esi
0x712019: mov     ecx, edi
0x71201B: call    eax
0x71201D: mov     edx, [esi]
0x71201F: mov     bl, al
0x712021: mov     eax, [edx]
0x712023: push    1
0x712025: mov     ecx, esi
0x712027: call    eax
0x712029: mov     al, bl
0x71202B: pop     ebx
0x71202C: pop     edi
0x71202D: pop     esi
0x71202E: retn    4
0x712031: mov     edx, [esi]
0x712033: mov     eax, [edx]
0x712035: push    1
0x712037: mov     ecx, esi
0x712039: call    eax
0x71203B: push    offset aCannotOpenFile; "Cannot open file."
0x712040: mov     dword ptr [edi+380h], 1
0x71204A: push    104h; SizeInBytes
0x71204F: add     edi, 384h
0x712055: push    edi; Dst
0x712056: call    _strcpy_s
0x71205B: add     esp, 0Ch
0x71205E: pop     edi
0x71205F: xor     al, al
0x712061: pop     esi
0x712062: retn    4
