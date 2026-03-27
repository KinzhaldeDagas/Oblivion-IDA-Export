0x434710: push    esi
0x434711: mov     esi, [esp+4+Str1]
0x434715: mov     eax, esi
0x434717: push    edi
0x434718: lea     edx, [eax+1]
0x43471B: jmp     short loc_434720
0x43471D: align 10h
0x434720: mov     cl, [eax]
0x434722: add     eax, 1
0x434725: test    cl, cl
0x434727: jnz     short loc_434720
0x434729: sub     eax, edx
0x43472B: cmp     eax, 3
0x43472E: jbe     short loc_43477C
0x434730: lea     eax, [eax+esi-3]
0x434734: push    offset off_A366CC; Str2
0x434739: push    eax; Str1
0x43473A: call    __strcmp
0x43473F: add     esp, 8
0x434742: test    eax, eax
0x434744: jnz     short loc_43477C
0x434746: mov     edx, ds:dword_A366C4
0x43474C: mov     ecx, [esp+8+arg_4]
0x434750: mov     [ecx], edx
0x434752: mov     ax, ds:word_A366C8
0x434758: mov     [ecx+4], ax
0x43475C: mov     eax, esi
0x43475E: mov     edi, edi
0x434760: mov     dl, [eax]
0x434762: add     eax, 1
0x434765: test    dl, dl
0x434767: jnz     short loc_434760
0x434769: sub     eax, esi
0x43476B: add     ecx, 0FFFFFFFFh
0x43476E: mov     edi, edi
0x434770: mov     dl, [ecx+1]
0x434773: add     ecx, 1
0x434776: test    dl, dl
0x434778: jnz     short loc_434770
0x43477A: jmp     short loc_4347BE
0x43477C: push    7; MaxCount
0x43477E: push    offset aMeshes; "Meshes\\"
0x434783: push    esi; Str1
0x434784: call    __strnicmp
0x434789: add     esp, 0Ch
0x43478C: test    eax, eax
0x43478E: jz      short loc_4347D3
0x434790: mov     edx, dword ptr ds:aMeshes; "Meshes\\"
0x434796: mov     ecx, [esp+8+arg_4]
0x43479A: mov     [ecx], edx
0x43479C: mov     eax, dword ptr ds:aMeshes+4; "es\\"
0x4347A1: mov     [ecx+4], eax
0x4347A4: mov     eax, esi
0x4347A6: mov     dl, [eax]
0x4347A8: add     eax, 1
0x4347AB: test    dl, dl
0x4347AD: jnz     short loc_4347A6
0x4347AF: sub     eax, esi
0x4347B1: add     ecx, 0FFFFFFFFh
0x4347B4: mov     dl, [ecx+1]
0x4347B7: add     ecx, 1
0x4347BA: test    dl, dl
0x4347BC: jnz     short loc_4347B4
0x4347BE: mov     edi, ecx
0x4347C0: mov     ecx, eax
0x4347C2: shr     ecx, 2
0x4347C5: rep movsd
0x4347C7: mov     ecx, eax
0x4347C9: and     ecx, 3
0x4347CC: rep movsb
0x4347CE: pop     edi
0x4347CF: pop     esi
0x4347D0: retn    8
0x4347D3: mov     edx, [esp+8+arg_4]
0x4347D7: mov     eax, esi
0x4347D9: sub     edx, esi
0x4347DB: jmp     short loc_4347E0
0x4347DD: align 10h
0x4347E0: mov     cl, [eax]
0x4347E2: mov     [edx+eax], cl
0x4347E5: add     eax, 1
0x4347E8: test    cl, cl
0x4347EA: jnz     short loc_4347E0
0x4347EC: pop     edi
0x4347ED: pop     esi
0x4347EE: retn    8
