0x760700: sub     esp, 8
0x760703: push    ebp
0x760704: push    esi
0x760705: mov     esi, ecx
0x760707: lea     eax, [esi+0Ch]
0x76070A: push    eax
0x76070B: call    sub_76BEF0
0x760710: mov     ebp, [esp+14h+arg_0]
0x760714: mov     ecx, [ebp+54h]
0x760717: mov     edx, [ecx]
0x760719: mov     [esp+14h+var_4], eax
0x76071D: mov     [esi+54h], edx
0x760720: mov     eax, [ebp+58h]
0x760723: mov     eax, [eax]
0x760725: mov     ecx, edx
0x760727: add     esp, 4
0x76072A: test    ecx, ecx
0x76072C: mov     [esi+58h], eax
0x76072F: jz      short loc_76074D
0x760731: lea     edx, [ecx-1]
0x760734: test    ecx, edx
0x760736: setz    cl
0x760739: test    cl, cl
0x76073B: jz      short loc_76074D
0x76073D: test    eax, eax
0x76073F: jz      short loc_76074D
0x760741: lea     ecx, [eax-1]
0x760744: test    eax, ecx
0x760746: setz    al
0x760749: test    al, al
0x76074B: jnz     short loc_760764
0x76074D: mov     ecx, [esi+8]
0x760750: mov     edx, [ecx]
0x760752: mov     eax, [edx+54h]
0x760755: call    eax
0x760757: test    al, 8
0x760759: jnz     short loc_760764
0x76075B: mov     dword ptr [esi+5Ch], 1
0x760762: jmp     short loc_76076A
0x760764: mov     ecx, [ebp+60h]
0x760767: mov     [esi+5Ch], ecx
0x76076A: mov     ecx, ds:0B42050h
0x760770: push    ebx
0x760771: push    edi
0x760772: mov     edi, [esi+5Ch]
0x760775: lea     eax, [edi-1]
0x760778: cmp     ecx, eax
0x76077A: jbe     short loc_76077E
0x76077C: mov     ecx, eax
0x76077E: test    ecx, ecx
0x760780: jbe     short loc_7607AE
0x760782: mov     edx, [esi+54h]
0x760785: mov     eax, [esi+58h]
0x760788: mov     ebx, ecx
0x76078A: lea     ebx, [ebx+0]
0x760790: test    dl, 1
0x760793: jz      short loc_760798
0x760795: add     edx, 1
0x760798: shr     edx, 1
0x76079A: test    al, 1
0x76079C: jz      short loc_7607A1
0x76079E: add     eax, 1
0x7607A1: shr     eax, 1
0x7607A3: sub     ebx, 1
0x7607A6: jnz     short loc_760790
0x7607A8: mov     [esi+54h], edx
0x7607AB: mov     [esi+58h], eax
0x7607AE: mov     edx, [esi+8]
0x7607B1: push    0
0x7607B3: lea     ebx, [esp+1Ch+var_8]
0x7607B7: push    ebx
0x7607B8: mov     ebx, [esp+20h+var_4]
0x7607BC: push    1
0x7607BE: push    ebx
0x7607BF: push    0
0x7607C1: mov     [esi+70h], ecx
0x7607C4: mov     eax, [edx+280h]
0x7607CA: sub     edi, ecx
0x7607CC: mov     ecx, [esi+58h]
0x7607CF: push    edi
0x7607D0: push    ecx
0x7607D1: mov     ecx, [esi+54h]
0x7607D4: mov     [esp+34h+var_8], 0
0x7607DC: mov     edx, [eax]
0x7607DE: mov     edx, [edx+5Ch]
0x7607E1: push    ecx
0x7607E2: push    eax
0x7607E3: call    edx
0x7607E5: test    eax, eax
0x7607E7: pop     edi
0x7607E8: pop     ebx
0x7607E9: jl      short loc_760834
0x7607EB: mov     ecx, [esp+10h+var_8]
0x7607EF: test    ecx, ecx
0x7607F1: jz      short loc_760834
0x7607F3: mov     [esi+50h], ecx
0x7607F6: mov     ecx, [ebp+5Ch]
0x7607F9: mov     eax, [ebp+60h]
0x7607FC: mov     eax, [ecx+eax*4]
0x7607FF: imul    eax, [ebp+6Ch]
0x760803: add     ds:0B42054h, eax
0x760809: mov     ecx, eax
0x76080B: and     ecx, 0FFFFF000h
0x760811: xor     edx, edx
0x760813: cmp     ecx, eax
0x760815: mov     [esi+60h], eax
0x760818: jz      short loc_760824
0x76081A: sub     ecx, eax
0x76081C: add     ecx, 1000h
0x760822: mov     edx, ecx
0x760824: add     ds:0B42058h, edx
0x76082A: pop     esi
0x76082B: mov     al, 1
0x76082D: pop     ebp
0x76082E: add     esp, 8
0x760831: retn    4
0x760834: push    eax
0x760835: call    sub_7736F0
0x76083A: push    eax
0x76083B: push    offset aNidx9sourcetex; "NiDX9SourceTextureData::CreateSurf> Fai"...
0x760840: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x760845: add     esp, 0Ch
0x760848: mov     dword ptr [esi+50h], 0
0x76084F: pop     esi
0x760850: xor     al, al
0x760852: pop     ebp
0x760853: add     esp, 8
0x760856: retn    4
