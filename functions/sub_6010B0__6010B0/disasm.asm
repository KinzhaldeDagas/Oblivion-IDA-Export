0x6010B0: push    0FFFFFFFFh
0x6010B2: push    offset SEH_6010B0
0x6010B7: mov     eax, large fs:0
0x6010BD: push    eax
0x6010BE: sub     esp, 10h
0x6010C1: push    ebx
0x6010C2: push    ebp
0x6010C3: push    esi
0x6010C4: push    edi
0x6010C5: mov     eax, ds:0B30AACh
0x6010CA: xor     eax, esp
0x6010CC: push    eax; int
0x6010CD: lea     eax, [esp+30h+var_C]
0x6010D1: mov     large fs:0, eax
0x6010D7: mov     esi, ecx
0x6010D9: mov     eax, [esi+0B0h]
0x6010DF: cmp     eax, 5
0x6010E2: jz      loc_601659
0x6010E8: cmp     eax, 3
0x6010EB: jz      loc_601659
0x6010F1: mov     ebp, [esp+30h+arg_0]
0x6010F5: cmp     ebp, esi
0x6010F7: jz      loc_601659
0x6010FD: mov     eax, [esi]
0x6010FF: mov     edx, [eax+198h]
0x601105: push    0
0x601107: call    edx
0x601109: test    al, al
0x60110B: jnz     loc_601659
0x601111: mov     eax, [esi]
0x601113: mov     edx, [eax+388h]
0x601119: mov     ecx, esi
0x60111B: call    edx
0x60111D: test    eax, eax
0x60111F: jnz     loc_601659
0x601125: cmp     [esi+0C0h], al
0x60112B: jnz     loc_601659
0x601131: cmp     byte ptr [esp+30h+arg_4], al
0x601135: jnz     short loc_601155
0x601137: mov     eax, [esi]
0x601139: mov     edx, [eax+18Ch]
0x60113F: mov     ecx, esi
0x601141: call    edx
0x601143: test    eax, eax
0x601145: jz      short loc_601155
0x601147: cmp     eax, 4
0x60114A: jz      short loc_601155
0x60114C: cmp     eax, 9
0x60114F: jnz     loc_601659
0x601155: mov     eax, [esi]
0x601157: mov     edx, [eax+284h]
0x60115D: push    4
0x60115F: mov     ecx, esi
0x601161: call    edx
0x601163: test    eax, eax
0x601165: jnz     short loc_6011B1
0x601167: push    eax
0x601168: push    ebp
0x601169: mov     ecx, esi
0x60116B: call    TesObjectREF_GetDistance
0x601170: fstp    [esp+30h+var_14]
0x601174: mov     eax, [esi]
0x601176: mov     edx, [eax+26Ch]
0x60117C: mov     ecx, esi
0x60117E: call    edx
0x601180: fmul    qword ptr ds:0A3C770h
0x601186: mov     eax, [esi]
0x601188: mov     edx, [eax+26Ch]
0x60118E: fstp    dword ptr [esp+30h+var_1C+4]
0x601192: mov     ecx, esi
0x601194: fld     [esp+30h+var_14]
0x601198: fstp    qword ptr [esp+30h+var_14]
0x60119C: call    edx
0x60119E: fadd    dword ptr [esp+30h+var_1C+4]
0x6011A2: fcomp   qword ptr [esp+30h+var_14]
0x6011A6: fnstsw  ax
0x6011A8: test    ah, 5
0x6011AB: jnp     loc_601659
0x6011B1: mov     edi, dword ptr [esp+30h+arg_10]
0x6011B5: mov     edx, [esi]
0x6011B7: test    edi, edi
0x6011B9: setnle  al
0x6011BC: mov     byte ptr [esp+30h+var_14], al
0x6011C0: mov     eax, [edx+18Ch]
0x6011C6: mov     ecx, esi
0x6011C8: call    eax
0x6011CA: test    eax, eax
0x6011CC: jz      short loc_6011DA
0x6011CE: mov     edx, [esi]
0x6011D0: mov     eax, [edx+320h]
0x6011D6: mov     ecx, esi
0x6011D8: call    eax
0x6011DA: test    edi, edi
0x6011DC: mov     dword ptr [esp+30h+arg_10], 0
0x6011E4: jnz     short loc_60122A
0x6011E6: mov     ecx, [esi+58h]
0x6011E9: test    ecx, ecx
0x6011EB: mov     edi, esi
0x6011ED: jz      short loc_60120C
0x6011EF: mov     edx, [ecx]
0x6011F1: mov     eax, [edx+3D0h]
0x6011F7: call    eax
0x6011F9: test    eax, eax
0x6011FB: jz      short loc_60120C
0x6011FD: mov     ecx, [esi+58h]
0x601200: mov     edx, [ecx]
0x601202: mov     eax, [edx+3D0h]
0x601208: call    eax
0x60120A: mov     edi, eax
0x60120C: mov     ecx, [ebp+58h]
0x60120F: test    ecx, ecx
0x601211: jz      short loc_60122E
0x601213: mov     edx, [ecx]
0x601215: mov     eax, [edx+170h]
0x60121B: push    edi
0x60121C: push    ebp
0x60121D: call    eax
0x60121F: call    Double_To_SInt32
0x601224: mov     dword ptr [esp+30h+arg_10], eax
0x601228: jmp     short loc_60122E
0x60122A: mov     dword ptr [esp+30h+arg_10], edi
0x60122E: mov     edx, [esi]
0x601230: mov     eax, [edx+334h]
0x601236: push    1
0x601238: mov     ecx, esi
0x60123A: call    eax
0x60123C: test    al, al
0x60123E: jnz     loc_6015B6
0x601244: push    8000h
0x601249: lea     ebx, [esi+44h]
0x60124C: push    ebx
0x60124D: push    ebp
0x60124E: call    Script_AddEventToExtraScript
0x601253: mov     edx, [esi]
0x601255: mov     eax, [edx+170h]
0x60125B: add     esp, 0Ch
0x60125E: mov     ecx, esi
0x601260: call    eax
0x601262: movzx   ecx, byte ptr [eax+4]
0x601266: xor     ebp, ebp
0x601268: xor     edi, edi
0x60126A: sub     ecx, 23h ; '#'
0x60126D: mov     dword ptr [esp+30h+var_1C], ebp
0x601271: mov     dword ptr [esp+30h+var_1C+4], edi
0x601275: jz      short loc_601284
0x601277: sub     ecx, 1
0x60127A: jnz     short loc_60128A
0x60127C: mov     dword ptr [esp+30h+var_1C+4], eax
0x601280: mov     edi, eax
0x601282: jmp     short loc_60128A
0x601284: mov     dword ptr [esp+30h+var_1C], eax
0x601288: mov     ebp, eax
0x60128A: call    sub_579540
0x60128F: cmp     eax, esi
0x601291: jnz     short loc_60129D
0x601293: push    0
0x601295: call    sub_578D50
0x60129A: add     esp, 4
0x60129D: mov     ecx, [esi+58h]
0x6012A0: mov     eax, [ecx+8]
0x6012A3: test    eax, eax
0x6012A5: jz      loc_601375
0x6012AB: mov     edx, [eax+1Ch]
0x6012AE: shr     edx, 14h
0x6012B1: test    dl, 1
0x6012B4: jz      short loc_6012EA
0x6012B6: test    ebp, ebp
0x6012B8: jz      short loc_6012CF
0x6012BA: push    1; char
0x6012BC: push    0; int
0x6012BE: push    1; int
0x6012C0: push    1; int
0x6012C2: push    esi; int
0x6012C3: mov     ecx, ebp; int
0x6012C5: call    sub_5227A0
0x6012CA: jmp     loc_601375
0x6012CF: test    edi, edi
0x6012D1: jz      loc_601375
0x6012D7: push    1
0x6012D9: push    1
0x6012DB: push    1
0x6012DD: push    esi
0x6012DE: mov     ecx, edi
0x6012E0: call    sub_51E240
0x6012E5: jmp     loc_601375
0x6012EA: test    eax, eax
0x6012EC: jz      loc_601375
0x6012F2: mov     eax, [eax+1Ch]
0x6012F5: shr     eax, 15h
0x6012F8: test    al, 1
0x6012FA: jz      short loc_601375
0x6012FC: mov     edx, [esi]
0x6012FE: mov     eax, [edx+2B8h]
0x601304: push    0FFFFFFFFh
0x601306: mov     ecx, esi
0x601308: call    eax
0x60130A: mov     edi, eax
0x60130C: test    edi, edi
0x60130E: jz      short loc_601375
0x601310: mov     eax, [edi+8]
0x601313: xor     ebp, ebp
0x601315: test    eax, eax
0x601317: jz      short loc_601321
0x601319: cmp     byte ptr [eax+4], 21h ; '!'
0x60131D: jnz     short loc_601321
0x60131F: mov     ebp, eax
0x601321: push    0
0x601323: push    1
0x601325: push    0
0x601327: push    1
0x601329: push    eax
0x60132A: mov     ecx, esi
0x60132C: call    Actor_EquipItem
0x601331: cmp     byte ptr [ebp+90h], 5
0x601338: jnz     short loc_601361
0x60133A: mov     edx, [esi]
0x60133C: mov     eax, [edx+2BCh]
0x601342: mov     ecx, esi
0x601344: call    eax
0x601346: push    0
0x601348: mov     edi, eax
0x60134A: mov     ebp, [edi+8]
0x60134D: push    1
0x60134F: push    0
0x601351: mov     ecx, edi
0x601353: call    TESHealthForm_GetHealth
0x601358: push    eax
0x601359: push    ebp
0x60135A: mov     ecx, esi
0x60135C: call    Actor_EquipItem
0x601361: mov     ecx, edi
0x601363: call    ContainerEntryExtraData_DestroyDataTable
0x601368: push    edi
0x601369: call    FormHeapFree
0x60136E: mov     ebp, dword ptr [esp+34h+var_1C]
0x601372: add     esp, 4
0x601375: cmp     byte ptr [esp+30h+arg_4], 0
0x60137A: jnz     loc_60148B
0x601380: cmp     byte ptr [esp+30h+arg_14], 0
0x601385: jz      loc_60148B
0x60138B: mov     edi, [esp+30h+arg_0]
0x60138F: test    edi, edi
0x601391: jz      short loc_601402
0x601393: mov     edx, [edi]
0x601395: mov     eax, [edx+334h]
0x60139B: push    1
0x60139D: mov     ecx, edi
0x60139F: call    eax
0x6013A1: test    al, al
0x6013A3: jnz     short loc_601402
0x6013A5: mov     ecx, [esi+58h]
0x6013A8: mov     edx, [ecx]
0x6013AA: mov     eax, [edx+50h]
0x6013AD: call    eax
0x6013AF: test    eax, eax
0x6013B1: jnz     short loc_601402
0x6013B3: push    1
0x6013B5: push    49564E49h
0x6013BA: push    1Dh
0x6013BC: mov     ecx, esi
0x6013BE: call    sub_5E91E0
0x6013C3: mov     ecx, [esi+58h]
0x6013C6: mov     edx, [ecx]
0x6013C8: mov     eax, [edx+50h]
0x6013CB: call    eax
0x6013CD: test    eax, eax
0x6013CF: jnz     short loc_6013E1
0x6013D1: push    1
0x6013D3: push    4C4D4843h
0x6013D8: push    1Dh
0x6013DA: mov     ecx, esi
0x6013DC: call    sub_5E91E0
0x6013E1: mov     ecx, [esi+58h]
0x6013E4: mov     edx, [ecx]
0x6013E6: mov     eax, [edx+50h]
0x6013E9: call    eax
0x6013EB: test    eax, eax
0x6013ED: jz      short loc_601402
0x6013EF: mov     ecx, [esi+58h]
0x6013F2: mov     edx, [ecx]
0x6013F4: mov     eax, [edx+50h]
0x6013F7: push    0
0x6013F9: call    eax
0x6013FB: mov     ecx, eax
0x6013FD: call    sub_41A610
0x601402: mov     ecx, [esi+58h]
0x601405: mov     edx, [ecx]
0x601407: mov     eax, [edx+50h]
0x60140A: call    eax
0x60140C: test    eax, eax
0x60140E: jz      short loc_60148F
0x601410: mov     ecx, [esi+58h]
0x601413: mov     edx, [ecx]
0x601415: mov     eax, [edx+50h]
0x601418: call    eax
0x60141A: mov     ecx, eax
0x60141C: call    sub_419CF0
0x601421: mov     ecx, [esi+58h]
0x601424: test    al, al
0x601426: mov     eax, [ecx]
0x601428: jz      short loc_60145F
0x60142A: push    0
0x60142C: lea     edx, [esi+68h]
0x60142F: push    edx
0x601430: mov     edx, [eax+50h]
0x601433: call    edx
0x601435: push    eax
0x601436: lea     ecx, [esi+5Ch]
0x601439: call    MagicCaster_CastMagicItem
0x60143E: mov     ecx, [esi+58h]
0x601441: mov     eax, [ecx]
0x601443: mov     edx, [eax+50h]
0x601446: push    0
0x601448: call    edx
0x60144A: mov     ecx, eax
0x60144C: call    sub_419F10
0x601451: mov     ecx, [esi+58h]
0x601454: mov     eax, [ecx]
0x601456: mov     edx, [eax+54h]
0x601459: push    0
0x60145B: call    edx
0x60145D: jmp     short loc_60148F
0x60145F: mov     edx, [eax+50h]
0x601462: call    edx
0x601464: mov     ecx, eax
0x601466: call    sub_419E50
0x60146B: test    al, al
0x60146D: jnz     loc_601659
0x601473: mov     ecx, [esi+58h]
0x601476: mov     eax, [ecx]
0x601478: mov     edx, [eax+50h]
0x60147B: push    0
0x60147D: call    edx
0x60147F: mov     ecx, eax
0x601481: call    sub_41A610
0x601486: jmp     loc_601659
0x60148B: mov     edi, [esp+30h+arg_0]
0x60148F: mov     ecx, esi; int
0x601491: call    sub_5EAE70
0x601496: mov     ecx, [esi+58h]
0x601499: mov     eax, [ecx]
0x60149B: mov     edx, [eax+178h]
0x6014A1: push    0
0x6014A3: call    edx
0x6014A5: mov     eax, [esi+58h]
0x6014A8: mov     ecx, [eax+8]
0x6014AB: test    ecx, ecx
0x6014AD: jz      short loc_6014F5
0x6014AF: call    sub_5660A0
0x6014B4: test    al, al
0x6014B6: jnz     short loc_6014F5
0x6014B8: mov     edi, [esi+58h]
0x6014BB: mov     edx, [edi]
0x6014BD: mov     eax, [edx+390h]
0x6014C3: mov     ecx, edi
0x6014C5: call    eax
0x6014C7: mov     edx, [edi]
0x6014C9: mov     ecx, edi
0x6014CB: push    eax
0x6014CC: mov     eax, [edx+0C0h]
0x6014D2: call    eax
0x6014D4: mov     edx, [edi]
0x6014D6: mov     ecx, edi
0x6014D8: push    eax
0x6014D9: mov     eax, [edx+0CCh]
0x6014DF: call    eax
0x6014E1: mov     ecx, [edi+4]
0x6014E4: mov     edx, [edi+8]
0x6014E7: push    eax
0x6014E8: push    ecx
0x6014E9: push    edx
0x6014EA: mov     ecx, ebx
0x6014EC: call    sub_4268B0
0x6014F1: mov     edi, [esp+30h+arg_0]
0x6014F5: push    1C0h; Size
0x6014FA: call    FormHeapAlloc
0x6014FF: add     esp, 4
0x601502: mov     [esp+30h+arg_14], eax
0x601506: test    eax, eax
0x601508: mov     dword ptr [esp+30h+var_4], 0
0x601510: jz      short loc_601529
0x601512: mov     ecx, [esp+30h+var_14]
0x601516: mov     edx, dword ptr [esp+30h+arg_10]
0x60151A: push    ecx
0x60151B: push    edx
0x60151C: push    edi
0x60151D: push    esi
0x60151E: mov     ecx, eax; this
0x601520: call    ??0CombatController@@QAE@XZ; CombatController::CombatController(void)
0x601525: mov     edi, eax
0x601527: jmp     short loc_60152B
0x601529: xor     edi, edi
0x60152B: cmp     [esp+30h+arg_C], 0
0x601530: mov     dword ptr [esp+30h+var_4], 0FFFFFFFFh
0x601538: jz      short loc_601543
0x60153A: push    7
0x60153C: mov     ecx, edi
0x60153E: call    sub_612DE0
0x601543: cmp     byte ptr [esp+30h+arg_4], 0
0x601548: jz      short loc_60154E
0x60154A: mov     byte ptr [edi+4Dh], 1
0x60154E: mov     eax, [esi+58h]
0x601551: test    eax, eax
0x601553: jz      short loc_60159A
0x601555: mov     eax, [eax+8]
0x601558: test    eax, eax
0x60155A: jz      short loc_60159A
0x60155C: mov     eax, [eax+1Ch]
0x60155F: mov     ecx, eax
0x601561: shr     ecx, 14h
0x601564: test    cl, 1
0x601567: jnz     short loc_601570
0x601569: shr     eax, 15h
0x60156C: test    al, 1
0x60156E: jz      short loc_60159A
0x601570: test    ebp, ebp
0x601572: jz      short loc_601586
0x601574: push    1; char
0x601576: push    0; int
0x601578: push    1; int
0x60157A: push    1; int
0x60157C: push    esi; int
0x60157D: mov     ecx, ebp; int
0x60157F: call    sub_5227A0
0x601584: jmp     short loc_60159A
0x601586: mov     ecx, dword ptr [esp+30h+var_1C+4]
0x60158A: test    ecx, ecx
0x60158C: jz      short loc_60159A
0x60158E: push    1
0x601590: push    1
0x601592: push    1
0x601594: push    esi
0x601595: call    sub_51E240
0x60159A: mov     ecx, [esi+58h]
0x60159D: mov     edx, [ecx]
0x60159F: mov     eax, [edx+20h]
0x6015A2: call    eax
0x6015A4: push    1; a4
0x6015A6: push    0; a3
0x6015A8: push    edi; a2
0x6015A9: mov     ecx, esi; this
0x6015AB: call    Actor_AddPackage?
0x6015B0: mov     ebp, [esp+30h+arg_0]
0x6015B4: jmp     short loc_60162F
0x6015B6: mov     edx, [esi]
0x6015B8: mov     eax, [edx+330h]
0x6015BE: mov     ecx, esi
0x6015C0: call    eax
0x6015C2: test    eax, eax
0x6015C4: jz      short loc_60162F
0x6015C6: test    ebp, ebp
0x6015C8: jz      loc_601659
0x6015CE: mov     edx, [esi]
0x6015D0: mov     eax, [edx+330h]
0x6015D6: mov     ecx, esi
0x6015D8: call    eax
0x6015DA: mov     ecx, eax
0x6015DC: call    sub_6135F0
0x6015E1: cmp     eax, ebp
0x6015E3: jz      short loc_60162F
0x6015E5: fld     dword ptr ds:0A31E2Ch
0x6015EB: mov     ecx, [esp+30h+var_14]
0x6015EF: mov     edx, dword ptr [esp+30h+arg_10]
0x6015F3: fstp    dword ptr [esi+0ACh]
0x6015F9: fldz
0x6015FB: mov     eax, [esi]
0x6015FD: sub     esp, 8
0x601600: fst     [esp+38h+var_34]; float
0x601604: fstp    [esp+38h+var_38]; float
0x601607: push    ecx; float
0x601608: push    edx; char
0x601609: mov     edx, [eax+330h]
0x60160F: push    ebp; int
0x601610: mov     ecx, esi
0x601612: call    edx
0x601614: mov     ecx, eax
0x601616: call    sub_616190
0x60161B: mov     eax, [esi]
0x60161D: mov     edx, [eax+330h]
0x601623: push    ebp
0x601624: mov     ecx, esi
0x601626: call    edx
0x601628: mov     ecx, eax
0x60162A: call    sub_61EAE0
0x60162F: test    ebp, ebp
0x601631: jz      short loc_601659
0x601633: cmp     byte ptr ds:0B3B908h, 0
0x60163A: jz      short loc_601659
0x60163C: mov     ecx, ebp; this
0x60163E: call    TESObjectREFR_GetName
0x601643: push    eax
0x601644: mov     ecx, esi; this
0x601646: call    TESObjectREFR_GetName
0x60164B: push    eax
0x60164C: push    offset a_20sIsEntering; "%.20s is entering combat with %.20s!"
0x601651: call    Interface_ConsolePrint
0x601656: add     esp, 0Ch
0x601659: mov     ecx, [esp+30h+var_C]
0x60165D: mov     large fs:0, ecx
0x601664: pop     ecx
0x601665: pop     edi
0x601666: pop     esi
0x601667: pop     ebp
0x601668: pop     ebx
0x601669: add     esp, 1Ch
0x60166C: retn    18h
