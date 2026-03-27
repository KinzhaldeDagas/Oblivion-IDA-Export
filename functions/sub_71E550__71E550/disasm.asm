0x71E550: sub     esp, 51Ch
0x71E556: mov     eax, ds:0B30AACh
0x71E55B: xor     eax, esp
0x71E55D: mov     [esp+51Ch+var_4], eax
0x71E564: mov     edx, [esp+51Ch+arg_8]
0x71E56B: mov     eax, [esp+51Ch+Src]
0x71E572: push    ebx
0x71E573: mov     ebx, [ecx+894h]
0x71E579: push    ebp
0x71E57A: mov     ebp, [esp+524h+arg_4]
0x71E581: push    esi
0x71E582: mov     [esp+528h+var_514], edx
0x71E586: mov     edx, [esp+528h+arg_C]
0x71E58D: push    edi; Src
0x71E58E: mov     [esp+52Ch+var_518], edx
0x71E592: mov     edx, [esp+52Ch+arg_10]
0x71E599: push    eax; Src
0x71E59A: mov     [esp+530h+var_51C], edx
0x71E59E: mov     edx, [esp+530h+arg_14]
0x71E5A5: lea     eax, [esp+530h+Dst]
0x71E5AC: push    104h; SizeInBytes
0x71E5B1: push    eax; Dst
0x71E5B2: mov     [esp+538h+var_510], edx
0x71E5B6: call    _strcpy_s
0x71E5BB: lea     ecx, [esp+538h+Dst]; void *
0x71E5C2: push    ecx
0x71E5C3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x71E5C8: add     esp, 10h
0x71E5CB: lea     edx, [esp+52Ch+Dst]
0x71E5D2: push    edx; FullPath
0x71E5D3: lea     ecx, [esp+530h+Dir]; Dir
0x71E5D7: call    sub_748760
0x71E5DC: test    ebx, ebx
0x71E5DE: jz      loc_71E672
0x71E5E4: mov     edi, [ebx+8]
0x71E5E7: lea     eax, [ebx+8]
0x71E5EA: mov     eax, [edi]
0x71E5EC: mov     edx, [eax+4]
0x71E5EF: mov     ebx, [ebx]
0x71E5F1: lea     ecx, [esp+52Ch+var_409]
0x71E5F8: push    ecx
0x71E5F9: mov     ecx, edi
0x71E5FB: call    edx
0x71E5FD: test    al, al
0x71E5FF: jz      short loc_71E658
0x71E601: push    8000h
0x71E606: lea     eax, [esp+530h+Dst]
0x71E60D: push    0
0x71E60F: push    eax
0x71E610: call    NiFile_GetNiFile_Indirect
0x71E615: mov     esi, eax
0x71E617: add     esp, 0Ch
0x71E61A: test    esi, esi
0x71E61C: jz      short loc_71E672
0x71E61E: mov     edx, [esi]
0x71E620: mov     eax, [edx+4]
0x71E623: mov     ecx, esi
0x71E625: call    eax
0x71E627: test    al, al
0x71E629: jz      short loc_71E664
0x71E62B: mov     eax, [esp+52Ch+var_510]
0x71E62F: mov     ecx, [esp+52Ch+var_514]
0x71E633: mov     edx, [edi]
0x71E635: mov     edx, [edx+0Ch]
0x71E638: push    eax
0x71E639: mov     eax, [esp+530h+var_51C]
0x71E63D: push    ecx
0x71E63E: mov     ecx, [esp+534h+var_518]
0x71E642: push    ebp
0x71E643: push    eax
0x71E644: push    ecx
0x71E645: push    esi
0x71E646: mov     ecx, edi
0x71E648: call    edx
0x71E64A: test    al, al
0x71E64C: mov     eax, [esi]
0x71E64E: mov     edx, [eax]
0x71E650: push    1
0x71E652: mov     ecx, esi
0x71E654: jnz     short loc_71E65E
0x71E656: call    edx
0x71E658: test    ebx, ebx
0x71E65A: jnz     short loc_71E5E4
0x71E65C: jmp     short loc_71E672
0x71E65E: call    edx
0x71E660: mov     al, 1
0x71E662: jmp     short loc_71E674
0x71E664: test    esi, esi
0x71E666: jz      short loc_71E672
0x71E668: mov     eax, [esi]
0x71E66A: mov     edx, [eax]
0x71E66C: push    1
0x71E66E: mov     ecx, esi
0x71E670: call    edx
0x71E672: xor     al, al
0x71E674: mov     ecx, [esp+52Ch+var_4]
0x71E67B: pop     edi
0x71E67C: pop     esi
0x71E67D: pop     ebp
0x71E67E: pop     ebx
0x71E67F: xor     ecx, esp
0x71E681: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71E686: add     esp, 51Ch
0x71E68C: retn    18h
