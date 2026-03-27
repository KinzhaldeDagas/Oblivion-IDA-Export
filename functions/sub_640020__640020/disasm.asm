0x640020: push    0FFFFFFFFh
0x640022: push    offset SEH_640020
0x640027: mov     eax, large fs:0
0x64002D: push    eax
0x64002E: sub     esp, 34h
0x640031: push    ebx
0x640032: push    ebp
0x640033: push    esi
0x640034: push    edi
0x640035: mov     eax, ds:0B30AACh
0x64003A: xor     eax, esp
0x64003C: push    eax; ArgList
0x64003D: lea     eax, [esp+54h+var_C]
0x640041: mov     large fs:0, eax
0x640047: mov     ebp, ecx
0x640049: mov     [esp+54h+var_2C], ebp
0x64004D: mov     ebx, [esp+54h+arg_0]
0x640051: mov     ecx, ebx; this
0x640053: call    TESObjectREFR_GetHealth
0x640058: fstp    qword ptr [esp+54h+a2]
0x64005C: push    0; a2
0x64005E: mov     ecx, ebx; this
0x640060: call    Actor_GetActorBaseForm
0x640065: mov     ecx, eax
0x640067: call    TESActorBase_GetHealth
0x64006C: mov     [esp+54h+var_40], eax
0x640070: fild    [esp+54h+var_40]
0x640074: mov     ecx, ebx
0x640076: fdivr   qword ptr [esp+54h+a2]
0x64007A: fstp    dword ptr [ebp+26Ch]
0x640080: call    sub_5F0D60
0x640085: fld1
0x640087: test    al, al
0x640089: jnz     loc_64013E
0x64008F: mov     edx, [ebp+268h]
0x640095: fstp    st
0x640097: test    edx, edx
0x640099: lea     edi, [ebp+268h]
0x64009F: jz      loc_6408DB
0x6400A5: fld     dword ptr [ebp+264h]
0x6400AB: fld     dword ptr ds:0B33E9Ch
0x6400B1: fdiv    dword ptr ds:0B14CCCh
0x6400B7: fsubp   st(1), st
0x6400B9: fstp    [esp+54h+arg_0]
0x6400BD: fld     [esp+54h+arg_0]
0x6400C1: fst     dword ptr [ebp+264h]
0x6400C7: fldz
0x6400C9: fcompp
0x6400CB: fnstsw  ax
0x6400CD: test    ah, 41h
0x6400D0: jnz     loc_64064B
0x6400D6: mov     ecx, [edx+1Ch]
0x6400D9: mov     eax, [ecx]
0x6400DB: mov     eax, [eax+88h]
0x6400E1: push    edx
0x6400E2: lea     edx, [esp+58h+arg_0]
0x6400E6: push    edx
0x6400E7: call    eax
0x6400E9: mov     eax, [esp+54h+arg_0]
0x6400ED: test    eax, eax
0x6400EF: mov     ebx, ds:0A2807Ch
0x6400F5: jz      short loc_640111
0x6400F7: mov     esi, eax
0x6400F9: add     eax, 4
0x6400FC: push    eax; lpAddend
0x6400FD: call    ebx ; InterlockedDecrement
0x6400FF: test    eax, eax
0x640101: jnz     short loc_640111
0x640103: test    esi, esi
0x640105: jz      short loc_640111
0x640107: mov     edx, [esi]
0x640109: mov     eax, [edx]
0x64010B: push    1
0x64010D: mov     ecx, esi
0x64010F: call    eax
0x640111: mov     esi, [edi]
0x640113: test    esi, esi
0x640115: jz      loc_6408DB
0x64011B: lea     ecx, [esi+4]
0x64011E: push    ecx; lpAddend
0x64011F: call    ebx ; InterlockedDecrement
0x640121: test    eax, eax
0x640123: jnz     short loc_640133
0x640125: test    esi, esi
0x640127: jz      short loc_640133
0x640129: mov     edx, [esi]
0x64012B: mov     eax, [edx]
0x64012D: push    1
0x64012F: mov     ecx, esi
0x640131: call    eax
0x640133: mov     dword ptr [edi], 0
0x640139: jmp     loc_6408DB
0x64013E: fld     dword ptr ds:0B33E9Ch
0x640144: fdiv    dword ptr ds:0B14CCCh
0x64014A: fadd    dword ptr [ebp+264h]
0x640150: fstp    [esp+54h+var_40]
0x640154: fld     [esp+54h+var_40]
0x640158: fst     dword ptr [ebp+264h]
0x64015E: fcomp   st(1)
0x640160: fnstsw  ax
0x640162: test    ah, 41h
0x640165: jnz     short loc_64016F
0x640167: fstp    dword ptr [ebp+264h]
0x64016D: jmp     short loc_640171
0x64016F: fstp    st
0x640171: cmp     dword ptr [ebp+268h], 0
0x640178: lea     edi, [ebp+268h]
0x64017E: jnz     loc_64064B
0x640184: mov     edx, [ebx]
0x640186: mov     eax, [edx+154h]
0x64018C: mov     ecx, ebx
0x64018E: call    eax
0x640190: test    eax, eax
0x640192: jz      loc_6408DB
0x640198: push    0E4h ; 'ä'; Size
0x64019D: call    FormHeapAlloc
0x6401A2: add     esp, 4
0x6401A5: mov     [esp+54h+a2], eax
0x6401A9: test    eax, eax
0x6401AB: mov     [esp+54h+var_4], 0
0x6401B3: jz      short loc_6401BE
0x6401B5: mov     ecx, eax
0x6401B7: call    NiBillBoardNode_Constructor
0x6401BC: jmp     short loc_6401C0
0x6401BE: xor     eax, eax
0x6401C0: push    eax; a2
0x6401C1: mov     ecx, edi; this
0x6401C3: mov     [esp+58h+var_4], 0FFFFFFFFh
0x6401CB: call    NiSmartPointer_Set??
0x6401D0: fldz
0x6401D2: mov     eax, [edi]
0x6401D4: sub     esp, 10h
0x6401D7: fst     [esp+64h+var_58]; float
0x6401DB: lea     ecx, [eax+30h]
0x6401DE: fstp    [esp+64h+var_5C]; float
0x6401E2: fld1
0x6401E4: fstp    [esp+64h+var_60]; float
0x6401E8: fld     dword ptr ds:0A3F3E0h
0x6401EE: fstp    [esp+64h+var_64]; float
0x6401F1: call    sub_70FE20
0x6401F6: mov     ecx, ebx
0x6401F8: call    sub_5E0660
0x6401FD: fadd    qword ptr ds:0A3D0C0h
0x640203: mov     eax, [edi]
0x640205: push    offset aHealthbar; "HealthBar"
0x64020A: fstp    [esp+58h+var_40]
0x64020E: fldz
0x640210: fst     [esp+58h+var_28]
0x640214: mov     ecx, [esp+58h+var_28]
0x640218: fstp    [esp+58h+var_24]
0x64021C: fld     [esp+58h+var_40]
0x640220: mov     edx, [esp+58h+var_24]
0x640224: mov     [eax+54h], ecx
0x640227: fstp    [esp+58h+var_20]
0x64022B: mov     ecx, [esp+58h+var_20]
0x64022F: mov     [eax+58h], edx
0x640232: mov     [eax+5Ch], ecx
0x640235: mov     ecx, [edi]
0x640237: call    NiObjectNET_SetName
0x64023C: mov     edx, [ebx]
0x64023E: mov     eax, [edx+154h]
0x640244: mov     ecx, ebx
0x640246: call    eax
0x640248: mov     ecx, [edi]
0x64024A: mov     edx, [eax]
0x64024C: push    1
0x64024E: push    ecx
0x64024F: mov     ecx, eax
0x640251: mov     eax, [edx+84h]
0x640257: call    eax
0x640259: push    30h ; '0'; Size
0x64025B: call    FormHeapAlloc
0x640260: push    20h ; ' '; Size
0x640262: mov     esi, eax
0x640264: call    FormHeapAlloc
0x640269: push    40h ; '@'; Size
0x64026B: mov     ebp, eax
0x64026D: call    FormHeapAlloc
0x640272: mov     ebx, eax
0x640274: add     esp, 0Ch
0x640277: mov     [esp+54h+a2], ebx
0x64027B: test    ebx, ebx
0x64027D: mov     [esp+54h+var_4], 1
0x640285: jz      short loc_64029C
0x640287: push    offset sub_47EA50
0x64028C: push    4
0x64028E: push    10h
0x640290: push    ebx
0x640291: call    sub_401080
0x640296: mov     [esp+54h+var_40], ebx
0x64029A: jmp     short loc_6402A4
0x64029C: mov     [esp+54h+var_40], 0
0x6402A4: push    0Ch; Size
0x6402A6: mov     [esp+58h+var_4], 0FFFFFFFFh
0x6402AE: call    FormHeapAlloc
0x6402B3: fld     dword ptr ds:0B14CB4h
0x6402B9: fld     qword ptr ds:0A2FAA0h
0x6402BF: mov     ebx, eax
0x6402C1: fmul    st(1), st
0x6402C3: add     esp, 4
0x6402C6: fxch    st(1)
0x6402C8: fstp    [esp+54h+Src]
0x6402CC: fmul    dword ptr ds:0B14CBCh
0x6402D2: fstp    [esp+54h+a2]
0x6402D6: fld     [esp+54h+Src]
0x6402DA: fld     st
0x6402DC: fchs
0x6402DE: fstp    [esp+54h+Src]
0x6402E2: fld     [esp+54h+Src]
0x6402E6: fst     [esp+54h+var_28]
0x6402EA: mov     ecx, [esp+54h+var_28]
0x6402EE: fld     [esp+54h+a2]
0x6402F2: mov     [esi], ecx
0x6402F4: fst     [esp+54h+var_24]
0x6402F8: mov     edx, [esp+54h+var_24]
0x6402FC: fldz
0x6402FE: mov     [esi+4], edx
0x640301: fst     [esp+54h+var_20]
0x640305: mov     eax, [esp+54h+var_20]
0x640309: fxch    st(2)
0x64030B: fstp    [esp+54h+var_28]
0x64030F: mov     [esi+8], eax
0x640312: mov     ecx, [esp+54h+var_28]
0x640316: mov     [esi+0Ch], ecx
0x640319: fld     st
0x64031B: fchs
0x64031D: fstp    [esp+54h+a2]
0x640321: fld     [esp+54h+a2]
0x640325: fst     [esp+54h+var_24]
0x640329: mov     edx, [esp+54h+var_24]
0x64032D: fxch    st(2)
0x64032F: mov     [esi+10h], edx
0x640332: fst     [esp+54h+var_20]
0x640336: mov     eax, [esp+54h+var_20]
0x64033A: fxch    st(3)
0x64033C: mov     [esi+14h], eax
0x64033F: fst     [esp+54h+var_28]
0x640343: mov     ecx, [esp+54h+var_28]
0x640347: fxch    st(1)
0x640349: mov     [esi+18h], ecx
0x64034C: fstp    [esp+54h+var_24]
0x640350: mov     edx, [esp+54h+var_24]
0x640354: fxch    st(2)
0x640356: mov     [esi+1Ch], edx
0x640359: fst     [esp+54h+var_20]
0x64035D: mov     eax, [esp+54h+var_20]
0x640361: fxch    st(2)
0x640363: mov     [esi+20h], eax
0x640366: fstp    [esp+54h+var_28]
0x64036A: mov     ecx, [esp+54h+var_28]
0x64036E: mov     [esi+24h], ecx
0x640371: fstp    [esp+54h+var_24]
0x640375: mov     edx, [esp+54h+var_24]
0x640379: mov     [esi+28h], edx
0x64037C: fst     [esp+54h+var_20]
0x640380: mov     eax, [esp+54h+var_20]
0x640384: fld1
0x640386: mov     [esi+2Ch], eax
0x640389: fst     [esp+54h+a2]
0x64038D: mov     ecx, [esp+54h+a2]
0x640391: fst     [esp+54h+a2+4]
0x640395: mov     edx, [esp+54h+a2+4]
0x640399: fst     [esp+54h+a2]
0x64039D: mov     eax, [esp+54h+a2]
0x6403A1: fxch    st(1)
0x6403A3: fst     [esp+54h+a2+4]
0x6403A7: mov     [ebp+0], ecx
0x6403AA: mov     ecx, [esp+54h+a2+4]
0x6403AE: fst     [esp+54h+a2]
0x6403B2: mov     [ebp+4], edx
0x6403B5: fxch    st(1)
0x6403B7: mov     [ebp+8], eax
0x6403BA: mov     [ebp+0Ch], ecx
0x6403BD: mov     edx, [esp+54h+a2]
0x6403C1: fstp    [esp+54h+a2+4]
0x6403C5: mov     eax, [esp+54h+a2+4]
0x6403C9: mov     [ebp+10h], edx
0x6403CC: fst     [esp+54h+a2]
0x6403D0: mov     ecx, [esp+54h+a2]
0x6403D4: fstp    [esp+54h+a2+4]
0x6403D8: mov     edx, [esp+54h+a2+4]
0x6403DC: mov     [ebp+14h], eax
0x6403DF: mov     [ebp+18h], ecx
0x6403E2: mov     [ebp+1Ch], edx
0x6403E5: mov     ecx, 1
0x6403EA: mov     eax, 2
0x6403EF: mov     [ebx+2], cx
0x6403F3: mov     [ebx+4], ax
0x6403F7: mov     [ebx+6], ax
0x6403FB: mov     eax, [esp+54h+var_40]
0x6403FF: mov     [ebx+8], cx
0x640403: mov     word ptr [ebx], 0
0x640408: mov     word ptr [ebx+0Ah], 3
0x64040E: mov     ecx, 4
0x640413: jmp     short loc_640420
0x640415: align 10h
0x640420: mov     edx, ds:0B25AE0h
0x640426: mov     [eax], edx
0x640428: mov     edx, ds:0B25AE4h
0x64042E: mov     [eax+4], edx
0x640431: mov     edx, ds:0B25AE8h
0x640437: mov     [eax+8], edx
0x64043A: mov     edx, ds:0B25AECh
0x640440: mov     [eax+0Ch], edx
0x640443: add     eax, 10h
0x640446: sub     ecx, 1
0x640449: jnz     short loc_640420
0x64044B: push    1Ch; Size
0x64044D: call    FormHeapAlloc
0x640452: add     esp, 4
0x640455: mov     [esp+54h+a2], eax
0x640459: test    eax, eax
0x64045B: mov     [esp+54h+var_4], 2
0x640463: jz      short loc_640482
0x640465: mov     ecx, eax; this
0x640467: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x64046C: mov     eax, [esp+54h+a2]
0x640470: mov     dword ptr [eax], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x640476: mov     word ptr [eax+18h], 0ECh ; 'ì'
0x64047C: mov     byte ptr [eax+1Ah], 0
0x640480: jmp     short loc_640484
0x640482: xor     eax, eax
0x640484: or      word ptr [eax+18h], 1
0x640489: mov     ecx, [edi]; this
0x64048B: push    eax; a2
0x64048C: mov     [esp+58h+var_4], 0FFFFFFFFh
0x640494: call    sub_405680
0x640499: push    0C0h ; 'À'; Size
0x64049E: call    FormHeapAlloc
0x6404A3: add     esp, 4
0x6404A6: mov     [esp+54h+a2], eax
0x6404AA: test    eax, eax
0x6404AC: mov     [esp+54h+var_4], 3
0x6404B4: jz      short loc_6404D3
0x6404B6: mov     ecx, [esp+54h+var_40]
0x6404BA: push    ebx
0x6404BB: push    2
0x6404BD: push    0
0x6404BF: push    1
0x6404C1: push    ebp
0x6404C2: push    ecx
0x6404C3: push    0
0x6404C5: push    esi
0x6404C6: push    4
0x6404C8: mov     ecx, eax
0x6404CA: call    sub_7174B0
0x6404CF: mov     esi, eax
0x6404D1: jmp     short loc_6404D5
0x6404D3: xor     esi, esi
0x6404D5: mov     eax, [esi+0B4h]
0x6404DB: mov     byte ptr [eax+30h], 5
0x6404DF: mov     ecx, [edi]
0x6404E1: mov     edx, [ecx]
0x6404E3: mov     eax, [edx+84h]
0x6404E9: push    1
0x6404EB: push    esi
0x6404EC: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x6404F4: call    eax
0x6404F6: xor     eax, eax
0x6404F8: mov     [esp+54h+Src], eax
0x6404FC: mov     word ptr [esp+54h+var_38], ax
0x640501: mov     word ptr [esp+54h+var_38+2], ax
0x640506: lea     ecx, [esp+54h+Src]
0x64050A: push    offset aDataTexture_10; "Data\\Textures\\Menus\\Misc\\HealthBar3"...
0x64050F: push    ecx; int
0x640510: mov     [esp+5Ch+var_4], 4
0x640518: call    BSStringT_Static_Format
0x64051D: mov     ebp, [esp+5Ch+Src]
0x640521: add     esp, 8
0x640524: push    ebp; Src
0x640525: mov     ecx, esi
0x640527: call    NiObjectNET_SetName
0x64052C: push    1; char
0x64052E: push    offset dword_B256D0; int
0x640533: push    ebp; Src
0x640534: call    NiSourceTexture__LoadTextureByFilename
0x640539: push    30h ; '0'; Size
0x64053B: mov     ebx, eax
0x64053D: call    FormHeapAlloc
0x640542: add     esp, 10h
0x640545: mov     [esp+54h+a2], eax
0x640549: test    eax, eax
0x64054B: mov     byte ptr [esp+54h+var_4], 5
0x640550: jz      short loc_64055F
0x640552: mov     ecx, eax
0x640554: call    NiTexturingProperty__NiTexturingProperty
0x640559: mov     [esp+54h+var_40], eax
0x64055D: jmp     short loc_640567
0x64055F: mov     [esp+54h+var_40], 0
0x640567: mov     ecx, [esp+54h+var_40]
0x64056B: push    ebx
0x64056C: mov     byte ptr [esp+58h+var_4], 4
0x640571: call    NiTexturingProperty__SetUnk08
0x640576: mov     edx, [esp+54h+var_40]
0x64057A: push    edx; a2
0x64057B: mov     ecx, esi; this
0x64057D: call    sub_405680
0x640582: push    5Ch ; '\'; Size
0x640584: call    FormHeapAlloc
0x640589: add     esp, 4
0x64058C: mov     [esp+54h+a2], eax
0x640590: test    eax, eax
0x640592: mov     byte ptr [esp+54h+var_4], 6
0x640597: jz      short loc_6405A2
0x640599: mov     ecx, eax; this
0x64059B: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x6405A0: jmp     short loc_6405A4
0x6405A2: xor     eax, eax
0x6405A4: mov     ecx, ds:0B25AC4h
0x6405AA: mov     [eax+40h], ecx
0x6405AD: mov     edx, ds:0B25AC8h
0x6405B3: mov     [eax+44h], edx
0x6405B6: mov     ecx, ds:0B25ACCh
0x6405BC: add     dword ptr [eax+54h], 1
0x6405C0: mov     [eax+48h], ecx
0x6405C3: mov     edx, ds:0B25AC4h
0x6405C9: mov     ecx, [eax+54h]
0x6405CC: mov     [eax+1Ch], edx
0x6405CF: mov     edx, ds:0B25AC8h
0x6405D5: mov     [eax+20h], edx
0x6405D8: mov     edx, ds:0B25ACCh
0x6405DE: add     ecx, 1
0x6405E1: mov     [eax+54h], ecx
0x6405E4: mov     [eax+24h], edx
0x6405E7: mov     edx, ds:0B25AC4h
0x6405ED: mov     [eax+28h], edx
0x6405F0: mov     edx, ds:0B25AC8h
0x6405F6: mov     [eax+2Ch], edx
0x6405F9: mov     edx, ds:0B25ACCh
0x6405FF: add     ecx, 1
0x640602: mov     [eax+54h], ecx
0x640605: push    eax; a2
0x640606: mov     ecx, esi; this
0x640608: mov     byte ptr [esp+58h+var_4], 4
0x64060D: mov     [eax+30h], edx
0x640610: call    sub_405680
0x640615: mov     ecx, [edi]
0x640617: call    NiNode_UpdateDynamicEffectState
0x64061C: mov     ecx, [edi]; this
0x64061E: call    NiAVObject_InitializePropertyState
0x640623: fldz
0x640625: mov     ecx, [edi]; this
0x640627: push    0; a3
0x640629: push    ecx
0x64062A: fstp    [esp+5Ch+var_5C]; a2
0x64062D: call    NiAVObject_UpdateNiAVObject
0x640632: push    ebp
0x640633: mov     [esp+58h+var_4], 0FFFFFFFFh
0x64063B: call    FormHeapFree
0x640640: mov     ebx, [esp+58h+arg_0]
0x640644: mov     ebp, [esp+58h+var_2C]
0x640648: add     esp, 4
0x64064B: fldz
0x64064D: mov     edi, [edi]
0x64064F: cmp     word ptr [edi+0B6h], 0
0x640657: fstp    [esp+54h+var_14]
0x64065B: fld     dword ptr [ebp+264h]
0x640661: fstp    [esp+54h+var_10]
0x640665: fld     dword ptr [ebp+26Ch]
0x64066B: fld     qword ptr ds:0A2FAA0h
0x640671: fsub    st(1), st
0x640673: fxch    st(1)
0x640675: fadd    st, st
0x640677: fld     dword ptr ds:0B14CB4h
0x64067D: fchs
0x64067F: fmulp   st(2), st
0x640681: fmulp   st(1), st
0x640683: fstp    [esp+54h+a2]
0x640687: ja      short loc_64068D
0x640689: xor     edi, edi
0x64068B: jmp     short loc_640695
0x64068D: mov     eax, [edi+0B0h]
0x640693: mov     edi, [eax]
0x640695: mov     eax, [edi+0B4h]
0x64069B: mov     ecx, [eax+1Ch]
0x64069E: mov     esi, [eax+24h]
0x6406A1: mov     [esp+54h+Src], ecx
0x6406A5: push    2
0x6406A7: mov     ecx, edi
0x6406A9: call    NiNode_GetNiPropertyByID
0x6406AE: fld     dword ptr ds:0A3D65Ch
0x6406B4: fcomp   dword ptr [ebp+26Ch]
0x6406BA: mov     edx, ds:0B25AC4h
0x6406C0: mov     ecx, eax
0x6406C2: mov     eax, ds:0B25AC8h
0x6406C7: mov     [esp+54h+var_24], eax
0x6406CB: fnstsw  ax
0x6406CD: mov     [esp+54h+var_28], edx
0x6406D1: mov     edx, ds:0B25ACCh
0x6406D7: fld1
0x6406D9: test    ah, 5
0x6406DC: mov     [esp+54h+var_40], ecx
0x6406E0: mov     [esp+54h+var_20], edx
0x6406E4: jp      short loc_640702
0x6406E6: fstp    [esp+54h+var_18]
0x6406EA: fld     dword ptr [ebp+26Ch]
0x6406F0: fsub    qword ptr ds:0A2FAA0h
0x6406F6: fadd    st, st
0x6406F8: fld1
0x6406FA: fsubrp  st(1), st
0x6406FC: fstp    [esp+54h+var_1C]
0x640700: jmp     short loc_640712
0x640702: fstp    [esp+54h+var_1C]
0x640706: fld     dword ptr [ebp+26Ch]
0x64070C: fadd    st, st
0x64070E: fstp    [esp+54h+var_18]
0x640712: test    ecx, ecx
0x640714: jz      loc_6407EE
0x64071A: fldz
0x64071C: fcomp   dword ptr [ebp+270h]
0x640722: fnstsw  ax
0x640724: test    ah, 5
0x640727: jp      loc_6407EE
0x64072D: fld     dword ptr [ecx+50h]
0x640730: mov     ecx, ebx
0x640732: fstp    [esp+54h+arg_0]
0x640736: call    sub_5E0AC0
0x64073B: fmul    [esp+54h+arg_0]
0x64073F: fstp    [esp+54h+arg_0]
0x640743: fld     dword ptr [ebp+270h]
0x640749: fld     dword ptr ds:0B14CCCh
0x64074F: fmul    dword ptr ds:0B33E9Ch
0x640755: fsubp   st(1), st
0x640757: fstp    [esp+54h+var_2C]
0x64075B: fld     [esp+54h+var_2C]
0x64075F: fst     dword ptr [ebp+270h]
0x640765: fldz
0x640767: fcom    st(1)
0x640769: fnstsw  ax
0x64076B: test    ah, 41h
0x64076E: jnz     short loc_640778
0x640770: fstp    st(1)
0x640772: fstp    [esp+54h+arg_0]
0x640776: jmp     short loc_640799
0x640778: fstp    st
0x64077A: fld     dword ptr ds:0B14CDCh
0x640780: fcom    st(1)
0x640782: fnstsw  ax
0x640784: test    ah, 41h
0x640787: jnz     short loc_640795
0x640789: fdivp   st(1), st
0x64078B: fmul    [esp+54h+arg_0]
0x64078F: fstp    [esp+54h+arg_0]
0x640793: jmp     short loc_640799
0x640795: fstp    st(1)
0x640797: fstp    st
0x640799: fld     [esp+54h+arg_0]
0x64079D: mov     ebx, [esp+54h+var_40]
0x6407A1: fld     st
0x6407A3: lea     eax, [esp+54h+var_28]
0x6407A7: fmul    [esp+54h+var_1C]
0x6407AB: add     ebx, 40h ; '@'
0x6407AE: push    eax
0x6407AF: mov     ecx, ebx
0x6407B1: fstp    [esp+58h+var_28]
0x6407B5: fld     st
0x6407B7: fmul    [esp+58h+var_18]
0x6407BB: fstp    [esp+58h+var_24]
0x6407BF: fmul    qword ptr ds:0A2FC68h
0x6407C5: fstp    [esp+58h+var_20]
0x6407C9: call    sub_8AA390
0x6407CE: test    al, al
0x6407D0: jz      short loc_6407EE
0x6407D2: mov     ecx, [esp+54h+var_28]
0x6407D6: mov     edx, [esp+54h+var_24]
0x6407DA: mov     eax, [esp+54h+var_20]
0x6407DE: mov     [ebx], ecx
0x6407E0: mov     [ebx+4], edx
0x6407E3: mov     [ebx+8], eax
0x6407E6: mov     eax, [esp+54h+var_40]
0x6407EA: add     dword ptr [eax+54h], 1
0x6407EE: lea     ecx, [esp+54h+var_1C]
0x6407F2: push    ecx
0x6407F3: mov     ecx, esi
0x6407F5: call    sub_632310
0x6407FA: test    al, al
0x6407FC: jz      short loc_640848
0x6407FE: mov     eax, [esp+54h+var_1C]
0x640802: mov     ecx, [esp+54h+var_18]
0x640806: mov     edx, [esp+54h+var_14]
0x64080A: mov     ebx, [esp+54h+var_10]
0x64080E: mov     [esi], eax
0x640810: mov     [esi+10h], eax
0x640813: mov     [esi+20h], eax
0x640816: mov     [esi+30h], eax
0x640819: mov     [esi+4], ecx
0x64081C: mov     [esi+14h], ecx
0x64081F: mov     [esi+24h], ecx
0x640822: mov     [esi+34h], ecx
0x640825: mov     [esi+8], edx
0x640828: mov     [esi+18h], edx
0x64082B: mov     [esi+28h], edx
0x64082E: mov     [esi+38h], edx
0x640831: mov     [esi+0Ch], ebx
0x640834: mov     [esi+1Ch], ebx
0x640837: mov     [esi+2Ch], ebx
0x64083A: mov     [esi+3Ch], ebx
0x64083D: mov     eax, [edi+0B4h]
0x640843: or      word ptr [eax+2Eh], 4
0x640848: fld     [esp+54h+a2]
0x64084C: mov     ecx, [esp+54h+Src]
0x640850: fld     st
0x640852: fld     dword ptr [ecx]
0x640854: fucompp
0x640856: fnstsw  ax
0x640858: test    ah, 44h
0x64085B: jnp     short loc_6408D9
0x64085D: fld     st
0x64085F: fsub    dword ptr [ecx]
0x640861: fstp    [esp+54h+arg_0]
0x640865: fld     dword ptr ds:0B14CC4h
0x64086B: fmul    dword ptr ds:0B33E9Ch
0x640871: fstp    [esp+54h+var_2C]
0x640875: fld     [esp+54h+arg_0]
0x640879: fld     st
0x64087B: fabs
0x64087D: fstp    [esp+54h+arg_0]
0x640881: fld     [esp+54h+arg_0]
0x640885: fld     [esp+54h+var_2C]
0x640889: fcom    st(1)
0x64088B: fnstsw  ax
0x64088D: fstp    st(1)
0x64088F: test    ah, 41h
0x640892: jnz     short loc_64089C
0x640894: fstp    st
0x640896: fstp    st
0x640898: fst     dword ptr [ecx]
0x64089A: jmp     short loc_6408BD
0x64089C: fstp    st(2)
0x64089E: fldz
0x6408A0: fcompp
0x6408A2: fnstsw  ax
0x6408A4: test    ah, 5
0x6408A7: jp      short loc_6408B4
0x6408A9: fld     st
0x6408AB: fadd    dword ptr [ecx]
0x6408AD: fstp    dword ptr [ecx]
0x6408AF: fadd    dword ptr [ecx+0Ch]
0x6408B2: jmp     short loc_6408BD
0x6408B4: fld     dword ptr [ecx]
0x6408B6: fsub    st, st(1)
0x6408B8: fstp    dword ptr [ecx]
0x6408BA: fsubr   dword ptr [ecx+0Ch]
0x6408BD: fstp    dword ptr [ecx+0Ch]
0x6408C0: fld     dword ptr ds:0B14CD4h
0x6408C6: fstp    dword ptr [ebp+270h]
0x6408CC: mov     edi, [edi+0B4h]
0x6408D2: or      word ptr [edi+2Eh], 1
0x6408D7: jmp     short loc_6408DB
0x6408D9: fstp    st
0x6408DB: mov     ecx, [esp+54h+var_C]
0x6408DF: mov     large fs:0, ecx
0x6408E6: pop     ecx
0x6408E7: pop     edi
0x6408E8: pop     esi
0x6408E9: pop     ebp
0x6408EA: pop     ebx
0x6408EB: add     esp, 40h
0x6408EE: retn    4
