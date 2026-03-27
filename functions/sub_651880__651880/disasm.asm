0x651880: push    ebx
0x651881: push    ebp
0x651882: mov     ebp, [esp+8+arg_4]
0x651886: push    esi
0x651887: push    edi
0x651888: xor     ebx, ebx
0x65188A: push    ebx; int
0x65188B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x651890: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x651895: push    ebx; int
0x651896: push    ebp; void *
0x651897: mov     esi, ecx
0x651899: call    OblivionDynamicCast
0x65189E: add     esp, 14h
0x6518A1: push    ebp
0x6518A2: mov     ebp, [esp+14h+arg_0]
0x6518A6: push    ebp
0x6518A7: mov     ecx, esi
0x6518A9: mov     edi, eax
0x6518AB: call    sub_658940
0x6518B0: test    ebp, 8000000h
0x6518B6: jz      short loc_651926
0x6518B8: mov     eax, [esi+0E4h]
0x6518BE: cmp     eax, ebx
0x6518C0: jz      short loc_6518EB
0x6518C2: mov     eax, [eax+8]
0x6518C5: push    ebx; int
0x6518C6: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6518CB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6518D0: push    ebx; int
0x6518D1: push    eax; void *
0x6518D2: call    OblivionDynamicCast
0x6518D7: add     esp, 14h
0x6518DA: cmp     byte ptr [eax+90h], 5
0x6518E1: jnz     short loc_6518EB
0x6518E3: push    ebx
0x6518E4: mov     ecx, edi
0x6518E6: call    sub_5E13D0
0x6518EB: mov     eax, [esi]
0x6518ED: mov     edx, [eax+104h]
0x6518F3: push    ebx
0x6518F4: push    ebx
0x6518F5: mov     ecx, esi
0x6518F7: call    edx
0x6518F9: mov     eax, [esi]
0x6518FB: mov     edx, [eax+10Ch]
0x651901: push    ebx
0x651902: mov     ecx, esi
0x651904: call    edx
0x651906: mov     eax, [esi]
0x651908: mov     edx, [eax+110h]
0x65190E: push    ebx
0x65190F: mov     ecx, esi
0x651911: call    edx
0x651913: mov     eax, [esi]
0x651915: mov     edx, [eax+108h]
0x65191B: push    ebx
0x65191C: mov     ecx, esi
0x65191E: call    edx
0x651920: mov     [esi+150h], ebx
0x651926: test    ebp, 80000h
0x65192C: jz      short loc_651959
0x65192E: mov     ecx, [esi+0C0h]
0x651934: cmp     ecx, ebx
0x651936: jz      short loc_651953
0x651938: call    sub_5660A0
0x65193D: test    al, al
0x65193F: jz      short loc_651953
0x651941: mov     eax, [esi+0C0h]
0x651947: mov     ecx, ds:0B33B00h
0x65194D: push    eax
0x65194E: call    sub_45C7A0
0x651953: mov     [esi+0C0h], ebx
0x651959: mov     ecx, ds:0B33B00h
0x65195F: mov     eax, [ecx+44h]
0x651962: cmp     eax, 1FFFF000h
0x651967: jz      short loc_651974
0x651969: cmp     eax, 7FFFF000h
0x65196E: jnz     loc_651ABC
0x651974: test    ebp, 2000000h
0x65197A: jz      short loc_651990
0x65197C: mov     ecx, [esi+17Ch]
0x651982: cmp     ecx, ebx
0x651984: jz      short loc_651990
0x651986: mov     edx, [esp+10h+arg_4]
0x65198A: push    edx
0x65198B: call    sub_473AA0
0x651990: mov     eax, [esi+174h]
0x651996: push    edi
0x651997: push    eax
0x651998: call    ActiveEffect_Base_PreLoadAEList
0x65199D: add     esp, 8
0x6519A0: cmp     edi, ebx
0x6519A2: jz      short loc_6519B1
0x6519A4: mov     edx, [esi]
0x6519A6: mov     eax, [edx+194h]
0x6519AC: push    edi
0x6519AD: mov     ecx, esi
0x6519AF: call    eax
0x6519B1: mov     edx, [esi]
0x6519B3: mov     eax, [edx+370h]
0x6519B9: push    7Fh
0x6519BB: push    ebx
0x6519BC: push    ebx
0x6519BD: push    edi
0x6519BE: mov     ecx, esi
0x6519C0: mov     [esi+114h], bl
0x6519C6: call    eax
0x6519C8: lea     ecx, [esi+0A8h]
0x6519CE: mov     [esi+120h], ebx
0x6519D4: mov     byte ptr [esi+124h], 7Fh
0x6519DB: call    BSSimpleList_Clear
0x6519E0: fld     dword ptr ds:0A30634h
0x6519E6: fstp    dword ptr [esi+0F8h]
0x6519EC: lea     ecx, [esi+0B0h]
0x6519F2: fldz
0x6519F4: mov     [esi+0F4h], bl
0x6519FA: fst     dword ptr [esi+0B8h]
0x651A00: mov     [esi+0F5h], bl
0x651A06: fst     dword ptr [esi+0BCh]
0x651A0C: mov     word ptr [esi+138h], 0FFFFh
0x651A15: fst     dword ptr [esi+0C4h]
0x651A1B: mov     [esi+13Ch], ebx
0x651A21: fld1
0x651A23: mov     [esi+140h], ebx
0x651A29: fstp    dword ptr [esi+154h]
0x651A2F: mov     [esi+34h], ebx
0x651A32: mov     [esi+0CCh], ebx
0x651A38: mov     [esi+115h], bl
0x651A3E: mov     [esi+38h], ebx
0x651A41: fst     dword ptr [esi+158h]
0x651A47: mov     [esi+180h], bl
0x651A4D: fstp    dword ptr [esi+88h]
0x651A53: mov     [esi+0E0h], ebx
0x651A59: mov     [esi+14Ch], bl
0x651A5F: mov     [esi+150h], ebx
0x651A65: mov     [esi+164h], ebx
0x651A6B: mov     [esi+161h], bl
0x651A71: mov     byte ptr [esi+0C8h], 1
0x651A78: mov     [esi+168h], bl
0x651A7E: mov     [esi+169h], bl
0x651A84: mov     [esi+160h], bl
0x651A8A: mov     [esi+48h], ebx
0x651A8D: mov     [esi+16Ah], bl
0x651A93: call    BSSimpleList_Clear
0x651A98: mov     ecx, [esi+170h]
0x651A9E: cmp     ecx, ebx
0x651AA0: jz      short loc_651ABC
0x651AA2: call    BSSimpleList_Clear
0x651AA7: mov     ecx, [esi+170h]
0x651AAD: push    ecx
0x651AAE: call    FormHeapFree
0x651AB3: add     esp, 4
0x651AB6: mov     [esi+170h], ebx
0x651ABC: pop     edi
0x651ABD: pop     esi
0x651ABE: pop     ebp
0x651ABF: pop     ebx
0x651AC0: retn    8
