0x5D90E0: push    0FFFFFFFFh
0x5D90E2: push    offset SpellPurchaseMenu_Update_SEH
0x5D90E7: mov     eax, large fs:0
0x5D90ED: push    eax
0x5D90EE: sub     esp, 128h
0x5D90F4: mov     eax, ds:0B30AACh
0x5D90F9: xor     eax, esp
0x5D90FB: mov     [esp+134h+var_10], eax
0x5D9102: push    ebx
0x5D9103: push    ebp
0x5D9104: push    esi
0x5D9105: push    edi
0x5D9106: mov     eax, ds:0B30AACh
0x5D910B: xor     eax, esp
0x5D910D: push    eax
0x5D910E: lea     eax, [esp+148h+var_C]
0x5D9115: mov     large fs:0, eax
0x5D911B: mov     edi, ecx
0x5D911D: mov     eax, [edi+2Ch]
0x5D9120: mov     esi, [eax+34h]
0x5D9123: xor     ebp, ebp
0x5D9125: cmp     esi, ebp
0x5D9127: mov     [esp+148h+var_128], edi
0x5D912B: jz      short loc_5D9148
0x5D912D: lea     ecx, [ecx+0]
0x5D9130: mov     ecx, [esi+8]
0x5D9133: cmp     ecx, ebp
0x5D9135: lea     eax, [esi+8]
0x5D9138: mov     esi, [esi]
0x5D913A: jz      short loc_5D9144
0x5D913C: mov     edx, [ecx]
0x5D913E: mov     eax, [edx]
0x5D9140: push    1
0x5D9142: call    eax
0x5D9144: cmp     esi, ebp
0x5D9146: jnz     short loc_5D9130
0x5D9148: mov     ecx, [edi+2Ch]
0x5D914B: add     ecx, 30h ; '0'
0x5D914E: call    NiTPointerList__FreeAllNodes
0x5D9153: mov     ecx, ds:0B333C4h; this
0x5D9159: push    ebp; a2
0x5D915A: call    Actor_GetActorBaseForm
0x5D915F: mov     ecx, [edi+2Ch]
0x5D9162: add     eax, 54h ; 'T'
0x5D9165: cmp     [edi+64h], ebp
0x5D9168: lea     esi, [edi+60h]
0x5D916B: lea     ebx, [eax+4]
0x5D916E: mov     [esp+14Ch+var_128], ebp
0x5D9172: mov     dword ptr [esp+14Ch+var_120.m_dataLen], ecx
0x5D9176: jz      short loc_5D9192
0x5D9178: mov     eax, [esi+4]
0x5D917B: mov     edi, [eax+4]
0x5D917E: push    eax
0x5D917F: call    FormHeapFree
0x5D9184: add     esp, 4
0x5D9187: cmp     edi, ebp
0x5D9189: mov     [esi+4], edi
0x5D918C: jnz     short loc_5D9178
0x5D918E: mov     edi, dword ptr [esp+14Ch+var_130.m_dataLen]
0x5D9192: mov     [esi], ebp
0x5D9194: mov     ecx, [edi+50h]; this
0x5D9197: push    ebp; a2
0x5D9198: call    Actor_GetActorBaseForm
0x5D919D: add     eax, 54h ; 'T'
0x5D91A0: lea     edi, [eax+4]
0x5D91A3: cmp     edi, ebp
0x5D91A5: jz      short loc_5D91E3
0x5D91A7: mov     eax, [edi]
0x5D91A9: cmp     eax, ebp
0x5D91AB: jz      short loc_5D91E3
0x5D91AD: mov     edx, [eax+18h]
0x5D91B0: lea     ecx, [eax+18h]
0x5D91B3: mov     eax, [edx+18h]
0x5D91B6: call    eax
0x5D91B8: test    eax, eax
0x5D91BA: jnz     short loc_5D91DC
0x5D91BC: cmp     ebx, ebp
0x5D91BE: mov     ecx, [edi]
0x5D91C0: mov     eax, ebx
0x5D91C2: jz      short loc_5D91CF
0x5D91C4: cmp     [eax], ecx
0x5D91C6: jz      short loc_5D91DC
0x5D91C8: mov     eax, [eax+4]
0x5D91CB: cmp     eax, ebp
0x5D91CD: jnz     short loc_5D91C4
0x5D91CF: push    offset sub_5D8FD0
0x5D91D4: push    ecx
0x5D91D5: mov     ecx, esi
0x5D91D7: call    BSSimpleList_InsertSorted
0x5D91DC: mov     edi, [edi+4]
0x5D91DF: cmp     edi, ebp
0x5D91E1: jnz     short loc_5D91A7
0x5D91E3: mov     edi, esi
0x5D91E5: xor     eax, eax
0x5D91E7: cmp     esi, ebp
0x5D91E9: mov     [esp+138h+a3], edi
0x5D91ED: jz      short loc_5D91FE
0x5D91EF: nop
0x5D91F0: cmp     [esi], ebp
0x5D91F2: jz      short loc_5D91F7
0x5D91F4: add     eax, 1
0x5D91F7: mov     esi, [esi+4]
0x5D91FA: cmp     esi, ebp
0x5D91FC: jnz     short loc_5D91F0
0x5D91FE: mov     ecx, [esp+138h+var_118]
0x5D9202: add     eax, 0FFFFFFFFh
0x5D9205: cmp     [ecx+4Ch], eax
0x5D9208: jle     short loc_5D920D
0x5D920A: mov     [ecx+4Ch], eax
0x5D920D: cmp     edi, ebp
0x5D920F: jz      loc_5D9460
0x5D9215: jmp     short loc_5D921B
0x5D9217: mov     edi, dword ptr [esp+13Ch+a2]
0x5D921B: mov     ebx, [edi]
0x5D921D: cmp     ebx, ebp
0x5D921F: jz      loc_5D9460
0x5D9225: push    ebp; a3
0x5D9226: push    offset aSpell_item_tem; "spell_item_template"
0x5D922B: lea     ecx, [esp+140h+var_120]; this
0x5D922F: mov     [esp+140h+var_120.m_data], ebp
0x5D9233: mov     [esp+140h+var_120.m_dataLen], bp
0x5D9238: mov     [esp+140h+var_120.m_bufLen], bp
0x5D923D: call    BSStringT_Set
0x5D9242: mov     ecx, [esp+138h+var_120.m_data]
0x5D9246: mov     edx, [esp+138h+var_108]
0x5D924A: push    ebp
0x5D924B: push    ecx
0x5D924C: mov     ecx, [esp+140h+var_118]
0x5D9250: push    edx
0x5D9251: mov     [esp+144h+arg_8], ebp
0x5D9258: call    Menu_CreateTileFromTemplate
0x5D925D: mov     esi, eax
0x5D925F: cmp     esi, ebp
0x5D9261: jz      loc_5D9426
0x5D9267: mov     edi, dword ptr [esp+138h+a2]
0x5D926B: mov     eax, [esp+138h+var_118]
0x5D926F: cmp     edi, [eax+4Ch]
0x5D9272: jnz     short loc_5D92B8
0x5D9274: push    1; arg1
0x5D9276: push    ebp; canCreate
0x5D9277: call    InterfaceManager_GetSingleton
0x5D927C: push    1; arg1
0x5D927E: push    ebp; canCreate
0x5D927F: call    InterfaceManager_GetSingleton
0x5D9284: add     dword ptr [eax+8Ch], 1
0x5D928B: fild    dword ptr [eax+8Ch]
0x5D9291: mov     ecx, [eax+8Ch]
0x5D9297: add     eax, 8Ch ; 'Œ'
0x5D929C: test    ecx, ecx
0x5D929E: jge     short loc_5D92A6
0x5D92A0: fadd    dword ptr ds:0A2FC78h
0x5D92A6: add     esp, 0Ch
0x5D92A9: fstp    [esp+13Ch+var_13C]; a3
0x5D92AC: push    0FF0h; a2
0x5D92B1: mov     ecx, esi; this
0x5D92B3: call    Tile_SetFloat
0x5D92B8: fild    dword ptr [esp+138h+a2]
0x5D92BC: push    ecx
0x5D92BD: mov     ecx, esi; this
0x5D92BF: fstp    [esp+13Ch+var_13C]; a3
0x5D92C2: push    0FAEh; a2
0x5D92C7: call    Tile_SetFloat
0x5D92CC: add     edi, 3E8h
0x5D92D2: mov     [esp+138h+var_124], edi
0x5D92D6: fild    [esp+138h+var_124]
0x5D92DA: push    ecx
0x5D92DB: mov     ecx, esi; this
0x5D92DD: fstp    [esp+13Ch+var_13C]; a3
0x5D92E0: push    0FA8h; a2
0x5D92E5: call    Tile_SetFloat
0x5D92EA: push    ebp
0x5D92EB: lea     edi, [ebx+24h]
0x5D92EE: push    3
0x5D92F0: mov     ecx, edi
0x5D92F2: call    EffectItemList_GetStrongestItem
0x5D92F7: mov     eax, [eax+1Ch]
0x5D92FA: mov     eax, [eax+48h]
0x5D92FD: cmp     eax, ebp
0x5D92FF: jnz     short loc_5D9306
0x5D9301: mov     eax, offset EmptyString
0x5D9306: push    eax
0x5D9307: push    offset aIcons; "Icons"
0x5D930C: lea     edx, [esp+140h+var_104]
0x5D9310: push    offset aSS_2; "%s\\%s"
0x5D9315: push    edx
0x5D9316: call    __sprintf
0x5D931B: add     esp, 10h
0x5D931E: lea     eax, [esp+138h+var_104]
0x5D9322: push    eax
0x5D9323: push    0FAFh
0x5D9328: mov     ecx, esi
0x5D932A: call    Tile_SetString
0x5D932F: mov     eax, [ebx+1Ch]
0x5D9332: cmp     eax, ebp
0x5D9334: jnz     short loc_5D933B
0x5D9336: mov     eax, offset EmptyString
0x5D933B: mov     ecx, dword ptr [esp+138h+a2]
0x5D933F: push    ecx
0x5D9340: push    eax
0x5D9341: lea     edx, [esp+140h+var_104]
0x5D9345: push    offset aS_D; "%s_%d"
0x5D934A: push    edx
0x5D934B: call    __sprintf
0x5D9350: add     esp, 10h
0x5D9353: push    ebp; a3
0x5D9354: lea     eax, [esp+13Ch+var_104]
0x5D9358: lea     ecx, [esi+8]; this
0x5D935B: push    eax; a2
0x5D935C: call    BSStringT_Set
0x5D9361: mov     ebx, [ebx+1Ch]
0x5D9364: cmp     ebx, ebp
0x5D9366: jnz     short loc_5D936D
0x5D9368: mov     ebx, offset EmptyString
0x5D936D: push    ebx
0x5D936E: push    0FB1h
0x5D9373: mov     ecx, esi
0x5D9375: call    Tile_SetString
0x5D937A: mov     edx, [edi]
0x5D937C: mov     eax, ds:0B333C4h
0x5D9381: mov     edx, [edx]
0x5D9383: push    eax; a3
0x5D9384: mov     ecx, edi
0x5D9386: call    edx
0x5D9388: call    Double_To_SInt32
0x5D938D: mov     [esp+13Ch+var_128], eax
0x5D9391: fild    [esp+13Ch+var_128]
0x5D9395: push    ecx
0x5D9396: mov     ecx, esi; this
0x5D9398: fstp    [esp+140h+var_128]
0x5D939C: fld     [esp+140h+var_128]
0x5D93A0: fstp    [esp+140h+var_140]; a3
0x5D93A3: push    0FB3h; a2
0x5D93A8: call    Tile_SetFloat
0x5D93AD: fld     [esp+13Ch+var_128]
0x5D93B1: fmul    dword ptr ds:0B37FE0h
0x5D93B7: call    Double_To_SInt32
0x5D93BC: mov     edi, eax
0x5D93BE: mov     eax, dword ptr [esp+13Ch+var_120.m_dataLen]
0x5D93C2: mov     ecx, [eax+50h]
0x5D93C5: push    ecx
0x5D93C6: mov     ecx, ds:0B333C4h
0x5D93CC: mov     [esp+140h+a3], edi
0x5D93D0: call    Player_GetActorBarterFactor?
0x5D93D5: fstp    [esp+13Ch+var_128]
0x5D93D9: fld     [esp+13Ch+var_128]
0x5D93DD: mov     edx, ds:0B333C4h
0x5D93E3: fild    dword ptr [edx+11Ch]
0x5D93E9: fmul    qword ptr ds:0A3D8E8h
0x5D93EF: fsubp   st(1), st
0x5D93F1: fstp    [esp+13Ch+var_128]
0x5D93F5: fild    [esp+13Ch+a3]
0x5D93F9: fmul    [esp+13Ch+var_128]
0x5D93FD: call    Double_To_SInt32
0x5D9402: cmp     eax, edi
0x5D9404: mov     [esp+13Ch+var_128], eax
0x5D9408: jge     short loc_5D940E
0x5D940A: mov     [esp+13Ch+var_128], edi
0x5D940E: fild    [esp+13Ch+var_128]
0x5D9412: push    ecx
0x5D9413: mov     ecx, esi; this
0x5D9415: fstp    [esp+140h+var_140]; a3
0x5D9418: push    0FB7h; a2
0x5D941D: call    Tile_SetFloat
0x5D9422: mov     edi, dword ptr [esp+13Ch+a2]
0x5D9426: mov     eax, [esp+13Ch+var_124]
0x5D942A: mov     esi, [edi+4]
0x5D942D: add     [esp+13Ch+var_118], 1
0x5D9432: push    eax; a3
0x5D9433: mov     dword ptr [esp+140h+a2], esi
0x5D9437: mov     [esp+140h+arg_4], 0FFFFFFFFh
0x5D9442: call    FormHeapFree
0x5D9447: add     esp, 4
0x5D944A: cmp     esi, ebp
0x5D944C: mov     [esp+13Ch+var_124], ebp
0x5D9450: mov     word ptr [esp+13Ch+var_120.m_data+2], bp
0x5D9455: mov     word ptr [esp+13Ch+var_120.m_data], bp
0x5D945A: jnz     loc_5D9217
0x5D9460: mov     [esp+13Ch+var_124], ebp
0x5D9464: mov     word ptr [esp+13Ch+var_120.m_data], bp
0x5D9469: mov     word ptr [esp+13Ch+var_120.m_data+2], bp
0x5D946E: mov     ecx, ds:0B333C4h
0x5D9474: mov     [esp+13Ch+arg_4], 1
0x5D947F: call    sub_5E4420
0x5D9484: mov     edi, eax
0x5D9486: mov     eax, 44B82FA1h
0x5D948B: imul    edi
0x5D948D: sar     edx, 1Ch
0x5D9490: mov     ecx, edx
0x5D9492: shr     ecx, 1Fh
0x5D9495: add     ecx, edx
0x5D9497: mov     eax, 431BDE83h
0x5D949C: imul    edi
0x5D949E: sar     edx, 12h
0x5D94A1: mov     eax, edx
0x5D94A3: shr     eax, 1Fh
0x5D94A6: add     eax, edx
0x5D94A8: mov     esi, ecx
0x5D94AA: imul    esi, 3E8h
0x5D94B0: mov     ebx, eax
0x5D94B2: mov     eax, 10624DD3h
0x5D94B7: imul    edi
0x5D94B9: sub     ebx, esi
0x5D94BB: add     esi, ebx
0x5D94BD: imul    esi, 3E8h
0x5D94C3: sar     edx, 6
0x5D94C6: mov     eax, edx
0x5D94C8: shr     eax, 1Fh
0x5D94CB: add     eax, edx
0x5D94CD: sub     eax, esi
0x5D94CF: add     esi, eax
0x5D94D1: imul    esi, 3E8h
0x5D94D7: mov     edx, edi
0x5D94D9: sub     edx, esi
0x5D94DB: cmp     ecx, ebp
0x5D94DD: jz      short loc_5D94F7
0x5D94DF: push    edx
0x5D94E0: push    eax
0x5D94E1: push    ebx
0x5D94E2: push    ecx; ArgList
0x5D94E3: lea     ecx, [esp+14Ch+var_124]
0x5D94E7: push    offset aD03d03d03d; "%d,%03d,%03d,%03d"
0x5D94EC: push    ecx; int
0x5D94ED: call    BSStringT_Static_Format
0x5D94F2: add     esp, 18h
0x5D94F5: jmp     short loc_5D9540
0x5D94F7: cmp     ebx, ebp
0x5D94F9: jz      short loc_5D9512
0x5D94FB: push    edx
0x5D94FC: push    eax
0x5D94FD: push    ebx; ArgList
0x5D94FE: lea     edx, [esp+148h+var_124]
0x5D9502: push    offset aD03d03d; "%d,%03d,%03d"
0x5D9507: push    edx; int
0x5D9508: call    BSStringT_Static_Format
0x5D950D: add     esp, 14h
0x5D9510: jmp     short loc_5D9540
0x5D9512: cmp     eax, 0Ah
0x5D9515: jl      short loc_5D952D
0x5D9517: push    edx
0x5D9518: push    eax; ArgList
0x5D9519: lea     eax, [esp+144h+var_124]
0x5D951D: push    offset aD03d; "%d,%03d"
0x5D9522: push    eax; int
0x5D9523: call    BSStringT_Static_Format
0x5D9528: add     esp, 10h
0x5D952B: jmp     short loc_5D9540
0x5D952D: push    edi; ArgList
0x5D952E: lea     ecx, [esp+140h+var_124]
0x5D9532: push    offset aD_0; "%d"
0x5D9537: push    ecx; int
0x5D9538: call    BSStringT_Static_Format
0x5D953D: add     esp, 0Ch
0x5D9540: mov     esi, [esp+13Ch+var_124]
0x5D9544: mov     edx, dword ptr [esp+13Ch+var_120.m_dataLen]
0x5D9548: mov     ecx, [edx+40h]
0x5D954B: push    esi
0x5D954C: push    0FDEh
0x5D9551: call    Tile_SetString
0x5D9556: push    esi
0x5D9557: call    FormHeapFree
0x5D955C: add     esp, 4
0x5D955F: mov     ecx, [esp+13Ch]
0x5D9566: mov     large fs:0, ecx
0x5D956D: pop     ecx
0x5D956E: pop     edi
0x5D956F: pop     esi
0x5D9570: pop     ebp
0x5D9571: pop     ebx
0x5D9572: mov     ecx, [esp+128h+var_4]
0x5D9579: xor     ecx, esp
0x5D957B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D9580: add     esp, 134h
0x5D9586: retn
