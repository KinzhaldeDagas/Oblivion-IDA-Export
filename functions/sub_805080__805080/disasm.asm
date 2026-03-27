0x805080: push    0FFFFFFFFh
0x805082: push    offset SEH_803C90
0x805087: mov     eax, large fs:0
0x80508D: push    eax
0x80508E: push    ecx
0x80508F: push    esi
0x805090: push    edi
0x805091: mov     eax, ds:0B30AACh
0x805096: xor     eax, esp
0x805098: push    eax
0x805099: lea     eax, [esp+1Ch+var_C]
0x80509D: mov     large fs:0, eax
0x8050A3: mov     edi, ecx
0x8050A5: cmp     dword ptr [edi+2Ch], 0
0x8050A9: lea     esi, [edi+2Ch]
0x8050AC: jnz     loc_80513D
0x8050B2: push    34h ; '4'; Size
0x8050B4: call    FormHeapAlloc
0x8050B9: add     esp, 4
0x8050BC: mov     [esp+1Ch+var_10], eax
0x8050C0: test    eax, eax
0x8050C2: mov     [esp+1Ch+var_4], 0
0x8050CA: jz      short loc_8050D9
0x8050CC: mov     ecx, [edi+14h]
0x8050CF: push    ecx
0x8050D0: mov     ecx, eax
0x8050D2: call    NiD3DShaderCostantMapPixel__Construct
0x8050D7: jmp     short loc_8050DB
0x8050D9: xor     eax, eax
0x8050DB: push    eax; a2
0x8050DC: mov     ecx, esi; this
0x8050DE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8050E6: call    NiSmartPointer_Set??
0x8050EB: mov     ecx, [esi]
0x8050ED: mov     edx, [ecx]
0x8050EF: mov     eax, [edx+18h]
0x8050F2: push    0
0x8050F4: push    offset dword_B46198
0x8050F9: push    4
0x8050FB: push    10h
0x8050FD: push    offset EmptyString
0x805102: push    1
0x805104: push    0Fh
0x805106: push    0
0x805108: push    10000007h
0x80510D: push    offset aDecalOffset_0; "Decal Offset"
0x805112: call    eax
0x805114: mov     ecx, [esi]
0x805116: mov     edx, [ecx]
0x805118: mov     eax, [edx+18h]
0x80511B: push    0
0x80511D: push    offset flt_B4615C
0x805122: push    4
0x805124: push    10h
0x805126: push    offset EmptyString
0x80512B: push    1
0x80512D: push    0Eh
0x80512F: push    0
0x805131: push    10000007h
0x805136: push    offset aDecalCount; "Decal Count"
0x80513B: call    eax
0x80513D: cmp     dword ptr [edi+30h], 0
0x805141: lea     esi, [edi+30h]
0x805144: jnz     loc_805286
0x80514A: push    34h ; '4'; Size
0x80514C: call    FormHeapAlloc
0x805151: add     esp, 4
0x805154: mov     [esp+1Ch+var_10], eax
0x805158: test    eax, eax
0x80515A: mov     [esp+1Ch+var_4], 1
0x805162: jz      short loc_805171
0x805164: mov     ecx, [edi+14h]
0x805167: push    ecx
0x805168: mov     ecx, eax
0x80516A: call    NiD3DShaderCostantMapVertex__Construct
0x80516F: jmp     short loc_805173
0x805171: xor     eax, eax
0x805173: push    eax; a2
0x805174: mov     ecx, esi; this
0x805176: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80517E: call    NiSmartPointer_Set??
0x805183: mov     ecx, [esi]
0x805185: mov     edx, [ecx]
0x805187: mov     eax, [edx+18h]
0x80518A: push    0
0x80518C: push    0
0x80518E: push    0
0x805190: push    0
0x805192: push    0
0x805194: push    4
0x805196: push    0
0x805198: push    0
0x80519A: push    20000009h
0x80519F: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x8051A4: call    eax
0x8051A6: mov     ecx, [esi]
0x8051A8: mov     edx, [ecx]
0x8051AA: mov     eax, [edx+38h]
0x8051AD: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x8051B2: call    eax
0x8051B4: push    eax; a2
0x8051B5: lea     ecx, [edi+94h]; this
0x8051BB: call    NiSmartPointer_Set??
0x8051C0: mov     ecx, [esi]
0x8051C2: mov     edx, [ecx]
0x8051C4: mov     eax, [edx+1Ch]
0x8051C7: push    offset EmptyString
0x8051CC: push    1
0x8051CE: push    20000009h
0x8051D3: push    offset aSkinworldviewp; "SkinWorldViewProjTranspose"
0x8051D8: call    eax
0x8051DA: mov     ecx, [esi]
0x8051DC: mov     edx, [ecx]
0x8051DE: mov     eax, [edx+38h]
0x8051E1: push    offset aSkinworldviewp; "SkinWorldViewProjTranspose"
0x8051E6: call    eax
0x8051E8: push    eax; a2
0x8051E9: lea     ecx, [edi+98h]; this
0x8051EF: call    NiSmartPointer_Set??
0x8051F4: mov     ecx, [esi]
0x8051F6: mov     edx, [ecx]
0x8051F8: mov     eax, [edx+18h]
0x8051FB: push    0
0x8051FD: push    offset flt_B4615C
0x805202: push    4
0x805204: push    10h
0x805206: push    offset EmptyString
0x80520B: push    1
0x80520D: push    1Eh
0x80520F: push    0
0x805211: push    10000007h
0x805216: push    offset aDecalcount; "DecalCount"
0x80521B: call    eax
0x80521D: mov     ecx, [esi]
0x80521F: mov     edx, [ecx]
0x805221: mov     eax, [edx+18h]
0x805224: push    0
0x805226: push    0
0x805228: push    0
0x80522A: push    0
0x80522C: push    0
0x80522E: push    18h
0x805230: push    2Ah ; '*'
0x805232: push    80000h
0x805237: push    20000009h
0x80523C: push    offset aBonematrix3; "BoneMatrix3"
0x805241: call    eax
0x805243: mov     ecx, [esi]
0x805245: mov     edx, [ecx]
0x805247: mov     eax, [edx+38h]
0x80524A: push    offset aBonematrix3; "BoneMatrix3"
0x80524F: call    eax
0x805251: push    eax; a2
0x805252: lea     ecx, [edi+9Ch]; this
0x805258: call    NiSmartPointer_Set??
0x80525D: mov     ecx, [esi]
0x80525F: mov     edx, [ecx]
0x805261: push    0
0x805263: mov     eax, [edx+18h]
0x805266: push    offset flt_B46218
0x80526B: push    4
0x80526D: push    10h
0x80526F: push    offset EmptyString
0x805274: push    1
0x805276: push    1Fh
0x805278: push    0
0x80527A: push    10000007h
0x80527F: push    offset aDecalFade; "decal fade"
0x805284: call    eax
0x805286: mov     ecx, dword ptr [esp+1Ch+var_C]
0x80528A: mov     large fs:0, ecx
0x805291: pop     ecx
0x805292: pop     edi
0x805293: pop     esi
0x805294: add     esp, 10h
0x805297: retn
