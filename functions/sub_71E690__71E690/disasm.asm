0x71E690: sub     esp, 50Ch
0x71E696: mov     eax, ds:0B30AACh
0x71E69B: xor     eax, esp
0x71E69D: mov     [esp+50Ch+var_4], eax
0x71E6A4: mov     eax, [esp+50Ch+Src]
0x71E6AB: push    ebx
0x71E6AC: mov     ebx, [ecx+894h]
0x71E6B2: push    ebp
0x71E6B3: mov     ebp, [esp+514h+arg_4]
0x71E6BA: push    esi
0x71E6BB: push    edi; Src
0x71E6BC: push    eax; Src
0x71E6BD: lea     eax, [esp+520h+Dst]
0x71E6C4: push    104h; SizeInBytes
0x71E6C9: push    eax; Dst
0x71E6CA: call    _strcpy_s
0x71E6CF: lea     ecx, [esp+528h+Dst]; void *
0x71E6D6: push    ecx
0x71E6D7: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x71E6DC: add     esp, 10h
0x71E6DF: lea     edx, [esp+51Ch+Dst]
0x71E6E6: push    edx; FullPath
0x71E6E7: lea     ecx, [esp+520h+Dir]; Dir
0x71E6EB: call    sub_748760
0x71E6F0: test    ebx, ebx
0x71E6F2: jz      short loc_71E76E
0x71E6F4: mov     edi, [ebx+8]
0x71E6F7: lea     eax, [ebx+8]
0x71E6FA: mov     eax, [edi]
0x71E6FC: mov     edx, [eax+4]
0x71E6FF: mov     ebx, [ebx]
0x71E701: lea     ecx, [esp+51Ch+var_409]
0x71E708: push    ecx
0x71E709: mov     ecx, edi
0x71E70B: call    edx
0x71E70D: test    al, al
0x71E70F: jz      short loc_71E756
0x71E711: push    8000h
0x71E716: lea     eax, [esp+520h+Dst]
0x71E71D: push    0
0x71E71F: push    eax
0x71E720: call    NiFile_GetNiFile_Indirect
0x71E725: mov     esi, eax
0x71E727: add     esp, 0Ch
0x71E72A: test    esi, esi
0x71E72C: jz      short loc_71E76E
0x71E72E: mov     edx, [esi]
0x71E730: mov     eax, [edx+4]
0x71E733: mov     ecx, esi
0x71E735: call    eax
0x71E737: test    al, al
0x71E739: jz      short loc_71E760
0x71E73B: mov     edx, [edi]
0x71E73D: mov     eax, [edx+8]
0x71E740: push    ebp
0x71E741: push    esi
0x71E742: mov     ecx, edi
0x71E744: call    eax
0x71E746: mov     edx, [esi]
0x71E748: mov     edi, eax
0x71E74A: mov     eax, [edx]
0x71E74C: push    1
0x71E74E: mov     ecx, esi
0x71E750: call    eax
0x71E752: test    edi, edi
0x71E754: jnz     short loc_71E75C
0x71E756: test    ebx, ebx
0x71E758: jnz     short loc_71E6F4
0x71E75A: jmp     short loc_71E76E
0x71E75C: mov     eax, edi
0x71E75E: jmp     short loc_71E770
0x71E760: test    esi, esi
0x71E762: jz      short loc_71E76E
0x71E764: mov     edx, [esi]
0x71E766: mov     eax, [edx]
0x71E768: push    1
0x71E76A: mov     ecx, esi
0x71E76C: call    eax
0x71E76E: xor     eax, eax
0x71E770: mov     ecx, [esp+51Ch+var_4]
0x71E777: pop     edi
0x71E778: pop     esi
0x71E779: pop     ebp
0x71E77A: pop     ebx
0x71E77B: xor     ecx, esp
0x71E77D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71E782: add     esp, 50Ch
0x71E788: retn    8
