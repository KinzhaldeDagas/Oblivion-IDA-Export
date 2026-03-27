0x8807A0: push    0FFFFFFFFh
0x8807A2: push    offset SEH_880560
0x8807A7: mov     eax, large fs:0
0x8807AD: push    eax
0x8807AE: push    ebx
0x8807AF: push    ebp
0x8807B0: push    esi
0x8807B1: push    edi
0x8807B2: mov     eax, ds:0B30AACh
0x8807B7: xor     eax, esp
0x8807B9: push    eax
0x8807BA: lea     eax, [esp+20h+var_C]
0x8807BE: mov     large fs:0, eax
0x8807C4: mov     esi, ecx
0x8807C6: mov     ebx, [esp+20h+arg_8]
0x8807CA: mov     eax, [ebx+10h]
0x8807CD: mov     edi, ds:0B47734h
0x8807D3: push    eax
0x8807D4: call    sub_848C40
0x8807D9: mov     ebx, [ebx+0Ch]
0x8807DC: push    ebx
0x8807DD: mov     ecx, esi
0x8807DF: call    sub_848E50
0x8807E4: mov     ecx, [esp+20h+arg_0]
0x8807E8: mov     eax, [esi]
0x8807EA: mov     edx, [eax+0BCh]
0x8807F0: push    0
0x8807F2: push    ebx
0x8807F3: push    ecx
0x8807F4: mov     ecx, esi
0x8807F6: call    edx
0x8807F8: mov     eax, [edi+24h]
0x8807FB: mov     ecx, [esp+20h+arg_C]
0x8807FF: mov     ebx, [eax]
0x880801: mov     edx, [ecx]
0x880803: mov     eax, [edx+88h]
0x880809: push    0
0x88080B: mov     [esp+24h+arg_8], ebx
0x88080F: call    eax
0x880811: mov     ebx, [ebx+4]
0x880814: mov     ebp, eax
0x880816: cmp     ebx, ebp
0x880818: jz      short loc_88084F
0x88081A: test    ebx, ebx
0x88081C: jz      short loc_88083A
0x88081E: lea     ecx, [ebx+4]
0x880821: push    ecx; lpAddend
0x880822: call    dword ptr ds:0A2807Ch
0x880828: test    eax, eax
0x88082A: jnz     short loc_88083A
0x88082C: test    ebx, ebx
0x88082E: jz      short loc_88083A
0x880830: mov     edx, [ebx]
0x880832: mov     eax, [edx]
0x880834: push    1
0x880836: mov     ecx, ebx
0x880838: call    eax
0x88083A: test    ebp, ebp
0x88083C: mov     ecx, [esp+20h+arg_8]
0x880840: mov     [ecx+4], ebp
0x880843: jz      short loc_88084F
0x880845: add     ebp, 4
0x880848: push    ebp; lpAddend
0x880849: call    dword ptr ds:0A28078h
0x88084F: mov     edx, [edi+24h]
0x880852: mov     eax, [esp+20h+arg_C]
0x880856: mov     ebx, [edx+4]
0x880859: push    0
0x88085B: push    eax
0x88085C: mov     ecx, esi
0x88085E: mov     [esp+28h+arg_8], ebx
0x880862: call    sub_848FD0
0x880867: mov     ebx, [ebx+4]
0x88086A: mov     ebp, eax
0x88086C: cmp     ebx, ebp
0x88086E: jz      short loc_8808A5
0x880870: test    ebx, ebx
0x880872: jz      short loc_880890
0x880874: lea     ecx, [ebx+4]
0x880877: push    ecx; lpAddend
0x880878: call    dword ptr ds:0A2807Ch
0x88087E: test    eax, eax
0x880880: jnz     short loc_880890
0x880882: test    ebx, ebx
0x880884: jz      short loc_880890
0x880886: mov     edx, [ebx]
0x880888: mov     eax, [edx]
0x88088A: push    1
0x88088C: mov     ecx, ebx
0x88088E: call    eax
0x880890: test    ebp, ebp
0x880892: mov     ecx, [esp+20h+arg_8]
0x880896: mov     [ecx+4], ebp
0x880899: jz      short loc_8808A5
0x88089B: add     ebp, 4
0x88089E: push    ebp; lpAddend
0x88089F: call    dword ptr ds:0A28078h
0x8808A5: mov     edx, [edi+24h]
0x8808A8: mov     ebx, [edx+10h]
0x8808AB: mov     eax, ds:0B43110h
0x8808B0: mov     ebp, [ebx+4]
0x8808B3: add     ebx, 4
0x8808B6: cmp     ebp, eax
0x8808B8: mov     [esp+20h+arg_C], eax
0x8808BC: jz      short loc_8808F3
0x8808BE: test    ebp, ebp
0x8808C0: jz      short loc_8808E3
0x8808C2: lea     eax, [ebp+4]
0x8808C5: push    eax; lpAddend
0x8808C6: call    dword ptr ds:0A2807Ch
0x8808CC: test    eax, eax
0x8808CE: jnz     short loc_8808DF
0x8808D0: test    ebp, ebp
0x8808D2: jz      short loc_8808DF
0x8808D4: mov     edx, [ebp+0]
0x8808D7: mov     eax, [edx]
0x8808D9: push    1
0x8808DB: mov     ecx, ebp
0x8808DD: call    eax
0x8808DF: mov     eax, [esp+20h+arg_C]
0x8808E3: test    eax, eax
0x8808E5: mov     [ebx], eax
0x8808E7: jz      short loc_8808F3
0x8808E9: add     eax, 4
0x8808EC: push    eax; lpAddend
0x8808ED: call    dword ptr ds:0A28078h
0x8808F3: mov     ecx, [edi+24h]
0x8808F6: mov     ebx, [ecx+14h]
0x8808F9: mov     eax, ds:0B43108h
0x8808FE: mov     ebp, [ebx+4]
0x880901: add     ebx, 4
0x880904: cmp     ebp, eax
0x880906: mov     [esp+20h+arg_C], eax
0x88090A: jz      short loc_880941
0x88090C: test    ebp, ebp
0x88090E: jz      short loc_880931
0x880910: lea     edx, [ebp+4]
0x880913: push    edx; lpAddend
0x880914: call    dword ptr ds:0A2807Ch
0x88091A: test    eax, eax
0x88091C: jnz     short loc_88092D
0x88091E: test    ebp, ebp
0x880920: jz      short loc_88092D
0x880922: mov     eax, [ebp+0]
0x880925: mov     edx, [eax]
0x880927: push    1
0x880929: mov     ecx, ebp
0x88092B: call    edx
0x88092D: mov     eax, [esp+20h+arg_C]
0x880931: test    eax, eax
0x880933: mov     [ebx], eax
0x880935: jz      short loc_880941
0x880937: add     eax, 4
0x88093A: push    eax; lpAddend
0x88093B: call    dword ptr ds:0A28078h
0x880941: mov     eax, [edi+24h]
0x880944: mov     ebp, [eax+18h]
0x880947: mov     eax, ds:0B4310Ch
0x88094C: mov     ebx, [ebp+4]
0x88094F: cmp     ebx, eax
0x880951: mov     ecx, eax
0x880953: mov     [esp+20h+arg_C], ecx
0x880957: jz      short loc_88098E
0x880959: test    ebx, ebx
0x88095B: jz      short loc_88097D
0x88095D: lea     ecx, [ebx+4]
0x880960: push    ecx; lpAddend
0x880961: call    dword ptr ds:0A2807Ch
0x880967: test    eax, eax
0x880969: jnz     short loc_880979
0x88096B: test    ebx, ebx
0x88096D: jz      short loc_880979
0x88096F: mov     edx, [ebx]
0x880971: mov     eax, [edx]
0x880973: push    1
0x880975: mov     ecx, ebx
0x880977: call    eax
0x880979: mov     ecx, [esp+20h+arg_C]
0x88097D: test    ecx, ecx
0x88097F: mov     [ebp+4], ecx
0x880982: jz      short loc_88098E
0x880984: add     ecx, 4
0x880987: push    ecx; lpAddend
0x880988: call    dword ptr ds:0A28078h
0x88098E: mov     ebx, 1
0x880993: add     [edi+60h], ebx
0x880996: mov     [esp+20h+arg_C], edi
0x88099A: mov     edx, [esi+38h]
0x88099D: lea     ecx, [esp+20h+arg_C]
0x8809A1: push    ecx
0x8809A2: push    edx
0x8809A3: lea     ecx, [esi+40h]
0x8809A6: mov     [esp+28h+var_4], 0
0x8809AE: call    sub_76CE40
0x8809B3: or      eax, 0FFFFFFFFh
0x8809B6: add     [edi+60h], eax
0x8809B9: mov     [esp+20h+var_4], eax
0x8809BD: jnz     short loc_8809C6
0x8809BF: mov     ecx, edi
0x8809C1: call    sub_7604D0
0x8809C6: add     [esi+38h], ebx
0x8809C9: mov     ecx, [esp+20h+var_C]
0x8809CD: mov     large fs:0, ecx
0x8809D4: pop     ecx
0x8809D5: pop     edi
0x8809D6: pop     esi
0x8809D7: pop     ebp
0x8809D8: pop     ebx
0x8809D9: add     esp, 0Ch
0x8809DC: retn    10h
