0x764630: sub     esp, 1Ch
0x764633: push    ebx
0x764634: push    ebp
0x764635: push    esi
0x764636: mov     esi, ecx
0x764638: xor     ebp, ebp
0x76463A: push    edi
0x76463B: mov     [esp+2Ch+var_1C], esi
0x76463F: mov     [esp+2Ch+var_18], 1
0x764647: mov     [esp+2Ch+var_14], ebp
0x76464B: mov     [esp+2Ch+var_10], 2
0x764653: mov     [esp+2Ch+var_C], 4
0x76465B: mov     [esp+2Ch+var_8], 3
0x764663: mov     [esp+2Ch+var_4], 5
0x76466B: lea     ebx, [esi+864h]
0x764671: xor     edi, edi
0x764673: mov     [ebx-10h], edi
0x764676: xor     eax, eax
0x764678: jmp     short loc_764680
0x76467A: align 10h
0x764680: mov     ecx, [esp+eax*4+2Ch+var_18]
0x764684: lea     edx, [ecx+ebp+1BDh]
0x76468B: cmp     [esi+edx*4], edi
0x76468E: jnz     short loc_76469A
0x764690: add     eax, 1
0x764693: cmp     eax, 6
0x764696: jb      short loc_764680
0x764698: jmp     short loc_7646A7
0x76469A: lea     eax, [ecx+ebp]
0x76469D: mov     ecx, [esi+eax*4+6F4h]
0x7646A4: mov     [ebx-10h], ecx
0x7646A7: cmp     [ebx-10h], edi
0x7646AA: jz      short loc_764728
0x7646AC: push    70h ; 'p'; Size
0x7646AE: call    FormHeapAlloc
0x7646B3: add     esp, 4
0x7646B6: cmp     eax, edi
0x7646B8: jz      short loc_7646CF
0x7646BA: mov     edx, [ebx-10h]
0x7646BD: push    1
0x7646BF: push    1
0x7646C1: push    edx
0x7646C2: push    4
0x7646C4: push    4
0x7646C6: mov     ecx, eax
0x7646C8: call    NiPixelData__NiPixelData
0x7646CD: mov     edi, eax
0x7646CF: mov     esi, [ebx]
0x7646D1: cmp     esi, edi
0x7646D3: jz      short loc_764705
0x7646D5: test    esi, esi
0x7646D7: jz      short loc_7646F5
0x7646D9: lea     eax, [esi+4]
0x7646DC: push    eax; lpAddend
0x7646DD: call    dword ptr ds:0A2807Ch
0x7646E3: test    eax, eax
0x7646E5: jnz     short loc_7646F5
0x7646E7: test    esi, esi
0x7646E9: jz      short loc_7646F5
0x7646EB: mov     edx, [esi]
0x7646ED: mov     eax, [edx]
0x7646EF: push    1
0x7646F1: mov     ecx, esi
0x7646F3: call    eax
0x7646F5: test    edi, edi
0x7646F7: mov     [ebx], edi
0x7646F9: jz      short loc_764705
0x7646FB: add     edi, 4
0x7646FE: push    edi; lpAddend
0x7646FF: call    dword ptr ds:0A28078h
0x764705: mov     eax, [ebx]
0x764707: mov     ecx, [eax+64h]
0x76470A: mov     edx, [eax+5Ch]
0x76470D: shl     ecx, 4
0x764710: push    ecx
0x764711: mov     ecx, [edx]
0x764713: add     ecx, [eax+50h]
0x764716: push    0FFh
0x76471B: push    ecx
0x76471C: call    __memset
0x764721: mov     esi, [esp+38h+var_1C]
0x764725: add     esp, 0Ch
0x764728: add     ebp, 16h
0x76472B: add     ebx, 4
0x76472E: cmp     ebp, 58h ; 'X'
0x764731: jb      loc_764671
0x764737: mov     eax, [esi+854h]
0x76473D: test    eax, eax
0x76473F: jnz     short loc_76474B
0x764741: pop     edi
0x764742: pop     esi
0x764743: pop     ebp
0x764744: xor     al, al
0x764746: pop     ebx
0x764747: add     esp, 1Ch
0x76474A: retn
0x76474B: push    eax
0x76474C: call    sub_7013A0
0x764751: mov     edx, [esi+854h]
0x764757: mov     eax, [edx+10h]
0x76475A: add     esp, 4
0x76475D: pop     edi
0x76475E: mov     [esi+874h], eax
0x764764: pop     esi
0x764765: pop     ebp
0x764766: mov     al, 1
0x764768: pop     ebx
0x764769: add     esp, 1Ch
0x76476C: retn
