0x6183C0: push    esi
0x6183C1: push    edi
0x6183C2: mov     edi, [esp+8+arg_0]
0x6183C6: cmp     byte ptr [edi+4], 3Eh ; '>'
0x6183CA: mov     esi, ecx
0x6183CC: jnz     loc_618584
0x6183D2: push    edi
0x6183D3: call    sub_566380
0x6183D8: mov     eax, [edi+40h]
0x6183DB: test    eax, eax
0x6183DD: jz      short loc_61840C
0x6183DF: cmp     dword ptr [eax+4], 0
0x6183E3: jnz     short loc_6183EA
0x6183E5: cmp     dword ptr [eax], 0
0x6183E8: jz      short loc_61840C
0x6183EA: mov     eax, [eax]
0x6183EC: test    eax, eax
0x6183EE: jz      short loc_61840C
0x6183F0: fldz
0x6183F2: mov     ecx, [eax+4]
0x6183F5: mov     edx, [eax]
0x6183F7: sub     esp, 8
0x6183FA: fst     [esp+10h+var_C]; float
0x6183FE: fstp    [esp+10h+var_10]; float
0x618401: push    0; float
0x618403: push    ecx; char
0x618404: push    edx; int
0x618405: mov     ecx, esi
0x618407: call    sub_616190
0x61840C: push    9
0x61840E: mov     ecx, esi
0x618410: mov     dword ptr [esi+18h], 0Ch
0x618417: call    sub_612DA0
0x61841C: fld     dword ptr [edi+44h]
0x61841F: fstp    dword ptr [esi+44h]
0x618422: movzx   eax, byte ptr [edi+48h]
0x618426: mov     [esi+48h], al
0x618429: movzx   ecx, byte ptr [edi+49h]
0x61842D: mov     [esi+49h], cl
0x618430: movzx   edx, byte ptr [edi+4Ah]
0x618434: mov     [esi+4Ah], dl
0x618437: movzx   eax, byte ptr [edi+4Dh]
0x61843B: mov     [esi+4Dh], al
0x61843E: mov     ecx, [edi+28h]
0x618441: call    sub_452A60
0x618446: mov     [esp+8+arg_0], eax
0x61844A: push    ecx
0x61844B: fild    [esp+0Ch+arg_0]
0x61844F: mov     ecx, esi
0x618451: fstp    [esp+0Ch+var_C]; float
0x618454: call    sub_612EA0
0x618459: mov     ecx, [edi+70h]
0x61845C: fld     dword ptr ds:0A30634h
0x618462: mov     [esi+70h], ecx
0x618465: mov     edx, [edi+6Ch]
0x618468: mov     [esi+6Ch], edx
0x61846B: mov     eax, [edi+74h]
0x61846E: fstp    dword ptr [esi+54h]
0x618471: mov     [esi+74h], eax
0x618474: mov     dword ptr [esi+50h], 0FFh
0x61847B: mov     byte ptr [esi+58h], 0
0x61847F: mov     byte ptr [esi+59h], 0
0x618483: fld     dword ptr [edi+0CCh]
0x618489: fstp    dword ptr [esi+0CCh]
0x61848F: mov     ecx, [edi+180h]
0x618495: mov     [esi+180h], ecx
0x61849B: mov     edx, [edi+0D0h]
0x6184A1: mov     [esi+0D0h], edx
0x6184A7: fld     dword ptr [edi+170h]
0x6184AD: fstp    dword ptr [esi+170h]
0x6184B3: movzx   eax, byte ptr [edi+174h]
0x6184BA: mov     [esi+174h], al
0x6184C0: movzx   ecx, byte ptr [edi+17Dh]
0x6184C7: mov     [esi+17Dh], cl
0x6184CD: movzx   edx, byte ptr [edi+17Eh]
0x6184D4: mov     [esi+17Eh], dl
0x6184DA: movzx   eax, byte ptr [edi+17Ch]
0x6184E1: mov     [esi+17Ch], al
0x6184E7: fld     dword ptr [edi+0D4h]
0x6184ED: fstp    dword ptr [esi+0D4h]
0x6184F3: fld     dword ptr [edi+0D8h]
0x6184F9: fstp    dword ptr [esi+0D8h]
0x6184FF: fld     dword ptr [edi+0DCh]
0x618505: fstp    dword ptr [esi+0DCh]
0x61850B: fld     dword ptr [edi+0E0h]
0x618511: fstp    dword ptr [esi+0E0h]
0x618517: fld     dword ptr [edi+0E4h]
0x61851D: fstp    dword ptr [esi+0E4h]
0x618523: fld     dword ptr [edi+0E8h]
0x618529: fstp    dword ptr [esi+0E8h]
0x61852F: fld     dword ptr [edi+0ECh]
0x618535: fstp    dword ptr [esi+0ECh]
0x61853B: fld     dword ptr [edi+0F0h]
0x618541: fstp    dword ptr [esi+0F0h]
0x618547: fld     dword ptr [edi+0F4h]
0x61854D: fstp    dword ptr [esi+0F4h]
0x618553: fld     dword ptr [edi+0F8h]
0x618559: fstp    dword ptr [esi+0F8h]
0x61855F: fld     dword ptr [edi+0FCh]
0x618565: fstp    dword ptr [esi+0FCh]
0x61856B: fld     dword ptr [edi+100h]
0x618571: fstp    dword ptr [esi+100h]
0x618577: movzx   ecx, byte ptr [edi+1BCh]
0x61857E: mov     [esi+1BCh], cl
0x618584: pop     edi
0x618585: pop     esi
0x618586: retn    4
