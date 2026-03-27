0x78C4D0: push    ebp
0x78C4D1: mov     ebp, esp
0x78C4D3: push    0FFFFFFFFh
0x78C4D5: push    offset SEH_78C4D0
0x78C4DA: mov     eax, large fs:0
0x78C4E0: push    eax
0x78C4E1: sub     esp, 40h
0x78C4E4: push    ebx
0x78C4E5: push    esi
0x78C4E6: push    edi
0x78C4E7: mov     eax, ds:0B30AACh
0x78C4EC: xor     eax, ebp
0x78C4EE: push    eax
0x78C4EF: lea     eax, [ebp+var_C]
0x78C4F2: mov     large fs:0, eax
0x78C4F8: mov     [ebp+var_10], esp
0x78C4FB: mov     esi, ds:0B42988h
0x78C501: cmp     esi, ds:0B4298Ch
0x78C507: mov     [ebp+var_4], 0
0x78C50E: jbe     short loc_78C515
0x78C510: call    __invalid_parameter_noinfo
0x78C515: mov     edi, offset unk_B42984
0x78C51A: lea     ebx, [ebx+0]
0x78C520: mov     ebx, ds:0B4298Ch
0x78C526: cmp     ds:0B42988h, ebx
0x78C52C: jbe     short loc_78C533
0x78C52E: call    __invalid_parameter_noinfo
0x78C533: test    edi, edi
0x78C535: jz      short loc_78C53F
0x78C537: cmp     edi, offset unk_B42984
0x78C53D: jz      short loc_78C544
0x78C53F: call    __invalid_parameter_noinfo
0x78C544: cmp     esi, ebx
0x78C546: jz      loc_78C68B
0x78C54C: mov     eax, [ebp+arg_0]
0x78C54F: test    eax, eax
0x78C551: jnz     loc_78C60B
0x78C557: test    edi, edi
0x78C559: jnz     short loc_78C560
0x78C55B: call    __invalid_parameter_noinfo
0x78C560: cmp     esi, [edi+8]
0x78C563: jb      short loc_78C56A
0x78C565: call    __invalid_parameter_noinfo
0x78C56A: mov     eax, [esi]
0x78C56C: mov     ecx, [eax+10h]
0x78C56F: mov     ebx, 1
0x78C574: cmp     [ecx+8], ebx
0x78C577: jnz     short loc_78C58C
0x78C579: cmp     esi, [edi+8]
0x78C57C: jb      short loc_78C583
0x78C57E: call    __invalid_parameter_noinfo
0x78C583: mov     edx, [esi]
0x78C585: mov     eax, [edx+4]
0x78C588: mov     byte ptr [eax+12h], 0
0x78C58C: cmp     esi, [edi+8]
0x78C58F: jb      short loc_78C596
0x78C591: call    __invalid_parameter_noinfo
0x78C596: mov     eax, [esi]
0x78C598: mov     ecx, [eax+10h]
0x78C59B: cmp     [ecx+0Ch], ebx
0x78C59E: jnz     short loc_78C5B3
0x78C5A0: cmp     esi, [edi+8]
0x78C5A3: jb      short loc_78C5AA
0x78C5A5: call    __invalid_parameter_noinfo
0x78C5AA: mov     edx, [esi]
0x78C5AC: mov     eax, [edx+60h]
0x78C5AF: mov     byte ptr [eax+12h], 0
0x78C5B3: cmp     esi, [edi+8]
0x78C5B6: jb      short loc_78C5BD
0x78C5B8: call    __invalid_parameter_noinfo
0x78C5BD: mov     eax, [esi]
0x78C5BF: mov     ecx, [eax+10h]
0x78C5C2: cmp     [ecx+10h], ebx
0x78C5C5: jz      short loc_78C5DC
0x78C5C7: cmp     esi, [edi+8]
0x78C5CA: jb      short loc_78C5D1
0x78C5CC: call    __invalid_parameter_noinfo
0x78C5D1: mov     edx, [esi]
0x78C5D3: mov     eax, [edx+10h]
0x78C5D6: cmp     byte ptr [eax+14h], 0
0x78C5DA: jz      short loc_78C5F0
0x78C5DC: cmp     esi, [edi+8]
0x78C5DF: jb      short loc_78C5E6
0x78C5E1: call    __invalid_parameter_noinfo
0x78C5E6: mov     ecx, [esi]
0x78C5E8: mov     ecx, [ecx+8]
0x78C5EB: call    sub_7982D0
0x78C5F0: test    edi, edi
0x78C5F2: jnz     short loc_78C5F9
0x78C5F4: call    __invalid_parameter_noinfo
0x78C5F9: cmp     esi, [edi+8]
0x78C5FC: jb      short loc_78C603
0x78C5FE: call    __invalid_parameter_noinfo
0x78C603: add     esi, 4
0x78C606: jmp     loc_78C520
0x78C60B: cmp     eax, 1
0x78C60E: jnz     short loc_78C5F0
0x78C610: test    edi, edi
0x78C612: jnz     short loc_78C619
0x78C614: call    __invalid_parameter_noinfo
0x78C619: cmp     esi, [edi+8]
0x78C61C: jb      short loc_78C623
0x78C61E: call    __invalid_parameter_noinfo
0x78C623: mov     edx, [esi]
0x78C625: mov     ecx, [edx+8]
0x78C628: call    sub_7982D0
0x78C62D: cmp     esi, [edi+8]
0x78C630: jb      short loc_78C637
0x78C632: call    __invalid_parameter_noinfo
0x78C637: mov     eax, [esi]
0x78C639: mov     ecx, [eax+14h]
0x78C63C: mov     byte ptr [ecx+30h], 0
0x78C640: jmp     short loc_78C5F0
0x78C642: mov     ecx, [ebp+var_14]
0x78C645: mov     edx, [ecx]
0x78C647: mov     eax, [edx+4]
0x78C64A: call    eax
0x78C64C: push    eax
0x78C64D: push    offset aCspeedtreertNo; "CSpeedTreeRT::NotifyAllTreesOfEvent"
0x78C652: push    offset aSFailedS; "%s - failed [%s]"
0x78C657: lea     esi, [ebp+var_30]
0x78C65A: call    sub_7A54A0
0x78C65F: add     esp, 0Ch
0x78C662: cmp     dword ptr [eax+18h], 10h
0x78C666: mov     byte ptr [ebp+var_4], 2
0x78C66A: jb      short loc_78C671
0x78C66C: mov     eax, [eax+4]
0x78C66F: jmp     short loc_78C674
0x78C671: add     eax, 4
0x78C674: push    eax; Src
0x78C675: call    sub_7895E0
0x78C67A: add     esp, 4
0x78C67D: lea     ecx, [ebp+var_30]
0x78C680: call    sub_79AB00
0x78C685: mov     eax, offset loc_78C68B
0x78C68A: retn
0x78C68B: mov     ecx, [ebp+var_C]
0x78C68E: mov     large fs:0, ecx
0x78C695: pop     ecx
0x78C696: pop     edi
0x78C697: pop     esi
0x78C698: pop     ebx
0x78C699: mov     esp, ebp
0x78C69B: pop     ebp
0x78C69C: retn
0x78C69D: push    offset aCspeedtreertNo; "CSpeedTreeRT::NotifyAllTreesOfEvent"
0x78C6A2: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C6A7: lea     esi, [ebp+var_4C]
0x78C6AA: call    sub_7A54A0
0x78C6AF: add     esp, 8
0x78C6B2: cmp     dword ptr [eax+18h], 10h
0x78C6B6: mov     byte ptr [ebp+var_4], 3
0x78C6BA: jb      short loc_78C6C1
0x78C6BC: mov     eax, [eax+4]
0x78C6BF: jmp     short loc_78C6C4
0x78C6C1: add     eax, 4
0x78C6C4: push    eax; Src
0x78C6C5: call    sub_7895E0
0x78C6CA: add     esp, 4
0x78C6CD: lea     ecx, [ebp+var_4C]
0x78C6D0: call    sub_79AB00
0x78C6D5: mov     eax, offset loc_78C6DB
0x78C6DA: retn
0x78C6DB: mov     ecx, [ebp+var_C]
0x78C6DE: mov     large fs:0, ecx
0x78C6E5: pop     ecx
0x78C6E6: pop     edi
0x78C6E7: pop     esi
0x78C6E8: pop     ebx
0x78C6E9: mov     esp, ebp
0x78C6EB: pop     ebp
0x78C6EC: retn
