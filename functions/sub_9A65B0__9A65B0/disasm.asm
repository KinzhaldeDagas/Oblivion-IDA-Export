0x9A65B0: push    ecx
0x9A65B1: push    ebx
0x9A65B2: mov     ebx, [esp+8+arg_0]
0x9A65B6: mov     eax, [ebx+0Ch]
0x9A65B9: push    esi
0x9A65BA: lea     edx, [eax+1]
0x9A65BD: lea     ecx, [ecx+0]
0x9A65C0: mov     cl, [eax]
0x9A65C2: add     eax, 1
0x9A65C5: test    cl, cl
0x9A65C7: jnz     short loc_9A65C0
0x9A65C9: sub     eax, edx
0x9A65CB: push    edi
0x9A65CC: lea     edi, [eax+1]
0x9A65CF: push    edi; Size
0x9A65D0: call    FormHeapAlloc
0x9A65D5: mov     esi, eax
0x9A65D7: mov     eax, [ebx+0Ch]
0x9A65DA: push    eax; Src
0x9A65DB: push    edi; SizeInBytes
0x9A65DC: push    esi; Dst
0x9A65DD: call    _strcpy_s
0x9A65E2: push    offset a@@; "@@"
0x9A65E7: push    esi; Str
0x9A65E8: call    _strstr
0x9A65ED: add     esp, 18h
0x9A65F0: test    eax, eax
0x9A65F2: pop     edi
0x9A65F3: jz      short loc_9A665A
0x9A65F5: lea     ecx, [esp+0Ch+var_4]
0x9A65F9: push    ecx; int
0x9A65FA: push    esi; Str1
0x9A65FB: mov     byte ptr [eax], 0
0x9A65FE: mov     [esp+14h+arg_0], 0
0x9A6606: call    sub_9A55C0
0x9A660B: add     esp, 8
0x9A660E: test    al, al
0x9A6610: jz      short loc_9A665A
0x9A6612: push    esi
0x9A6613: call    FormHeapFree
0x9A6618: mov     esi, [esp+10h+var_4]
0x9A661C: lea     edx, [esp+10h+var_4]
0x9A6620: push    edx
0x9A6621: lea     eax, [esp+14h+arg_0]
0x9A6625: push    eax
0x9A6626: push    esi
0x9A6627: call    sub_9A5610
0x9A662C: movzx   ecx, byte_B4294C[eax]
0x9A6633: mov     edx, [ebx+14h]
0x9A6636: and     edx, 0FFFFFF00h
0x9A663C: or      ecx, edx
0x9A663E: add     esp, 10h
0x9A6641: test    esi, esi
0x9A6643: mov     [ebx+14h], ecx
0x9A6646: jz      short loc_9A665A
0x9A6648: mov     eax, [esp+0Ch+arg_0]
0x9A664C: mov     [ebx+10h], esi
0x9A664F: mov     [ebx+20h], eax
0x9A6652: pop     esi
0x9A6653: xor     eax, eax
0x9A6655: pop     ebx
0x9A6656: pop     ecx
0x9A6657: retn    4
0x9A665A: pop     esi
0x9A665B: mov     eax, 80000040h
0x9A6660: pop     ebx
0x9A6661: pop     ecx
0x9A6662: retn    4
