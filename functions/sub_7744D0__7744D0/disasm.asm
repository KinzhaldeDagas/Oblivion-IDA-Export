0x7744D0: push    ebx
0x7744D1: push    ebp
0x7744D2: push    esi
0x7744D3: mov     ebx, ecx
0x7744D5: mov     ebp, [ebx+50h]
0x7744D8: xor     esi, esi
0x7744DA: cmp     [ebx+5Ch], esi
0x7744DD: jbe     short loc_77453D
0x7744DF: push    edi
0x7744E0: mov     edi, [esp+10h+arg_4]
0x7744E4: mov     eax, [ebp+0]
0x7744E7: mov     edx, [eax+48h]
0x7744EA: lea     ecx, [esp+10h+arg_4]
0x7744EE: push    ecx
0x7744EF: push    esi
0x7744F0: push    edi
0x7744F1: push    ebp
0x7744F2: call    edx
0x7744F4: test    eax, eax
0x7744F6: jl      short loc_774527
0x7744F8: mov     eax, [esp+10h+arg_4]
0x7744FC: mov     ecx, [esp+10h+arg_0]
0x774500: push    edi
0x774501: push    eax
0x774502: push    esi
0x774503: push    ecx
0x774504: call    sub_760860
0x774509: mov     eax, [esp+20h+arg_4]
0x77450D: mov     edx, [eax]
0x77450F: add     esp, 10h
0x774512: push    eax
0x774513: mov     eax, [edx+8]
0x774516: call    eax
0x774518: add     esi, 1
0x77451B: cmp     esi, [ebx+5Ch]
0x77451E: jb      short loc_7744E4
0x774520: pop     edi
0x774521: pop     esi
0x774522: pop     ebp
0x774523: pop     ebx
0x774524: retn    8
0x774527: push    eax
0x774528: call    sub_7736F0
0x77452D: push    eax
0x77452E: push    esi
0x77452F: push    offset aNidx9sourcec_1; "NiDX9SourceCubeMapData::CopyDataToSurfa"...
0x774534: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x774539: add     esp, 10h
0x77453C: pop     edi
0x77453D: pop     esi
0x77453E: pop     ebp
0x77453F: pop     ebx
0x774540: retn    8
