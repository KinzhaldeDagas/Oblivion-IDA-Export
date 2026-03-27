0x7A5740: push    0FFFFFFFFh
0x7A5742: push    offset SEH_7A5740
0x7A5747: mov     eax, large fs:0
0x7A574D: push    eax
0x7A574E: push    ebx
0x7A574F: push    ebp
0x7A5750: push    esi
0x7A5751: push    edi
0x7A5752: mov     eax, ds:0B30AACh
0x7A5757: xor     eax, esp
0x7A5759: push    eax
0x7A575A: lea     eax, [esp+20h+var_C]
0x7A575E: mov     large fs:0, eax
0x7A5764: mov     esi, ecx
0x7A5766: mov     eax, [esi+38h]
0x7A5769: mov     ebx, [esp+20h+arg_0]
0x7A576D: xor     ecx, ecx
0x7A576F: mov     edx, 4
0x7A5774: mul     edx
0x7A5776: seto    cl
0x7A5779: mov     [esi+40h], ebx
0x7A577C: neg     ecx
0x7A577E: or      ecx, eax
0x7A5780: push    ecx; Size
0x7A5781: call    FormHeapAlloc
0x7A5786: add     esp, 4
0x7A5789: lea     ecx, [esp+20h+arg_0]
0x7A578D: mov     [esi+4Ch], eax
0x7A5790: call    sub_78EAF0
0x7A5795: xor     edi, edi
0x7A5797: cmp     [esi+38h], edi
0x7A579A: mov     [esp+20h+var_4], edi
0x7A579E: jle     short loc_7A57C9
0x7A57A0: fld     dword ptr ds:0A5A04Ch
0x7A57A6: sub     esp, 8
0x7A57A9: fstp    [esp+28h+var_24]; float
0x7A57AD: lea     ecx, [esp+28h+arg_0]
0x7A57B1: fldz
0x7A57B3: fstp    [esp+28h+var_28]; float
0x7A57B6: call    sub_78EA00
0x7A57BB: mov     eax, [esi+4Ch]
0x7A57BE: fstp    dword ptr [eax+edi*4]
0x7A57C1: add     edi, 1
0x7A57C4: cmp     edi, [esi+38h]
0x7A57C7: jl      short loc_7A57A0
0x7A57C9: xor     ecx, ecx
0x7A57CB: mov     eax, ebx
0x7A57CD: shl     eax, 4
0x7A57D0: mov     edx, 4
0x7A57D5: mul     edx
0x7A57D7: seto    cl
0x7A57DA: neg     ecx
0x7A57DC: or      ecx, eax
0x7A57DE: push    ecx; Size
0x7A57DF: call    FormHeapAlloc
0x7A57E4: lea     ecx, [ebx+ebx]
0x7A57E7: add     esp, 4
0x7A57EA: test    ecx, ecx
0x7A57EC: mov     [esi+48h], eax
0x7A57EF: jle     short loc_7A5831
0x7A57F1: fld1
0x7A57F3: fldz
0x7A57F5: fst     dword ptr [eax]
0x7A57F7: add     eax, 4
0x7A57FA: fxch    st(1)
0x7A57FC: add     eax, 4
0x7A57FF: fst     dword ptr [eax-4]
0x7A5802: add     eax, 4
0x7A5805: fst     dword ptr [eax-4]
0x7A5808: add     eax, 4
0x7A580B: fst     dword ptr [eax-4]
0x7A580E: add     eax, 4
0x7A5811: fst     dword ptr [eax-4]
0x7A5814: add     eax, 4
0x7A5817: fxch    st(1)
0x7A5819: add     eax, 4
0x7A581C: fst     dword ptr [eax-8]
0x7A581F: add     eax, 4
0x7A5822: sub     ecx, 1
0x7A5825: fst     dword ptr [eax-8]
0x7A5828: fst     dword ptr [eax-4]
0x7A582B: jnz     short loc_7A57F5
0x7A582D: fstp    st(1)
0x7A582F: fstp    st
0x7A5831: mov     eax, [esi+3Ch]
0x7A5834: xor     ecx, ecx
0x7A5836: mov     edx, 4
0x7A583B: mul     edx
0x7A583D: seto    cl
0x7A5840: neg     ecx
0x7A5842: or      ecx, eax
0x7A5844: push    ecx; Size
0x7A5845: call    FormHeapAlloc
0x7A584A: mov     ebp, [esi+38h]
0x7A584D: imul    ebp, ebx
0x7A5850: xor     ebx, ebx
0x7A5852: add     esp, 4
0x7A5855: shl     ebp, 5
0x7A5858: cmp     [esi+3Ch], ebx
0x7A585B: mov     [esi+44h], eax
0x7A585E: jle     short loc_7A58DE
0x7A5860: xor     edi, edi
0x7A5862: xor     ecx, ecx
0x7A5864: mov     eax, ebp
0x7A5866: mov     edx, 4
0x7A586B: mul     edx
0x7A586D: seto    cl
0x7A5870: neg     ecx
0x7A5872: or      ecx, eax
0x7A5874: push    ecx; Size
0x7A5875: call    FormHeapAlloc
0x7A587A: fldz
0x7A587C: mov     ecx, [esi+44h]
0x7A587F: mov     [edi+ecx], eax
0x7A5882: add     esp, 4
0x7A5885: xor     eax, eax
0x7A5887: cmp     ebp, 4
0x7A588A: jl      short loc_7A58BD
0x7A588C: lea     ecx, [ebp-3]
0x7A588F: mov     edx, [esi+44h]
0x7A5892: mov     edx, [edx+edi]
0x7A5895: fst     dword ptr [edx+eax*4]
0x7A5898: mov     edx, [esi+44h]
0x7A589B: mov     edx, [edx+edi]
0x7A589E: fst     dword ptr [edx+eax*4+4]
0x7A58A2: mov     edx, [esi+44h]
0x7A58A5: mov     edx, [edx+edi]
0x7A58A8: fst     dword ptr [edx+eax*4+8]
0x7A58AC: mov     edx, [esi+44h]
0x7A58AF: mov     edx, [edx+edi]
0x7A58B2: fst     dword ptr [edx+eax*4+0Ch]
0x7A58B6: add     eax, 4
0x7A58B9: cmp     eax, ecx
0x7A58BB: jl      short loc_7A588F
0x7A58BD: cmp     eax, ebp
0x7A58BF: jge     short loc_7A58D1
0x7A58C1: mov     ecx, [esi+44h]
0x7A58C4: mov     edx, [ecx+edi]
0x7A58C7: fst     dword ptr [edx+eax*4]
0x7A58CA: add     eax, 1
0x7A58CD: cmp     eax, ebp
0x7A58CF: jl      short loc_7A58C1
0x7A58D1: add     ebx, 1
0x7A58D4: fstp    st
0x7A58D6: add     edi, 4
0x7A58D9: cmp     ebx, [esi+3Ch]
0x7A58DC: jl      short loc_7A5862
0x7A58DE: lea     ecx, [esp+20h+arg_0]; void *
0x7A58E2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7A58EA: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7A58EF: mov     ecx, [esp+20h+var_C]
0x7A58F3: mov     large fs:0, ecx
0x7A58FA: pop     ecx
0x7A58FB: pop     edi
0x7A58FC: pop     esi
0x7A58FD: pop     ebp
0x7A58FE: pop     ebx
0x7A58FF: add     esp, 0Ch
0x7A5902: retn    4
