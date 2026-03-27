0x877870: push    0FFFFFFFFh
0x877872: push    offset SEH_880560
0x877877: mov     eax, large fs:0
0x87787D: push    eax
0x87787E: push    ebx
0x87787F: push    ebp
0x877880: push    esi
0x877881: push    edi
0x877882: mov     eax, ds:0B30AACh
0x877887: xor     eax, esp
0x877889: push    eax
0x87788A: lea     eax, [esp+20h+var_C]
0x87788E: mov     large fs:0, eax
0x877894: mov     esi, ecx
0x877896: mov     ebx, [esp+20h+arg_8]
0x87789A: mov     eax, [ebx+10h]
0x87789D: mov     edi, ds:0B476A0h
0x8778A3: push    eax
0x8778A4: call    sub_848C40
0x8778A9: mov     ebp, [ebx+0Ch]
0x8778AC: push    ebp
0x8778AD: mov     ecx, esi
0x8778AF: call    sub_848E50
0x8778B4: mov     ebx, [ebx+10h]
0x8778B7: mov     ecx, [esp+20h+arg_0]
0x8778BB: mov     eax, [esi]
0x8778BD: mov     edx, [eax+0BCh]
0x8778C3: push    ebx
0x8778C4: push    ebp
0x8778C5: push    ecx
0x8778C6: mov     ecx, esi
0x8778C8: call    edx
0x8778CA: mov     eax, [edi+24h]
0x8778CD: mov     ecx, [esp+20h+arg_C]
0x8778D1: mov     ebx, [eax]
0x8778D3: mov     edx, [ecx]
0x8778D5: mov     eax, [edx+88h]
0x8778DB: push    0
0x8778DD: mov     [esp+24h+arg_8], ebx
0x8778E1: call    eax
0x8778E3: mov     ebx, [ebx+4]
0x8778E6: mov     ebp, eax
0x8778E8: cmp     ebx, ebp
0x8778EA: jz      short loc_877921
0x8778EC: test    ebx, ebx
0x8778EE: jz      short loc_87790C
0x8778F0: lea     ecx, [ebx+4]
0x8778F3: push    ecx; lpAddend
0x8778F4: call    dword ptr ds:0A2807Ch
0x8778FA: test    eax, eax
0x8778FC: jnz     short loc_87790C
0x8778FE: test    ebx, ebx
0x877900: jz      short loc_87790C
0x877902: mov     edx, [ebx]
0x877904: mov     eax, [edx]
0x877906: push    1
0x877908: mov     ecx, ebx
0x87790A: call    eax
0x87790C: test    ebp, ebp
0x87790E: mov     ecx, [esp+20h+arg_8]
0x877912: mov     [ecx+4], ebp
0x877915: jz      short loc_877921
0x877917: add     ebp, 4
0x87791A: push    ebp; lpAddend
0x87791B: call    dword ptr ds:0A28078h
0x877921: mov     edx, [edi+24h]
0x877924: mov     eax, [esp+20h+arg_C]
0x877928: mov     ebx, [edx+4]
0x87792B: push    0
0x87792D: push    eax
0x87792E: mov     ecx, esi
0x877930: mov     [esp+28h+arg_8], ebx
0x877934: call    sub_848FD0
0x877939: mov     ebx, [ebx+4]
0x87793C: mov     ebp, eax
0x87793E: cmp     ebx, ebp
0x877940: jz      short loc_877977
0x877942: test    ebx, ebx
0x877944: jz      short loc_877962
0x877946: lea     ecx, [ebx+4]
0x877949: push    ecx; lpAddend
0x87794A: call    dword ptr ds:0A2807Ch
0x877950: test    eax, eax
0x877952: jnz     short loc_877962
0x877954: test    ebx, ebx
0x877956: jz      short loc_877962
0x877958: mov     edx, [ebx]
0x87795A: mov     eax, [edx]
0x87795C: push    1
0x87795E: mov     ecx, ebx
0x877960: call    eax
0x877962: test    ebp, ebp
0x877964: mov     ecx, [esp+20h+arg_8]
0x877968: mov     [ecx+4], ebp
0x87796B: jz      short loc_877977
0x87796D: add     ebp, 4
0x877970: push    ebp; lpAddend
0x877971: call    dword ptr ds:0A28078h
0x877977: mov     edx, [edi+24h]
0x87797A: mov     ebp, [edx+14h]
0x87797D: mov     eax, ds:0B43110h
0x877982: mov     ebx, [ebp+4]
0x877985: cmp     ebx, eax
0x877987: mov     ecx, eax
0x877989: mov     [esp+20h+arg_C], ecx
0x87798D: jz      short loc_8779C4
0x87798F: test    ebx, ebx
0x877991: jz      short loc_8779B3
0x877993: lea     eax, [ebx+4]
0x877996: push    eax; lpAddend
0x877997: call    dword ptr ds:0A2807Ch
0x87799D: test    eax, eax
0x87799F: jnz     short loc_8779AF
0x8779A1: test    ebx, ebx
0x8779A3: jz      short loc_8779AF
0x8779A5: mov     edx, [ebx]
0x8779A7: mov     eax, [edx]
0x8779A9: push    1
0x8779AB: mov     ecx, ebx
0x8779AD: call    eax
0x8779AF: mov     ecx, [esp+20h+arg_C]
0x8779B3: test    ecx, ecx
0x8779B5: mov     [ebp+4], ecx
0x8779B8: jz      short loc_8779C4
0x8779BA: add     ecx, 4
0x8779BD: push    ecx; lpAddend
0x8779BE: call    dword ptr ds:0A28078h
0x8779C4: mov     ebx, 1
0x8779C9: add     [edi+60h], ebx
0x8779CC: mov     [esp+20h+arg_C], edi
0x8779D0: mov     edx, [esi+38h]
0x8779D3: lea     ecx, [esp+20h+arg_C]
0x8779D7: push    ecx
0x8779D8: push    edx
0x8779D9: lea     ecx, [esi+40h]
0x8779DC: mov     [esp+28h+var_4], 0
0x8779E4: call    sub_76CE40
0x8779E9: or      eax, 0FFFFFFFFh
0x8779EC: add     [edi+60h], eax
0x8779EF: mov     [esp+20h+var_4], eax
0x8779F3: jnz     short loc_8779FC
0x8779F5: mov     ecx, edi
0x8779F7: call    sub_7604D0
0x8779FC: add     [esi+38h], ebx
0x8779FF: mov     ecx, [esp+20h+var_C]
0x877A03: mov     large fs:0, ecx
0x877A0A: pop     ecx
0x877A0B: pop     edi
0x877A0C: pop     esi
0x877A0D: pop     ebp
0x877A0E: pop     ebx
0x877A0F: add     esp, 0Ch
0x877A12: retn    10h
