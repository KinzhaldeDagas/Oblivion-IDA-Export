0x5437C0: sub     esp, 10h
0x5437C3: push    esi
0x5437C4: mov     esi, ecx
0x5437C6: mov     ecx, [esi+38h]
0x5437C9: push    edi
0x5437CA: xor     edi, edi
0x5437CC: cmp     ecx, edi
0x5437CE: mov     [esi+10h], edi
0x5437D1: mov     [esi+14h], edi
0x5437D4: mov     [esi+18h], edi
0x5437D7: mov     [esi+1Ch], edi
0x5437DA: jz      short loc_5437E1
0x5437DC: call    sub_53D6C0
0x5437E1: mov     ecx, [esi+2Ch]
0x5437E4: cmp     ecx, edi
0x5437E6: jz      short loc_5437ED
0x5437E8: call    sub_53BBC0
0x5437ED: mov     ecx, ds:0B33B00h
0x5437F3: push    4; Size
0x5437F5: lea     eax, [esp+1Ch+var_10]
0x5437F9: push    eax; Dst
0x5437FA: call    SaveLoad_LoadFormID
0x5437FF: mov     eax, [esp+20h+a1]
0x543803: cmp     eax, edi
0x543805: jz      short loc_543828
0x543807: push    edi; int
0x543808: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x54380D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x543812: push    edi; int
0x543813: push    eax; a1
0x543814: call    TESForm_LookupByFormID
0x543819: add     esp, 4
0x54381C: push    eax; void *
0x54381D: call    OblivionDynamicCast
0x543822: add     esp, 14h
0x543825: mov     [esi+10h], eax
0x543828: push    4; Size
0x54382A: lea     ecx, [esp+24h+var_14]
0x54382E: push    ecx; Dst
0x54382F: mov     ecx, ds:0B33B00h
0x543835: call    SaveLoad_LoadFormID
0x54383A: mov     eax, dword ptr [esp+28h+X+4]
0x54383E: cmp     eax, edi
0x543840: jz      short loc_543863
0x543842: push    edi; int
0x543843: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x543848: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x54384D: push    edi; int
0x54384E: push    eax; a1
0x54384F: call    TESForm_LookupByFormID
0x543854: add     esp, 4
0x543857: push    eax; void *
0x543858: call    OblivionDynamicCast
0x54385D: add     esp, 14h
0x543860: mov     [esi+14h], eax
0x543863: mov     ecx, ds:0B33B00h
0x543869: push    4; Size
0x54386B: lea     edx, [esp+2Ch+a1]
0x54386F: push    edx; Dst
0x543870: call    SaveLoad_LoadFormID
0x543875: mov     eax, dword ptr [esp+30h+X]
0x543879: cmp     eax, edi
0x54387B: jz      short loc_54389E
0x54387D: push    edi; int
0x54387E: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x543883: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x543888: push    edi; int
0x543889: push    eax; a1
0x54388A: call    TESForm_LookupByFormID
0x54388F: add     esp, 4
0x543892: push    eax; void *
0x543893: call    OblivionDynamicCast
0x543898: add     esp, 14h
0x54389B: mov     [esi+18h], eax
0x54389E: mov     ecx, ds:0B33B00h
0x5438A4: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x5438A8: jb      short loc_5438DF
0x5438AA: push    4; Size
0x5438AC: lea     eax, [esp+34h+X+4]
0x5438B0: push    eax; Dst
0x5438B1: call    SaveLoad_LoadFormID
0x5438B6: mov     eax, [esp+38h+var_24]
0x5438BA: cmp     eax, edi
0x5438BC: jz      short loc_5438DF
0x5438BE: push    edi; int
0x5438BF: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x5438C4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5438C9: push    edi; int
0x5438CA: push    eax; a1
0x5438CB: call    TESForm_LookupByFormID
0x5438D0: add     esp, 4
0x5438D3: push    eax; void *
0x5438D4: call    OblivionDynamicCast
0x5438D9: add     esp, 14h
0x5438DC: mov     [esi+1Ch], eax
0x5438DF: mov     ecx, ds:0B33B00h
0x5438E5: push    4; Size
0x5438E7: lea     edi, [esi+0D0h]
0x5438ED: push    edi; Dst
0x5438EE: call    SaveLoad_LoadData
0x5438F3: fld     dword ptr [edi]
0x5438F5: sub     esp, 8
0x5438F8: fstp    [esp+40h+var_44+4]; X
0x5438FB: call    __isnan
0x543900: add     esp, 8
0x543903: test    eax, eax
0x543905: jnz     short loc_54391B
0x543907: fld     dword ptr [edi]
0x543909: sub     esp, 8
0x54390C: fstp    [esp+40h+var_44+4]; X
0x54390F: call    __finite
0x543914: add     esp, 8
0x543917: test    eax, eax
0x543919: jnz     short loc_54391F
0x54391B: fldz
0x54391D: fstp    dword ptr [edi]
0x54391F: mov     ecx, ds:0B33B00h
0x543925: push    ebx
0x543926: push    4; Size
0x543928: lea     ebx, [esi+0D4h]
0x54392E: push    ebx; Dst
0x54392F: call    SaveLoad_LoadData
0x543934: fld     dword ptr [ebx]
0x543936: sub     esp, 8
0x543939: fstp    [esp+44h+var_44]; X
0x54393C: call    __isnan
0x543941: add     esp, 8
0x543944: test    eax, eax
0x543946: jnz     short loc_54395C
0x543948: fld     dword ptr [ebx]
0x54394A: sub     esp, 8
0x54394D: fstp    [esp+44h+var_44]; X
0x543950: call    __finite
0x543955: add     esp, 8
0x543958: test    eax, eax
0x54395A: jnz     short loc_543960
0x54395C: fld     dword ptr [edi]
0x54395E: fstp    dword ptr [ebx]
0x543960: push    4; Size
0x543962: lea     ecx, [esi+0D8h]
0x543968: push    ecx; Dst
0x543969: mov     ecx, ds:0B33B00h
0x54396F: call    SaveLoad_LoadData
0x543974: mov     ecx, ds:0B33B00h
0x54397A: push    4; Size
0x54397C: lea     edx, [esi+0DCh]
0x543982: push    edx; Dst
0x543983: call    SaveLoad_LoadData
0x543988: mov     ecx, ds:0B33B00h
0x54398E: cmp     byte ptr [ecx+7Ch], 69h ; 'i'
0x543992: pop     ebx
0x543993: jb      short loc_5439CE
0x543995: push    4; Size
0x543997: lea     eax, [esp+3Ch+var_24]
0x54399B: push    eax; Dst
0x54399C: call    SaveLoad_LoadData
0x5439A1: mov     ecx, [esi+0FCh]
0x5439A7: xor     ecx, [esp+38h+var_24]
0x5439AB: push    4; Size
0x5439AD: and     ecx, 8
0x5439B0: xor     [esi+0FCh], ecx
0x5439B6: mov     ecx, ds:0B33B00h
0x5439BC: lea     edx, [esi+0F4h]
0x5439C2: push    edx; Dst
0x5439C3: call    SaveLoad_LoadData
0x5439C8: mov     ecx, ds:0B33B00h
0x5439CE: or      dword ptr [ecx+18h], 400h
0x5439D5: fldz
0x5439D7: push    ecx
0x5439D8: fstp    [esp+3Ch+var_3C]; float
0x5439DB: mov     ecx, esi
0x5439DD: call    sub_542F20
0x5439E2: mov     eax, ds:0B33B00h
0x5439E7: and     dword ptr [eax+18h], 0FFFFFBFFh
0x5439EE: mov     ecx, esi
0x5439F0: call    sub_540850
0x5439F5: pop     edi
0x5439F6: pop     esi
0x5439F7: add     esp, 10h
0x5439FA: retn
