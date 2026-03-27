0x850840: push    0FFFFFFFFh
0x850842: push    offset SEH_882120
0x850847: mov     eax, large fs:0
0x85084D: push    eax
0x85084E: push    ebx
0x85084F: push    ebp
0x850850: push    esi
0x850851: push    edi
0x850852: mov     eax, ds:0B30AACh
0x850857: xor     eax, esp
0x850859: push    eax
0x85085A: lea     eax, [esp+20h+var_C]
0x85085E: mov     large fs:0, eax
0x850864: mov     edi, ecx
0x850866: mov     eax, [esp+20h+arg_8]
0x85086A: mov     eax, [eax+0Ch]
0x85086D: mov     esi, ds:0B45BECh
0x850873: push    eax
0x850874: call    sub_848E50
0x850879: mov     ecx, [esi+24h]
0x85087C: mov     ebx, [ecx]
0x85087E: mov     ecx, [esp+20h+arg_C]
0x850882: mov     edx, [ecx]
0x850884: mov     eax, [edx+88h]
0x85088A: push    0
0x85088C: mov     [esp+24h+arg_8], ebx
0x850890: call    eax
0x850892: mov     ebx, [ebx+4]
0x850895: mov     ebp, eax
0x850897: cmp     ebx, ebp
0x850899: jz      short loc_8508D0
0x85089B: test    ebx, ebx
0x85089D: jz      short loc_8508BB
0x85089F: lea     ecx, [ebx+4]
0x8508A2: push    ecx; lpAddend
0x8508A3: call    dword ptr ds:0A2807Ch
0x8508A9: test    eax, eax
0x8508AB: jnz     short loc_8508BB
0x8508AD: test    ebx, ebx
0x8508AF: jz      short loc_8508BB
0x8508B1: mov     edx, [ebx]
0x8508B3: mov     eax, [edx]
0x8508B5: push    1
0x8508B7: mov     ecx, ebx
0x8508B9: call    eax
0x8508BB: test    ebp, ebp
0x8508BD: mov     ecx, [esp+20h+arg_8]
0x8508C1: mov     [ecx+4], ebp
0x8508C4: jz      short loc_8508D0
0x8508C6: add     ebp, 4
0x8508C9: push    ebp; lpAddend
0x8508CA: call    dword ptr ds:0A28078h
0x8508D0: mov     ebx, 1
0x8508D5: add     [esi+60h], ebx
0x8508D8: mov     [esp+20h+arg_8], esi
0x8508DC: mov     eax, [edi+38h]
0x8508DF: lea     edx, [esp+20h+arg_8]
0x8508E3: push    edx
0x8508E4: push    eax
0x8508E5: lea     ecx, [edi+40h]
0x8508E8: mov     [esp+28h+var_4], 0
0x8508F0: call    sub_76CE40
0x8508F5: or      eax, 0FFFFFFFFh
0x8508F8: add     [esi+60h], eax
0x8508FB: mov     [esp+20h+var_4], eax
0x8508FF: jnz     short loc_850908
0x850901: mov     ecx, esi
0x850903: call    sub_7604D0
0x850908: add     [edi+38h], ebx
0x85090B: mov     ecx, [esp+20h+var_C]
0x85090F: mov     large fs:0, ecx
0x850916: pop     ecx
0x850917: pop     edi
0x850918: pop     esi
0x850919: pop     ebp
0x85091A: pop     ebx
0x85091B: add     esp, 0Ch
0x85091E: retn    10h
