0x6CF490: push    0FFFFFFFFh
0x6CF492: push    offset SEH_6CF490
0x6CF497: mov     eax, large fs:0
0x6CF49D: push    eax
0x6CF49E: push    ebx
0x6CF49F: push    ebp
0x6CF4A0: push    esi
0x6CF4A1: push    edi
0x6CF4A2: mov     eax, ds:0B30AACh
0x6CF4A7: xor     eax, esp
0x6CF4A9: push    eax
0x6CF4AA: lea     eax, [esp+20h+var_C]
0x6CF4AE: mov     large fs:0, eax
0x6CF4B4: mov     ebp, ecx
0x6CF4B6: mov     eax, [esp+20h+arg_4]
0x6CF4BA: mov     ebx, [esp+20h+arg_0]
0x6CF4BE: push    eax
0x6CF4BF: push    ebx
0x6CF4C0: call    sub_6CD3D0
0x6CF4C5: movzx   edi, byte ptr [ebp+0Dh]
0x6CF4C9: xor     ecx, ecx
0x6CF4CB: mov     eax, edi
0x6CF4CD: mov     edx, 68h ; 'h'
0x6CF4D2: mul     edx
0x6CF4D4: seto    cl
0x6CF4D7: neg     ecx
0x6CF4D9: or      ecx, eax
0x6CF4DB: push    ecx; Size
0x6CF4DC: call    FormHeapAlloc
0x6CF4E1: mov     esi, eax
0x6CF4E3: add     esp, 4
0x6CF4E6: mov     [esp+20h+arg_4], esi
0x6CF4EA: test    esi, esi
0x6CF4EC: mov     [esp+20h+var_4], 0
0x6CF4F4: jz      short loc_6CF506
0x6CF4F6: push    offset sub_6C3730
0x6CF4FB: push    edi
0x6CF4FC: push    68h ; 'h'
0x6CF4FE: push    esi
0x6CF4FF: call    sub_401080
0x6CF504: jmp     short loc_6CF508
0x6CF506: xor     esi, esi
0x6CF508: xor     dl, dl
0x6CF50A: mov     [ebx+50h], esi
0x6CF50D: cmp     [ebp+0Dh], dl
0x6CF510: jbe     short loc_6CF531
0x6CF512: mov     esi, [ebp+50h]
0x6CF515: mov     edi, [ebx+50h]
0x6CF518: movzx   eax, dl
0x6CF51B: imul    eax, 68h ; 'h'
0x6CF51E: add     esi, eax
0x6CF520: add     edi, eax
0x6CF522: mov     ecx, 1Ah
0x6CF527: add     dl, 1
0x6CF52A: rep movsd
0x6CF52C: cmp     dl, [ebp+0Dh]
0x6CF52F: jb      short loc_6CF512
0x6CF531: lea     esi, [ebp+30h]
0x6CF534: lea     edi, [ebx+30h]
0x6CF537: mov     ecx, 8
0x6CF53C: rep movsd
0x6CF53E: mov     ecx, [esp+20h+var_C]
0x6CF542: mov     large fs:0, ecx
0x6CF549: pop     ecx
0x6CF54A: pop     edi
0x6CF54B: pop     esi
0x6CF54C: pop     ebp
0x6CF54D: pop     ebx
0x6CF54E: add     esp, 0Ch
0x6CF551: retn    8
