0x84D580: push    0FFFFFFFFh
0x84D582: push    offset SEH_879360
0x84D587: mov     eax, large fs:0
0x84D58D: push    eax
0x84D58E: push    ecx
0x84D58F: push    ebx
0x84D590: push    ebp
0x84D591: push    esi
0x84D592: push    edi
0x84D593: mov     eax, ds:0B30AACh
0x84D598: xor     eax, esp
0x84D59A: push    eax
0x84D59B: lea     eax, [esp+24h+var_C]
0x84D59F: mov     large fs:0, eax
0x84D5A5: mov     [esp+24h+var_10], ecx
0x84D5A9: mov     eax, [esp+24h+arg_8]
0x84D5AD: mov     eax, [eax+10h]
0x84D5B0: mov     edi, ds:0B45644h
0x84D5B6: push    eax
0x84D5B7: call    sub_848C40
0x84D5BC: mov     ecx, [edi+24h]
0x84D5BF: mov     ebx, [esp+24h+arg_C]
0x84D5C3: mov     esi, [ecx]
0x84D5C5: mov     edx, [ebx]
0x84D5C7: mov     eax, [edx+88h]
0x84D5CD: push    0
0x84D5CF: mov     ecx, ebx
0x84D5D1: mov     [esp+28h+arg_8], esi
0x84D5D5: call    eax
0x84D5D7: mov     esi, [esi+4]
0x84D5DA: mov     ebp, eax
0x84D5DC: cmp     esi, ebp
0x84D5DE: jz      short loc_84D617
0x84D5E0: test    esi, esi
0x84D5E2: jz      short loc_84D600
0x84D5E4: lea     ecx, [esi+4]
0x84D5E7: push    ecx; lpAddend
0x84D5E8: call    dword ptr ds:0A2807Ch
0x84D5EE: test    eax, eax
0x84D5F0: jnz     short loc_84D600
0x84D5F2: test    esi, esi
0x84D5F4: jz      short loc_84D600
0x84D5F6: mov     edx, [esi]
0x84D5F8: mov     eax, [edx]
0x84D5FA: push    1
0x84D5FC: mov     ecx, esi
0x84D5FE: call    eax
0x84D600: test    ebp, ebp
0x84D602: mov     esi, [esp+24h+arg_8]
0x84D606: mov     [esi+4], ebp
0x84D609: jz      short loc_84D61B
0x84D60B: add     ebp, 4
0x84D60E: push    ebp; lpAddend
0x84D60F: call    dword ptr ds:0A28078h
0x84D615: jmp     short loc_84D61B
0x84D617: mov     esi, [esp+24h+arg_8]
0x84D61B: test    esi, esi
0x84D61D: jz      short loc_84D639
0x84D61F: cmp     byte ptr ds:0B42CDDh, 0
0x84D626: jz      short loc_84D639
0x84D628: mov     edx, [ebx]
0x84D62A: mov     eax, [edx+78h]
0x84D62D: mov     ecx, ebx
0x84D62F: call    eax
0x84D631: push    eax
0x84D632: mov     ecx, esi
0x84D634: call    sub_7715E0
0x84D639: mov     ecx, [edi+24h]
0x84D63C: mov     esi, [ecx+4]
0x84D63F: mov     edx, [ebx]
0x84D641: mov     eax, [edx+8Ch]
0x84D647: push    0
0x84D649: mov     ecx, ebx
0x84D64B: mov     [esp+28h+arg_8], esi
0x84D64F: call    eax
0x84D651: test    eax, eax
0x84D653: jz      short loc_84D667
0x84D655: mov     edx, [ebx]
0x84D657: mov     eax, [edx+8Ch]
0x84D65D: push    0
0x84D65F: mov     ecx, ebx
0x84D661: call    eax
0x84D663: mov     ebp, eax
0x84D665: jmp     short loc_84D67C
0x84D667: test    dword ptr [ebx+1Ch], 80h
0x84D66E: mov     ebp, ds:0B430F0h
0x84D674: ja      short loc_84D67C
0x84D676: mov     ebp, ds:0B430DCh
0x84D67C: mov     esi, [esi+4]
0x84D67F: cmp     esi, ebp
0x84D681: jz      short loc_84D6BA
0x84D683: test    esi, esi
0x84D685: jz      short loc_84D6A3
0x84D687: lea     ecx, [esi+4]
0x84D68A: push    ecx; lpAddend
0x84D68B: call    dword ptr ds:0A2807Ch
0x84D691: test    eax, eax
0x84D693: jnz     short loc_84D6A3
0x84D695: test    esi, esi
0x84D697: jz      short loc_84D6A3
0x84D699: mov     edx, [esi]
0x84D69B: mov     eax, [edx]
0x84D69D: push    1
0x84D69F: mov     ecx, esi
0x84D6A1: call    eax
0x84D6A3: test    ebp, ebp
0x84D6A5: mov     esi, [esp+24h+arg_8]
0x84D6A9: mov     [esi+4], ebp
0x84D6AC: jz      short loc_84D6BE
0x84D6AE: add     ebp, 4
0x84D6B1: push    ebp; lpAddend
0x84D6B2: call    dword ptr ds:0A28078h
0x84D6B8: jmp     short loc_84D6BE
0x84D6BA: mov     esi, [esp+24h+arg_8]
0x84D6BE: test    esi, esi
0x84D6C0: jz      short loc_84D6DC
0x84D6C2: cmp     byte ptr ds:0B42CDDh, 0
0x84D6C9: jz      short loc_84D6DC
0x84D6CB: mov     edx, [ebx]
0x84D6CD: mov     eax, [edx+78h]
0x84D6D0: mov     ecx, ebx
0x84D6D2: call    eax
0x84D6D4: push    eax
0x84D6D5: mov     ecx, esi
0x84D6D7: call    sub_7715E0
0x84D6DC: mov     ebx, 1
0x84D6E1: add     [edi+60h], ebx
0x84D6E4: mov     [esp+24h+arg_8], edi
0x84D6E8: mov     esi, [esp+24h+var_10]
0x84D6EC: mov     edx, [esi+38h]
0x84D6EF: lea     ecx, [esp+24h+arg_8]
0x84D6F3: push    ecx
0x84D6F4: push    edx
0x84D6F5: lea     ecx, [esi+40h]
0x84D6F8: mov     [esp+2Ch+var_4], 0
0x84D700: call    sub_76CE40
0x84D705: or      eax, 0FFFFFFFFh
0x84D708: add     [edi+60h], eax
0x84D70B: mov     [esp+24h+var_4], eax
0x84D70F: jnz     short loc_84D718
0x84D711: mov     ecx, edi
0x84D713: call    sub_7604D0
0x84D718: add     [esi+38h], ebx
0x84D71B: mov     ecx, [esp+24h+var_C]
0x84D71F: mov     large fs:0, ecx
0x84D726: pop     ecx
0x84D727: pop     edi
0x84D728: pop     esi
0x84D729: pop     ebp
0x84D72A: pop     ebx
0x84D72B: add     esp, 10h
0x84D72E: retn    10h
