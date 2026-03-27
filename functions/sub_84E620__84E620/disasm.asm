0x84E620: push    0FFFFFFFFh
0x84E622: push    offset SEH_879360
0x84E627: mov     eax, large fs:0
0x84E62D: push    eax
0x84E62E: push    ecx
0x84E62F: push    ebx
0x84E630: push    ebp
0x84E631: push    esi
0x84E632: push    edi
0x84E633: mov     eax, ds:0B30AACh
0x84E638: xor     eax, esp
0x84E63A: push    eax
0x84E63B: lea     eax, [esp+24h+var_C]
0x84E63F: mov     large fs:0, eax
0x84E645: mov     esi, ecx
0x84E647: mov     [esp+24h+var_10], esi
0x84E64B: mov     edi, [esp+24h+arg_8]
0x84E64F: mov     eax, [edi+10h]
0x84E652: mov     ebx, ds:0B456B8h
0x84E658: push    eax
0x84E659: call    sub_848DA0
0x84E65E: mov     edi, [edi+0Ch]
0x84E661: push    edi
0x84E662: mov     ecx, esi
0x84E664: call    sub_848E50
0x84E669: mov     eax, [ebx+24h]
0x84E66C: mov     esi, [esp+24h+arg_C]
0x84E670: mov     edi, [eax]
0x84E672: mov     edx, [esi]
0x84E674: mov     eax, [edx+88h]
0x84E67A: push    0
0x84E67C: mov     ecx, esi
0x84E67E: mov     [esp+28h+arg_8], edi
0x84E682: call    eax
0x84E684: mov     edi, [edi+4]
0x84E687: mov     ebp, eax
0x84E689: cmp     edi, ebp
0x84E68B: jz      short loc_84E6C4
0x84E68D: test    edi, edi
0x84E68F: jz      short loc_84E6AD
0x84E691: lea     ecx, [edi+4]
0x84E694: push    ecx; lpAddend
0x84E695: call    dword ptr ds:0A2807Ch
0x84E69B: test    eax, eax
0x84E69D: jnz     short loc_84E6AD
0x84E69F: test    edi, edi
0x84E6A1: jz      short loc_84E6AD
0x84E6A3: mov     edx, [edi]
0x84E6A5: mov     eax, [edx]
0x84E6A7: push    1
0x84E6A9: mov     ecx, edi
0x84E6AB: call    eax
0x84E6AD: test    ebp, ebp
0x84E6AF: mov     edi, [esp+24h+arg_8]
0x84E6B3: mov     [edi+4], ebp
0x84E6B6: jz      short loc_84E6C8
0x84E6B8: add     ebp, 4
0x84E6BB: push    ebp; lpAddend
0x84E6BC: call    dword ptr ds:0A28078h
0x84E6C2: jmp     short loc_84E6C8
0x84E6C4: mov     edi, [esp+24h+arg_8]
0x84E6C8: test    edi, edi
0x84E6CA: jz      short loc_84E6E6
0x84E6CC: cmp     byte ptr ds:0B42CDDh, 0
0x84E6D3: jz      short loc_84E6E6
0x84E6D5: mov     edx, [esi]
0x84E6D7: mov     eax, [edx+78h]
0x84E6DA: mov     ecx, esi
0x84E6DC: call    eax
0x84E6DE: push    eax
0x84E6DF: mov     ecx, edi
0x84E6E1: call    sub_7715E0
0x84E6E6: mov     ecx, [ebx+24h]
0x84E6E9: mov     edi, [ecx+4]
0x84E6EC: mov     edx, [esi]
0x84E6EE: mov     eax, [edx+8Ch]
0x84E6F4: push    0
0x84E6F6: mov     ecx, esi
0x84E6F8: mov     [esp+28h+arg_8], edi
0x84E6FC: call    eax
0x84E6FE: test    eax, eax
0x84E700: jz      short loc_84E714
0x84E702: mov     edx, [esi]
0x84E704: mov     eax, [edx+8Ch]
0x84E70A: push    0
0x84E70C: mov     ecx, esi
0x84E70E: call    eax
0x84E710: mov     ebp, eax
0x84E712: jmp     short loc_84E729
0x84E714: test    dword ptr [esi+1Ch], 80h
0x84E71B: mov     ebp, ds:0B430F0h
0x84E721: ja      short loc_84E729
0x84E723: mov     ebp, ds:0B430DCh
0x84E729: mov     edi, [edi+4]
0x84E72C: cmp     edi, ebp
0x84E72E: jz      short loc_84E767
0x84E730: test    edi, edi
0x84E732: jz      short loc_84E750
0x84E734: lea     ecx, [edi+4]
0x84E737: push    ecx; lpAddend
0x84E738: call    dword ptr ds:0A2807Ch
0x84E73E: test    eax, eax
0x84E740: jnz     short loc_84E750
0x84E742: test    edi, edi
0x84E744: jz      short loc_84E750
0x84E746: mov     edx, [edi]
0x84E748: mov     eax, [edx]
0x84E74A: push    1
0x84E74C: mov     ecx, edi
0x84E74E: call    eax
0x84E750: test    ebp, ebp
0x84E752: mov     edi, [esp+24h+arg_8]
0x84E756: mov     [edi+4], ebp
0x84E759: jz      short loc_84E76B
0x84E75B: add     ebp, 4
0x84E75E: push    ebp; lpAddend
0x84E75F: call    dword ptr ds:0A28078h
0x84E765: jmp     short loc_84E76B
0x84E767: mov     edi, [esp+24h+arg_8]
0x84E76B: test    edi, edi
0x84E76D: jz      short loc_84E789
0x84E76F: cmp     byte ptr ds:0B42CDDh, 0
0x84E776: jz      short loc_84E789
0x84E778: mov     edx, [esi]
0x84E77A: mov     eax, [edx+78h]
0x84E77D: mov     ecx, esi
0x84E77F: call    eax
0x84E781: push    eax
0x84E782: mov     ecx, edi
0x84E784: call    sub_7715E0
0x84E789: mov     ecx, [ebx+24h]
0x84E78C: mov     edi, [ecx+8]
0x84E78F: mov     edx, [esi]
0x84E791: mov     eax, [edx+90h]
0x84E797: push    0
0x84E799: mov     ecx, esi
0x84E79B: mov     [esp+28h+arg_8], edi
0x84E79F: call    eax
0x84E7A1: mov     edi, [edi+4]
0x84E7A4: mov     ebp, eax
0x84E7A6: cmp     edi, ebp
0x84E7A8: jz      short loc_84E7E1
0x84E7AA: test    edi, edi
0x84E7AC: jz      short loc_84E7CA
0x84E7AE: lea     ecx, [edi+4]
0x84E7B1: push    ecx; lpAddend
0x84E7B2: call    dword ptr ds:0A2807Ch
0x84E7B8: test    eax, eax
0x84E7BA: jnz     short loc_84E7CA
0x84E7BC: test    edi, edi
0x84E7BE: jz      short loc_84E7CA
0x84E7C0: mov     edx, [edi]
0x84E7C2: mov     eax, [edx]
0x84E7C4: push    1
0x84E7C6: mov     ecx, edi
0x84E7C8: call    eax
0x84E7CA: test    ebp, ebp
0x84E7CC: mov     edi, [esp+24h+arg_8]
0x84E7D0: mov     [edi+4], ebp
0x84E7D3: jz      short loc_84E7E5
0x84E7D5: add     ebp, 4
0x84E7D8: push    ebp; lpAddend
0x84E7D9: call    dword ptr ds:0A28078h
0x84E7DF: jmp     short loc_84E7E5
0x84E7E1: mov     edi, [esp+24h+arg_8]
0x84E7E5: test    edi, edi
0x84E7E7: jz      short loc_84E803
0x84E7E9: cmp     byte ptr ds:0B42CDDh, 0
0x84E7F0: jz      short loc_84E803
0x84E7F2: mov     edx, [esi]
0x84E7F4: mov     eax, [edx+78h]
0x84E7F7: mov     ecx, esi
0x84E7F9: call    eax
0x84E7FB: push    eax
0x84E7FC: mov     ecx, edi
0x84E7FE: call    sub_7715E0
0x84E803: mov     edi, 1
0x84E808: add     [ebx+60h], edi
0x84E80B: mov     [esp+24h+arg_8], ebx
0x84E80F: mov     esi, [esp+24h+var_10]
0x84E813: mov     edx, [esi+38h]
0x84E816: lea     ecx, [esp+24h+arg_8]
0x84E81A: push    ecx
0x84E81B: push    edx
0x84E81C: lea     ecx, [esi+40h]
0x84E81F: mov     [esp+2Ch+var_4], 0
0x84E827: call    sub_76CE40
0x84E82C: or      eax, 0FFFFFFFFh
0x84E82F: add     [ebx+60h], eax
0x84E832: mov     [esp+24h+var_4], eax
0x84E836: jnz     short loc_84E83F
0x84E838: mov     ecx, ebx
0x84E83A: call    sub_7604D0
0x84E83F: add     [esi+38h], edi
0x84E842: mov     ecx, dword ptr [esp+24h+var_C]
0x84E846: mov     large fs:0, ecx
0x84E84D: pop     ecx
0x84E84E: pop     edi
0x84E84F: pop     esi
0x84E850: pop     ebp
0x84E851: pop     ebx
0x84E852: add     esp, 10h
0x84E855: retn    10h
