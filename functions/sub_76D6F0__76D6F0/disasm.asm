0x76D6F0: sub     esp, 20h
0x76D6F3: push    esi
0x76D6F4: mov     esi, ecx
0x76D6F6: cmp     dword ptr [esi+0Ch], 0
0x76D6FA: push    edi
0x76D6FB: lea     edi, [esi+0Ch]
0x76D6FE: jz      short loc_76D707
0x76D700: mov     eax, [esi]
0x76D702: mov     edx, [eax+2Ch]
0x76D705: call    edx
0x76D707: mov     dword ptr ds:0B42600h, 0
0x76D711: mov     dword ptr ds:0B42610h, 0
0x76D71B: mov     eax, [esi+4Ch]
0x76D71E: test    eax, eax
0x76D720: jz      short loc_76D731
0x76D722: mov     ecx, [eax]
0x76D724: mov     edx, [ecx+8]
0x76D727: push    eax
0x76D728: call    edx
0x76D72A: mov     dword ptr [esi+4Ch], 0
0x76D731: mov     eax, [esp+28h+arg_0]
0x76D735: mov     [esi+4Ch], eax
0x76D738: mov     ecx, [eax]
0x76D73A: mov     edx, [ecx+4]
0x76D73D: push    eax
0x76D73E: call    edx
0x76D740: mov     eax, [esi+4Ch]
0x76D743: mov     ecx, [eax]
0x76D745: mov     edx, [ecx+98h]
0x76D74B: push    edi
0x76D74C: push    0
0x76D74E: push    eax
0x76D74F: call    edx
0x76D751: test    eax, eax
0x76D753: jl      short loc_76D778
0x76D755: mov     eax, [edi]
0x76D757: mov     ecx, [eax]
0x76D759: lea     edx, [esp+28h+a1]
0x76D75D: push    edx
0x76D75E: push    eax
0x76D75F: mov     eax, [ecx+30h]
0x76D762: call    eax
0x76D764: test    eax, eax
0x76D766: jge     short loc_76D782
0x76D768: mov     eax, [edi]
0x76D76A: mov     ecx, [eax]
0x76D76C: mov     edx, [ecx+8]
0x76D76F: push    eax
0x76D770: call    edx
0x76D772: mov     dword ptr [edi], 0
0x76D778: pop     edi
0x76D779: xor     al, al
0x76D77B: pop     esi
0x76D77C: add     esp, 20h
0x76D77F: retn    4
0x76D782: mov     eax, [esp+28h+var_4]
0x76D786: mov     ecx, [esp+28h+var_8]
0x76D78A: push    eax
0x76D78B: push    ecx
0x76D78C: mov     ecx, [esi+8]
0x76D78F: call    sub_731E40
0x76D794: mov     edx, [esp+28h+a1]
0x76D798: push    edx; a1
0x76D799: call    CreateSurfaceData
0x76D79E: mov     [esi+10h], eax
0x76D7A1: mov     eax, [esp+2Ch+a1]
0x76D7A5: push    eax
0x76D7A6: call    sub_774BD0
0x76D7AB: push    eax
0x76D7AC: push    offset aNidx9render_26; "NiDX9Renderer::Recreate> Using %s backb"...
0x76D7B1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76D7B6: add     esp, 10h
0x76D7B9: pop     edi
0x76D7BA: mov     al, 1
0x76D7BC: pop     esi
0x76D7BD: add     esp, 20h
0x76D7C0: retn    4
