0x555ED7: mov     esi, dword ptr [esp+ArgList]; jumptable 00555C79 default case
0x555EDB: mov     ecx, [esp+arg_18]
0x555EDF: cmp     ecx, ebx
0x555EE1: jz      loc_556199
0x555EE7: lea     edx, [esp+arg_10]
0x555EEB: push    edx
0x555EEC: push    edi
0x555EED: call    sub_559870
0x555EF2: test    al, al
0x555EF4: jz      loc_556199
0x555EFA: mov     ecx, [esp+arg_10]
0x555EFE: cmp     ecx, ebx
0x555F00: jz      loc_556199
0x555F06: mov     eax, [edi+98h]
0x555F0C: mov     edx, [eax+ebp*4]
0x555F0F: push    edx; Src
0x555F10: call    NiObjectNET_SetName
0x555F15: cmp     ebp, ebx
0x555F17: jnz     short loc_555F23
0x555F19: mov     eax, [esp+arg_10]
0x555F1D: mov     [esp+arg_20], eax
0x555F21: jmp     short loc_555F35
0x555F23: cmp     ebp, 1
0x555F26: jz      short loc_555F2D
0x555F28: cmp     ebp, 2
0x555F2B: jnz     short loc_555F35
0x555F2D: mov     ecx, [esp+arg_10]
0x555F31: mov     [esp+arg_24], ecx
0x555F35: mov     edx, [edi+88h]
0x555F3B: mov     eax, [edx+ebp*4]
0x555F3E: mov     eax, [eax+4]
0x555F41: cmp     eax, ebx
0x555F43: jnz     short loc_555F4A
0x555F45: mov     eax, offset EmptyString
0x555F4A: push    eax; ArgList
0x555F4B: lea     eax, [esp+4+ArgList]
0x555F4F: push    offset aTexturesS; "Textures\\%s"
0x555F54: push    eax; int
0x555F55: call    BSStringT_Static_Format
0x555F5A: mov     esi, dword ptr [esp+0Ch+ArgList]
0x555F5E: add     esp, 0Ch
0x555F61: push    ebx; char
0x555F62: push    ebx; char
0x555F63: push    esi; ArgList
0x555F64: lea     ecx, [esp+0Ch+arg_28]
0x555F68: push    ecx; int
0x555F69: mov     ecx, ds:0B333A0h
0x555F6F: call    sub_442890
0x555F74: push    eax
0x555F75: lea     ecx, [esp+4+arg_1C]
0x555F79: mov     byte ptr [esp+4+arg_94], 0Bh
0x555F81: call    sub_55E2A0
0x555F86: lea     ecx, [esp+arg_28]; this
0x555F8A: mov     byte ptr [esp+arg_94], 7
0x555F92: call    sub_7016A0
0x555F97: mov     edi, [esp+arg_1C]
0x555F9B: cmp     edi, ebx
0x555F9D: jz      short loc_556010
0x555F9F: push    30h ; '0'; Size
0x555FA1: call    FormHeapAlloc
0x555FA6: add     esp, 4
0x555FA9: mov     [esp+arg_34], eax
0x555FAD: cmp     eax, ebx
0x555FAF: mov     byte ptr [esp+arg_94], 0Ch
0x555FB7: jz      short loc_555FC4
0x555FB9: mov     ecx, eax
0x555FBB: call    NiTexturingProperty__NiTexturingProperty
0x555FC0: mov     esi, eax
0x555FC2: jmp     short loc_555FC6
0x555FC4: xor     esi, esi
0x555FC6: push    edi
0x555FC7: mov     ecx, esi
0x555FC9: mov     byte ptr [esp+4+arg_94], 7
0x555FD1: call    NiTexturingProperty__SetUnk08
0x555FD6: mov     ecx, [esp+arg_10]
0x555FDA: push    6
0x555FDC: call    NiNode_GetNiPropertyByID
0x555FE1: test    eax, eax
0x555FE3: jz      short loc_555FFE
0x555FE5: mov     ecx, [esp+arg_10]
0x555FE9: push    6
0x555FEB: lea     edx, [esp+4+arg_2C]
0x555FEF: push    edx
0x555FF0: call    sub_708560
0x555FF5: lea     ecx, [esp+arg_2C]; this
0x555FF9: call    sub_7016A0
0x555FFE: mov     ecx, [esp+arg_10]; this
0x556002: push    esi; a2
0x556003: call    sub_405680
0x556008: mov     esi, dword ptr [esp+ArgList]
0x55600C: mov     ebp, [esp+arg_14]
0x556010: cmp     ebp, 5
0x556013: jz      short loc_55601A
0x556015: cmp     ebp, 4
0x556018: jnz     short loc_556059
0x55601A: mov     ecx, [esp+arg_10]
0x55601E: push    ebx
0x55601F: call    NiNode_GetNiPropertyByID
0x556024: test    eax, eax
0x556026: jz      short loc_556040
0x556028: mov     ecx, [esp+arg_10]
0x55602C: push    ebx
0x55602D: lea     eax, [esp+4+arg_30]
0x556031: push    eax
0x556032: call    sub_708560
0x556037: lea     ecx, [esp+arg_30]; this
0x55603B: call    sub_7016A0
0x556040: mov     esi, [esp+arg_10]
0x556044: call    sub_550550
0x556049: push    eax; a2
0x55604A: mov     ecx, esi; this
0x55604C: call    sub_405680
0x556051: mov     esi, dword ptr [esp+ArgList]
0x556055: mov     ebp, [esp+arg_14]
0x556059: cmp     ebp, ebx
0x55605B: jz      short loc_556067
0x55605D: cmp     ebp, 1
0x556060: jz      short loc_556067
0x556062: cmp     ebp, 2
0x556065: jnz     short loc_5560D1
0x556067: mov     ecx, [esp+arg_10]
0x55606B: push    2
0x55606D: call    NiNode_GetNiPropertyByID
0x556072: cmp     eax, ebx
0x556074: jz      short loc_556084
0x556076: push    offset aSkin; "skin"
0x55607B: mov     ecx, eax
0x55607D: call    NiObjectNET_SetName
0x556082: jmp     short loc_5560D1
0x556084: push    5Ch ; '\'; Size
0x556086: call    FormHeapAlloc
0x55608B: add     esp, 4
0x55608E: mov     [esp+arg_34], eax
0x556092: cmp     eax, ebx
0x556094: mov     byte ptr [esp+arg_94], 0Dh
0x55609C: jz      short loc_5560A9
0x55609E: mov     ecx, eax; this
0x5560A0: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x5560A5: mov     esi, eax
0x5560A7: jmp     short loc_5560AB
0x5560A9: xor     esi, esi
0x5560AB: push    offset aSkin; "skin"
0x5560B0: mov     ecx, esi
0x5560B2: mov     byte ptr [esp+4+arg_94], 7
0x5560BA: call    NiObjectNET_SetName
0x5560BF: mov     ecx, [esp+arg_10]; this
0x5560C3: push    esi; a2
0x5560C4: call    sub_405680
0x5560C9: mov     esi, dword ptr [esp+ArgList]
0x5560CD: mov     ebp, [esp+arg_14]
0x5560D1: mov     eax, [esp+arg_10]
0x5560D5: cmp     [eax+0B8h], ebx
0x5560DB: push    ebx
0x5560DC: jz      short loc_556153
0x5560DE: cmp     [esp+4+arg_A8], bl
0x5560E5: jz      short loc_55613D
0x5560E7: mov     ecx, eax
0x5560E9: call    sub_478350
0x5560EE: mov     eax, [esp+arg_10]
0x5560F2: mov     ecx, ds:0B3F9A8h
0x5560F8: mov     [eax+54h], ecx
0x5560FB: mov     edx, ds:0B3F9ACh
0x556101: add     eax, 54h ; 'T'
0x556104: mov     [eax+4], edx
0x556107: mov     ecx, ds:0B3F9B0h
0x55610D: mov     edx, [esp+arg_9C]
0x556114: mov     [eax+8], ecx
0x556117: mov     edi, [esp+arg_10]
0x55611B: add     edi, 30h ; '0'
0x55611E: mov     ecx, 9
0x556123: lea     esi, [esp+arg_68]
0x556127: rep movsd
0x556129: mov     ecx, [edx]
0x55612B: mov     eax, [ecx]
0x55612D: mov     edx, [esp+arg_10]
0x556131: mov     eax, [eax+84h]
0x556137: push    ebx
0x556138: push    edx
0x556139: call    eax
0x55613B: jmp     short loc_556179
0x55613D: mov     ecx, [esp+4+arg_A0]
0x556144: mov     ecx, [ecx]
0x556146: mov     edx, [ecx]
0x556148: push    eax
0x556149: mov     eax, [edx+84h]
0x55614F: call    eax
0x556151: jmp     short loc_556181
0x556153: lea     edi, [eax+30h]
0x556156: mov     ecx, 9
0x55615B: lea     esi, [esp+4+arg_68]
0x55615F: rep movsd
0x556161: mov     ecx, [esp+4+arg_9C]
0x556168: mov     ecx, [ecx]
0x55616A: mov     edx, [ecx]
0x55616C: mov     eax, [esp+4+arg_10]
0x556170: mov     edx, [edx+84h]
0x556176: push    eax
0x556177: call    edx
0x556179: mov     esi, [esp+8+arg_30]
0x55617D: mov     ebp, [esp+8+arg_C]
0x556181: push    ebx; a2
0x556182: lea     ecx, [esp+0Ch+arg_14]; this
0x556186: mov     [esp+0Ch+arg_10], ebx
0x55618A: call    NiSmartPointer_Set??
0x55618F: push    ebx; a2
0x556190: lea     ecx, [esp+0Ch+arg_8]; this
0x556194: call    NiSmartPointer_Set??
0x556199: add     ebp, 1
0x55619C: cmp     ebp, 9
0x55619F: mov     [esp+8+arg_C], ebp
0x5561A3: jb      loc_555B40
0x5561A9: cmp     ds:0B120BCh, bl
0x5561AF: jz      short loc_5561D7
0x5561B1: mov     ecx, [esp+8+arg_18]
0x5561B5: cmp     ecx, ebx
0x5561B7: jz      short loc_5561D7
0x5561B9: mov     eax, [esp+8+arg_1C]
0x5561BD: cmp     eax, ebx
0x5561BF: jz      short loc_5561D7
0x5561C1: fld     dword ptr ds:0A2FAACh
0x5561C7: push    ebx; char
0x5561C8: push    ebx; int
0x5561C9: push    ecx
0x5561CA: fstp    [esp+14h+var_14]; float
0x5561CD: push    eax; int
0x5561CE: push    ecx; int
0x5561CF: call    ??0?$NiTMap@IUVertexDist@@@@QAE@XZ; NiTMap<uint,VertexDist>::NiTMap<uint,VertexDist>(void)
0x5561D4: add     esp, 14h
0x5561D7: mov     edi, [esp+8+arg_9C]
0x5561DE: cmp     [edi+60h], ebx
0x5561E1: jz      short loc_556204
0x5561E3: mov     eax, [esp+8+arg_A0]
0x5561EA: mov     ecx, [esp+8+arg_98]
0x5561F1: mov     edx, [esp+8+arg_94]
0x5561F8: push    eax
0x5561F9: push    edi
0x5561FA: push    ecx
0x5561FB: push    edx
0x5561FC: call    sub_554260
0x556201: add     esp, 10h
0x556204: cmp     [edi+0B8h], ebx
0x55620A: jz      short loc_556235
0x55620C: cmp     [edi+0BCh], ebx
0x556212: jz      short loc_556235
0x556214: mov     eax, [esp+8+arg_A0]
0x55621B: mov     ecx, [esp+8+arg_98]
0x556222: mov     edx, [esp+8+arg_94]
0x556229: push    eax
0x55622A: push    edi
0x55622B: push    ecx
0x55622C: push    edx
0x55622D: call    sub_5547F0
0x556232: add     esp, 10h
0x556235: mov     eax, [esp+8+arg_48]
0x556239: push    eax
0x55623A: call    FormHeapFree
0x55623F: push    ebx
0x556240: call    FormHeapFree
0x556245: mov     ecx, [esp+10h+arg_50]
0x556249: push    ecx
0x55624A: call    FormHeapFree
0x55624F: mov     edx, dword ptr [esp+14h+ArgList]
0x556253: push    edx
0x556254: call    FormHeapFree
0x556259: mov     eax, [esp+18h+arg_40]
0x55625D: push    eax
0x55625E: call    FormHeapFree
0x556263: push    esi
0x556264: call    FormHeapFree
0x556269: mov     eax, [esp+20h+arg_8]
0x55626D: add     esp, 18h
0x556270: cmp     eax, ebx
0x556272: mov     [esp+8+arg_8C], bl
0x556279: jz      short loc_556299
0x55627B: mov     esi, eax
0x55627D: add     eax, 4
0x556280: push    eax; lpAddend
0x556281: call    dword ptr ds:0A2807Ch
0x556287: test    eax, eax
0x556289: jnz     short loc_556299
0x55628B: cmp     esi, ebx
0x55628D: jz      short loc_556299
0x55628F: mov     edx, [esi]
0x556291: mov     eax, [edx]
0x556293: push    1
0x556295: mov     ecx, esi
0x556297: call    eax
0x556299: mov     esi, [esp+0Ch+arg_10]
0x55629D: cmp     esi, ebx
0x55629F: mov     [esp+0Ch+arg_88], 0FFFFFFFFh
0x5562AA: jz      short loc_5562C4
0x5562AC: lea     ecx, [esi+4]
0x5562AF: push    ecx; lpAddend
0x5562B0: call    dword ptr ds:0A2807Ch
0x5562B6: test    eax, eax
0x5562B8: jnz     short loc_5562C4
0x5562BA: mov     edx, [esi]
0x5562BC: mov     eax, [edx]
0x5562BE: push    1
0x5562C0: mov     ecx, esi
0x5562C2: call    eax
0x5562C4: mov     al, 1
0x5562C6: mov     ecx, [esp+10h+arg_7C]
0x5562CD: mov     large fs:0, ecx
0x5562D4: pop     ecx
0x5562D5: pop     edi
0x5562D6: pop     esi
0x5562D7: pop     ebp
0x5562D8: pop     ebx
0x5562D9: add     esp, 88h
0x5562DF: retn
