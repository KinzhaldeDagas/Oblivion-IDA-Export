0x554260: push    0FFFFFFFFh
0x554262: push    offset SEH_554260
0x554267: mov     eax, large fs:0
0x55426D: push    eax
0x55426E: sub     esp, 5Ch
0x554271: push    ebx
0x554272: push    ebp
0x554273: push    esi
0x554274: push    edi
0x554275: mov     eax, ds:0B30AACh
0x55427A: xor     eax, esp
0x55427C: push    eax
0x55427D: lea     eax, [esp+7Ch+var_C]
0x554281: mov     large fs:0, eax
0x554287: xor     ebx, ebx
0x554289: mov     dword ptr [esp+7Ch+ArgList], ebx
0x55428D: mov     [esp+7Ch+var_54], bx
0x554292: mov     [esp+7Ch+var_52], bx
0x554297: mov     [esp+7Ch+var_4], ebx
0x55429B: mov     [esp+7Ch+var_48], ebx
0x55429F: mov     [esp+7Ch+var_44], bx
0x5542A4: mov     [esp+7Ch+var_42], bx
0x5542A9: mov     [esp+7Ch+var_50], ebx
0x5542AD: mov     [esp+7Ch+var_4C], bx
0x5542B2: mov     [esp+7Ch+var_4A], bx
0x5542B7: mov     [esp+7Ch+var_40], ebx
0x5542BB: mov     [esp+7Ch+var_3C], bx
0x5542C0: mov     [esp+7Ch+var_3A], bx
0x5542C5: mov     [esp+7Ch+var_38], ebx
0x5542C9: mov     [esp+7Ch+var_34], bx
0x5542CE: mov     [esp+7Ch+var_32], bx
0x5542D3: mov     [esp+7Ch+var_60], ebx
0x5542D7: mov     [esp+7Ch+var_68], ebx
0x5542DB: fld     dword ptr ds:0A3721Ch
0x5542E1: push    ecx
0x5542E2: lea     ecx, [esp+80h+var_30]
0x5542E6: fstp    [esp+80h+var_80]; float
0x5542E9: mov     byte ptr [esp+80h+var_4], 6
0x5542EE: call    sub_70FD80
0x5542F3: mov     esi, [esp+7Ch+arg_8]
0x5542FA: cmp     [esi+60h], ebx
0x5542FD: jz      loc_554758
0x554303: mov     eax, [esi+60h]
0x554306: lea     ecx, [eax+24h]
0x554309: mov     eax, [ecx]
0x55430B: mov     edx, [eax+14h]
0x55430E: call    edx
0x554310: push    eax; ArgList
0x554311: lea     eax, [esp+80h+ArgList]
0x554315: push    offset aMeshesS; "Meshes\\%s"
0x55431A: push    eax; int
0x55431B: call    BSStringT_Static_Format
0x554320: mov     edi, dword ptr [esp+88h+ArgList]
0x554324: lea     ecx, [esp+88h+var_50]
0x554328: push    edi
0x554329: push    ecx
0x55432A: call    sub_550010
0x55432F: lea     edx, [esp+90h+var_48]
0x554333: push    edi
0x554334: push    edx
0x554335: mov     ebp, eax
0x554337: call    sub_54FEB0
0x55433C: add     esp, 1Ch
0x55433F: mov     edi, eax
0x554341: mov     [esp+7Ch+var_64], ebx
0x554345: cmp     edi, ebx
0x554347: mov     byte ptr [esp+7Ch+var_4], 7
0x55434C: jnz     short loc_554358
0x55434E: mov     byte ptr [esp+7Ch+var_4], 6
0x554353: jmp     loc_554527
0x554358: cmp     ds:0B39B80h, ebx
0x55435E: jnz     short loc_554365
0x554360: call    sub_553550
0x554365: mov     eax, ds:0B39B80h
0x55436A: cmp     [eax+0DACh], ebx
0x554370: jnz     loc_5543FA
0x554376: push    20h ; ' '; Size
0x554378: call    FormHeapAlloc
0x55437D: add     esp, 4
0x554380: mov     [esp+7Ch+var_5C], eax
0x554384: cmp     eax, ebx
0x554386: mov     byte ptr [esp+7Ch+var_4], 8
0x55438B: jz      short loc_554398
0x55438D: mov     ecx, eax; this
0x55438F: call    ??0BSFaceGenModelMap@@QAE@XZ; BSFaceGenModelMap::BSFaceGenModelMap(void)
0x554394: mov     esi, eax
0x554396: jmp     short loc_55439A
0x554398: xor     esi, esi
0x55439A: cmp     ds:0B39B80h, ebx
0x5543A0: mov     byte ptr [esp+7Ch+var_4], 7
0x5543A5: jnz     short loc_5543AC
0x5543A7: call    sub_553550
0x5543AC: mov     ecx, ds:0B39B80h
0x5543B2: mov     [ecx+0DACh], esi
0x5543B8: mov     edx, ds:0B39B80h
0x5543BE: mov     ecx, [edx+0DACh]
0x5543C4: mov     eax, ds:0B120ECh
0x5543C9: push    ebx
0x5543CA: mov     [ecx+18h], eax
0x5543CD: call    sub_5506B0
0x5543D2: cmp     ds:0B39B80h, ebx
0x5543D8: mov     esi, ds:0B120F4h
0x5543DE: jnz     short loc_5543E5
0x5543E0: call    sub_553550
0x5543E5: mov     ecx, ds:0B39B80h
0x5543EB: mov     ecx, [ecx+0DACh]
0x5543F1: push    ebx
0x5543F2: mov     [ecx+1Ch], esi
0x5543F5: call    sub_5506B0
0x5543FA: cmp     ds:0B39B80h, ebx
0x554400: jnz     short loc_554407
0x554402: call    sub_553550
0x554407: mov     eax, ds:0B39B80h
0x55440C: mov     ecx, [eax+0DACh]
0x554412: lea     edx, [esp+7Ch+var_64]
0x554416: push    edx
0x554417: push    edi
0x554418: call    sub_5515B0
0x55441D: test    al, al
0x55441F: jz      short loc_554461
0x554421: mov     esi, [esp+7Ch+var_64]
0x554425: cmp     [esi+8], ebx
0x554428: jnz     short loc_55443B
0x55442A: mov     ecx, dword ptr [esp+7Ch+ArgList]
0x55442E: push    1; char
0x554430: push    ebx; int
0x554431: push    ebp; int
0x554432: push    ecx; ArgList
0x554433: push    edi; int
0x554434: mov     ecx, esi
0x554436: call    sub_559B50
0x55443B: lea     edx, [esi+4]
0x55443E: push    edx; lpAddend
0x55443F: mov     byte ptr [esp+80h+var_4], 6
0x554444: call    dword ptr ds:0A2807Ch
0x55444A: test    eax, eax
0x55444C: jnz     loc_55450C
0x554452: mov     eax, [esi]
0x554454: mov     edx, [eax]
0x554456: push    1
0x554458: mov     ecx, esi
0x55445A: call    edx
0x55445C: jmp     loc_55450C
0x554461: push    1Ch; Size
0x554463: call    FormHeapAlloc
0x554468: add     esp, 4
0x55446B: mov     [esp+7Ch+var_5C], eax
0x55446F: cmp     eax, ebx
0x554471: mov     byte ptr [esp+7Ch+var_4], 9
0x554476: jz      short loc_554481
0x554478: mov     ecx, eax; this
0x55447A: call    ??0BSFaceGenModel@@QAE@XZ; BSFaceGenModel::BSFaceGenModel(void)
0x55447F: jmp     short loc_554483
0x554481: xor     eax, eax
0x554483: push    eax; a2
0x554484: lea     ecx, [esp+80h+var_64]; this
0x554488: mov     byte ptr [esp+80h+var_4], 7
0x55448D: call    NiSmartPointer_Set??
0x554492: mov     eax, dword ptr [esp+7Ch+ArgList]
0x554496: mov     esi, [esp+7Ch+var_64]
0x55449A: push    1; char
0x55449C: push    ebx; int
0x55449D: push    ebp; int
0x55449E: push    eax; ArgList
0x55449F: push    edi; int
0x5544A0: mov     ecx, esi
0x5544A2: call    sub_559B50
0x5544A7: test    al, al
0x5544A9: jz      short loc_5544CD
0x5544AB: cmp     ds:0B39B80h, ebx
0x5544B1: jnz     short loc_5544B8
0x5544B3: call    sub_553550
0x5544B8: mov     ecx, ds:0B39B80h
0x5544BE: mov     ecx, [ecx+0DACh]
0x5544C4: push    esi
0x5544C5: push    edi
0x5544C6: call    sub_551450
0x5544CB: jmp     short loc_5544EB
0x5544CD: cmp     esi, ebx
0x5544CF: jz      short loc_5544EB
0x5544D1: lea     edx, [esi+4]
0x5544D4: push    edx; lpAddend
0x5544D5: call    dword ptr ds:0A2807Ch
0x5544DB: test    eax, eax
0x5544DD: jnz     short loc_5544E9
0x5544DF: mov     eax, [esi]
0x5544E1: mov     edx, [eax]
0x5544E3: push    1
0x5544E5: mov     ecx, esi
0x5544E7: call    edx
0x5544E9: xor     esi, esi
0x5544EB: cmp     esi, ebx
0x5544ED: mov     byte ptr [esp+7Ch+var_4], 6
0x5544F2: jz      short loc_554520
0x5544F4: lea     eax, [esi+4]
0x5544F7: push    eax; lpAddend
0x5544F8: call    dword ptr ds:0A2807Ch
0x5544FE: test    eax, eax
0x554500: jnz     short loc_55450C
0x554502: mov     edx, [esi]
0x554504: mov     eax, [edx]
0x554506: push    1
0x554508: mov     ecx, esi
0x55450A: call    eax
0x55450C: mov     edx, [esp+7Ch+arg_8]
0x554513: lea     ecx, [esp+7Ch+var_68]
0x554517: push    ecx
0x554518: push    edx
0x554519: mov     ecx, esi
0x55451B: call    sub_559870
0x554520: mov     esi, [esp+7Ch+arg_8]
0x554527: mov     ecx, [esp+7Ch+var_68]
0x55452B: cmp     ecx, ebx
0x55452D: jz      loc_55475C
0x554533: push    offset aFacegenhair; "FaceGenHair"
0x554538: call    NiObjectNET_SetName
0x55453D: fld     dword ptr [esi+68h]
0x554540: mov     eax, [esp+7Ch+var_68]
0x554544: push    ecx
0x554545: fstp    [esp+80h+var_80]; float
0x554548: push    eax; int
0x554549: call    sub_550980
0x55454E: mov     eax, [esi+60h]
0x554551: add     eax, 3Ch ; '<'
0x554554: mov     eax, [eax+4]
0x554557: add     esp, 8
0x55455A: cmp     eax, ebx
0x55455C: jnz     short loc_554563
0x55455E: mov     eax, offset EmptyString
0x554563: push    eax; ArgList
0x554564: lea     ecx, [esp+80h+ArgList]
0x554568: push    offset aTexturesS; "Textures\\%s"
0x55456D: push    ecx; int
0x55456E: call    BSStringT_Static_Format
0x554573: mov     edx, dword ptr [esp+88h+ArgList]
0x554577: mov     ecx, ds:0B333A0h
0x55457D: add     esp, 0Ch
0x554580: push    ebx; char
0x554581: push    ebx; char
0x554582: push    edx; ArgList
0x554583: lea     eax, [esp+88h+arg_8]
0x55458A: push    eax; int
0x55458B: call    sub_442890
0x554590: push    eax
0x554591: lea     ecx, [esp+80h+var_60]
0x554595: mov     byte ptr [esp+80h+var_4], 0Ah
0x55459A: call    sub_55E2A0
0x55459F: mov     eax, [esp+7Ch+arg_8]
0x5545A6: cmp     eax, ebx
0x5545A8: mov     byte ptr [esp+7Ch+var_4], 6
0x5545AD: jz      short loc_5545CD
0x5545AF: mov     esi, eax
0x5545B1: add     eax, 4
0x5545B4: push    eax; lpAddend
0x5545B5: call    dword ptr ds:0A2807Ch
0x5545BB: test    eax, eax
0x5545BD: jnz     short loc_5545CD
0x5545BF: cmp     esi, ebx
0x5545C1: jz      short loc_5545CD
0x5545C3: mov     edx, [esi]
0x5545C5: mov     eax, [edx]
0x5545C7: push    1
0x5545C9: mov     ecx, esi
0x5545CB: call    eax
0x5545CD: mov     ebp, [esp+7Ch+var_60]
0x5545D1: cmp     ebp, ebx
0x5545D3: jz      short loc_554653
0x5545D5: push    30h ; '0'; Size
0x5545D7: call    FormHeapAlloc
0x5545DC: add     esp, 4
0x5545DF: mov     [esp+7Ch+arg_8], eax
0x5545E6: cmp     eax, ebx
0x5545E8: mov     byte ptr [esp+7Ch+var_4], 0Bh
0x5545ED: jz      short loc_5545FA
0x5545EF: mov     ecx, eax
0x5545F1: call    NiTexturingProperty__NiTexturingProperty
0x5545F6: mov     esi, eax
0x5545F8: jmp     short loc_5545FC
0x5545FA: xor     esi, esi
0x5545FC: push    ebp
0x5545FD: mov     ecx, esi
0x5545FF: mov     byte ptr [esp+80h+var_4], 6
0x554604: call    NiTexturingProperty__SetUnk08
0x554609: push    3
0x55460B: mov     ecx, esi
0x55460D: call    sub_405870
0x554612: push    2; a2
0x554614: mov     ecx, esi; this
0x554616: call    sub_405900
0x55461B: mov     ecx, [esp+7Ch+var_68]
0x55461F: push    6
0x554621: call    NiNode_GetNiPropertyByID
0x554626: test    eax, eax
0x554628: jz      short loc_554649
0x55462A: push    6
0x55462C: lea     ecx, [esp+80h+arg_8]
0x554633: push    ecx
0x554634: mov     ecx, [esp+84h+var_68]
0x554638: call    sub_708560
0x55463D: lea     ecx, [esp+7Ch+arg_8]; this
0x554644: call    sub_7016A0
0x554649: mov     ecx, [esp+7Ch+var_68]; this
0x55464D: push    esi; a2
0x55464E: call    sub_405680
0x554653: mov     ecx, [esp+7Ch+var_68]
0x554657: push    ebx
0x554658: call    NiNode_GetNiPropertyByID
0x55465D: test    eax, eax
0x55465F: jnz     short loc_554672
0x554661: mov     esi, [esp+7Ch+var_68]
0x554665: call    sub_550550
0x55466A: push    eax; a2
0x55466B: mov     ecx, esi; this
0x55466D: call    sub_405680
0x554672: mov     eax, [esp+7Ch+var_68]
0x554676: cmp     [eax+0B8h], ebx
0x55467C: push    ebx
0x55467D: jz      short loc_5546E5
0x55467F: cmp     [esp+80h+arg_C], bl
0x554686: jz      short loc_5546CF
0x554688: mov     ecx, eax
0x55468A: call    sub_478350
0x55468F: mov     eax, [esp+7Ch+var_68]
0x554693: mov     edx, ds:0B3F9A8h
0x554699: mov     [eax+54h], edx
0x55469C: mov     ecx, ds:0B3F9ACh
0x5546A2: add     eax, 54h ; 'T'
0x5546A5: mov     [eax+4], ecx
0x5546A8: mov     edx, ds:0B3F9B0h
0x5546AE: mov     [eax+8], edx
0x5546B1: mov     edi, [esp+7Ch+var_68]
0x5546B5: mov     eax, [esp+7Ch+arg_0]
0x5546BC: add     edi, 30h ; '0'
0x5546BF: mov     ecx, 9
0x5546C4: lea     esi, [esp+7Ch+var_30]
0x5546C8: rep movsd
0x5546CA: mov     ecx, [eax]
0x5546CC: push    ebx
0x5546CD: jmp     short loc_5546FC
0x5546CF: mov     ecx, [esp+80h+arg_4]
0x5546D6: mov     ecx, [ecx]
0x5546D8: mov     edx, [ecx]
0x5546DA: push    eax
0x5546DB: mov     eax, [edx+84h]
0x5546E1: call    eax
0x5546E3: jmp     short loc_55470B
0x5546E5: lea     edi, [eax+30h]
0x5546E8: mov     ecx, 9
0x5546ED: lea     esi, [esp+80h+var_30]
0x5546F1: rep movsd
0x5546F3: mov     ecx, [esp+80h+arg_0]
0x5546FA: mov     ecx, [ecx]
0x5546FC: mov     eax, [esp+80h+var_68]
0x554700: mov     edx, [ecx]
0x554702: mov     edx, [edx+84h]
0x554708: push    eax
0x554709: call    edx
0x55470B: mov     ecx, [esp+7Ch+var_68]
0x55470F: cmp     ecx, ebx
0x554711: jz      short loc_554737
0x554713: mov     esi, ecx
0x554715: add     ecx, 4
0x554718: push    ecx; lpAddend
0x554719: call    dword ptr ds:0A2807Ch
0x55471F: test    eax, eax
0x554721: jnz     short loc_554731
0x554723: cmp     esi, ebx
0x554725: jz      short loc_554731
0x554727: mov     eax, [esi]
0x554729: mov     edx, [eax]
0x55472B: push    1
0x55472D: mov     ecx, esi
0x55472F: call    edx
0x554731: xor     ecx, ecx
0x554733: mov     [esp+7Ch+var_68], ecx
0x554737: cmp     ebp, ebx
0x554739: jz      short loc_55475C
0x55473B: lea     eax, [ebp+4]
0x55473E: push    eax; lpAddend
0x55473F: call    dword ptr ds:0A2807Ch
0x554745: test    eax, eax
0x554747: jnz     short loc_554754
0x554749: mov     edx, [ebp+0]
0x55474C: mov     eax, [edx]
0x55474E: push    1
0x554750: mov     ecx, ebp
0x554752: call    eax
0x554754: mov     [esp+7Ch+var_60], ebx
0x554758: mov     ecx, [esp+7Ch+var_68]
0x55475C: cmp     ecx, ebx
0x55475E: mov     byte ptr [esp+7Ch+var_4], 5
0x554763: jz      short loc_554783
0x554765: mov     esi, ecx
0x554767: add     ecx, 4
0x55476A: push    ecx; lpAddend
0x55476B: call    dword ptr ds:0A2807Ch
0x554771: test    eax, eax
0x554773: jnz     short loc_554783
0x554775: cmp     esi, ebx
0x554777: jz      short loc_554783
0x554779: mov     edx, [esi]
0x55477B: mov     eax, [edx]
0x55477D: push    1
0x55477F: mov     ecx, esi
0x554781: call    eax
0x554783: mov     esi, [esp+7Ch+var_60]
0x554787: cmp     esi, ebx
0x554789: mov     byte ptr [esp+7Ch+var_4], 4
0x55478E: jz      short loc_5547A8
0x554790: lea     ecx, [esi+4]
0x554793: push    ecx; lpAddend
0x554794: call    dword ptr ds:0A2807Ch
0x55479A: test    eax, eax
0x55479C: jnz     short loc_5547A8
0x55479E: mov     edx, [esi]
0x5547A0: mov     eax, [edx]
0x5547A2: push    1
0x5547A4: mov     ecx, esi
0x5547A6: call    eax
0x5547A8: push    ebx
0x5547A9: call    FormHeapFree
0x5547AE: push    ebx
0x5547AF: call    FormHeapFree
0x5547B4: mov     ecx, [esp+84h+var_50]
0x5547B8: push    ecx
0x5547B9: call    FormHeapFree
0x5547BE: mov     edx, [esp+88h+var_48]
0x5547C2: push    edx
0x5547C3: call    FormHeapFree
0x5547C8: mov     eax, dword ptr [esp+8Ch+ArgList]
0x5547CC: push    eax
0x5547CD: call    FormHeapFree
0x5547D2: add     esp, 14h
0x5547D5: mov     ecx, [esp+7Ch+var_C]
0x5547D9: mov     large fs:0, ecx
0x5547E0: pop     ecx
0x5547E1: pop     edi
0x5547E2: pop     esi
0x5547E3: pop     ebp
0x5547E4: pop     ebx
0x5547E5: add     esp, 68h
0x5547E8: retn
