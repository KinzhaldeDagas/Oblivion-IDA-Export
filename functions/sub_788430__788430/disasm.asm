0x788430: sub     esp, 18h; Simple/horizontal billboard runtime export. Uses byte_B4297C synthetic billboard LOD, target alpha at this+0x44, and horizontal fade scalar flt_B2B604.
0x788433: push    ebx
0x788434: xor     ebx, ebx
0x788436: cmp     ds:0B4297Ch, bl
0x78843C: push    esi
0x78843D: mov     esi, ecx
0x78843F: jz      loc_788607
0x788445: mov     eax, [esi]
0x788447: fld     dword ptr ds:0A30634h
0x78844D: mov     cx, [eax+0C0h]
0x788454: fst     [esp+20h+highAlpha]
0x788458: add     cx, 1
0x78845C: fstp    [esp+20h+lowAlpha]
0x788460: push    ebp
0x788461: movzx   ebp, cx
0x788464: or      ecx, 0FFFFFFFFh
0x788467: mov     dword ptr [esp+24h+highLod], ecx
0x78846B: mov     dword ptr [esp+24h+lowLod], ecx
0x78846F: mov     ecx, [esi+34h]
0x788472: cmp     ecx, ebx
0x788474: push    edi
0x788475: jz      short loc_78847C
0x788477: fld     dword ptr [ecx+10h]
0x78847A: jmp     short loc_78847F
0x78847C: fld     dword ptr [eax+14h]
0x78847F: lea     edx, [esp+28h+lowLod]
0x788483: fstp    [esp+28h+var_18]
0x788487: push    edx; lowLod
0x788488: lea     eax, [esp+2Ch+highLod]
0x78848C: push    eax; highLod
0x78848D: movzx   eax, byte ptr [esi+44h]
0x788491: lea     ecx, [esp+30h+lowAlpha]
0x788495: push    ecx; lowAlpha
0x788496: lea     edx, [esp+34h+highAlpha]
0x78849A: push    edx; highAlpha
0x78849B: mov     [esp+38h+var_4], eax
0x78849F: sub     esp, 10h
0x7884A2: fild    [esp+48h+var_4]
0x7884A6: fstp    [esp+48h+targetAlpha]; targetAlpha
0x7884AA: fld     dword ptr [esi+20h]
0x7884AD: fstp    [esp+48h+curveExponent]; curveExponent
0x7884B1: fld     dword ptr [esi+28h]
0x7884B4: fstp    [esp+48h+transitionFactor]; transitionFactor
0x7884B8: fld     dword ptr [esi+1Ch]
0x7884BB: fstp    [esp+48h+overlapRadius]; overlapRadius
0x7884BE: push    ebp; lodCount
0x7884BF: fld     [esp+4Ch+var_18]
0x7884C3: push    ecx
0x7884C4: fstp    [esp+50h+lodLevel]; lodLevel
0x7884C7: call    CSpeedTreeRT__GetTransitionValues; 2026-05-26 SpeedTreeOBSE: shared stock LOD fade/index resolver. Plugin calls it unmodified for candidate 75002 transition-radius and 75005 transition-factor comparisons; optional writes are limited to caller-side SGeometry+0x38 under explicit INI gates. Not patched.
0x7884CC: movsx   ecx, [esp+50h+highLod]
0x7884D1: fld     dword ptr ds:0A30634h
0x7884D7: mov     edi, [esp+50h+geometryOut]
0x7884DB: movzx   eax, bp
0x7884DE: fst     dword ptr [edi+0FCh]
0x7884E4: add     eax, 0FFFFFFFFh
0x7884E7: add     esp, 28h
0x7884EA: cmp     ecx, eax
0x7884EC: jnz     short loc_7884F4
0x7884EE: fld     [esp+28h+highAlpha]
0x7884F2: jmp     short loc_788501
0x7884F4: movsx   edx, [esp+28h+lowLod]
0x7884F9: cmp     edx, eax
0x7884FB: jnz     short loc_788507
0x7884FD: fld     [esp+28h+lowAlpha]
0x788501: fstp    dword ptr [edi+0FCh]
0x788507: fcomp   dword ptr [edi+0FCh]
0x78850D: fnstsw  ax
0x78850F: test    ah, 44h
0x788512: jnp     short loc_78851B
0x788514: mov     eax, 1
0x788519: jmp     short loc_78851D
0x78851B: xor     eax, eax
0x78851D: cmp     al, bl
0x78851F: mov     [edi+0F0h], al
0x788525: mov     [edi+100h], bx
0x78852C: jz      short loc_788567
0x78852E: mov     eax, [esi+40h]
0x788531: fld     dword ptr [eax+14h]
0x788534: mov     ecx, [esi+14h]; this
0x788537: sub     esp, 8
0x78853A: fstp    [esp+30h+height]; height
0x78853E: fld     dword ptr [eax+18h]
0x788541: fstp    [esp+30h+width]; width
0x788544: call    OB_CSimpleBillboard_GetBillboardCoords_010201A0; Oblivion legacy CSimpleBillboard cache: lazily scales the 12-float unit quad by tree width/height and marks the 0x34-byte cache valid.
0x788549: mov     [edi+0F8h], eax
0x78854F: mov     eax, [esi+4Ch]
0x788552: cmp     eax, ebx
0x788554: jz      short loc_788561
0x788556: mov     eax, [eax+0Ch]
0x788559: mov     [edi+0F4h], eax
0x78855F: jmp     short loc_788567
0x788561: mov     [edi+0F4h], ebx
0x788567: mov     [edi+104h], bl
0x78856D: mov     [edi+114h], bx
0x788574: cmp     [esi+6Dh], bl; Horizontal billboard export gate. If CSpeedTreeRT+0x6D is true, uses horizontal coords at +0x70 and the last embedded billboard texcoord set from embedded+0x0C/count.
0x788577: jz      short loc_7885F0
0x788579: lea     ecx, [esi+70h]
0x78857C: mov     [edi+120h], ecx
0x788582: cmp     [esi+4Ch], ebx
0x788585: jz      short loc_78859F
0x788587: mov     esi, [esi+4Ch]
0x78858A: mov     edx, [esi+8]
0x78858D: mov     eax, [esi+0Ch]
0x788590: shl     edx, 5
0x788593: lea     ecx, [edx+eax-20h]
0x788597: mov     [edi+11Ch], ecx
0x78859D: jmp     short loc_7885A5
0x78859F: mov     [edi+11Ch], ebx
0x7885A5: fld     dword ptr [edi+0FCh]
0x7885AB: fstp    [esp+28h+geometryOut]
0x7885AF: fld     [esp+28h+geometryOut]
0x7885B3: fst     dword ptr [edi+124h]
0x7885B9: fldz
0x7885BB: fcompp
0x7885BD: fnstsw  ax
0x7885BF: test    ah, 41h
0x7885C2: jp      short loc_7885CB
0x7885C4: mov     eax, 1
0x7885C9: jmp     short loc_7885CD
0x7885CB: xor     eax, eax
0x7885CD: mov     [edi+118h], al
0x7885D3: fld     dword ptr ds:0B2B604h; Horizontal billboard alpha-test/fade scalar. SetCamera derives flt_B2B604 from camera pitch: 255 at <=30 degrees, 84 at >=60 degrees.
0x7885D9: mov     [edi+128h], bx
0x7885E0: fstp    dword ptr [edi+124h]
0x7885E6: pop     edi
0x7885E7: pop     ebp
0x7885E8: pop     esi
0x7885E9: pop     ebx
0x7885EA: add     esp, 18h
0x7885ED: retn    4
0x7885F0: mov     [edi+118h], bl
0x7885F6: mov     [edi+128h], bx
0x7885FD: pop     edi
0x7885FE: pop     ebp
0x7885FF: pop     esi
0x788600: pop     ebx
0x788601: add     esp, 18h
0x788604: retn    4
0x788607: mov     eax, [esp+20h+geometryOut]
0x78860B: pop     esi
0x78860C: mov     [eax+0F0h], bl
0x788612: mov     [eax+104h], bl
0x788618: mov     [eax+118h], bl
0x78861E: pop     ebx
0x78861F: add     esp, 18h
0x788622: retn    4
