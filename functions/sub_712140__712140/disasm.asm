0x712140: push    ebx
0x712141: mov     ebx, [esp+4+Src]
0x712145: push    esi
0x712146: push    edi; Src
0x712147: mov     edi, ecx
0x712149: push    ebx; Src
0x71214A: lea     esi, [edi+0E0h]
0x712150: push    104h; SizeInBytes
0x712155: push    esi; Dst
0x712156: call    _strcpy_s
0x71215B: push    esi
0x71215C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x712161: mov     ecx, [edi+1E8h]
0x712167: add     esp, 10h
0x71216A: push    esi; FullPath
0x71216B: call    sub_747930
0x712170: push    8000h
0x712175: push    1
0x712177: push    ebx
0x712178: call    NiFile_GetNiFile_Indirect
0x71217D: mov     esi, eax
0x71217F: add     esp, 0Ch
0x712182: test    esi, esi
0x712184: jz      short loc_7121BB
0x712186: mov     eax, [esi]
0x712188: mov     edx, [eax+4]
0x71218B: mov     ecx, esi
0x71218D: call    edx
0x71218F: test    al, al
0x712191: jz      short loc_7121B1
0x712193: mov     eax, [edi]
0x712195: mov     edx, [eax+10h]
0x712198: push    esi
0x712199: mov     ecx, edi
0x71219B: call    edx
0x71219D: mov     bl, al
0x71219F: mov     eax, [esi]
0x7121A1: mov     edx, [eax]
0x7121A3: push    1
0x7121A5: mov     ecx, esi
0x7121A7: call    edx
0x7121A9: pop     edi
0x7121AA: pop     esi
0x7121AB: mov     al, bl
0x7121AD: pop     ebx
0x7121AE: retn    4
0x7121B1: mov     eax, [esi]
0x7121B3: mov     edx, [eax]
0x7121B5: push    1
0x7121B7: mov     ecx, esi
0x7121B9: call    edx
0x7121BB: pop     edi
0x7121BC: pop     esi
0x7121BD: xor     al, al
0x7121BF: pop     ebx
0x7121C0: retn    4
