0x4824C0: push    ebp
0x4824C1: push    edi
0x4824C2: mov     edi, ecx
0x4824C4: mov     eax, [edi+0Ch]
0x4824C7: xor     ebp, ebp
0x4824C9: test    eax, eax
0x4824CB: jbe     short loc_48251E
0x4824CD: push    ebx
0x4824CE: mov     ebx, [esp+0Ch+arg_0]
0x4824D2: push    esi
0x4824D3: xor     esi, esi
0x4824D5: test    eax, eax
0x4824D7: jbe     short loc_482512
0x4824D9: lea     esp, [esp+0]
0x4824E0: mov     ecx, [edi+10h]
0x4824E3: imul    eax, ebp
0x4824E6: add     eax, esi
0x4824E8: lea     eax, [ecx+eax*8]
0x4824EB: mov     ecx, [eax]; this
0x4824ED: test    ecx, ecx
0x4824EF: jz      short loc_482508
0x4824F1: cmp     byte ptr [ecx+26h], 6
0x4824F5: jnz     short loc_482508
0x4824F7: call    sub_4CE3C0
0x4824FC: test    eax, eax
0x4824FE: jz      short loc_482508
0x482500: push    ebx
0x482501: mov     ecx, eax
0x482503: call    sub_4C5BA0
0x482508: mov     eax, [edi+0Ch]
0x48250B: add     esi, 1
0x48250E: cmp     esi, eax
0x482510: jb      short loc_4824E0
0x482512: mov     eax, [edi+0Ch]
0x482515: add     ebp, 1
0x482518: cmp     ebp, eax
0x48251A: jb      short loc_4824D3
0x48251C: pop     esi
0x48251D: pop     ebx
0x48251E: pop     edi
0x48251F: pop     ebp
0x482520: retn    4
