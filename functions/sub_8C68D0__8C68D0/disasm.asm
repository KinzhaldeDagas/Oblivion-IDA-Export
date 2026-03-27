0x8C68D0: mov     edx, [esp+arg_0]
0x8C68D4: cmp     edx, [ecx+0Ch]
0x8C68D7: push    esi
0x8C68D8: mov     esi, [esp+4+arg_4]
0x8C68DC: jb      short loc_8C6915
0x8C68DE: lea     eax, [edx+1]
0x8C68E1: mov     [ecx+0Ch], eax
0x8C68E4: cmp     dword ptr [esi], 0
0x8C68E7: jnz     short loc_8C68F6
0x8C68E9: cmp     dword ptr [esi+4], 0
0x8C68ED: jnz     short loc_8C68F6
0x8C68EF: mov     eax, 1
0x8C68F4: jmp     short loc_8C68F8
0x8C68F6: xor     eax, eax
0x8C68F8: test    al, al
0x8C68FA: setz    al
0x8C68FD: test    al, al
0x8C68FF: jz      short loc_8C6978
0x8C6901: add     dword ptr [ecx+10h], 1
0x8C6905: mov     ecx, [ecx+4]
0x8C6908: push    esi
0x8C6909: lea     ecx, [ecx+edx*8]
0x8C690C: call    sub_8C6880
0x8C6911: pop     esi
0x8C6912: retn    8
0x8C6915: cmp     dword ptr [esi], 0
0x8C6918: jnz     short loc_8C6927
0x8C691A: cmp     dword ptr [esi+4], 0
0x8C691E: jnz     short loc_8C6927
0x8C6920: mov     eax, 1
0x8C6925: jmp     short loc_8C6929
0x8C6927: xor     eax, eax
0x8C6929: test    al, al
0x8C692B: setz    al
0x8C692E: test    al, al
0x8C6930: mov     eax, [ecx+4]
0x8C6933: lea     eax, [eax+edx*8]
0x8C6936: jz      short loc_8C6957
0x8C6938: cmp     dword ptr [eax], 0
0x8C693B: jnz     short loc_8C6978
0x8C693D: cmp     dword ptr [eax+4], 0
0x8C6941: jnz     short loc_8C6978
0x8C6943: add     dword ptr [ecx+10h], 1
0x8C6947: mov     ecx, [ecx+4]
0x8C694A: push    esi
0x8C694B: lea     ecx, [ecx+edx*8]
0x8C694E: call    sub_8C6880
0x8C6953: pop     esi
0x8C6954: retn    8
0x8C6957: cmp     dword ptr [eax], 0
0x8C695A: jnz     short loc_8C6969
0x8C695C: cmp     dword ptr [eax+4], 0
0x8C6960: jnz     short loc_8C6969
0x8C6962: mov     eax, 1
0x8C6967: jmp     short loc_8C696B
0x8C6969: xor     eax, eax
0x8C696B: test    al, al
0x8C696D: setz    al
0x8C6970: test    al, al
0x8C6972: jz      short loc_8C6978
0x8C6974: add     dword ptr [ecx+10h], 0FFFFFFFFh
0x8C6978: mov     ecx, [ecx+4]
0x8C697B: push    esi
0x8C697C: lea     ecx, [ecx+edx*8]
0x8C697F: call    sub_8C6880
0x8C6984: pop     esi
0x8C6985: retn    8
