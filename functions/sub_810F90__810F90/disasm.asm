0x810F90: push    0FFFFFFFFh
0x810F92: push    offset SEH_8122A0
0x810F97: mov     eax, large fs:0
0x810F9D: push    eax
0x810F9E: push    ecx
0x810F9F: push    ebp
0x810FA0: push    esi
0x810FA1: push    edi
0x810FA2: mov     eax, ds:0B30AACh
0x810FA7: xor     eax, esp
0x810FA9: push    eax
0x810FAA: lea     eax, [esp+20h+var_C]
0x810FAE: mov     large fs:0, eax
0x810FB4: mov     edi, ecx
0x810FB6: cmp     dword ptr [edi+30h], 0
0x810FBA: lea     esi, [edi+30h]
0x810FBD: jnz     loc_8111BA
0x810FC3: push    34h ; '4'; Size
0x810FC5: call    FormHeapAlloc
0x810FCA: add     esp, 4
0x810FCD: mov     [esp+20h+var_10], eax
0x810FD1: test    eax, eax
0x810FD3: mov     [esp+20h+var_4], 0
0x810FDB: jz      short loc_810FEA
0x810FDD: mov     ecx, [edi+14h]
0x810FE0: push    ecx
0x810FE1: mov     ecx, eax
0x810FE3: call    NiD3DShaderCostantMapVertex__Construct
0x810FE8: jmp     short loc_810FEC
0x810FEA: xor     eax, eax
0x810FEC: push    eax; a2
0x810FED: mov     ecx, esi; this
0x810FEF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x810FF7: call    NiSmartPointer_Set??
0x810FFC: mov     ecx, [esi]
0x810FFE: mov     edx, [ecx]
0x811000: mov     eax, [edx+18h]
0x811003: push    0
0x811005: push    0
0x811007: push    0
0x811009: push    0
0x81100B: push    0
0x81100D: push    4
0x81100F: push    0
0x811011: push    0
0x811013: push    20000009h
0x811018: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x81101D: call    eax
0x81101F: mov     ecx, [esi]
0x811021: mov     edx, [ecx]
0x811023: mov     edx, [edx+18h]
0x811026: push    0
0x811028: lea     eax, [edi+0C0h]
0x81102E: push    eax
0x81102F: push    4
0x811031: push    10h
0x811033: push    offset EmptyString
0x811038: push    1
0x81103A: push    4
0x81103C: push    0
0x81103E: push    10000007h
0x811043: push    offset aDiffuseLightDi; "Diffuse Light direction"
0x811048: call    edx
0x81104A: mov     ecx, [esi]
0x81104C: mov     eax, [ecx]
0x81104E: mov     eax, [eax+18h]
0x811051: push    0
0x811053: lea     edx, [edi+0D0h]
0x811059: push    edx
0x81105A: push    4
0x81105C: push    10h
0x81105E: push    offset EmptyString
0x811063: push    1
0x811065: push    5
0x811067: push    0
0x811069: push    10000007h
0x81106E: push    offset aDiffuseLightCo; "Diffuse Light color"
0x811073: call    eax
0x811075: mov     ecx, [esi]
0x811077: mov     edx, [ecx]
0x811079: mov     edx, [edx+18h]
0x81107C: push    0
0x81107E: lea     eax, [edi+0B0h]
0x811084: push    eax
0x811085: push    4
0x811087: push    10h
0x811089: push    offset EmptyString
0x81108E: push    1
0x811090: push    0Dh
0x811092: push    0
0x811094: push    10000007h
0x811099: push    offset aAmbientColor_0; "ambient color"
0x81109E: call    edx
0x8110A0: mov     ecx, [esi]
0x8110A2: mov     eax, [ecx]
0x8110A4: mov     eax, [eax+18h]
0x8110A7: push    0
0x8110A9: lea     edx, [edi+0F0h]
0x8110AF: push    edx
0x8110B0: push    4
0x8110B2: push    10h
0x8110B4: push    offset EmptyString
0x8110B9: push    1
0x8110BB: push    0Eh
0x8110BD: push    0
0x8110BF: push    10000007h
0x8110C4: push    offset aEyeVector; "eye vector"
0x8110C9: call    eax
0x8110CB: mov     ecx, [esi]
0x8110CD: mov     edx, [ecx]
0x8110CF: push    0
0x8110D1: mov     edx, [edx+18h]
0x8110D4: lea     eax, [edi+100h]
0x8110DA: push    eax
0x8110DB: push    4
0x8110DD: push    10h
0x8110DF: push    offset EmptyString
0x8110E4: push    1
0x8110E6: push    9
0x8110E8: push    0
0x8110EA: push    10000007h
0x8110EF: push    offset aEyeRightVector; "eye right vector"
0x8110F4: call    edx
0x8110F6: mov     ecx, [esi]
0x8110F8: mov     eax, [ecx]
0x8110FA: mov     edx, [eax+18h]
0x8110FD: push    0
0x8110FF: push    offset flt_B2C334
0x811104: push    4
0x811106: push    10h
0x811108: push    offset EmptyString
0x81110D: push    1
0x81110F: push    0Ch
0x811111: push    0
0x811113: push    10000007h
0x811118: push    offset aAlphaParamPara; "alpha param param"
0x81111D: call    edx
0x81111F: mov     ecx, [esi]
0x811121: mov     eax, [ecx]
0x811123: mov     edx, [eax+18h]
0x811126: push    0
0x811128: push    offset dword_B46638
0x81112D: push    4
0x81112F: push    10h
0x811131: push    offset EmptyString
0x811136: push    1
0x811138: push    0Bh
0x81113A: push    0
0x81113C: push    10000007h
0x811141: push    offset aFogparam_0; "fogparam"
0x811146: call    edx
0x811148: mov     ecx, [esi]
0x81114A: mov     eax, [ecx]
0x81114C: mov     edx, [eax+18h]
0x81114F: push    0
0x811151: push    offset dword_B46648
0x811156: push    4
0x811158: push    10h
0x81115A: push    offset EmptyString
0x81115F: push    1
0x811161: push    0Ah
0x811163: push    0
0x811165: push    10000007h
0x81116A: push    offset aFogcolor_0; "fogcolor"
0x81116F: call    edx
0x811171: movzx   eax, word ptr [edi+0ACh]
0x811178: mov     ebp, [edi+0A4h]
0x81117E: mov     ecx, [esi]
0x811180: mov     edx, [ecx]
0x811182: push    0
0x811184: push    ebp
0x811185: push    4
0x811187: mov     ebp, eax
0x811189: shl     ebp, 4
0x81118C: push    ebp
0x81118D: push    offset EmptyString
0x811192: push    eax
0x811193: mov     eax, [edx+18h]
0x811196: push    14h
0x811198: push    0
0x81119A: push    10000009h
0x81119F: push    offset aInstanceData; "instance data"
0x8111A4: call    eax
0x8111A6: mov     ecx, [esi]
0x8111A8: mov     edx, [ecx]
0x8111AA: mov     eax, [edx+38h]
0x8111AD: push    offset aInstanceData; "instance data"
0x8111B2: call    eax
0x8111B4: mov     [edi+0A8h], eax
0x8111BA: cmp     dword ptr [edi+2Ch], 0
0x8111BE: lea     esi, [edi+2Ch]
0x8111C1: jnz     short loc_811227
0x8111C3: push    34h ; '4'; Size
0x8111C5: call    FormHeapAlloc
0x8111CA: add     esp, 4
0x8111CD: mov     [esp+20h+var_10], eax
0x8111D1: test    eax, eax
0x8111D3: mov     [esp+20h+var_4], 1
0x8111DB: jz      short loc_8111EA
0x8111DD: mov     ecx, [edi+14h]
0x8111E0: push    ecx
0x8111E1: mov     ecx, eax
0x8111E3: call    NiD3DShaderCostantMapPixel__Construct
0x8111E8: jmp     short loc_8111EC
0x8111EA: xor     eax, eax
0x8111EC: push    eax; a2
0x8111ED: mov     ecx, esi; this
0x8111EF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8111F7: call    NiSmartPointer_Set??
0x8111FC: mov     ecx, [esi]
0x8111FE: mov     edx, [ecx]
0x811200: mov     edx, [edx+18h]
0x811203: push    0
0x811205: lea     eax, [edi+0E0h]
0x81120B: push    eax
0x81120C: push    4
0x81120E: push    10h
0x811210: push    offset EmptyString
0x811215: push    1
0x811217: push    3
0x811219: push    0
0x81121B: push    10000007h
0x811220: push    offset aAlphaTestRef; "alpha test ref"
0x811225: call    edx
0x811227: mov     eax, [esp+20h+a2]
0x81122B: push    eax; a2
0x81122C: mov     ecx, edi; this
0x81122E: call    sub_77AA60
0x811233: mov     ecx, dword ptr [esp+20h+var_C]
0x811237: mov     large fs:0, ecx
0x81123E: pop     ecx
0x81123F: pop     edi
0x811240: pop     esi
0x811241: pop     ebp
0x811242: add     esp, 10h
0x811245: retn    4
