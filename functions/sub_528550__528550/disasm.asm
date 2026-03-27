0x528550: push    0FFFFFFFFh
0x528552: push    offset SEH_528550
0x528557: mov     eax, large fs:0
0x52855D: push    eax
0x52855E: sub     esp, 0D4h
0x528564: push    ebx
0x528565: push    ebp
0x528566: push    esi
0x528567: push    edi
0x528568: mov     eax, ds:0B30AACh
0x52856D: xor     eax, esp
0x52856F: push    eax
0x528570: lea     eax, [esp+0F4h+var_C]
0x528577: mov     large fs:0, eax
0x52857D: mov     ebx, ecx
0x52857F: mov     [esp+0F4h+var_DC], ebx
0x528583: mov     esi, [esp+0F4h+arg_0]
0x52858A: test    esi, esi
0x52858C: jz      loc_5289E8
0x528592: cmp     byte ptr ds:0B120BCh, 0
0x528599: jz      loc_5289E8
0x52859F: mov     eax, [esi]
0x5285A1: mov     edx, [eax+154h]
0x5285A7: mov     ecx, esi
0x5285A9: call    edx
0x5285AB: mov     edi, eax
0x5285AD: mov     eax, [esi]
0x5285AF: mov     edx, [eax+138h]
0x5285B5: lea     ebp, [ebx+1D8h]
0x5285BB: push    0
0x5285BD: mov     ecx, esi
0x5285BF: mov     [esp+0F8h+var_D4], ebp
0x5285C3: call    edx
0x5285C5: push    eax; a2
0x5285C6: mov     ecx, ebp; this
0x5285C8: call    NiSmartPointer_Set??
0x5285CD: mov     esi, [eax]
0x5285CF: mov     eax, ds:0B10CA8h
0x5285D4: push    eax; a2
0x5285D5: push    edi; a1
0x5285D6: mov     [esp+0FCh+var_E0], esi
0x5285DA: call    NiObjectNET_LookupObjectByName
0x5285DF: add     esp, 8
0x5285E2: test    eax, eax
0x5285E4: jz      loc_5289E8
0x5285EA: mov     edx, [eax]
0x5285EC: mov     ecx, eax
0x5285EE: mov     eax, [edx+10h]
0x5285F1: call    eax
0x5285F3: test    eax, eax
0x5285F5: mov     [esp+0F4h+var_D8], eax
0x5285F9: jz      loc_5289E8
0x5285FF: test    esi, esi
0x528601: jz      loc_5289E8
0x528607: mov     edx, [esi]
0x528609: mov     eax, [edx+0BCh]
0x52860F: mov     ecx, esi
0x528611: call    eax
0x528613: test    al, al
0x528615: jnz     loc_5287B1
0x52861B: push    offset aUpperbody; "UpperBody"
0x528620: push    edi; a1
0x528621: call    NiObjectNET_LookupObjectByName
0x528626: add     esp, 8
0x528629: test    eax, eax
0x52862B: jz      loc_5287B1
0x528631: mov     edx, [eax]
0x528633: mov     ecx, eax
0x528635: mov     eax, [edx+8]
0x528638: call    eax
0x52863A: mov     ebp, eax
0x52863C: test    ebp, ebp
0x52863E: jz      loc_5287B1
0x528644: push    0
0x528646: mov     ecx, ebp
0x528648: call    sub_405790
0x52864D: test    eax, eax
0x52864F: jz      loc_528713
0x528655: mov     edx, [eax]
0x528657: mov     ecx, eax
0x528659: mov     eax, [edx+8]
0x52865C: call    eax
0x52865E: mov     ebp, eax
0x528660: test    ebp, ebp
0x528662: jz      loc_5287B1
0x528668: movzx   eax, word ptr [ebp+0B8h]
0x52866F: xor     edi, edi
0x528671: test    eax, eax
0x528673: mov     [esp+0F4h+var_DC], eax
0x528677: jbe     loc_5287B1
0x52867D: lea     ecx, [ecx+0]
0x528680: push    edi
0x528681: mov     ecx, ebp
0x528683: call    sub_405790
0x528688: test    eax, eax
0x52868A: jz      short loc_5286F0
0x52868C: mov     edx, [eax]
0x52868E: mov     ecx, eax
0x528690: mov     eax, [edx+10h]
0x528693: call    eax
0x528695: mov     esi, eax
0x528697: test    esi, esi
0x528699: jz      short loc_5286F0
0x52869B: push    2
0x52869D: mov     ecx, esi
0x52869F: call    NiNode_GetNiPropertyByID
0x5286A4: push    eax
0x5286A5: push    offset dword_B3FA9C
0x5286AA: call    NiRTTI_Cast
0x5286AF: add     esp, 8
0x5286B2: test    eax, eax
0x5286B4: jz      short loc_5286F0
0x5286B6: mov     eax, [eax+8]
0x5286B9: test    eax, eax
0x5286BB: jz      short loc_5286F0
0x5286BD: push    4; MaxCount
0x5286BF: push    offset aSkin_0; "Skin"
0x5286C4: push    eax; Str1
0x5286C5: call    __strnicmp
0x5286CA: add     esp, 0Ch
0x5286CD: test    eax, eax
0x5286CF: jnz     short loc_5286F0
0x5286D1: fld     dword ptr ds:0A3D65Ch
0x5286D7: push    eax; char
0x5286D8: push    1; int
0x5286DA: push    ecx
0x5286DB: mov     ecx, [esp+100h+var_D8]
0x5286DF: fstp    [esp+100h+var_100]; float
0x5286E2: push    ecx; int
0x5286E3: push    esi; int
0x5286E4: call    ??0?$NiTMap@IUVertexDist@@@@QAE@XZ; NiTMap<uint,VertexDist>::NiTMap<uint,VertexDist>(void)
0x5286E9: add     esp, 14h
0x5286EC: test    al, al
0x5286EE: jnz     short loc_5286FE
0x5286F0: add     edi, 1
0x5286F3: cmp     edi, [esp+0F4h+var_DC]
0x5286F7: jb      short loc_528680
0x5286F9: jmp     loc_5287B1
0x5286FE: mov     ecx, [esp+0F4h+var_E0]
0x528702: mov     edx, [ecx]
0x528704: mov     eax, [edx+0C0h]
0x52870A: push    1
0x52870C: call    eax
0x52870E: jmp     loc_5287B1
0x528713: movzx   ebx, word ptr [ebp+0B8h]
0x52871A: xor     edi, edi
0x52871C: test    ebx, ebx
0x52871E: jbe     loc_5287AD
0x528724: push    edi
0x528725: mov     ecx, ebp
0x528727: call    sub_405790
0x52872C: test    eax, eax
0x52872E: jz      short loc_528794
0x528730: mov     edx, [eax]
0x528732: mov     ecx, eax
0x528734: mov     eax, [edx+10h]
0x528737: call    eax
0x528739: mov     esi, eax
0x52873B: test    esi, esi
0x52873D: jz      short loc_528794
0x52873F: push    2
0x528741: mov     ecx, esi
0x528743: call    NiNode_GetNiPropertyByID
0x528748: push    eax
0x528749: push    offset dword_B3FA9C
0x52874E: call    NiRTTI_Cast
0x528753: add     esp, 8
0x528756: test    eax, eax
0x528758: jz      short loc_528794
0x52875A: mov     eax, [eax+8]
0x52875D: test    eax, eax
0x52875F: jz      short loc_528794
0x528761: push    4; MaxCount
0x528763: push    offset aSkin_0; "Skin"
0x528768: push    eax; Str1
0x528769: call    __strnicmp
0x52876E: add     esp, 0Ch
0x528771: test    eax, eax
0x528773: jnz     short loc_528794
0x528775: fld     dword ptr ds:0A3D65Ch
0x52877B: push    eax; char
0x52877C: push    1; int
0x52877E: push    ecx
0x52877F: mov     ecx, [esp+100h+var_D8]
0x528783: fstp    [esp+100h+var_100]; float
0x528786: push    ecx; int
0x528787: push    esi; int
0x528788: call    ??0?$NiTMap@IUVertexDist@@@@QAE@XZ; NiTMap<uint,VertexDist>::NiTMap<uint,VertexDist>(void)
0x52878D: add     esp, 14h
0x528790: test    al, al
0x528792: jnz     short loc_52879D
0x528794: add     edi, 1
0x528797: cmp     edi, ebx
0x528799: jb      short loc_528724
0x52879B: jmp     short loc_5287AD
0x52879D: mov     ecx, [esp+0F4h+var_E0]
0x5287A1: mov     edx, [ecx]
0x5287A3: mov     eax, [edx+0C0h]
0x5287A9: push    1
0x5287AB: call    eax
0x5287AD: mov     ebx, [esp+0F4h+var_DC]
0x5287B1: cmp     dword ptr [ebx+0E8h], 0
0x5287B8: jz      loc_5289E8
0x5287BE: lea     ecx, [esp+0F4h+var_D0]
0x5287C2: call    FaceGenHeadParameters_Ctor
0x5287C7: fld     dword ptr [ebx+1CCh]
0x5287CD: mov     ecx, [ebx+1C8h]
0x5287D3: fstp    [esp+0F4h+var_68]
0x5287DA: mov     edx, [ebx+1D0h]
0x5287E0: mov     [esp+0F4h+var_70], ecx
0x5287E7: mov     ecx, ebx
0x5287E9: mov     [esp+0F4h+var_4], 0
0x5287F4: mov     [esp+0F4h+var_64], edx
0x5287FB: call    TESActorBase_IsFemale
0x528800: lea     ecx, [esp+0F4h+var_D0]
0x528804: mov     [esp+0F4h+var_60], eax
0x52880B: mov     eax, [ebx+1E8h]
0x528811: push    ecx
0x528812: mov     ecx, ebx
0x528814: mov     [esp+0F8h+var_6C], eax
0x52881B: call    sub_5221C0
0x528820: cmp     [esp+0F4h+var_64], 0
0x528828: jnz     short loc_528856
0x52882A: mov     esi, [ebx+0E8h]
0x528830: lea     edx, [esi+0A8h]
0x528836: test    edx, edx
0x528838: jz      short loc_528856
0x52883A: lea     ecx, [esi+0A8h]
0x528840: call    BSSimpleList_IsEmpty
0x528845: test    al, al
0x528847: jnz     short loc_528856
0x528849: mov     eax, [esi+0A8h]
0x52884F: mov     [esp+0F4h+var_64], eax
0x528856: mov     ebp, ds:0A2807Ch
0x52885C: xor     esi, esi
0x52885E: mov     edi, edi
0x528860: mov     ecx, [ebx+0E8h]
0x528866: push    esi
0x528867: call    sub_52BC50
0x52886C: movzx   edi, [esp+0F4h+var_52]
0x528874: movzx   ecx, [esp+0F4h+var_54]
0x52887C: cmp     edi, ecx
0x52887E: mov     [esp+0F4h+var_E0], eax
0x528882: jb      short loc_52889B
0x528884: movzx   edx, [esp+0F4h+var_4E]
0x52888C: add     edx, edi
0x52888E: push    edx
0x52888F: lea     ecx, [esp+0F8h+var_5C]
0x528896: call    NiTArray_SetSize
0x52889B: lea     eax, [esp+0F4h+var_E0]
0x52889F: push    eax
0x5288A0: push    edi
0x5288A1: lea     ecx, [esp+0FCh+var_5C]
0x5288A8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x5288AD: mov     ecx, [ebx+0E8h]
0x5288B3: push    esi
0x5288B4: call    sub_52BD00
0x5288B9: movzx   edi, [esp+0F4h+var_42]
0x5288C1: movzx   ecx, [esp+0F4h+var_44]
0x5288C9: cmp     edi, ecx
0x5288CB: mov     [esp+0F4h+var_E0], eax
0x5288CF: jb      short loc_5288E8
0x5288D1: movzx   edx, [esp+0F4h+var_3E]
0x5288D9: add     edx, edi
0x5288DB: push    edx
0x5288DC: lea     ecx, [esp+0F8h+var_4C]
0x5288E3: call    NiTArray_SetSize
0x5288E8: lea     eax, [esp+0F4h+var_E0]
0x5288EC: push    eax
0x5288ED: push    edi
0x5288EE: lea     ecx, [esp+0FCh+var_4C]
0x5288F5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x5288FA: movzx   edi, [esp+0F4h+var_32]
0x528902: movzx   edx, [esp+0F4h+var_34]
0x52890A: cmp     edi, edx
0x52890C: mov     ecx, ds:0B10CA8h[esi*4]
0x528913: mov     [esp+0F4h+var_E0], ecx
0x528917: jb      short loc_528930
0x528919: movzx   eax, [esp+0F4h+var_2E]
0x528921: add     eax, edi
0x528923: push    eax
0x528924: lea     ecx, [esp+0F8h+var_3C]
0x52892B: call    NiTArray_SetSize
0x528930: lea     ecx, [esp+0F4h+var_E0]
0x528934: push    ecx
0x528935: push    edi
0x528936: lea     ecx, [esp+0FCh+var_3C]
0x52893D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x528942: cmp     byte ptr ds:0B10D3Ch, 0
0x528949: jz      short loc_528997
0x52894B: push    esi
0x52894C: lea     edx, [esp+0F8h+var_D8]
0x528950: push    edx
0x528951: mov     ecx, ebx
0x528953: call    sub_524100
0x528958: push    eax
0x528959: lea     ecx, [esp+0F8h+var_2C]
0x528960: mov     byte ptr [esp+0F8h+var_4], 1
0x528968: call    sub_526A30
0x52896D: mov     eax, [esp+0F4h+var_D8]
0x528971: test    eax, eax
0x528973: mov     byte ptr [esp+0F4h+var_4], 0
0x52897B: jz      short loc_528997
0x52897D: mov     edi, eax
0x52897F: add     eax, 4
0x528982: push    eax; lpAddend
0x528983: call    ebp ; InterlockedDecrement
0x528985: test    eax, eax
0x528987: jnz     short loc_528997
0x528989: test    edi, edi
0x52898B: jz      short loc_528997
0x52898D: mov     eax, [edi]
0x52898F: mov     edx, [eax]
0x528991: push    1
0x528993: mov     ecx, edi
0x528995: call    edx
0x528997: add     esi, 1
0x52899A: cmp     esi, 9
0x52899D: jl      loc_528860
0x5289A3: mov     al, ds:0B10D3Ch
0x5289A8: lea     ecx, [esp+0F4h+var_D0]
0x5289AC: mov     [esp+0F4h+var_1C], al
0x5289B3: mov     eax, [ebx+1D4h]
0x5289B9: push    ecx
0x5289BA: push    eax
0x5289BB: call    BSFaceGen_DoSomethingWithFaceGenNode
0x5289C0: mov     edx, [esp+0FCh+var_D4]
0x5289C4: mov     eax, [edx]
0x5289C6: lea     ecx, [esp+0FCh+var_D0]
0x5289CA: push    ecx
0x5289CB: push    eax
0x5289CC: call    BSFaceGen_DoSomethingWithFaceGenNode
0x5289D1: add     esp, 10h
0x5289D4: lea     ecx, [esp+0F4h+var_D0]
0x5289D8: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x5289E3: call    FaceGenHeadParameters_Dtor
0x5289E8: mov     ecx, [esp+0F4h+var_C]
0x5289EF: mov     large fs:0, ecx
0x5289F6: pop     ecx
0x5289F7: pop     edi
0x5289F8: pop     esi
0x5289F9: pop     ebp
0x5289FA: pop     ebx
0x5289FB: add     esp, 0E0h
0x528A01: retn    4
