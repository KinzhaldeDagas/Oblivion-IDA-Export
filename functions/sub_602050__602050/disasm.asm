0x602050: sub     esp, 34h
0x602053: push    ebp
0x602054: push    esi
0x602055: mov     esi, [esp+3Ch+arg_0]
0x602059: test    esi, esi
0x60205B: mov     ebp, ecx
0x60205D: jz      loc_6022DC
0x602063: mov     eax, [esi+3Ch]
0x602066: mov     edx, [esi]
0x602068: push    ebx
0x602069: push    edi
0x60206A: mov     edi, [ebp+3Ch]
0x60206D: mov     [esp+44h+var_30], eax
0x602071: mov     eax, [edx+164h]
0x602077: mov     ecx, esi
0x602079: mov     [esp+44h+var_34], edi
0x60207D: call    eax
0x60207F: mov     edx, [ebp+0]
0x602082: mov     [esp+44h+var_2C], eax
0x602086: mov     eax, [edx+164h]
0x60208C: mov     ecx, ebp
0x60208E: call    eax
0x602090: mov     ecx, ds:0B333C4h
0x602096: cmp     ebp, ecx
0x602098: mov     ebx, eax
0x60209A: jnz     short loc_6020BA
0x60209C: push    0
0x60209E: call    PlayerCharacter_GetPlayerNode
0x6020A3: mov     ecx, ds:0B333C4h; this
0x6020A9: push    0; a2
0x6020AB: mov     [esp+48h+var_34], eax
0x6020AF: call    Player_GetAnimData
0x6020B4: mov     edi, [esp+44h+var_34]
0x6020B8: mov     ebx, eax
0x6020BA: mov     ecx, [esp+44h+var_30]
0x6020BE: test    ecx, ecx
0x6020C0: jz      loc_6022DA
0x6020C6: test    edi, edi
0x6020C8: jz      loc_6022DA
0x6020CE: mov     edx, [ecx]
0x6020D0: mov     eax, [edx+58h]
0x6020D3: push    offset aActorparent; "ActorParent"
0x6020D8: call    eax
0x6020DA: test    eax, eax
0x6020DC: mov     [esp+44h+var_30], eax
0x6020E0: jnz     short loc_60210C
0x6020E2: mov     edx, [esi]
0x6020E4: mov     eax, [edx+170h]
0x6020EA: mov     ecx, esi
0x6020EC: call    eax
0x6020EE: push    eax
0x6020EF: call    GetFormModelPAth
0x6020F4: push    eax; ArgList
0x6020F5: push    offset aMissingActorpa; "Missing 'ActorParent' node for horse '%"...
0x6020FA: call    PrintError
0x6020FF: add     esp, 0Ch
0x602102: pop     edi
0x602103: pop     ebx
0x602104: pop     esi
0x602105: pop     ebp
0x602106: add     esp, 34h
0x602109: retn    4
0x60210C: mov     edx, [ebp+0]
0x60210F: mov     eax, [edx+0ECh]
0x602115: mov     ecx, ebp
0x602117: call    eax
0x602119: fld1
0x60211B: fdivrp  st(1), st
0x60211D: mov     ecx, [esp+3Ch+var_28]
0x602121: push    0
0x602123: push    400h
0x602128: fstp    [esp+44h+var_20]
0x60212C: fld     [esp+44h+var_20]
0x602130: fabs
0x602132: fstp    [esp+44h+var_20]
0x602136: fld     [esp+44h+var_20]
0x60213A: fstp    dword ptr [ecx+60h]
0x60213D: mov     ecx, [ebp+58h]
0x602140: mov     edx, [ecx]
0x602142: mov     eax, [edx+2C4h]
0x602148: call    eax
0x60214A: push    1
0x60214C: mov     ecx, ebp
0x60214E: call    sub_65AC20
0x602153: cmp     dword ptr [ebp+58h], 0
0x602157: jz      short loc_60216A
0x602159: mov     ecx, [ebp+58h]
0x60215C: mov     edx, [ecx]
0x60215E: mov     eax, [edx+2C4h]
0x602164: push    0
0x602166: push    30h ; '0'
0x602168: call    eax
0x60216A: mov     edx, [ebp+0]
0x60216D: fldz
0x60216F: mov     eax, [edx+1E8h]
0x602175: push    ecx
0x602176: mov     ecx, ebp
0x602178: fstp    [esp+40h+var_40]
0x60217B: call    eax
0x60217D: lea     ecx, [esp+3Ch+var_1C]
0x602181: push    ecx
0x602182: mov     ecx, ebp
0x602184: call    sub_4D7AF0
0x602189: fldz
0x60218B: mov     esi, eax
0x60218D: add     edi, 30h ; '0'
0x602190: mov     ecx, 9
0x602195: rep movsd
0x602197: mov     edx, ds:0B3F9A8h
0x60219D: mov     [ebx+0Ch], edx
0x6021A0: mov     eax, ds:0B3F9ACh
0x6021A5: mov     [ebx+10h], eax
0x6021A8: mov     ecx, ds:0B3F9B0h
0x6021AE: push    ecx
0x6021AF: mov     [ebx+14h], ecx
0x6021B2: mov     ecx, ebx
0x6021B4: fstp    [esp+40h+var_40]; float
0x6021B7: push    0; int
0x6021B9: call    sub_470FC0
0x6021BE: mov     ecx, [esp+3Ch+var_28]
0x6021C2: mov     byte ptr [ebx+0C4h], 1
0x6021C9: mov     edx, [ecx]
0x6021CB: mov     eax, [edx+8]
0x6021CE: call    eax
0x6021D0: mov     esi, eax
0x6021D2: mov     edx, [esi]
0x6021D4: mov     eax, [esp+3Ch+var_2C]
0x6021D8: mov     edx, [edx+84h]
0x6021DE: push    1
0x6021E0: push    eax
0x6021E1: mov     ecx, esi
0x6021E3: call    edx
0x6021E5: fld     dword ptr [ebx+94h]
0x6021EB: mov     eax, [esp+44h+var_2C]
0x6021EF: mov     edi, [esp+44h+arg_0]
0x6021F3: fstp    dword ptr [eax+94h]
0x6021F9: push    1
0x6021FB: mov     ecx, edi
0x6021FD: call    sub_5E13D0
0x602202: mov     ecx, [ebp+58h]
0x602205: mov     edx, [ecx]
0x602207: mov     eax, [edx+370h]
0x60220D: push    7Fh
0x60220F: push    0
0x602211: push    4
0x602213: push    ebp
0x602214: call    eax
0x602216: mov     ecx, ds:0B333C4h
0x60221C: cmp     ebp, ecx
0x60221E: jnz     short loc_60225A
0x602220: mov     ebx, [esi]
0x602222: push    1
0x602224: push    1
0x602226: call    PlayerCharacter_GetPlayerNode
0x60222B: mov     edx, [ebx+84h]
0x602231: push    eax
0x602232: mov     ecx, esi
0x602234: call    edx
0x602236: mov     ecx, ds:0B333C4h
0x60223C: lea     eax, [esp+44h+arg_0]
0x602240: push    eax
0x602241: call    sub_65ABE0
0x602246: mov     edx, [edi]
0x602248: movzx   esi, word ptr [eax+2]
0x60224C: mov     eax, [edx+154h]
0x602252: mov     ecx, edi
0x602254: call    eax
0x602256: mov     ecx, edi
0x602258: jmp     short loc_602279
0x60225A: lea     ecx, [esp+44h+arg_0]
0x60225E: push    ecx
0x60225F: mov     ecx, edi
0x602261: call    sub_65ABE0
0x602266: mov     edx, [ebp+0]
0x602269: movzx   esi, word ptr [eax+2]
0x60226D: mov     eax, [edx+154h]
0x602273: mov     ecx, ebp
0x602275: call    eax
0x602277: mov     ecx, ebp; this
0x602279: mov     ebx, eax
0x60227B: call    MobileObject_GetCharProxy
0x602280: test    eax, eax
0x602282: jz      short loc_60229E
0x602284: test    ebx, ebx
0x602286: jz      short loc_60229E
0x602288: push    esi
0x602289: mov     ecx, eax
0x60228B: call    sub_5EA350
0x602290: push    0
0x602292: push    1
0x602294: push    esi
0x602295: push    ebx
0x602296: call    sub_88D0E0
0x60229B: add     esp, 10h
0x60229E: fldz
0x6022A0: mov     esi, [esp+44h+var_2C]
0x6022A4: push    ecx
0x6022A5: fstp    [esp+48h+var_48]; float
0x6022A8: push    5; int
0x6022AA: mov     ecx, esi
0x6022AC: call    sub_470FC0
0x6022B1: mov     byte ptr [esi+0C4h], 1
0x6022B8: mov     ecx, ds:0B33B00h
0x6022BE: call    sub_45A500
0x6022C3: test    al, al
0x6022C5: jnz     short loc_6022DA
0x6022C7: fld1
0x6022C9: sub     esp, 8
0x6022CC: fst     [esp+4Ch+var_48]; int
0x6022D0: mov     ecx, edi
0x6022D2: fstp    [esp+4Ch+var_4C]; float
0x6022D5: call    Actor_ProcessAction
0x6022DA: pop     edi
0x6022DB: pop     ebx
0x6022DC: pop     esi
0x6022DD: pop     ebp
0x6022DE: add     esp, 34h
0x6022E1: retn    4
