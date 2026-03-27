0x70E560: push    0FFFFFFFFh
0x70E562: push    offset SEH_70E560
0x70E567: mov     eax, large fs:0
0x70E56D: push    eax
0x70E56E: sub     esp, 0C8h
0x70E574: push    ebx
0x70E575: push    ebp
0x70E576: push    esi
0x70E577: push    edi
0x70E578: mov     eax, ds:0B30AACh
0x70E57D: xor     eax, esp
0x70E57F: push    eax
0x70E580: lea     eax, [esp+0E8h+var_C]
0x70E587: mov     large fs:0, eax
0x70E58D: mov     ebp, ecx
0x70E58F: mov     [esp+0E8h+var_D0], ebp
0x70E593: call    NiObject_constr
0x70E598: lea     edi, [ebp+8]
0x70E59B: xor     esi, esi
0x70E59D: mov     ecx, edi
0x70E59F: mov     [esp+0E8h+var_4], esi
0x70E5A6: mov     dword ptr [ebp+0], offset ??_7NiPixelData@@6B@; const NiPixelData::`vftable'
0x70E5AD: call    InitSurfacEData
0x70E5B2: mov     [ebp+4Ch], esi
0x70E5B5: mov     ebx, [esp+0E8h+arg_8]
0x70E5BC: mov     eax, [esp+0E8h+arg_C]
0x70E5C3: test    eax, eax
0x70E5C5: mov     ecx, 11h
0x70E5CA: mov     esi, ebx
0x70E5CC: rep movsd
0x70E5CE: mov     esi, [esp+0E8h+arg_4]
0x70E5D5: mov     edi, [esp+0E8h+arg_0]
0x70E5DC: mov     byte ptr [esp+0E8h+var_4], 1
0x70E5E4: jnz     short loc_70E5F0
0x70E5E6: push    esi
0x70E5E7: push    edi
0x70E5E8: call    sub_70E2F0
0x70E5ED: add     esp, 8
0x70E5F0: mov     [ebp+60h], eax
0x70E5F3: mov     eax, [esp+0E8h+arg_10]
0x70E5FA: mov     [ebp+6Ch], eax
0x70E5FD: mov     eax, [ebx+4]
0x70E600: xor     ecx, ecx
0x70E602: cmp     eax, 4
0x70E605: mov     [esp+0E8h+var_CC], ecx
0x70E609: jl      short loc_70E614
0x70E60B: cmp     eax, 6
0x70E60E: jle     loc_70E6BC
0x70E614: movzx   ebx, byte ptr [ebx+1]
0x70E618: shr     ebx, 3
0x70E61B: mov     [esp+0E8h+var_D4], ebx
0x70E61F: mov     [ebp+64h], ebx
0x70E622: jz      short loc_70E675
0x70E624: xor     eax, eax
0x70E626: cmp     [ebp+60h], ecx
0x70E629: jbe     loc_70E722
0x70E62F: jmp     short loc_70E635
0x70E631: mov     ebx, [esp+0E8h+var_D4]
0x70E635: test    edi, edi
0x70E637: mov     edx, edi
0x70E639: jnz     short loc_70E640
0x70E63B: mov     edx, 1
0x70E640: test    esi, esi
0x70E642: mov     [esp+eax*4+0E8h+Src], edx
0x70E646: mov     ecx, esi
0x70E648: jnz     short loc_70E64F
0x70E64A: mov     ecx, 1
0x70E64F: imul    ebx, ecx
0x70E652: imul    ebx, edx
0x70E655: add     ebx, [esp+eax*4+0E8h+var_CC]
0x70E659: mov     [esp+eax*4+0E8h+var_4C], ecx
0x70E660: mov     [esp+eax*4+0E8h+var_C8], ebx
0x70E664: add     eax, 1
0x70E667: shr     edi, 1
0x70E669: shr     esi, 1
0x70E66B: cmp     eax, [ebp+60h]
0x70E66E: jb      short loc_70E631
0x70E670: jmp     loc_70E722
0x70E675: cmp     [ebp+60h], ecx
0x70E678: jbe     loc_70E722
0x70E67E: mov     ebx, [ebp+60h]
0x70E681: test    edi, edi
0x70E683: mov     edx, edi
0x70E685: jnz     short loc_70E68C
0x70E687: mov     edx, 1
0x70E68C: test    esi, esi
0x70E68E: mov     [esp+ecx*4+0E8h+Src], edx
0x70E692: mov     eax, esi
0x70E694: jnz     short loc_70E69B
0x70E696: mov     eax, 1
0x70E69B: mov     [esp+ecx*4+0E8h+var_4C], eax
0x70E6A2: imul    eax, edx
0x70E6A5: shr     eax, 1
0x70E6A7: add     eax, [esp+ecx*4+0E8h+var_CC]
0x70E6AB: add     ecx, 1
0x70E6AE: mov     [esp+ecx*4+0E8h+var_CC], eax
0x70E6B2: shr     edi, 1
0x70E6B4: shr     esi, 1
0x70E6B6: cmp     ecx, ebx
0x70E6B8: jb      short loc_70E681
0x70E6BA: jmp     short loc_70E722
0x70E6BC: xor     edx, edx
0x70E6BE: mov     [ebp+64h], ecx
0x70E6C1: cmp     dword ptr [ebx+4], 4
0x70E6C5: setnz   dl
0x70E6C8: xor     eax, eax
0x70E6CA: cmp     [ebp+60h], ecx
0x70E6CD: lea     edx, ds:8[edx*8]
0x70E6D4: mov     ebx, edx
0x70E6D6: jbe     short loc_70E722
0x70E6D8: test    edi, edi
0x70E6DA: mov     edx, edi
0x70E6DC: jnz     short loc_70E6E3
0x70E6DE: mov     edx, 1
0x70E6E3: test    esi, esi
0x70E6E5: mov     [esp+eax*4+0E8h+Src], edx
0x70E6E9: mov     ecx, esi
0x70E6EB: jnz     short loc_70E6F2
0x70E6ED: mov     ecx, 1
0x70E6F2: mov     [esp+eax*4+0E8h+var_4C], ecx
0x70E6F9: add     ecx, 3
0x70E6FC: and     ecx, 0FFFFFFFCh
0x70E6FF: add     edx, 3
0x70E702: and     edx, 0FFFFFFFCh
0x70E705: imul    ecx, edx
0x70E708: shr     ecx, 4
0x70E70B: imul    ecx, ebx
0x70E70E: add     ecx, [esp+eax*4+0E8h+var_CC]
0x70E712: add     eax, 1
0x70E715: mov     [esp+eax*4+0E8h+var_CC], ecx
0x70E719: shr     edi, 1
0x70E71B: shr     esi, 1
0x70E71D: cmp     eax, [ebp+60h]
0x70E720: jb      short loc_70E6D8
0x70E722: mov     eax, [ebp+60h]
0x70E725: mov     ecx, [esp+eax*4+0E8h+var_CC]
0x70E729: mov     edx, [esp+0E8h+arg_10]
0x70E730: push    ecx
0x70E731: push    edx
0x70E732: push    eax
0x70E733: mov     ecx, ebp
0x70E735: call    sub_732280
0x70E73A: mov     esi, [ebp+60h]
0x70E73D: mov     ecx, [ebp+54h]
0x70E740: add     esi, esi
0x70E742: add     esi, esi
0x70E744: push    esi; Size
0x70E745: lea     eax, [esp+0ECh+Src]
0x70E749: push    eax; Src
0x70E74A: push    ecx; Dst
0x70E74B: call    _memcpy
0x70E750: mov     eax, [ebp+58h]
0x70E753: push    esi; Size
0x70E754: lea     edx, [esp+0F8h+var_4C]
0x70E75B: push    edx; Src
0x70E75C: push    eax; Dst
0x70E75D: call    _memcpy
0x70E762: mov     ecx, [ebp+60h]
0x70E765: lea     edx, ds:4[ecx*4]
0x70E76C: mov     ecx, [ebp+5Ch]
0x70E76F: push    edx; Size
0x70E770: lea     eax, [esp+104h+var_CC]
0x70E774: push    eax; Src
0x70E775: push    ecx; Dst
0x70E776: call    _memcpy
0x70E77B: add     esp, 24h
0x70E77E: mov     dword ptr [ebp+68h], 1
0x70E785: mov     eax, ebp
0x70E787: mov     ecx, [esp+0E8h+var_C]
0x70E78E: mov     large fs:0, ecx
0x70E795: pop     ecx
0x70E796: pop     edi
0x70E797: pop     esi
0x70E798: pop     ebp
0x70E799: pop     ebx
0x70E79A: add     esp, 0D4h
0x70E7A0: retn    14h
