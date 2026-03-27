0x667600: push    ebp
0x667601: mov     ebp, esp
0x667603: and     esp, 0FFFFFFF8h
0x667606: push    0FFFFFFFFh
0x667608: push    offset ChangeCell?????_SEH
0x66760D: mov     eax, large fs:0
0x667613: push    eax
0x667614: sub     esp, 68h
0x667617: push    ebx
0x667618: push    esi
0x667619: push    edi
0x66761A: mov     eax, ds:0B30AACh
0x66761F: xor     eax, esp
0x667621: push    eax
0x667622: lea     eax, [esp+84h+var_C]
0x667626: mov     large fs:0, eax
0x66762C: mov     edi, ecx
0x66762E: mov     [esp+84h+var_70], edi
0x667632: xor     esi, esi
0x667634: mov     [esp+84h+var_60], esi
0x667638: call    TESObjectREFR_GetParentCell
0x66763D: mov     ebx, [ebp+arg_0]
0x667640: cmp     ebx, eax
0x667642: jz      loc_667BC2
0x667648: push    ebx
0x667649: mov     ecx, edi
0x66764B: call    MobileObject_ChangeCell
0x667650: cmp     ebx, esi
0x667652: jz      loc_667BB7
0x667658: mov     ecx, ebx; this
0x66765A: call    TESObjectCELL_IsInterior
0x66765F: test    al, al
0x667661: jnz     short loc_667669
0x667663: mov     [edi+6E8h], esi
0x667669: mov     eax, [edi]
0x66766B: mov     edx, [eax+178h]
0x667671: push    esi
0x667672: mov     ecx, edi
0x667674: call    edx
0x667676: mov     ecx, ds:0B33A1Ch
0x66767C: call    sub_43DF10
0x667681: mov     ecx, ebx
0x667683: call    sub_4CAF90
0x667688: mov     esi, eax
0x66768A: test    esi, esi
0x66768C: jnz     short loc_6676A4
0x66768E: mov     ecx, ebx; this
0x667690: call    TESObjectCELL_IsInterior
0x667695: test    al, al
0x667697: jz      short loc_6676A4
0x667699: mov     ecx, ebx
0x66769B: call    sub_4C9820
0x6676A0: test    al, al
0x6676A2: jz      short loc_6676B3
0x6676A4: push    0
0x6676A6: push    esi
0x6676A7: call    Sky_CreateOrGetGlobalObject
0x6676AC: mov     ecx, eax
0x6676AE: call    Sky_CreateChildGlobalObjects
0x6676B3: mov     ecx, ebx; this
0x6676B5: call    TESObjectCELL_GetWorldSpace
0x6676BA: mov     ecx, [edi+730h]
0x6676C0: test    ecx, ecx
0x6676C2: mov     [esp+84h+var_5C], eax
0x6676C6: mov     byte ptr [esp+84h+var_74+3], 0
0x6676CB: mov     byte ptr [edi+71Eh], 0
0x6676D2: jz      short loc_6676F5
0x6676D4: call    sub_65DD90
0x6676D9: mov     ecx, [edi+730h]
0x6676DF: test    ecx, ecx
0x6676E1: jz      short loc_6676EB
0x6676E3: mov     eax, [ecx]
0x6676E5: mov     edx, [eax]
0x6676E7: push    1
0x6676E9: call    edx
0x6676EB: mov     dword ptr [edi+730h], 0
0x6676F5: mov     ecx, ebx; this
0x6676F7: call    TESObjectCELL_GetXCoordinate
0x6676FC: mov     ecx, ebx; this
0x6676FE: mov     esi, eax
0x667700: call    TESObjectCELL_GetYCoordinate
0x667705: shl     esi, 0Ch
0x667708: mov     [esp+84h+var_60], esi
0x66770C: fild    [esp+84h+var_60]
0x667710: shl     eax, 0Ch
0x667713: mov     [esp+84h+var_68], eax
0x667717: fstp    [esp+84h+var_64]
0x66771B: sub     esp, 8
0x66771E: fld     [esp+8Ch+var_64]
0x667722: lea     ecx, [esp+8Ch+var_4C]
0x667726: fld     st
0x667728: fld     qword ptr ds:0A37650h
0x66772E: fadd    st(1), st
0x667730: fxch    st(1)
0x667732: fstp    [esp+8Ch+var_60]
0x667736: fild    [esp+8Ch+var_68]
0x66773A: fstp    [esp+8Ch+var_68]
0x66773E: fld     [esp+8Ch+var_68]
0x667742: fld     st
0x667744: faddp   st(2), st
0x667746: fxch    st(1)
0x667748: fstp    [esp+8Ch+var_6C]
0x66774C: fstp    [esp+8Ch+var_88]; float
0x667750: fstp    [esp+8Ch+var_8C]; float
0x667753: call    sub_4A6970
0x667758: fld     [esp+84h+var_6C]
0x66775C: sub     esp, 8
0x66775F: fstp    [esp+8Ch+var_88]; float
0x667763: lea     ecx, [esp+8Ch+var_44]
0x667767: fld     [esp+8Ch+var_64]
0x66776B: fstp    [esp+8Ch+var_8C]; float
0x66776E: call    sub_4A6970
0x667773: fld     [esp+84h+var_68]
0x667777: sub     esp, 8
0x66777A: fstp    [esp+8Ch+var_88]; float
0x66777E: lea     ecx, [esp+8Ch+var_3C]
0x667782: fld     [esp+8Ch+var_60]
0x667786: fstp    [esp+8Ch+var_8C]; float
0x667789: call    sub_4A6970
0x66778E: fld     [esp+84h+var_6C]
0x667792: sub     esp, 8
0x667795: fstp    [esp+8Ch+var_88]; float
0x667799: lea     ecx, [esp+8Ch+var_34]
0x66779D: fld     [esp+8Ch+var_60]
0x6677A1: fstp    [esp+8Ch+var_8C]; float
0x6677A4: call    sub_4A6970
0x6677A9: lea     ecx, [edi+6ECh]
0x6677AF: call    BSSimpleList_Clear
0x6677B4: push    1
0x6677B6: mov     ecx, ebx
0x6677B8: call    sub_4C9B40
0x6677BD: test    eax, eax
0x6677BF: jz      loc_6679FE
0x6677C5: add     eax, 4
0x6677C8: mov     [esp+84h+var_64], eax
0x6677CC: jz      loc_6679FE
0x6677D2: mov     eax, [esp+84h+var_64]
0x6677D6: mov     ebx, [eax]
0x6677D8: test    ebx, ebx
0x6677DA: mov     [esp+84h+var_68], ebx
0x6677DE: jz      loc_6679FB
0x6677E4: lea     ecx, [edi+2Ch]
0x6677E7: push    ecx
0x6677E8: lea     ecx, [esp+88h+var_54]
0x6677EC: call    sub_4A6950
0x6677F1: mov     edx, [ebx+8]
0x6677F4: shr     edx, 5
0x6677F7: test    dl, 1
0x6677FA: jnz     loc_6679E8
0x667800: mov     esi, [ebx+20h]
0x667803: test    esi, esi
0x667805: jz      short loc_667816
0x667807: mov     ecx, edi; this
0x667809: call    TESObjectREFR_GetWorldSpace
0x66780E: cmp     esi, eax
0x667810: jnz     loc_6679E8
0x667816: mov     eax, [ebx+1Ch]
0x667819: test    eax, eax
0x66781B: jz      loc_6679E8
0x667821: cmp     dword ptr [eax+4], 0
0x667825: jnz     short loc_667830
0x667827: cmp     dword ptr [eax], 0
0x66782A: jz      loc_6679E8
0x667830: xor     bl, bl
0x667832: mov     [esp+84h+var_6C], eax
0x667836: jmp     short loc_667844
0x667838: jmp     short loc_667840
0x66783A: align 10h
0x667840: mov     edi, [esp+84h+var_70]
0x667844: mov     esi, [esp+84h+var_6C]
0x667848: test    esi, esi
0x66784A: jz      loc_667966
0x667850: mov     edi, [esi]
0x667852: test    edi, edi
0x667854: jz      loc_667962
0x66785A: lea     eax, [esp+84h+var_54]
0x66785E: push    eax
0x66785F: mov     ecx, edi
0x667861: call    sub_4A7330
0x667866: test    al, al
0x667868: jz      loc_667953
0x66786E: mov     ebx, [esp+84h+var_68]
0x667872: mov     ecx, [ebx+18h]
0x667875: push    7
0x667877: call    sub_4A4460
0x66787C: test    eax, eax
0x66787E: jz      short loc_6678A4
0x667880: lea     esi, [eax+0Ch]
0x667883: test    esi, esi
0x667885: jz      short loc_6678A4
0x667887: mov     eax, [esi]
0x667889: test    eax, eax
0x66788B: jz      short loc_6678A4
0x66788D: mov     ecx, [esp+84h+var_70]
0x667891: push    eax
0x667892: add     ecx, 6ECh
0x667898: call    BSSimpleList_PushFront
0x66789D: mov     esi, [esi+4]
0x6678A0: test    esi, esi
0x6678A2: jnz     short loc_667887
0x6678A4: mov     ecx, [ebx+8]
0x6678A7: shr     ecx, 6
0x6678AA: test    cl, 1
0x6678AD: jz      short loc_667901
0x6678AF: lea     edx, [esp+84h+var_4C]
0x6678B3: push    edx
0x6678B4: mov     ecx, edi
0x6678B6: mov     byte ptr [esp+88h+var_74+3], 1
0x6678BB: call    sub_4A7330
0x6678C0: test    al, al
0x6678C2: jz      short loc_667901
0x6678C4: lea     eax, [esp+84h+var_44]
0x6678C8: push    eax
0x6678C9: mov     ecx, edi
0x6678CB: call    sub_4A7330
0x6678D0: test    al, al
0x6678D2: jz      short loc_667901
0x6678D4: lea     ecx, [esp+84h+var_3C]
0x6678D8: push    ecx
0x6678D9: mov     ecx, edi
0x6678DB: call    sub_4A7330
0x6678E0: test    al, al
0x6678E2: jz      short loc_667901
0x6678E4: lea     edx, [esp+84h+var_34]
0x6678E8: push    edx
0x6678E9: mov     ecx, edi
0x6678EB: call    sub_4A7330
0x6678F0: test    al, al
0x6678F2: jz      short loc_667901
0x6678F4: mov     edi, [esp+84h+var_70]
0x6678F8: mov     byte ptr [edi+71Eh], 1
0x6678FF: jmp     short loc_667905
0x667901: mov     edi, [esp+84h+var_70]
0x667905: mov     eax, [edi+6E8h]
0x66790B: test    eax, eax
0x66790D: jz      short loc_667947
0x66790F: mov     ecx, [eax+18h]
0x667912: push    3
0x667914: call    sub_4A4460
0x667919: mov     ecx, [ebx+18h]
0x66791C: push    3
0x66791E: mov     esi, eax
0x667920: call    sub_4A4460
0x667925: test    eax, eax
0x667927: jz      short loc_66794D
0x667929: test    esi, esi
0x66792B: jz      short loc_667947
0x66792D: mov     cl, [eax+4]
0x667930: test    cl, cl
0x667932: jz      short loc_66793A
0x667934: cmp     byte ptr [esi+4], 0
0x667938: jz      short loc_667947
0x66793A: cmp     cl, [esi+4]
0x66793D: jnz     short loc_66794D
0x66793F: mov     al, [eax+6]
0x667942: cmp     al, [esi+6]
0x667945: jbe     short loc_66794D
0x667947: mov     [edi+6E8h], ebx
0x66794D: mov     esi, [esp+84h+var_6C]
0x667951: mov     bl, 1
0x667953: test    bl, bl
0x667955: mov     eax, [esi+4]
0x667958: mov     [esp+84h+var_6C], eax
0x66795C: jz      loc_667840
0x667962: mov     edi, [esp+84h+var_70]
0x667966: mov     ecx, [esp+84h+var_68]
0x66796A: mov     edx, [ecx+8]
0x66796D: shr     edx, 6
0x667970: test    dl, 1
0x667973: jz      short loc_6679E8
0x667975: cmp     dword ptr [edi+730h], 0
0x66797C: jnz     short loc_6679BB
0x66797E: push    10h; Size
0x667980: call    FormHeapAlloc
0x667985: add     esp, 4
0x667988: mov     [esp+84h+var_60], eax
0x66798C: test    eax, eax
0x66798E: mov     [esp+84h+var_4], 0
0x667999: jz      short loc_6679A8
0x66799B: push    1
0x66799D: push    1
0x66799F: mov     ecx, eax
0x6679A1: call    sub_65DD30
0x6679A6: jmp     short loc_6679AA
0x6679A8: xor     eax, eax
0x6679AA: mov     [esp+84h+var_4], 0FFFFFFFFh
0x6679B5: mov     [edi+730h], eax
0x6679BB: mov     esi, [edi+730h]
0x6679C1: movzx   ebx, word ptr [esi+0Ah]
0x6679C5: movzx   eax, word ptr [esi+8]
0x6679C9: cmp     ebx, eax
0x6679CB: jb      short loc_6679DB
0x6679CD: movzx   ecx, word ptr [esi+0Eh]
0x6679D1: add     ecx, ebx
0x6679D3: push    ecx
0x6679D4: mov     ecx, esi
0x6679D6: call    NiTArray_SetSize
0x6679DB: lea     edx, [esp+84h+var_68]
0x6679DF: push    edx
0x6679E0: push    ebx
0x6679E1: mov     ecx, esi
0x6679E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6679E8: mov     eax, [esp+84h+var_64]
0x6679EC: mov     eax, [eax+4]
0x6679EF: test    eax, eax
0x6679F1: mov     [esp+84h+var_64], eax
0x6679F5: jnz     loc_6677D2
0x6679FB: mov     ebx, [ebp+arg_0]
0x6679FE: cmp     byte ptr ds:0B14F58h, 0
0x667A05: jz      loc_667AAC
0x667A0B: mov     ecx, [esp+84h+var_5C]
0x667A0F: test    ecx, ecx
0x667A11: jz      loc_667AAC
0x667A17: call    sub_4EF160
0x667A1C: test    al, al
0x667A1E: jz      loc_667AAC
0x667A24: mov     eax, ds:0B333A0h
0x667A29: cmp     byte ptr [eax+51h], 0
0x667A2D: jnz     short loc_667AAC
0x667A2F: cmp     byte ptr [eax+52h], 0
0x667A33: jnz     short loc_667AAC
0x667A35: cmp     byte ptr [esp+84h+var_74+3], 0
0x667A3A: jnz     short loc_667AAC
0x667A3C: mov     esi, [edi+72Ch]
0x667A42: test    esi, esi
0x667A44: jz      short loc_667A5F
0x667A46: movzx   eax, byte ptr [esi+4]
0x667A4A: cmp     eax, 30h ; '0'
0x667A4D: jz      short loc_667AC6
0x667A4F: cmp     eax, 35h ; '5'
0x667A52: jnz     short loc_667A5F
0x667A54: mov     ecx, ebx; this
0x667A56: call    TESObjectCELL_GetWorldSpace
0x667A5B: cmp     esi, eax
0x667A5D: jnz     short loc_667AA5
0x667A5F: mov     edx, [edi]
0x667A61: mov     eax, [edx+174h]
0x667A67: mov     ecx, edi
0x667A69: call    eax
0x667A6B: mov     ecx, [eax]
0x667A6D: mov     edx, [eax+4]
0x667A70: mov     eax, [eax+8]
0x667A73: mov     [esp+84h+var_2C], ecx
0x667A77: lea     ecx, [edi+720h]
0x667A7D: push    ecx
0x667A7E: lea     ecx, [esp+88h+var_2C]
0x667A82: mov     [esp+88h+var_28], edx
0x667A86: mov     [esp+88h+var_24], eax
0x667A8A: call    sub_43F320
0x667A8F: lea     ecx, [esp+84h+var_2C]
0x667A93: call    sub_404C90
0x667A98: fcomp   dword ptr ds:0A2FF44h
0x667A9E: fnstsw  ax
0x667AA0: test    ah, 41h
0x667AA3: jnz     short loc_667AAC
0x667AA5: mov     byte ptr [edi+71Fh], 1
0x667AAC: mov     eax, [edi+6E8h]
0x667AB2: xor     esi, esi
0x667AB4: cmp     eax, esi
0x667AB6: jz      short loc_667ACC
0x667AB8: mov     eax, [eax+18h]
0x667ABB: push    4
0x667ABD: mov     ecx, eax
0x667ABF: call    sub_4A4460
0x667AC4: jmp     short loc_667ACE
0x667AC6: cmp     esi, ebx
0x667AC8: jz      short loc_667A5F
0x667ACA: jmp     short loc_667AA5
0x667ACC: xor     eax, eax
0x667ACE: mov     [esp+84h+var_1C.m_data], esi
0x667AD2: mov     [esp+84h+var_1C.m_dataLen], si
0x667AD7: mov     [esp+84h+var_1C.m_bufLen], si
0x667ADC: cmp     eax, esi
0x667ADE: mov     edx, [edi+6E8h]
0x667AE4: mov     ebx, 1
0x667AE9: mov     [esp+84h+var_4], ebx
0x667AF0: mov     byte ptr [esp+84h+var_14], bl
0x667AF4: mov     [esp+84h+var_20], edx
0x667AF8: jz      short loc_667B12
0x667AFA: mov     edx, [eax]
0x667AFC: mov     edx, [edx+28h]
0x667AFF: lea     ecx, [esp+84h+var_2C]
0x667B03: push    ecx
0x667B04: mov     ecx, eax
0x667B06: call    edx
0x667B08: mov     byte ptr [esp+84h+var_4], 2
0x667B10: jmp     short loc_667B3D
0x667B12: push    esi
0x667B13: call    FormHeapFree
0x667B18: add     esp, 4
0x667B1B: mov     [esp+84h+var_5C], esi
0x667B1F: mov     [esp+84h+var_56], si
0x667B24: mov     [esp+84h+var_58], si
0x667B29: lea     eax, [esp+84h+var_5C]
0x667B2D: mov     [esp+84h+var_4], 3
0x667B38: mov     ebx, 2
0x667B3D: mov     eax, [eax]
0x667B3F: push    0; a3
0x667B41: push    eax; a2
0x667B42: lea     ecx, [esp+8Ch+var_1C]; this
0x667B46: mov     [esp+8Ch+var_60], ebx
0x667B4A: call    BSStringT_Set
0x667B4F: test    bl, 2
0x667B52: jz      short loc_667B64
0x667B54: mov     eax, [esp+84h+var_5C]
0x667B58: push    eax
0x667B59: and     ebx, 0FFFFFFFDh
0x667B5C: call    FormHeapFree
0x667B61: add     esp, 4
0x667B64: test    bl, 1
0x667B67: mov     [esp+84h+var_4], 1
0x667B72: jz      short loc_667B81
0x667B74: mov     ecx, [esp+84h+var_2C]
0x667B78: push    ecx
0x667B79: call    FormHeapFree
0x667B7E: add     esp, 4
0x667B81: lea     edx, [esp+84h+var_20]
0x667B85: push    edx
0x667B86: call    sub_5A64B0
0x667B8B: add     esp, 4
0x667B8E: mov     ecx, edi
0x667B90: call    sub_65E860
0x667B95: mov     eax, [esp+84h+var_1C.m_data]
0x667B99: push    eax
0x667B9A: call    FormHeapFree
0x667B9F: add     esp, 4
0x667BA2: mov     ecx, [esp+84h+var_C]
0x667BA6: mov     large fs:0, ecx
0x667BAD: pop     ecx
0x667BAE: pop     edi
0x667BAF: pop     esi
0x667BB0: pop     ebx
0x667BB1: mov     esp, ebp
0x667BB3: pop     ebp
0x667BB4: retn    4
0x667BB7: lea     ecx, [edi+6ECh]
0x667BBD: call    BSSimpleList_Clear
0x667BC2: mov     ecx, [esp+84h+var_C]
0x667BC6: mov     large fs:0, ecx
0x667BCD: pop     ecx
0x667BCE: pop     edi
0x667BCF: pop     esi
0x667BD0: pop     ebx
0x667BD1: mov     esp, ebp
0x667BD3: pop     ebp
0x667BD4: retn    4
