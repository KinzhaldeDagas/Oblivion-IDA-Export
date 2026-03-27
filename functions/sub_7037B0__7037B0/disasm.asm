0x7037B0: push    ebx
0x7037B1: push    esi
0x7037B2: mov     esi, [esp+8+arg_0]
0x7037B6: push    edi
0x7037B7: push    esi
0x7037B8: mov     edi, ecx
0x7037BA: call    sub_720300
0x7037BF: mov     eax, ds:0B3F964h
0x7037C4: push    eax; ArgList
0x7037C5: call    TESOutput_PrintString
0x7037CA: movzx   ebx, word ptr [esi+0Ah]
0x7037CE: movzx   ecx, word ptr [esi+8]
0x7037D2: add     esp, 4
0x7037D5: cmp     ebx, ecx
0x7037D7: mov     [esp+0Ch+arg_0], eax
0x7037DB: jb      short loc_7037EB
0x7037DD: movzx   edx, word ptr [esi+0Eh]
0x7037E1: add     edx, ebx
0x7037E3: push    edx
0x7037E4: mov     ecx, esi
0x7037E6: call    NiTArray_SetSize
0x7037EB: lea     eax, [esp+0Ch+arg_0]
0x7037EF: push    eax
0x7037F0: push    ebx
0x7037F1: mov     ecx, esi
0x7037F3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7037F8: mov     ecx, [edi+58h]
0x7037FB: push    ecx; int
0x7037FC: push    offset aM_akpolygon; "m_akPolygon"
0x703801: call    TESOutput_PrintLabeledPointer
0x703806: movzx   ebx, word ptr [esi+0Ah]
0x70380A: movzx   edx, word ptr [esi+8]
0x70380E: add     esp, 8
0x703811: cmp     ebx, edx
0x703813: mov     [esp+0Ch+arg_0], eax
0x703817: jb      short loc_703827
0x703819: movzx   eax, word ptr [esi+0Eh]
0x70381D: add     eax, ebx
0x70381F: push    eax
0x703820: mov     ecx, esi
0x703822: call    NiTArray_SetSize
0x703827: lea     ecx, [esp+0Ch+arg_0]
0x70382B: push    ecx
0x70382C: push    ebx
0x70382D: mov     ecx, esi
0x70382F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703834: mov     edx, [edi+5Ch]
0x703837: push    edx; int
0x703838: push    offset aM_auspindexer; "m_ausPIndexer"
0x70383D: call    TESOutput_PrintLabeledPointer
0x703842: movzx   ebx, word ptr [esi+0Ah]
0x703846: mov     [esp+14h+arg_0], eax
0x70384A: movzx   eax, word ptr [esi+8]
0x70384E: add     esp, 8
0x703851: cmp     ebx, eax
0x703853: jb      short loc_703863
0x703855: movzx   ecx, word ptr [esi+0Eh]
0x703859: add     ecx, ebx
0x70385B: push    ecx
0x70385C: mov     ecx, esi
0x70385E: call    NiTArray_SetSize
0x703863: lea     edx, [esp+0Ch+arg_0]
0x703867: push    edx
0x703868: push    ebx
0x703869: mov     ecx, esi
0x70386B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703870: movzx   eax, word ptr [edi+60h]
0x703874: push    eax; __int16
0x703875: push    offset aM_usmaxpquanti; "m_usMaxPQuantity"
0x70387A: call    TESOutput_PrintLabeledUnsignedShort
0x70387F: movzx   ebx, word ptr [esi+0Ah]
0x703883: movzx   ecx, word ptr [esi+8]
0x703887: add     esp, 8
0x70388A: cmp     ebx, ecx
0x70388C: mov     [esp+0Ch+arg_0], eax
0x703890: jb      short loc_7038A0
0x703892: movzx   edx, word ptr [esi+0Eh]
0x703896: add     edx, ebx
0x703898: push    edx
0x703899: mov     ecx, esi
0x70389B: call    NiTArray_SetSize
0x7038A0: lea     eax, [esp+0Ch+arg_0]
0x7038A4: push    eax
0x7038A5: push    ebx
0x7038A6: mov     ecx, esi
0x7038A8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7038AD: movzx   ecx, word ptr [edi+62h]
0x7038B1: push    ecx; __int16
0x7038B2: push    offset aM_uspgrowby; "m_usPGrowBy"
0x7038B7: call    TESOutput_PrintLabeledUnsignedShort
0x7038BC: movzx   ebx, word ptr [esi+0Ah]
0x7038C0: movzx   edx, word ptr [esi+8]
0x7038C4: add     esp, 8
0x7038C7: cmp     ebx, edx
0x7038C9: mov     [esp+0Ch+arg_0], eax
0x7038CD: jb      short loc_7038DD
0x7038CF: movzx   eax, word ptr [esi+0Eh]
0x7038D3: add     eax, ebx
0x7038D5: push    eax
0x7038D6: mov     ecx, esi
0x7038D8: call    NiTArray_SetSize
0x7038DD: lea     ecx, [esp+0Ch+arg_0]
0x7038E1: push    ecx
0x7038E2: push    ebx
0x7038E3: mov     ecx, esi
0x7038E5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7038EA: movzx   edx, word ptr [edi+64h]
0x7038EE: push    edx; __int16
0x7038EF: push    offset aM_uspquantity; "m_usPQuantity"
0x7038F4: call    TESOutput_PrintLabeledUnsignedShort
0x7038F9: movzx   ebx, word ptr [esi+0Ah]
0x7038FD: mov     [esp+14h+arg_0], eax
0x703901: movzx   eax, word ptr [esi+8]
0x703905: add     esp, 8
0x703908: cmp     ebx, eax
0x70390A: jb      short loc_70391A
0x70390C: movzx   ecx, word ptr [esi+0Eh]
0x703910: add     ecx, ebx
0x703912: push    ecx
0x703913: mov     ecx, esi
0x703915: call    NiTArray_SetSize
0x70391A: lea     edx, [esp+0Ch+arg_0]
0x70391E: push    edx
0x70391F: push    ebx
0x703920: mov     ecx, esi
0x703922: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703927: movzx   eax, word ptr [edi+66h]
0x70392B: push    eax; __int16
0x70392C: push    offset aM_usmaxvquanti; "m_usMaxVQuantity"
0x703931: call    TESOutput_PrintLabeledUnsignedShort
0x703936: movzx   ebx, word ptr [esi+0Ah]
0x70393A: movzx   ecx, word ptr [esi+8]
0x70393E: add     esp, 8
0x703941: cmp     ebx, ecx
0x703943: mov     [esp+0Ch+arg_0], eax
0x703947: jb      short loc_703957
0x703949: movzx   edx, word ptr [esi+0Eh]
0x70394D: add     edx, ebx
0x70394F: push    edx
0x703950: mov     ecx, esi
0x703952: call    NiTArray_SetSize
0x703957: lea     eax, [esp+0Ch+arg_0]
0x70395B: push    eax
0x70395C: push    ebx
0x70395D: mov     ecx, esi
0x70395F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703964: movzx   ecx, word ptr [edi+68h]
0x703968: push    ecx; __int16
0x703969: push    offset aM_usvgrowby; "m_usVGrowBy"
0x70396E: call    TESOutput_PrintLabeledUnsignedShort
0x703973: movzx   ebx, word ptr [esi+0Ah]
0x703977: movzx   edx, word ptr [esi+8]
0x70397B: add     esp, 8
0x70397E: cmp     ebx, edx
0x703980: mov     [esp+0Ch+arg_0], eax
0x703984: jb      short loc_703994
0x703986: movzx   eax, word ptr [esi+0Eh]
0x70398A: add     eax, ebx
0x70398C: push    eax
0x70398D: mov     ecx, esi
0x70398F: call    NiTArray_SetSize
0x703994: lea     ecx, [esp+0Ch+arg_0]
0x703998: push    ecx
0x703999: push    ebx
0x70399A: mov     ecx, esi
0x70399C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7039A1: movzx   edx, word ptr [edi+6Ah]
0x7039A5: push    edx; __int16
0x7039A6: push    offset aM_usmaxiquanti; "m_usMaxIQuantity"
0x7039AB: call    TESOutput_PrintLabeledUnsignedShort
0x7039B0: movzx   ebx, word ptr [esi+0Ah]
0x7039B4: mov     [esp+14h+arg_0], eax
0x7039B8: movzx   eax, word ptr [esi+8]
0x7039BC: add     esp, 8
0x7039BF: cmp     ebx, eax
0x7039C1: jb      short loc_7039D1
0x7039C3: movzx   ecx, word ptr [esi+0Eh]
0x7039C7: add     ecx, ebx
0x7039C9: push    ecx
0x7039CA: mov     ecx, esi
0x7039CC: call    NiTArray_SetSize
0x7039D1: lea     edx, [esp+0Ch+arg_0]
0x7039D5: push    edx
0x7039D6: push    ebx
0x7039D7: mov     ecx, esi
0x7039D9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7039DE: movzx   eax, word ptr [edi+6Ch]
0x7039E2: push    eax; __int16
0x7039E3: push    offset aM_usigrowby; "m_usIGrowBy"
0x7039E8: call    TESOutput_PrintLabeledUnsignedShort
0x7039ED: movzx   edi, word ptr [esi+0Ah]
0x7039F1: movzx   ecx, word ptr [esi+8]
0x7039F5: add     esp, 8
0x7039F8: cmp     edi, ecx
0x7039FA: mov     [esp+0Ch+arg_0], eax
0x7039FE: jb      short loc_703A0E
0x703A00: movzx   edx, word ptr [esi+0Eh]
0x703A04: add     edx, edi
0x703A06: push    edx
0x703A07: mov     ecx, esi
0x703A09: call    NiTArray_SetSize
0x703A0E: lea     eax, [esp+0Ch+arg_0]
0x703A12: push    eax
0x703A13: push    edi
0x703A14: mov     ecx, esi
0x703A16: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x703A1B: pop     edi
0x703A1C: pop     esi
0x703A1D: pop     ebx
0x703A1E: retn    4
