0x5C50A0: push    0FFFFFFFFh
0x5C50A2: push    offset SEH_5C50A0
0x5C50A7: mov     eax, large fs:0
0x5C50AD: push    eax
0x5C50AE: sub     esp, 0D4h
0x5C50B4: push    ebx
0x5C50B5: push    ebp
0x5C50B6: push    esi
0x5C50B7: push    edi
0x5C50B8: mov     eax, ds:0B30AACh
0x5C50BD: xor     eax, esp
0x5C50BF: push    eax
0x5C50C0: lea     eax, [esp+0F4h+var_C]
0x5C50C7: mov     large fs:0, eax
0x5C50CD: mov     edi, ecx
0x5C50CF: mov     ecx, ds:0B333C4h
0x5C50D5: mov     eax, [ecx]
0x5C50D7: mov     edx, [eax+170h]
0x5C50DD: call    edx
0x5C50DF: xor     ebx, ebx
0x5C50E1: mov     [esp+0F4h+var_DC], eax
0x5C50E5: mov     [esp+0F4h+var_B4], ebx
0x5C50E9: mov     [esp+0F4h+var_4], ebx
0x5C50F0: mov     [esp+0F4h+var_A8], ebx
0x5C50F4: mov     [esp+0F4h+var_D8], ebx
0x5C50F8: mov     dword ptr [esp+0F4h+ArgList], ebx
0x5C50FC: mov     [esp+0F4h+var_AC], bx
0x5C5101: mov     [esp+0F4h+var_AA], bx
0x5C5106: mov     [esp+0F4h+var_CC], ebx
0x5C510A: mov     word ptr [esp+0F4h+var_C8], bx
0x5C510F: mov     word ptr [esp+0F4h+var_C8+2], bx
0x5C5114: mov     [esp+0F4h+var_D4], ebx
0x5C5118: mov     word ptr [esp+0F4h+var_D0], bx
0x5C511D: mov     word ptr [esp+0F4h+var_D0+2], bx
0x5C5122: mov     [esp+0F4h+var_98], ebx
0x5C5126: mov     [esp+0F4h+var_94], bx
0x5C512B: mov     [esp+0F4h+var_92], bx
0x5C5130: mov     [esp+0F4h+var_A0], ebx
0x5C5134: mov     [esp+0F4h+var_9C], bx
0x5C5139: mov     [esp+0F4h+var_9A], bx
0x5C513E: mov     ecx, ds:0B333C4h
0x5C5144: mov     eax, [ecx]
0x5C5146: mov     edx, [eax+130h]
0x5C514C: push    ebx
0x5C514D: mov     byte ptr [esp+0F8h+var_4], 7
0x5C5155: call    edx
0x5C5157: test    eax, eax
0x5C5159: jnz     short loc_5C51D3
0x5C515B: push    ebx
0x5C515C: call    FormHeapFree
0x5C5161: push    ebx
0x5C5162: call    FormHeapFree
0x5C5167: mov     eax, [esp+0FCh+var_D4]
0x5C516B: push    eax
0x5C516C: call    FormHeapFree
0x5C5171: mov     ecx, [esp+100h+var_CC]
0x5C5175: push    ecx
0x5C5176: mov     [esp+104h+var_D4], ebx
0x5C517A: mov     word ptr [esp+104h+var_D0+2], bx
0x5C517F: mov     word ptr [esp+104h+var_D0], bx
0x5C5184: call    FormHeapFree
0x5C5189: push    ebx
0x5C518A: mov     [esp+108h+var_CC], ebx
0x5C518E: mov     word ptr [esp+108h+var_C8+2], bx
0x5C5193: mov     word ptr [esp+108h+var_C8], bx
0x5C5198: call    FormHeapFree
0x5C519D: mov     esi, [esp+108h+var_D8]
0x5C51A1: add     esp, 14h
0x5C51A4: cmp     esi, ebx
0x5C51A6: mov     byte ptr [esp+0F4h+var_4], 1
0x5C51AE: jz      short loc_5C51CC
0x5C51B0: lea     edx, [esi+4]
0x5C51B3: push    edx; lpAddend
0x5C51B4: call    dword ptr ds:0A2807Ch
0x5C51BA: test    eax, eax
0x5C51BC: jnz     short loc_5C51CC
0x5C51BE: cmp     esi, ebx
0x5C51C0: jz      short loc_5C51CC
0x5C51C2: mov     eax, [esi]
0x5C51C4: mov     edx, [eax]
0x5C51C6: push    1
0x5C51C8: mov     ecx, esi
0x5C51CA: call    edx
0x5C51CC: xor     al, al
0x5C51CE: jmp     loc_5C5ADE
0x5C51D3: cmp     [esp+0F4h+arg_0], bl
0x5C51DA: jz      loc_5C5317
0x5C51E0: mov     eax, [esp+0F4h+var_DC]
0x5C51E4: mov     esi, [eax+0E8h]
0x5C51EA: add     esi, 8Ch ; 'Œ'
0x5C51F0: or      ebp, 0FFFFFFFFh
0x5C51F3: cmp     esi, ebx
0x5C51F5: jz      loc_5C515B
0x5C51FB: jmp     short loc_5C5200
0x5C51FD: align 10h
0x5C5200: cmp     ebp, [edi+870h]
0x5C5206: jz      short loc_5C5242
0x5C5208: cmp     esi, ebx
0x5C520A: jz      short loc_5C522E
0x5C520C: mov     ecx, [esi]
0x5C520E: cmp     ecx, ebx
0x5C5210: jz      short loc_5C522E
0x5C5212: call    sub_51FE80
0x5C5217: test    al, al
0x5C5219: jz      short loc_5C522E
0x5C521B: mov     edx, [esp+0F4h+var_DC]
0x5C521F: mov     ecx, [esi]
0x5C5221: push    edx
0x5C5222: call    sub_51FFD0
0x5C5227: test    al, al
0x5C5229: jz      short loc_5C522E
0x5C522B: add     ebp, 1
0x5C522E: cmp     ebp, [edi+870h]
0x5C5234: jz      short loc_5C5239
0x5C5236: mov     esi, [esi+4]
0x5C5239: cmp     esi, ebx
0x5C523B: jnz     short loc_5C5200
0x5C523D: jmp     loc_5C515B
0x5C5242: cmp     esi, ebx
0x5C5244: jz      loc_5C515B
0x5C524A: mov     esi, [esi]
0x5C524C: cmp     esi, ebx
0x5C524E: jz      loc_5C5367
0x5C5254: mov     eax, [esi+1Ch]
0x5C5257: cmp     eax, ebx
0x5C5259: jnz     short loc_5C5260
0x5C525B: mov     eax, offset EmptyString
0x5C5260: push    eax
0x5C5261: mov     eax, ds:0B38F88h
0x5C5266: push    0FB4h
0x5C526B: sub     esp, 8
0x5C526E: mov     ecx, esp
0x5C5270: mov     [esp+104h+var_E0], esp
0x5C5274: push    eax; int
0x5C5275: call    BSStringT_constr_str
0x5C527A: mov     edx, ds:0B38F70h
0x5C5280: sub     esp, 8
0x5C5283: mov     ecx, esp
0x5C5285: mov     [esp+10Ch+var_A4], esp
0x5C5289: push    edx
0x5C528A: mov     byte ptr [esp+110h+var_4], 8
0x5C5292: call    BSStringT_constr_str
0x5C5297: mov     ecx, edi
0x5C5299: mov     byte ptr [esp+10Ch+var_4], 7
0x5C52A1: call    sub_5C3440
0x5C52A6: mov     ecx, eax
0x5C52A8: call    Tile_SetString
0x5C52AD: mov     eax, [esi+1Ch]
0x5C52B0: cmp     eax, ebx
0x5C52B2: jnz     short loc_5C52B9
0x5C52B4: mov     eax, offset EmptyString
0x5C52B9: push    eax
0x5C52BA: mov     eax, ds:0B38FB8h
0x5C52BF: push    0FB4h
0x5C52C4: sub     esp, 8
0x5C52C7: mov     ecx, esp
0x5C52C9: mov     [esp+104h+var_A4], esp
0x5C52CD: push    eax; int
0x5C52CE: call    BSStringT_constr_str
0x5C52D3: mov     edx, ds:0B38F88h
0x5C52D9: sub     esp, 8
0x5C52DC: mov     ecx, esp
0x5C52DE: mov     [esp+10Ch+var_E0], esp
0x5C52E2: push    edx
0x5C52E3: mov     byte ptr [esp+110h+var_4], 9
0x5C52EB: call    BSStringT_constr_str
0x5C52F0: mov     ecx, edi
0x5C52F2: mov     byte ptr [esp+10Ch+var_4], 7
0x5C52FA: call    sub_5C3440
0x5C52FF: mov     ecx, eax
0x5C5301: call    Tile_SetString
0x5C5306: mov     eax, [esp+0F4h+var_DC]
0x5C530A: mov     ecx, edi
0x5C530C: mov     [eax+1C8h], esi
0x5C5312: call    sub_5C34D0
0x5C5317: mov     ecx, ds:0B333C4h
0x5C531D: mov     eax, [ecx]
0x5C531F: mov     edx, [eax+130h]
0x5C5325: push    ebx
0x5C5326: call    edx
0x5C5328: movzx   eax, word ptr [eax+0B6h]
0x5C532F: xor     ebp, ebp
0x5C5331: cmp     eax, ebx
0x5C5333: mov     [esp+0F4h+var_E0], eax
0x5C5337: jbe     loc_5C5A19
0x5C533D: lea     ecx, [ecx+0]
0x5C5340: mov     ecx, ds:0B333C4h
0x5C5346: mov     eax, [ecx]
0x5C5348: mov     edx, [eax+130h]
0x5C534E: push    ebx
0x5C534F: call    edx
0x5C5351: movzx   ecx, word ptr [eax+0B6h]
0x5C5358: cmp     ecx, ebp
0x5C535A: ja      loc_5C53E8
0x5C5360: xor     eax, eax
0x5C5362: jmp     loc_5C53F1
0x5C5367: push    ebx
0x5C5368: call    FormHeapFree
0x5C536D: push    ebx
0x5C536E: call    FormHeapFree
0x5C5373: mov     ecx, [esp+0FCh+var_D4]
0x5C5377: push    ecx
0x5C5378: call    FormHeapFree
0x5C537D: mov     edx, [esp+100h+var_CC]
0x5C5381: push    edx
0x5C5382: mov     [esp+104h+var_D4], ebx
0x5C5386: mov     word ptr [esp+104h+var_D0+2], bx
0x5C538B: mov     word ptr [esp+104h+var_D0], bx
0x5C5390: call    FormHeapFree
0x5C5395: push    ebx
0x5C5396: mov     [esp+108h+var_CC], ebx
0x5C539A: mov     word ptr [esp+108h+var_C8+2], bx
0x5C539F: mov     word ptr [esp+108h+var_C8], bx
0x5C53A4: call    FormHeapFree
0x5C53A9: add     esp, 14h
0x5C53AC: lea     ecx, [esp+0F4h+var_D8]; this
0x5C53B0: mov     byte ptr [esp+0F4h+var_4], 1
0x5C53B8: call    sub_7016A0
0x5C53BD: lea     ecx, [esp+0F4h+var_A8]; this
0x5C53C1: mov     byte ptr [esp+0F4h+var_4], bl
0x5C53C8: call    sub_7016A0
0x5C53CD: lea     ecx, [esp+0F4h+var_B4]; this
0x5C53D1: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x5C53DC: call    sub_7016A0
0x5C53E1: xor     al, al
0x5C53E3: jmp     loc_5C5ADE
0x5C53E8: mov     edx, [eax+0B0h]
0x5C53EE: mov     eax, [edx+ebp*4]
0x5C53F1: mov     esi, [eax+8]
0x5C53F4: mov     edi, offset aFacegenhair; "FaceGenHair"
0x5C53F9: mov     ecx, 0Ch
0x5C53FE: xor     edx, edx
0x5C5400: repe cmpsb
0x5C5402: jz      short loc_5C5416
0x5C5404: add     ebp, 1
0x5C5407: cmp     ebp, [esp+0F4h+var_E0]
0x5C540B: jb      loc_5C5340
0x5C5411: jmp     loc_5C5A19
0x5C5416: mov     edx, [eax]
0x5C5418: mov     ecx, eax
0x5C541A: mov     eax, [edx+10h]
0x5C541D: call    eax
0x5C541F: mov     ebp, eax
0x5C5421: cmp     ebp, ebx
0x5C5423: jz      loc_5C5A19
0x5C5429: lea     ecx, [ebp+4]
0x5C542C: push    ecx; lpAddend
0x5C542D: mov     [esp+0F8h+var_A8], ebp
0x5C5431: call    dword ptr ds:0A28078h
0x5C5437: cmp     [esp+0F4h+arg_0], bl
0x5C543E: push    ecx
0x5C543F: jz      loc_5C58A5
0x5C5445: fld     dword ptr ds:0A3721Ch
0x5C544B: lea     ecx, [esp+0F8h+var_90]
0x5C544F: fstp    [esp+0F8h+var_F8]; float
0x5C5452: call    sub_70FD80
0x5C5457: mov     edi, [esp+0F4h+var_DC]
0x5C545B: mov     ecx, [edi+1C8h]
0x5C5461: mov     edx, [ecx+24h]
0x5C5464: mov     eax, [edx+14h]
0x5C5467: add     ecx, 24h ; '$'
0x5C546A: call    eax
0x5C546C: push    eax; ArgList
0x5C546D: lea     ecx, [esp+0F8h+ArgList]
0x5C5471: push    offset aMeshesS; "Meshes\\%s"
0x5C5476: push    ecx; int
0x5C5477: call    BSStringT_Static_Format
0x5C547C: mov     esi, dword ptr [esp+100h+ArgList]
0x5C5480: add     esp, 0Ch
0x5C5483: push    1
0x5C5485: push    1
0x5C5487: push    ebx
0x5C5488: lea     edx, [esp+100h+var_D4]
0x5C548C: push    esi
0x5C548D: push    edx
0x5C548E: call    sub_550010
0x5C5493: add     esp, 8
0x5C5496: push    eax
0x5C5497: push    esi
0x5C5498: lea     eax, [esp+108h+var_CC]
0x5C549C: push    esi
0x5C549D: push    eax
0x5C549E: call    sub_54FEB0
0x5C54A3: add     esp, 8
0x5C54A6: push    eax
0x5C54A7: call    sub_553620
0x5C54AC: add     esp, 18h
0x5C54AF: push    offset sub_43ACE0; a5
0x5C54B4: push    offset sub_43EB30; a4
0x5C54B9: push    4; size
0x5C54BB: push    18h; a2
0x5C54BD: lea     ecx, [esp+104h+a1]
0x5C54C4: push    ecx; a1
0x5C54C5: mov     esi, eax
0x5C54C7: call    ArrayConstructor
0x5C54CC: lea     edx, [esp+0F4h+a1]
0x5C54D3: push    edx
0x5C54D4: mov     ecx, edi
0x5C54D6: mov     byte ptr [esp+0F8h+var_4], 0Ah
0x5C54DE: call    sub_5221C0
0x5C54E3: cmp     esi, ebx
0x5C54E5: jz      short loc_5C54FB
0x5C54E7: lea     eax, [esp+0F4h+var_D8]
0x5C54EB: push    eax
0x5C54EC: lea     ecx, [esp+0F8h+a1]
0x5C54F3: push    ecx
0x5C54F4: mov     ecx, esi
0x5C54F6: call    sub_559870
0x5C54FB: mov     ecx, [esp+0F4h+var_D8]
0x5C54FF: cmp     ecx, ebx
0x5C5501: jz      loc_5C5882
0x5C5507: push    offset aFacegenhair; "FaceGenHair"
0x5C550C: call    NiObjectNET_SetName
0x5C5511: fld     dword ptr [edi+1CCh]
0x5C5517: mov     edx, [esp+0F4h+var_D8]
0x5C551B: fstp    [esp+0F4h+var_E0]
0x5C551F: fld     [esp+0F4h+var_E0]
0x5C5523: push    ecx
0x5C5524: fstp    [esp+0F8h+var_F8]; float
0x5C5527: push    edx; int
0x5C5528: call    sub_550980
0x5C552D: add     esp, 8
0x5C5530: test    byte ptr [ebp+18h], 1
0x5C5534: jz      short loc_5C553F
0x5C5536: mov     eax, [esp+0F4h+var_D8]
0x5C553A: or      word ptr [eax+18h], 1
0x5C553F: mov     eax, [edi+1C8h]
0x5C5545: mov     eax, [eax+40h]
0x5C5548: cmp     eax, ebx
0x5C554A: jnz     short loc_5C5551
0x5C554C: mov     eax, offset EmptyString
0x5C5551: push    eax; ArgList
0x5C5552: lea     eax, [esp+0F8h+ArgList]
0x5C5556: push    offset aTexturesS; "Textures\\%s"
0x5C555B: push    eax; int
0x5C555C: call    BSStringT_Static_Format
0x5C5561: mov     ecx, dword ptr [esp+100h+ArgList]
0x5C5565: add     esp, 0Ch
0x5C5568: push    ebx; char
0x5C5569: push    ebx; char
0x5C556A: push    ecx; ArgList
0x5C556B: mov     ecx, ds:0B333A0h
0x5C5571: lea     edx, [esp+100h+var_E0]
0x5C5575: push    edx; int
0x5C5576: call    sub_442890
0x5C557B: push    eax
0x5C557C: lea     ecx, [esp+0F8h+var_B4]
0x5C5580: mov     byte ptr [esp+0F8h+var_4], 0Bh
0x5C5588: call    sub_55E2A0
0x5C558D: mov     eax, [esp+0F4h+var_E0]
0x5C5591: cmp     eax, ebx
0x5C5593: mov     byte ptr [esp+0F4h+var_4], 0Ah
0x5C559B: jz      short loc_5C55BB
0x5C559D: mov     esi, eax
0x5C559F: add     eax, 4
0x5C55A2: push    eax; lpAddend
0x5C55A3: call    dword ptr ds:0A2807Ch
0x5C55A9: test    eax, eax
0x5C55AB: jnz     short loc_5C55BB
0x5C55AD: cmp     esi, ebx
0x5C55AF: jz      short loc_5C55BB
0x5C55B1: mov     eax, [esi]
0x5C55B3: mov     edx, [eax]
0x5C55B5: push    1
0x5C55B7: mov     ecx, esi
0x5C55B9: call    edx
0x5C55BB: mov     edi, [esp+0F4h+var_B4]
0x5C55BF: cmp     edi, ebx
0x5C55C1: jz      short loc_5C563E
0x5C55C3: push    30h ; '0'; Size
0x5C55C5: call    FormHeapAlloc
0x5C55CA: add     esp, 4
0x5C55CD: mov     [esp+0F4h+var_A4], eax
0x5C55D1: cmp     eax, ebx
0x5C55D3: mov     byte ptr [esp+0F4h+var_4], 0Ch
0x5C55DB: jz      short loc_5C55E8
0x5C55DD: mov     ecx, eax
0x5C55DF: call    NiTexturingProperty__NiTexturingProperty
0x5C55E4: mov     esi, eax
0x5C55E6: jmp     short loc_5C55EA
0x5C55E8: xor     esi, esi
0x5C55EA: push    edi
0x5C55EB: mov     ecx, esi
0x5C55ED: mov     byte ptr [esp+0F8h+var_4], 0Ah
0x5C55F5: call    NiTexturingProperty__SetUnk08
0x5C55FA: push    3
0x5C55FC: mov     ecx, esi
0x5C55FE: call    sub_405870
0x5C5603: push    2; a2
0x5C5605: mov     ecx, esi; this
0x5C5607: call    sub_405900
0x5C560C: mov     ecx, [esp+0F4h+var_D8]
0x5C5610: push    6
0x5C5612: call    NiNode_GetNiPropertyByID
0x5C5617: test    eax, eax
0x5C5619: jz      short loc_5C5634
0x5C561B: mov     ecx, [esp+0F4h+var_D8]
0x5C561F: push    6
0x5C5621: lea     eax, [esp+0F8h+var_E0]
0x5C5625: push    eax
0x5C5626: call    sub_708560
0x5C562B: lea     ecx, [esp+0F4h+var_E0]; this
0x5C562F: call    sub_7016A0
0x5C5634: mov     ecx, [esp+0F4h+var_D8]; this
0x5C5638: push    esi; a2
0x5C5639: call    sub_405680
0x5C563E: mov     ecx, [esp+0F4h+var_D8]
0x5C5642: push    ebx
0x5C5643: call    NiNode_GetNiPropertyByID
0x5C5648: test    eax, eax
0x5C564A: jnz     short loc_5C565D
0x5C564C: mov     esi, [esp+0F4h+var_D8]
0x5C5650: call    sub_550550
0x5C5655: push    eax; a2
0x5C5656: mov     ecx, esi; this
0x5C5658: call    sub_405680
0x5C565D: mov     edi, [esp+0F4h+var_D8]
0x5C5661: add     edi, 30h ; '0'
0x5C5664: mov     ecx, 9
0x5C5669: lea     esi, [esp+0F4h+var_90]
0x5C566D: rep movsd
0x5C566F: mov     ecx, ds:0B333C4h
0x5C5675: mov     edx, [ecx]
0x5C5677: mov     eax, [edx+130h]
0x5C567D: push    ebx
0x5C567E: call    eax
0x5C5680: mov     edx, [eax]
0x5C5682: mov     edx, [edx+88h]
0x5C5688: push    ebp
0x5C5689: lea     ecx, [esp+0F8h+var_E0]
0x5C568D: push    ecx
0x5C568E: mov     ecx, eax
0x5C5690: call    edx
0x5C5692: mov     eax, [esp+0F4h+var_E0]
0x5C5696: cmp     eax, ebx
0x5C5698: jz      short loc_5C56B8
0x5C569A: mov     esi, eax
0x5C569C: add     eax, 4
0x5C569F: push    eax; lpAddend
0x5C56A0: call    dword ptr ds:0A2807Ch
0x5C56A6: test    eax, eax
0x5C56A8: jnz     short loc_5C56B8
0x5C56AA: cmp     esi, ebx
0x5C56AC: jz      short loc_5C56B8
0x5C56AE: mov     eax, [esi]
0x5C56B0: mov     edx, [eax]
0x5C56B2: push    1
0x5C56B4: mov     ecx, esi
0x5C56B6: call    edx
0x5C56B8: mov     ecx, ds:0B333C4h
0x5C56BE: mov     eax, [ecx]
0x5C56C0: mov     edx, [eax+130h]
0x5C56C6: push    ebx
0x5C56C7: call    edx
0x5C56C9: mov     ecx, [esp+0F4h+var_D8]
0x5C56CD: mov     edx, [eax]
0x5C56CF: mov     edx, [edx+84h]
0x5C56D5: push    1
0x5C56D7: push    ecx
0x5C56D8: mov     ecx, eax
0x5C56DA: call    edx
0x5C56DC: mov     ecx, ds:0B333C4h
0x5C56E2: mov     eax, [ecx]
0x5C56E4: mov     edx, [eax+130h]
0x5C56EA: push    ebx
0x5C56EB: call    edx
0x5C56ED: mov     edx, [eax]
0x5C56EF: mov     ecx, eax
0x5C56F1: mov     eax, [edx+58h]
0x5C56F4: push    offset aFacegenhair; "FaceGenHair"
0x5C56F9: call    eax
0x5C56FB: mov     esi, eax
0x5C56FD: cmp     esi, ebx
0x5C56FF: jz      loc_5C5852
0x5C5705: push    1
0x5C5707: push    1
0x5C5709: push    1
0x5C570B: push    esi
0x5C570C: call    sub_7B8940
0x5C5711: add     esp, 10h
0x5C5714: push    4
0x5C5716: mov     ecx, esi
0x5C5718: call    NiNode_GetNiPropertyByID
0x5C571D: mov     esi, eax
0x5C571F: cmp     esi, ebx
0x5C5721: jnz     short loc_5C5727
0x5C5723: xor     eax, eax
0x5C5725: jmp     short loc_5C573A
0x5C5727: mov     edx, [esi]
0x5C5729: mov     eax, [edx+54h]
0x5C572C: mov     ecx, esi
0x5C572E: call    eax
0x5C5730: xor     ecx, ecx
0x5C5732: cmp     eax, 5
0x5C5735: setz    cl
0x5C5738: mov     eax, ecx
0x5C573A: neg     eax
0x5C573C: sbb     eax, eax
0x5C573E: and     eax, esi
0x5C5740: jz      short loc_5C57BB
0x5C5742: mov     edx, [esp+0F4h+var_DC]
0x5C5746: mov     ecx, [edx+1E8h]
0x5C574C: movzx   edx, cl
0x5C574F: mov     [esp+0F4h+var_DC], edx
0x5C5753: movzx   edx, ch
0x5C5756: fild    [esp+0F4h+var_DC]
0x5C575A: fld     qword ptr ds:0A3DDD8h
0x5C5760: mov     [esp+0F4h+var_DC], edx
0x5C5764: shr     ecx, 10h
0x5C5767: fdiv    st(1), st
0x5C5769: movzx   ecx, cl
0x5C576C: fxch    st(1)
0x5C576E: fstp    [esp+0F4h+var_C4]
0x5C5772: fild    [esp+0F4h+var_DC]
0x5C5776: mov     edx, [esp+0F4h+var_C4]
0x5C577A: mov     [esp+0F4h+var_DC], ecx
0x5C577E: mov     [eax+0A8h], edx
0x5C5784: fdiv    st, st(1)
0x5C5786: fstp    [esp+0F4h+var_C0]
0x5C578A: mov     ecx, [esp+0F4h+var_C0]
0x5C578E: mov     [eax+0ACh], ecx
0x5C5794: fidivr  [esp+0F4h+var_DC]
0x5C5798: fstp    [esp+0F4h+var_BC]
0x5C579C: fld1
0x5C579E: mov     edx, [esp+0F4h+var_BC]
0x5C57A2: fstp    [esp+0F4h+var_B8]
0x5C57A6: mov     [eax+0B0h], edx
0x5C57AC: mov     ecx, [esp+0F4h+var_B8]
0x5C57B0: mov     [eax+0B4h], ecx
0x5C57B6: jmp     loc_5C5852
0x5C57BB: cmp     esi, ebx
0x5C57BD: jnz     short loc_5C57C3
0x5C57BF: xor     eax, eax
0x5C57C1: jmp     short loc_5C57D6
0x5C57C3: mov     edx, [esi]
0x5C57C5: mov     eax, [edx+54h]
0x5C57C8: mov     ecx, esi
0x5C57CA: call    eax
0x5C57CC: xor     ecx, ecx
0x5C57CE: cmp     eax, 0Ah
0x5C57D1: setz    cl
0x5C57D4: mov     eax, ecx
0x5C57D6: neg     eax
0x5C57D8: sbb     eax, eax
0x5C57DA: and     eax, esi
0x5C57DC: jz      short loc_5C5852
0x5C57DE: mov     edx, [esp+0F4h+var_DC]
0x5C57E2: mov     ecx, [edx+1E8h]
0x5C57E8: movzx   edx, cl
0x5C57EB: mov     [esp+0F4h+var_DC], edx
0x5C57EF: movzx   edx, ch
0x5C57F2: fild    [esp+0F4h+var_DC]
0x5C57F6: fld     qword ptr ds:0A3DDD8h
0x5C57FC: mov     [esp+0F4h+var_DC], edx
0x5C5800: shr     ecx, 10h
0x5C5803: fdiv    st(1), st
0x5C5805: movzx   ecx, cl
0x5C5808: fxch    st(1)
0x5C580A: fstp    [esp+0F4h+var_C4]
0x5C580E: fild    [esp+0F4h+var_DC]
0x5C5812: mov     edx, [esp+0F4h+var_C4]
0x5C5816: mov     [esp+0F4h+var_DC], ecx
0x5C581A: mov     [eax+0F0h], edx
0x5C5820: fdiv    st, st(1)
0x5C5822: fstp    [esp+0F4h+var_C0]
0x5C5826: mov     ecx, [esp+0F4h+var_C0]
0x5C582A: mov     [eax+0F4h], ecx
0x5C5830: fidivr  [esp+0F4h+var_DC]
0x5C5834: fstp    [esp+0F4h+var_BC]
0x5C5838: fld1
0x5C583A: mov     edx, [esp+0F4h+var_BC]
0x5C583E: fstp    [esp+0F4h+var_B8]
0x5C5842: mov     [eax+0F8h], edx
0x5C5848: mov     ecx, [esp+0F4h+var_B8]
0x5C584C: mov     [eax+0FCh], ecx
0x5C5852: mov     ecx, ds:0B333C4h
0x5C5858: mov     edx, [ecx]
0x5C585A: mov     eax, [edx+130h]
0x5C5860: push    ebx
0x5C5861: call    eax
0x5C5863: mov     ecx, eax
0x5C5865: call    NiNode_UpdateDynamicEffectState
0x5C586A: mov     ecx, ds:0B333C4h
0x5C5870: mov     edx, [ecx]
0x5C5872: mov     eax, [edx+130h]
0x5C5878: push    ebx
0x5C5879: call    eax
0x5C587B: mov     ecx, eax; this
0x5C587D: call    NiAVObject_InitializePropertyState
0x5C5882: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C5887: push    4; int
0x5C5889: push    18h; unsigned int
0x5C588B: lea     ecx, [esp+100h+a1]
0x5C5892: push    ecx; void *
0x5C5893: mov     byte ptr [esp+104h+var_4], 7
0x5C589B: call    $LN21
0x5C58A0: jmp     loc_5C59F9
0x5C58A5: mov     edi, [esp+0F8h+var_DC]
0x5C58A9: fld     dword ptr [edi+1CCh]
0x5C58AF: fstp    [esp+0F8h+var_E0]
0x5C58B3: fld     [esp+0F8h+var_E0]
0x5C58B7: fstp    [esp+0F8h+var_F8]; float
0x5C58BA: push    ebp; int
0x5C58BB: call    sub_550980
0x5C58C0: add     esp, 8
0x5C58C3: push    4
0x5C58C5: mov     ecx, ebp
0x5C58C7: call    NiNode_GetNiPropertyByID
0x5C58CC: mov     esi, eax
0x5C58CE: cmp     esi, ebx
0x5C58D0: jnz     short loc_5C58D6
0x5C58D2: xor     eax, eax
0x5C58D4: jmp     short loc_5C58E9
0x5C58D6: mov     edx, [esi]
0x5C58D8: mov     eax, [edx+54h]
0x5C58DB: mov     ecx, esi
0x5C58DD: call    eax
0x5C58DF: xor     ecx, ecx
0x5C58E1: cmp     eax, 5
0x5C58E4: setz    cl
0x5C58E7: mov     eax, ecx
0x5C58E9: neg     eax
0x5C58EB: sbb     eax, eax
0x5C58ED: and     eax, esi
0x5C58EF: jz      short loc_5C5966
0x5C58F1: mov     ecx, [edi+1E8h]
0x5C58F7: movzx   edx, cl
0x5C58FA: mov     [esp+0F4h+var_E0], edx
0x5C58FE: movzx   edx, ch
0x5C5901: fild    [esp+0F4h+var_E0]
0x5C5905: fld     qword ptr ds:0A3DDD8h
0x5C590B: mov     [esp+0F4h+var_E0], edx
0x5C590F: fdiv    st(1), st
0x5C5911: shr     ecx, 10h
0x5C5914: movzx   ecx, cl
0x5C5917: fxch    st(1)
0x5C5919: fstp    [esp+0F4h+var_C4]
0x5C591D: fild    [esp+0F4h+var_E0]
0x5C5921: mov     edx, [esp+0F4h+var_C4]
0x5C5925: mov     [esp+0F4h+var_E0], ecx
0x5C5929: mov     [eax+0A8h], edx
0x5C592F: fdiv    st, st(1)
0x5C5931: fstp    [esp+0F4h+var_C0]
0x5C5935: mov     ecx, [esp+0F4h+var_C0]
0x5C5939: mov     [eax+0ACh], ecx
0x5C593F: fidivr  [esp+0F4h+var_E0]
0x5C5943: fstp    [esp+0F4h+var_BC]
0x5C5947: fld1
0x5C5949: mov     edx, [esp+0F4h+var_BC]
0x5C594D: fstp    [esp+0F4h+var_B8]
0x5C5951: mov     [eax+0B0h], edx
0x5C5957: mov     ecx, [esp+0F4h+var_B8]
0x5C595B: mov     [eax+0B4h], ecx
0x5C5961: jmp     loc_5C59F9
0x5C5966: cmp     esi, ebx
0x5C5968: jnz     short loc_5C596E
0x5C596A: xor     eax, eax
0x5C596C: jmp     short loc_5C5981
0x5C596E: mov     edx, [esi]
0x5C5970: mov     eax, [edx+54h]
0x5C5973: mov     ecx, esi
0x5C5975: call    eax
0x5C5977: xor     ecx, ecx
0x5C5979: cmp     eax, 0Ah
0x5C597C: setz    cl
0x5C597F: mov     eax, ecx
0x5C5981: neg     eax
0x5C5983: sbb     eax, eax
0x5C5985: and     eax, esi
0x5C5987: jz      short loc_5C59F9
0x5C5989: mov     ecx, [edi+1E8h]
0x5C598F: movzx   edx, cl
0x5C5992: mov     [esp+0F4h+var_E0], edx
0x5C5996: movzx   edx, ch
0x5C5999: fild    [esp+0F4h+var_E0]
0x5C599D: fld     qword ptr ds:0A3DDD8h
0x5C59A3: mov     [esp+0F4h+var_E0], edx
0x5C59A7: fdiv    st(1), st
0x5C59A9: shr     ecx, 10h
0x5C59AC: movzx   ecx, cl
0x5C59AF: fxch    st(1)
0x5C59B1: fstp    [esp+0F4h+var_C4]
0x5C59B5: fild    [esp+0F4h+var_E0]
0x5C59B9: mov     edx, [esp+0F4h+var_C4]
0x5C59BD: mov     [esp+0F4h+var_E0], ecx
0x5C59C1: mov     [eax+0F0h], edx
0x5C59C7: fdiv    st, st(1)
0x5C59C9: fstp    [esp+0F4h+var_C0]
0x5C59CD: mov     ecx, [esp+0F4h+var_C0]
0x5C59D1: mov     [eax+0F4h], ecx
0x5C59D7: fidivr  [esp+0F4h+var_E0]
0x5C59DB: fstp    [esp+0F4h+var_BC]
0x5C59DF: fld1
0x5C59E1: mov     edx, [esp+0F4h+var_BC]
0x5C59E5: fstp    [esp+0F4h+var_B8]
0x5C59E9: mov     [eax+0F8h], edx
0x5C59EF: mov     ecx, [esp+0F4h+var_B8]
0x5C59F3: mov     [eax+0FCh], ecx
0x5C59F9: fldz
0x5C59FB: push    1; a3
0x5C59FD: push    ecx
0x5C59FE: fstp    [esp+0FCh+a2]; a2
0x5C5A01: mov     ecx, ds:0B333C4h
0x5C5A07: mov     edx, [ecx]
0x5C5A09: mov     eax, [edx+130h]
0x5C5A0F: push    ebx
0x5C5A10: call    eax
0x5C5A12: mov     ecx, eax; this
0x5C5A14: call    NiAVObject_UpdateNiAVObject
0x5C5A19: push    ebx
0x5C5A1A: call    FormHeapFree
0x5C5A1F: push    ebx
0x5C5A20: call    FormHeapFree
0x5C5A25: mov     ecx, [esp+0FCh+var_D4]
0x5C5A29: push    ecx
0x5C5A2A: call    FormHeapFree
0x5C5A2F: mov     edx, [esp+100h+var_CC]
0x5C5A33: push    edx
0x5C5A34: mov     [esp+104h+var_D4], ebx
0x5C5A38: mov     word ptr [esp+104h+var_D0+2], bx
0x5C5A3D: mov     word ptr [esp+104h+var_D0], bx
0x5C5A42: call    FormHeapFree
0x5C5A47: mov     eax, dword ptr [esp+104h+ArgList]
0x5C5A4B: push    eax
0x5C5A4C: mov     [esp+108h+var_CC], ebx
0x5C5A50: mov     word ptr [esp+108h+var_C8+2], bx
0x5C5A55: mov     word ptr [esp+108h+var_C8], bx
0x5C5A5A: call    FormHeapFree
0x5C5A5F: mov     eax, [esp+108h+var_D8]
0x5C5A63: mov     edi, ds:0A2807Ch
0x5C5A69: add     esp, 14h
0x5C5A6C: cmp     eax, ebx
0x5C5A6E: mov     byte ptr [esp+0F4h+var_4], 1
0x5C5A76: jz      short loc_5C5A92
0x5C5A78: mov     esi, eax
0x5C5A7A: add     eax, 4
0x5C5A7D: push    eax; lpAddend
0x5C5A7E: call    edi ; InterlockedDecrement
0x5C5A80: test    eax, eax
0x5C5A82: jnz     short loc_5C5A92
0x5C5A84: cmp     esi, ebx
0x5C5A86: jz      short loc_5C5A92
0x5C5A88: mov     edx, [esi]
0x5C5A8A: mov     eax, [edx]
0x5C5A8C: push    1
0x5C5A8E: mov     ecx, esi
0x5C5A90: call    eax
0x5C5A92: mov     esi, [esp+0F4h+var_A8]
0x5C5A96: cmp     esi, ebx
0x5C5A98: mov     byte ptr [esp+0F4h+var_4], bl
0x5C5A9F: jz      short loc_5C5AB5
0x5C5AA1: lea     ecx, [esi+4]
0x5C5AA4: push    ecx; lpAddend
0x5C5AA5: call    edi ; InterlockedDecrement
0x5C5AA7: test    eax, eax
0x5C5AA9: jnz     short loc_5C5AB5
0x5C5AAB: mov     edx, [esi]
0x5C5AAD: mov     eax, [edx]
0x5C5AAF: push    1
0x5C5AB1: mov     ecx, esi
0x5C5AB3: call    eax
0x5C5AB5: mov     esi, [esp+0F4h+var_B4]
0x5C5AB9: cmp     esi, ebx
0x5C5ABB: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x5C5AC6: jz      short loc_5C5ADC
0x5C5AC8: lea     ecx, [esi+4]
0x5C5ACB: push    ecx; lpAddend
0x5C5ACC: call    edi ; InterlockedDecrement
0x5C5ACE: test    eax, eax
0x5C5AD0: jnz     short loc_5C5ADC
0x5C5AD2: mov     edx, [esi]
0x5C5AD4: mov     eax, [edx]
0x5C5AD6: push    1
0x5C5AD8: mov     ecx, esi
0x5C5ADA: call    eax
0x5C5ADC: mov     al, 1
0x5C5ADE: mov     ecx, dword ptr [esp+0F4h+var_C]
0x5C5AE5: mov     large fs:0, ecx
0x5C5AEC: pop     ecx
0x5C5AED: pop     edi
0x5C5AEE: pop     esi
0x5C5AEF: pop     ebp
0x5C5AF0: pop     ebx
0x5C5AF1: add     esp, 0E0h
0x5C5AF7: retn    4
