0x5640E0: push    0FFFFFFFFh
0x5640E2: push    offset ??0BSTreeNode@@QAE@XZ_SEH
0x5640E7: mov     eax, large fs:0
0x5640ED: push    eax
0x5640EE: push    ecx
0x5640EF: push    ebx
0x5640F0: push    ebp
0x5640F1: push    esi
0x5640F2: push    edi
0x5640F3: mov     eax, ds:0B30AACh
0x5640F8: xor     eax, esp
0x5640FA: push    eax
0x5640FB: lea     eax, [esp+24h+var_C]
0x5640FF: mov     large fs:0, eax
0x564105: mov     esi, ecx
0x564107: mov     [esp+24h+var_10], esi
0x56410B: xor     ebp, ebp
0x56410D: push    ebp
0x56410E: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x564113: mov     dword ptr [esi], offset ??_7BSTreeNode@@6B@; const BSTreeNode::`vftable'
0x564119: mov     [esp+24h+var_4], ebp
0x56411D: mov     [esi+0DCh], ebp
0x564123: mov     [esi+0E8h], ebp
0x564129: mov     edi, [esi+0DCh]
0x56412F: mov     ebx, [esp+24h+arg_0]
0x564133: cmp     edi, ebx
0x564135: mov     byte ptr [esp+24h+var_4], 2
0x56413A: jz      short loc_564170
0x56413C: cmp     edi, ebp
0x56413E: jz      short loc_56415C
0x564140: lea     eax, [edi+4]
0x564143: push    eax; lpAddend
0x564144: call    dword ptr ds:0A2807Ch
0x56414A: test    eax, eax
0x56414C: jnz     short loc_56415C
0x56414E: cmp     edi, ebp
0x564150: jz      short loc_56415C
0x564152: mov     edx, [edi]
0x564154: mov     eax, [edx]
0x564156: push    1
0x564158: mov     ecx, edi
0x56415A: call    eax
0x56415C: cmp     ebx, ebp
0x56415E: mov     [esi+0DCh], ebx
0x564164: jz      short loc_564170
0x564166: add     ebx, 4
0x564169: push    ebx; lpAddend
0x56416A: call    dword ptr ds:0A28078h
0x564170: or      word ptr [esi+18h], 2
0x564175: push    0DCh ; 'Ü'; Size
0x56417A: call    FormHeapAlloc
0x56417F: add     esp, 4
0x564182: mov     [esp+24h+arg_0], eax
0x564186: cmp     eax, ebp
0x564188: mov     byte ptr [esp+24h+var_4], 3
0x56418D: jz      short loc_56419B
0x56418F: push    ebp
0x564190: mov     ecx, eax; this
0x564192: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x564197: mov     edi, eax
0x564199: jmp     short loc_56419D
0x56419B: xor     edi, edi
0x56419D: push    offset aBranches; "Branches"
0x5641A2: mov     ecx, edi
0x5641A4: mov     byte ptr [esp+28h+var_4], 2
0x5641A9: call    NiObjectNET_SetName
0x5641AE: push    edi
0x5641AF: push    ebp
0x5641B0: lea     ecx, [esp+2Ch+arg_0]
0x5641B4: push    ecx
0x5641B5: mov     ecx, esi
0x5641B7: call    NiNode__SetObjectAt
0x5641BC: mov     eax, [esp+24h+arg_0]
0x5641C0: cmp     eax, ebp
0x5641C2: mov     ebx, ds:0A2807Ch
0x5641C8: jz      short loc_5641E4
0x5641CA: mov     edi, eax
0x5641CC: add     eax, 4
0x5641CF: push    eax; lpAddend
0x5641D0: call    ebx ; InterlockedDecrement
0x5641D2: test    eax, eax
0x5641D4: jnz     short loc_5641E4
0x5641D6: cmp     edi, ebp
0x5641D8: jz      short loc_5641E4
0x5641DA: mov     edx, [edi]
0x5641DC: mov     eax, [edx]
0x5641DE: push    1
0x5641E0: mov     ecx, edi
0x5641E2: call    eax
0x5641E4: push    0DCh ; 'Ü'; Size
0x5641E9: call    FormHeapAlloc
0x5641EE: add     esp, 4
0x5641F1: mov     [esp+24h+arg_0], eax
0x5641F5: cmp     eax, ebp
0x5641F7: mov     byte ptr [esp+24h+var_4], 4
0x5641FC: jz      short loc_56420A
0x5641FE: push    ebp
0x5641FF: mov     ecx, eax; this
0x564201: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x564206: mov     edi, eax
0x564208: jmp     short loc_56420C
0x56420A: xor     edi, edi
0x56420C: push    offset aLeaves; "Leaves"
0x564211: mov     ecx, edi
0x564213: mov     byte ptr [esp+28h+var_4], 2
0x564218: call    NiObjectNET_SetName
0x56421D: push    1
0x56421F: call    sub_55F7E0
0x564224: add     eax, 8
0x564227: add     esp, 4
0x56422A: cmp     [eax], ebp
0x56422C: jz      short loc_564245
0x56422E: push    1
0x564230: call    sub_55F7E0
0x564235: add     eax, 8
0x564238: mov     eax, [eax]
0x56423A: add     esp, 4
0x56423D: push    eax; a2
0x56423E: mov     ecx, edi; this
0x564240: call    sub_405680
0x564245: push    edi
0x564246: push    1
0x564248: lea     ecx, [esp+2Ch+arg_0]
0x56424C: push    ecx
0x56424D: mov     ecx, esi
0x56424F: call    NiNode__SetObjectAt
0x564254: mov     eax, [esp+24h+arg_0]
0x564258: cmp     eax, ebp
0x56425A: jz      short loc_564276
0x56425C: mov     edi, eax
0x56425E: add     eax, 4
0x564261: push    eax; lpAddend
0x564262: call    ebx ; InterlockedDecrement
0x564264: test    eax, eax
0x564266: jnz     short loc_564276
0x564268: cmp     edi, ebp
0x56426A: jz      short loc_564276
0x56426C: mov     edx, [edi]
0x56426E: mov     eax, [edx]
0x564270: push    1
0x564272: mov     ecx, edi
0x564274: call    eax
0x564276: push    0E4h ; 'ä'; Size
0x56427B: call    FormHeapAlloc
0x564280: mov     edi, eax
0x564282: add     esp, 4
0x564285: mov     [esp+24h+arg_0], edi
0x564289: cmp     edi, ebp
0x56428B: mov     byte ptr [esp+24h+var_4], 5
0x564290: jz      short loc_5642B3
0x564292: push    ebp
0x564293: mov     ecx, edi; this
0x564295: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x56429A: fldz
0x56429C: fstp    dword ptr [edi+0E0h]
0x5642A2: mov     dword ptr [edi], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x5642A8: mov     word ptr [edi+0DCh], 9
0x5642B1: jmp     short loc_5642B5
0x5642B3: xor     edi, edi
0x5642B5: push    offset aBillboard; "Billboard"
0x5642BA: mov     ecx, edi
0x5642BC: mov     byte ptr [esp+28h+var_4], 2
0x5642C1: call    NiObjectNET_SetName
0x5642C6: fldz
0x5642C8: mov     cx, [edi+0DCh]
0x5642CF: sub     esp, 10h
0x5642D2: fst     [esp+34h+var_28]; float
0x5642D6: and     cx, 0FFF9h
0x5642DB: fstp    [esp+34h+var_2C]; float
0x5642DF: or      cx, 1
0x5642E3: fld1
0x5642E5: mov     [edi+0DCh], cx
0x5642EC: fstp    [esp+34h+var_30]; float
0x5642F0: lea     ecx, [edi+30h]
0x5642F3: fld     dword ptr ds:0A3721Ch
0x5642F9: fstp    [esp+34h+var_34]; float
0x5642FC: call    sub_70FE20
0x564301: push    edi
0x564302: push    2
0x564304: lea     edx, [esp+2Ch+arg_0]
0x564308: push    edx
0x564309: mov     ecx, esi
0x56430B: call    NiNode__SetObjectAt
0x564310: mov     eax, [esp+24h+arg_0]
0x564314: cmp     eax, ebp
0x564316: jz      short loc_564332
0x564318: mov     edi, eax
0x56431A: add     eax, 4
0x56431D: push    eax; lpAddend
0x56431E: call    ebx ; InterlockedDecrement
0x564320: test    eax, eax
0x564322: jnz     short loc_564332
0x564324: cmp     edi, ebp
0x564326: jz      short loc_564332
0x564328: mov     eax, [edi]
0x56432A: mov     edx, [eax]
0x56432C: push    1
0x56432E: mov     ecx, edi
0x564330: call    edx
0x564332: mov     ecx, [esi+0DCh]
0x564338: call    sub_5601E0
0x56433D: movzx   ebx, ax
0x564340: cmp     bx, bp
0x564343: jz      loc_56445C
0x564349: movzx   edi, bx
0x56434C: xor     ecx, ecx
0x56434E: mov     eax, edi
0x564350: mov     edx, 4
0x564355: mul     edx
0x564357: seto    cl
0x56435A: neg     ecx
0x56435C: or      ecx, eax
0x56435E: xor     eax, eax
0x564360: add     ecx, 4
0x564363: setb    al
0x564366: neg     eax
0x564368: or      eax, ecx
0x56436A: push    eax; Size
0x56436B: call    FormHeapAlloc
0x564370: add     esp, 4
0x564373: mov     [esp+24h+arg_0], eax
0x564377: test    eax, eax
0x564379: mov     byte ptr [esp+24h+var_4], 6
0x56437E: jz      short loc_56439A
0x564380: push    offset sub_7016A0; a5
0x564385: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x56438A: push    edi; size
0x56438B: lea     ebp, [eax+4]
0x56438E: push    4; a2
0x564390: push    ebp; a1
0x564391: mov     [eax], edi
0x564393: call    ArrayConstructor
0x564398: jmp     short loc_56439C
0x56439A: xor     ebp, ebp
0x56439C: test    bx, bx
0x56439F: mov     byte ptr [esp+24h+var_4], 2
0x5643A4: mov     [esi+0E0h], ebp
0x5643AA: jbe     short loc_5643EE
0x5643AC: xor     ebx, ebx
0x5643AE: mov     [esp+24h+arg_0], edi
0x5643B2: mov     edi, [esi+0E0h]
0x5643B8: mov     ebp, [edi+ebx]
0x5643BB: add     edi, ebx
0x5643BD: test    ebp, ebp
0x5643BF: jz      short loc_5643E4
0x5643C1: lea     ecx, [ebp+4]
0x5643C4: push    ecx; lpAddend
0x5643C5: call    dword ptr ds:0A2807Ch
0x5643CB: test    eax, eax
0x5643CD: jnz     short loc_5643DE
0x5643CF: test    ebp, ebp
0x5643D1: jz      short loc_5643DE
0x5643D3: mov     edx, [ebp+0]
0x5643D6: mov     eax, [edx]
0x5643D8: push    1
0x5643DA: mov     ecx, ebp
0x5643DC: call    eax
0x5643DE: mov     dword ptr [edi], 0
0x5643E4: add     ebx, 4
0x5643E7: sub     [esp+24h+arg_0], 1
0x5643EC: jnz     short loc_5643B2
0x5643EE: xor     ebp, ebp
0x5643F0: mov     ecx, [esi+0DCh]
0x5643F6: call    sub_560200
0x5643FB: movzx   ebx, ax
0x5643FE: cmp     bx, bp
0x564401: jz      loc_5644C0
0x564407: movzx   edi, bx
0x56440A: xor     ecx, ecx
0x56440C: mov     eax, edi
0x56440E: mov     edx, 4
0x564413: mul     edx
0x564415: seto    cl
0x564418: neg     ecx
0x56441A: or      ecx, eax
0x56441C: xor     eax, eax
0x56441E: add     ecx, 4
0x564421: setb    al
0x564424: neg     eax
0x564426: or      eax, ecx
0x564428: push    eax; Size
0x564429: call    FormHeapAlloc
0x56442E: add     esp, 4
0x564431: mov     [esp+24h+arg_0], eax
0x564435: cmp     eax, ebp
0x564437: mov     byte ptr [esp+24h+var_4], 7
0x56443C: jz      short loc_564464
0x56443E: push    offset sub_7016A0; a5
0x564443: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x564448: push    edi; size
0x564449: lea     ebp, [eax+4]
0x56444C: push    4; a2
0x56444E: push    ebp; a1
0x56444F: mov     [eax], edi
0x564451: call    ArrayConstructor
0x564456: mov     eax, ebp
0x564458: xor     ebp, ebp
0x56445A: jmp     short loc_564466
0x56445C: mov     [esi+0E0h], ebp
0x564462: jmp     short loc_5643F0
0x564464: xor     eax, eax
0x564466: cmp     bx, bp
0x564469: mov     byte ptr [esp+24h+var_4], 2
0x56446E: mov     [esi+0E4h], eax
0x564474: jbe     short loc_5644C6
0x564476: xor     ebx, ebx
0x564478: mov     [esp+24h+arg_0], edi
0x56447C: lea     esp, [esp+0]
0x564480: mov     edi, [esi+0E4h]
0x564486: mov     ebp, [edi+ebx]
0x564489: add     edi, ebx
0x56448B: test    ebp, ebp
0x56448D: jz      short loc_5644B2
0x56448F: lea     ecx, [ebp+4]
0x564492: push    ecx; lpAddend
0x564493: call    dword ptr ds:0A2807Ch
0x564499: test    eax, eax
0x56449B: jnz     short loc_5644AC
0x56449D: test    ebp, ebp
0x56449F: jz      short loc_5644AC
0x5644A1: mov     edx, [ebp+0]
0x5644A4: mov     eax, [edx]
0x5644A6: push    1
0x5644A8: mov     ecx, ebp
0x5644AA: call    eax
0x5644AC: mov     dword ptr [edi], 0
0x5644B2: add     ebx, 4
0x5644B5: sub     [esp+24h+arg_0], 1
0x5644BA: jnz     short loc_564480
0x5644BC: xor     ebp, ebp
0x5644BE: jmp     short loc_5644C6
0x5644C0: mov     [esi+0E4h], ebp
0x5644C6: mov     edi, [esi+0E8h]
0x5644CC: cmp     edi, ebp
0x5644CE: jz      short loc_5644F2
0x5644D0: lea     ecx, [edi+4]
0x5644D3: push    ecx; lpAddend
0x5644D4: call    dword ptr ds:0A2807Ch
0x5644DA: test    eax, eax
0x5644DC: jnz     short loc_5644EC
0x5644DE: cmp     edi, ebp
0x5644E0: jz      short loc_5644EC
0x5644E2: mov     edx, [edi]
0x5644E4: mov     eax, [edx]
0x5644E6: push    1
0x5644E8: mov     ecx, edi
0x5644EA: call    eax
0x5644EC: mov     [esi+0E8h], ebp
0x5644F2: push    1
0x5644F4: call    sub_55F7E0
0x5644F9: add     eax, 18h
0x5644FC: mov     eax, [eax]
0x5644FE: add     esp, 4
0x564501: push    eax
0x564502: mov     ecx, esi
0x564504: call    NiNode_AddNiExtraData
0x564509: mov     ebx, [esp+24h+arg_4]
0x56450D: cmp     ebx, ebp
0x56450F: jz      short loc_564515
0x564511: mov     eax, ebx
0x564513: jmp     short loc_56451E
0x564515: mov     eax, [esi+0DCh]
0x56451B: mov     eax, [eax+40h]
0x56451E: cmp     eax, ebp
0x564520: jz      short loc_564574
0x564522: push    14h; Size
0x564524: call    FormHeapAlloc
0x564529: mov     edi, eax
0x56452B: add     esp, 4
0x56452E: mov     [esp+24h+arg_0], edi
0x564532: cmp     edi, ebp
0x564534: mov     byte ptr [esp+24h+var_4], 8
0x564539: jz      short loc_56454A
0x56453B: mov     ecx, edi
0x56453D: call    sub_897600
0x564542: mov     dword ptr [edi], offset ??_7bhkCollisionObject@@6B@; const bhkCollisionObject::`vftable'
0x564548: jmp     short loc_56454C
0x56454A: xor     edi, edi
0x56454C: cmp     ebx, ebp
0x56454E: mov     byte ptr [esp+24h+var_4], 2
0x564553: jz      short loc_564559
0x564555: mov     eax, ebx
0x564557: jmp     short loc_564562
0x564559: mov     ecx, [esi+0DCh]
0x56455F: mov     eax, [ecx+40h]
0x564562: push    eax
0x564563: mov     ecx, edi
0x564565: call    sub_897670
0x56456A: mov     edx, [edi]
0x56456C: mov     eax, [edx+4Ch]
0x56456F: push    esi
0x564570: mov     ecx, edi
0x564572: call    eax
0x564574: fldz
0x564576: mov     eax, esi
0x564578: fstp    dword ptr [esi+0ECh]
0x56457E: mov     ecx, [esp+24h+var_C]
0x564582: mov     large fs:0, ecx
0x564589: pop     ecx
0x56458A: pop     edi
0x56458B: pop     esi
0x56458C: pop     ebp
0x56458D: pop     ebx
0x56458E: add     esp, 10h
0x564591: retn    8
