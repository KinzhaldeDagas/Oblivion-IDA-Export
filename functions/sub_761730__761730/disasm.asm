0x761730: sub     esp, 10h
0x761733: push    ebx
0x761734: mov     ebx, [esp+14h+arg_0]
0x761738: test    ebx, ebx
0x76173A: push    ebp
0x76173B: mov     ebp, ecx
0x76173D: jnz     short loc_761749
0x76173F: pop     ebp
0x761740: xor     eax, eax
0x761742: pop     ebx
0x761743: add     esp, 10h
0x761746: retn    4
0x761749: mov     eax, [ebx]
0x76174B: mov     edx, [eax+4Ch]
0x76174E: push    esi
0x76174F: push    edi
0x761750: mov     ecx, ebx
0x761752: call    edx
0x761754: mov     [ebp+54h], eax
0x761757: mov     eax, [ebx]
0x761759: mov     edx, [eax+50h]
0x76175C: mov     ecx, ebx
0x76175E: call    edx
0x761760: mov     [ebp+58h], eax
0x761763: mov     dword ptr [ebp+5Ch], 1
0x76176A: mov     eax, [ebx+18h]
0x76176D: mov     ecx, [ebx+1Ch]
0x761770: mov     edx, [ebx+20h]
0x761773: mov     [esp+18h+var_4], eax
0x761777: mov     eax, [ebp+8]
0x76177A: add     eax, 74Ch
0x76177F: push    eax
0x761780: lea     eax, [esp+1Ch+var_4]
0x761784: push    eax
0x761785: mov     [esp+20h], ecx
0x761789: mov     [esp+20h+arg_0], edx
0x76178D: call    sub_773960
0x761792: lea     edi, [ebp+0Ch]
0x761795: mov     ecx, 11h
0x76179A: mov     esi, eax
0x76179C: rep movsd
0x76179E: mov     esi, [eax+0Ch]
0x7617A1: xor     ecx, ecx
0x7617A3: add     esp, 8
0x7617A6: xor     edx, edx
0x7617A8: cmp     [ebx+3Ch], cl
0x7617AB: mov     [esp+18h+var_8], eax
0x7617AF: jz      short loc_7617B8
0x7617B1: mov     edx, 1
0x7617B6: jmp     short loc_7617BD
0x7617B8: mov     ecx, 1
0x7617BD: cmp     byte ptr [ebx+34h], 0
0x7617C1: jz      short loc_7617C6
0x7617C3: mov     esi, [ebx+38h]
0x7617C6: mov     eax, [ebp+8]
0x7617C9: mov     eax, [eax+280h]
0x7617CF: push    0
0x7617D1: lea     ebx, [esp+1Ch+arg_8]
0x7617D5: push    ebx
0x7617D6: push    ecx
0x7617D7: mov     ecx, [ebp+58h]
0x7617DA: push    esi
0x7617DB: push    edx
0x7617DC: mov     edx, [ebp+54h]
0x7617DF: push    1
0x7617E1: push    ecx
0x7617E2: mov     [esp+34h+arg_8], 0
0x7617EA: mov     edi, [eax]
0x7617EC: push    edx
0x7617ED: push    eax
0x7617EE: mov     eax, [edi+5Ch]
0x7617F1: call    eax
0x7617F3: test    eax, eax
0x7617F5: jge     short loc_76181E
0x7617F7: push    eax
0x7617F8: call    sub_7736F0
0x7617FD: push    eax
0x7617FE: push    offset aNidx9renderedt; "NiDX9RenderedTextureData::CreateSurf> F"...
0x761803: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x761808: add     esp, 0Ch
0x76180B: pop     edi
0x76180C: pop     esi
0x76180D: mov     dword ptr [ebp+50h], 0
0x761814: pop     ebp
0x761815: xor     eax, eax
0x761817: pop     ebx
0x761818: add     esp, 10h
0x76181B: retn    4
0x76181E: mov     eax, [ebp+58h]
0x761821: imul    eax, [ebp+54h]
0x761825: mov     ecx, [esp+20h+arg_0]
0x761829: add     esi, 0FFFFFFECh; switch 97 cases
0x76182C: cmp     esi, 60h
0x76182F: mov     [ebp+50h], ecx
0x761832: mov     [ebp+60h], eax
0x761835: ja      short def_76183E; jumptable 0076183E default case, cases 27-35,37-80,82-112,115
0x761837: movzx   edx, ds:byte_7618BC[esi]
0x76183E: jmp     ds:jpt_76183E[edx*4]; switch jump
0x761845: add     eax, eax; jumptable 0076183E cases 23-26,81
0x761847: jmp     short loc_761868
0x761849: lea     ecx, [eax+eax*2]; jumptable 0076183E case 20
0x76184C: mov     [ebp+60h], ecx
0x76184F: jmp     short def_76183E; jumptable 0076183E default case, cases 27-35,37-80,82-112,115
0x761851: lea     edx, ds:0[eax*4]; jumptable 0076183E cases 21,22,114
0x761858: mov     [ebp+60h], edx
0x76185B: jmp     short def_76183E; jumptable 0076183E default case, cases 27-35,37-80,82-112,115
0x76185D: add     eax, eax; jumptable 0076183E cases 36,113
0x76185F: add     eax, eax
0x761861: add     eax, eax
0x761863: jmp     short loc_761868
0x761865: shl     eax, 4; jumptable 0076183E case 116
0x761868: mov     [ebp+60h], eax
0x76186B: mov     ecx, [ebp+60h]; jumptable 0076183E default case, cases 27-35,37-80,82-112,115
0x76186E: add     ds:0B42064h, ecx
0x761874: mov     ebp, [ebp+60h]
0x761877: mov     eax, ebp
0x761879: and     eax, 0FFFFF000h
0x76187E: xor     ecx, ecx
0x761880: cmp     eax, ebp
0x761882: jz      short loc_76188D
0x761884: sub     eax, ebp
0x761886: add     eax, 1000h
0x76188B: mov     ecx, eax
0x76188D: add     ds:0B42068h, ecx
0x761893: mov     eax, [esp+20h+var_10]
0x761897: pop     edi
0x761898: pop     esi
0x761899: pop     ebp
0x76189A: pop     ebx
0x76189B: add     esp, 10h
0x76189E: retn    4
