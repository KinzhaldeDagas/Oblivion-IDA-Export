0x71E460: sub     esp, 50Ch
0x71E466: mov     eax, ds:0B30AACh
0x71E46B: xor     eax, esp
0x71E46D: mov     [esp+50Ch+var_4], eax
0x71E474: mov     eax, [esp+50Ch+Src]
0x71E47B: push    esi; Src
0x71E47C: mov     esi, [ecx+894h]
0x71E482: push    eax; Src
0x71E483: lea     eax, [esp+514h+Dst]
0x71E48A: push    104h; SizeInBytes
0x71E48F: push    eax; Dst
0x71E490: call    _strcpy_s
0x71E495: lea     ecx, [esp+51Ch+Dst]; void *
0x71E49C: push    ecx
0x71E49D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x71E4A2: add     esp, 10h
0x71E4A5: lea     edx, [esp+510h+Dst]
0x71E4AC: push    edx; FullPath
0x71E4AD: lea     ecx, [esp+514h+Dir]; Dir
0x71E4B1: call    sub_748760
0x71E4B6: test    esi, esi
0x71E4B8: jz      short loc_71E531
0x71E4BA: lea     ebx, [ebx+0]
0x71E4C0: mov     ecx, [esi+8]
0x71E4C3: lea     eax, [esi+8]
0x71E4C6: mov     eax, [ecx]
0x71E4C8: mov     eax, [eax+4]
0x71E4CB: mov     esi, [esi]
0x71E4CD: lea     edx, [esp+510h+var_409]
0x71E4D4: push    edx
0x71E4D5: call    eax
0x71E4D7: test    al, al
0x71E4D9: jnz     short loc_71E4E1
0x71E4DB: test    esi, esi
0x71E4DD: jnz     short loc_71E4C0
0x71E4DF: jmp     short loc_71E531
0x71E4E1: push    8000h
0x71E4E6: lea     ecx, [esp+514h+Dst]
0x71E4ED: push    0
0x71E4EF: push    ecx
0x71E4F0: call    NiFile_GetNiFile_Indirect
0x71E4F5: mov     esi, eax
0x71E4F7: add     esp, 0Ch
0x71E4FA: test    esi, esi
0x71E4FC: jz      short loc_71E531
0x71E4FE: mov     edx, [esi]
0x71E500: mov     eax, [edx+4]
0x71E503: mov     ecx, esi
0x71E505: call    eax
0x71E507: mov     edx, [esi]
0x71E509: test    al, al
0x71E50B: mov     eax, [edx]
0x71E50D: push    1
0x71E50F: mov     ecx, esi
0x71E511: jz      short loc_71E52F
0x71E513: call    eax
0x71E515: mov     al, 1
0x71E517: pop     esi
0x71E518: mov     ecx, [esp+50Ch+var_4]
0x71E51F: xor     ecx, esp
0x71E521: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71E526: add     esp, 50Ch
0x71E52C: retn    4
0x71E52F: call    eax
0x71E531: mov     ecx, [esp+510h+var_4]
0x71E538: pop     esi
0x71E539: xor     ecx, esp
0x71E53B: xor     al, al
0x71E53D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71E542: add     esp, 50Ch
0x71E548: retn    4
