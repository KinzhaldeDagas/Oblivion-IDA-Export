0x5821F0: push    ebp
0x5821F1: mov     ebp, esp
0x5821F3: and     esp, 0FFFFFFC0h
0x5821F6: push    0FFFFFFFFh
0x5821F8: push    offset SEH_5821F0
0x5821FD: mov     eax, large fs:0
0x582203: push    eax
0x582204: sub     esp, 1E8h
0x58220A: mov     eax, ds:0B30AACh
0x58220F: xor     eax, esp
0x582211: mov     [esp+1F4h+var_44], eax
0x582218: push    ebx
0x582219: push    esi
0x58221A: push    edi; a3
0x58221B: mov     eax, ds:0B30AACh
0x582220: xor     eax, esp
0x582222: push    eax; a3
0x582223: lea     eax, [esp+204h+var_C]
0x58222A: mov     large fs:0, eax
0x582230: mov     eax, ds:0B33398h
0x582235: mov     ebx, [eax+20h]
0x582238: mov     esi, ecx
0x58223A: xor     edi, edi
0x58223C: cmp     byte ptr [esi+8], 1
0x582240: push    edi
0x582241: setnz   cl
0x582244: mov     [esp+208h+var_1B4], ebx
0x582248: push    ecx
0x582249: call    sub_5A6040
0x58224E: add     esp, 8
0x582251: call    sub_5A82D0
0x582256: cmp     byte ptr [esi+8], 1
0x58225A: jnz     loc_582317
0x582260: push    3ECh
0x582265: call    Menu_GetOpenMenuTile
0x58226A: add     esp, 4
0x58226D: test    eax, eax
0x58226F: jnz     short loc_582276
0x582271: call    sub_5A6B00
0x582276: push    3EDh
0x58227B: call    Menu_GetOpenMenuTile
0x582280: add     esp, 4
0x582283: cmp     eax, edi
0x582285: jnz     short loc_58228C
0x582287: call    sub_5A4840
0x58228C: cmp     [esi+10Ch], edi
0x582292: jz      short loc_5822A7
0x582294: mov     [esi+10Ch], edi
0x58229A: mov     ecx, ds:0B333C4h
0x5822A0: push    1
0x5822A2: call    Player_GoToJail?
0x5822A7: cmp     [esi+110h], edi
0x5822AD: jz      short loc_5822C2
0x5822AF: mov     [esi+110h], edi
0x5822B5: mov     ecx, ds:0B333C4h
0x5822BB: push    1; float
0x5822BD: call    sub_670CA0
0x5822C2: cmp     byte ptr ds:0B3A6D0h, 0
0x5822C9: jz      short loc_5822EC
0x5822CB: mov     ecx, [esi+1Ch]
0x5822CE: push    offset aMenusMiscCurso; "Menus\\Misc\\cursor.dds"
0x5822D3: push    0FE6h
0x5822D8: call    Tile_SetString
0x5822DD: mov     ecx, [esi+1Ch]
0x5822E0: call    sub_58E870
0x5822E5: mov     byte ptr ds:0B3A6D0h, 0
0x5822EC: cmp     byte ptr ds:0B3A6D1h, 0
0x5822F3: jz      short loc_582301
0x5822F5: call    sub_5ACE20
0x5822FA: mov     byte ptr ds:0B3A6D1h, 0
0x582301: mov     ecx, ds:0B333C4h
0x582307: call    sub_6623A0
0x58230C: mov     ecx, ds:0B333C4h
0x582312: call    sub_662D10
0x582317: mov     al, [esi+8]
0x58231A: cmp     al, 2
0x58231C: jz      short loc_582326
0x58231E: cmp     al, 5
0x582320: jnz     loc_58372F
0x582326: mov     [esp+204h+a2.dwSequence], edi
0x58232A: mov     word ptr [esp+204h+var_1C4], di
0x58232F: mov     word ptr [esp+204h+var_1C4+2], di
0x582334: fld     dword ptr ds:0A379B4h
0x58233A: mov     edx, [esi+1Ch]
0x58233D: mov     eax, [edx+24h]
0x582340: and     word ptr [eax+18h], 0FFFEh
0x582346: mov     ecx, [esi+1Ch]; this
0x582349: push    ecx
0x58234A: fstp    [esp+208h+var_208.dwOfs]; a3
0x58234D: push    0FA1h; a2
0x582352: mov     [esp+20Ch+var_4], edi
0x582359: call    Tile_SetFloat
0x58235E: mov     ecx, esi
0x582360: call    sub_57E7C0
0x582365: cmp     byte ptr [esi+0B9h], 0
0x58236C: jnz     short loc_5823A5
0x58236E: mov     ecx, [esi+88h]
0x582374: cmp     ecx, edi
0x582376: jz      short loc_58239E
0x582378: call    sub_5893B0
0x58237D: test    al, al
0x58237F: jz      short loc_58239E
0x582381: mov     ecx, [esi+88h]
0x582387: push    0FC9h
0x58238C: call    Tile_GetFloat
0x582391: fcomp   dword ptr ds:0A379B4h
0x582397: fnstsw  ax
0x582399: test    ah, 44h
0x58239C: jnp     short loc_5823A5
0x58239E: mov     ecx, esi
0x5823A0: call    sub_57FD60
0x5823A5: push    1; a3
0x5823A7: push    edi; a2
0x5823A8: mov     ecx, ebx; this
0x5823AA: call    InputGlobals__QueryMouseKeyState
0x5823AF: push    2; a3
0x5823B1: push    edi; a2
0x5823B2: mov     ecx, ebx; this
0x5823B4: mov     [esp+20Ch+var_1B8], eax
0x5823B8: call    InputGlobals__QueryMouseKeyState
0x5823BD: push    edi; a3
0x5823BE: push    edi; a2
0x5823BF: mov     ecx, ebx; this
0x5823C1: mov     [esp+20Ch+var_1BC], eax
0x5823C5: call    InputGlobals__QueryMouseKeyState
0x5823CA: cmp     eax, edi
0x5823CC: mov     [esp+204h+var_1B0], eax
0x5823D0: jz      short loc_5823DD
0x5823D2: fld     dword ptr [esi+3Ch]
0x5823D5: fadd    dword ptr ds:0B33E9Ch
0x5823DB: jmp     short loc_5823DF
0x5823DD: fldz
0x5823DF: push    3; a2
0x5823E1: fstp    dword ptr [esi+3Ch]
0x5823E4: mov     ecx, ebx; this
0x5823E6: call    InputGlobals__GetMouseAxisMovement
0x5823EB: cmp     byte ptr [esi+0B9h], 0
0x5823F2: mov     dword ptr [esp+204h+ArgList], eax
0x5823F6: fild    dword ptr [esp+204h+ArgList]
0x5823FA: fstp    dword ptr [esi+38h]
0x5823FD: jz      loc_5833FC
0x582403: push    edi
0x582404: mov     ecx, esi
0x582406: call    sub_581390
0x58240B: mov     ebx, eax
0x58240D: cmp     ebx, edi
0x58240F: mov     dword ptr [esp+204h+ArgList], ebx
0x582413: mov     [esp+204h+a2.dwOfs], edi
0x582417: jz      short loc_582483
0x582419: mov     ecx, ebx
0x58241B: call    Tile_GetParentMenu
0x582420: mov     ecx, [esi+88h]; this
0x582426: cmp     ecx, edi
0x582428: mov     [esp+204h+a2.dwOfs], eax
0x58242C: jz      short loc_582483
0x58242E: fldz
0x582430: push    ecx
0x582431: fstp    [esp+208h+var_208.dwOfs]; a3
0x582434: push    0FDDh; a2
0x582439: call    Tile_SetFloat
0x58243E: mov     ecx, [esi+88h]
0x582444: call    Tile_GetParentMenu
0x582449: mov     ecx, [esi+88h]
0x58244F: mov     ebx, eax
0x582451: mov     eax, [esi+98h]
0x582457: mov     edi, [ebx]
0x582459: push    eax
0x58245A: push    0FA8h
0x58245F: add     edi, 14h
0x582462: call    Tile_GetFloat
0x582467: call    Double_To_SInt32
0x58246C: mov     edx, [edi]
0x58246E: push    eax
0x58246F: mov     ecx, ebx
0x582471: call    edx
0x582473: mov     ebx, [esp+20Ch+var_1E0]
0x582477: mov     dword ptr [esi+88h], 0
0x582481: xor     edi, edi
0x582483: mov     edx, [esi+98h]
0x582489: cmp     ebx, edx
0x58248B: jz      loc_58251B
0x582491: cmp     [esp+20Ch+var_1B8], edi
0x582495: jz      loc_58251B
0x58249B: mov     eax, [esi+0A4h]
0x5824A1: cmp     eax, edi
0x5824A3: jz      short loc_5824D4
0x5824A5: cmp     dword ptr [eax+24h], 1
0x5824A9: jnz     short loc_5824D4
0x5824AB: mov     ecx, [esi+0A0h]
0x5824B1: mov     edi, [eax]
0x5824B3: push    edx
0x5824B4: push    ecx
0x5824B5: push    0FA8h
0x5824BA: add     edi, 1Ch
0x5824BD: call    Tile_GetFloat
0x5824C2: call    Double_To_SInt32
0x5824C7: mov     ecx, [esi+0A4h]
0x5824CD: push    eax
0x5824CE: mov     eax, [edi]
0x5824D0: call    eax
0x5824D2: xor     edi, edi
0x5824D4: mov     eax, [esp+218h+var_1E8]
0x5824D8: cmp     eax, edi
0x5824DA: mov     [esi+0A0h], ebx
0x5824E0: mov     [esi+0A4h], eax
0x5824E6: jz      short loc_58251B
0x5824E8: cmp     dword ptr [eax+24h], 1
0x5824EC: jnz     short loc_58251B
0x5824EE: mov     edx, [esi+98h]
0x5824F4: push    edx; a3
0x5824F5: mov     ecx, eax
0x5824F7: mov     edi, [ecx]
0x5824F9: push    ebx; a3
0x5824FA: push    0FA8h
0x5824FF: mov     ecx, ebx
0x582501: add     edi, 18h
0x582504: call    Tile_GetFloat
0x582509: call    Double_To_SInt32
0x58250E: mov     ecx, [esi+0A4h]
0x582514: push    eax; a3
0x582515: mov     eax, [edi]
0x582517: call    eax
0x582519: xor     edi, edi
0x58251B: cmp     [esp+224h+var_1DC], edi
0x58251F: jz      loc_58264F
0x582525: cmp     [esi+9Ch], edi
0x58252B: jz      loc_58263F
0x582531: mov     eax, [esi+0A0h]
0x582537: test    eax, eax
0x582539: jz      short loc_582547
0x58253B: cmp     eax, [esi+98h]
0x582541: jnz     loc_58263F
0x582547: mov     ecx, [esi+98h]
0x58254D: push    0FA8h
0x582552: call    sub_588B50
0x582557: test    eax, eax
0x582559: jz      loc_58263F
0x58255F: mov     ecx, [esi+9Ch]
0x582565: cmp     dword ptr [ecx+24h], 1
0x582569: jnz     loc_58263F
0x58256F: mov     ecx, [esi+98h]
0x582575: push    0FE5h
0x58257A: call    Tile_GetFloat
0x58257F: fstp    [esp+224h+var_1F8]
0x582583: fldz
0x582585: fld     [esp+224h+var_1F8]
0x582589: fucom   st(1)
0x58258B: fnstsw  ax
0x58258D: fstp    st(1)
0x58258F: test    ah, 44h
0x582592: jnp     short loc_5825A4
0x582594: call    Double_To_SInt32
0x582599: push    eax; int
0x58259A: call    sub_57DE50
0x58259F: add     esp, 4
0x5825A2: jmp     short loc_5825A6
0x5825A4: fstp    st
0x5825A6: mov     ecx, [esi+98h]
0x5825AC: push    0FE2h
0x5825B1: call    Tile_GetFloat
0x5825B6: fadd    qword ptr ds:0A2F928h
0x5825BC: push    ecx
0x5825BD: mov     ecx, [esi+98h]; this
0x5825C3: fstp    [esp+228h+var_1F8]
0x5825C7: fld     [esp+228h+var_1F8]
0x5825CB: fstp    [esp+228h+a3]; a3
0x5825CE: push    0FE3h; a2
0x5825D3: call    Tile_SetFloat
0x5825D8: fld1
0x5825DA: mov     ecx, [esi+98h]; this
0x5825E0: push    ecx
0x5825E1: fstp    [esp+228h+a3]; a3
0x5825E4: push    0FE1h; a2
0x5825E9: call    Tile_SetFloat
0x5825EE: fldz
0x5825F0: mov     ecx, [esi+98h]; this
0x5825F6: push    ecx
0x5825F7: fstp    [esp+228h+a3]; a3
0x5825FA: push    0FE1h; a2
0x5825FF: call    Tile_SetFloat
0x582604: mov     ecx, [esi+98h]
0x58260A: mov     edx, [esi+9Ch]
0x582610: mov     edi, [edx]
0x582612: push    ecx
0x582613: push    0FA8h
0x582618: add     edi, 0Ch
0x58261B: call    Tile_GetFloat
0x582620: call    Double_To_SInt32
0x582625: mov     ecx, [esi+9Ch]
0x58262B: push    eax; a3
0x58262C: mov     eax, [edi]
0x58262E: call    eax
0x582630: cmp     dword ptr [esi+98h], 0
0x582637: jnz     short loc_58263F
0x582639: xor     ebx, ebx
0x58263B: mov     [esp+22Ch+var_208.dwSequence], ebx
0x58263F: xor     eax, eax
0x582641: mov     [esi+0A0h], eax
0x582647: mov     [esi+0A4h], eax
0x58264D: xor     edi, edi
0x58264F: mov     ecx, [esi+98h]; this
0x582655: cmp     ebx, ecx
0x582657: jz      loc_58274A
0x58265D: cmp     dword ptr [esp+22Ch+ArgList], edi
0x582661: jnz     loc_58274A
0x582667: mov     eax, [esi+9Ch]
0x58266D: cmp     eax, edi
0x58266F: jz      short loc_5826B5
0x582671: cmp     dword ptr [eax+24h], 1
0x582675: jnz     short loc_5826B5
0x582677: fldz
0x582679: push    ecx
0x58267A: fstp    [esp+230h+var_230]; a3
0x58267D: push    0FDDh; a2
0x582682: call    Tile_SetFloat
0x582687: mov     ecx, [esi+9Ch]
0x58268D: mov     edi, [ecx]
0x58268F: mov     ecx, [esi+98h]
0x582695: push    ecx
0x582696: push    0FA8h
0x58269B: add     edi, 14h
0x58269E: call    Tile_GetFloat
0x5826A3: call    Double_To_SInt32
0x5826A8: mov     ecx, [esi+9Ch]
0x5826AE: mov     edx, [edi]
0x5826B0: push    eax; a3
0x5826B1: call    edx
0x5826B3: xor     edi, edi
0x5826B5: mov     eax, [esp+234h+var_208.dwData]
0x5826B9: cmp     eax, edi
0x5826BB: jz      short loc_5826D1
0x5826BD: cmp     dword ptr [eax+24h], 1
0x5826C1: jnz     short loc_5826D1
0x5826C3: mov     [esi+98h], ebx
0x5826C9: mov     [esi+9Ch], eax
0x5826CF: jmp     short loc_5826DD
0x5826D1: mov     [esi+98h], edi
0x5826D7: mov     [esi+9Ch], edi
0x5826DD: mov     eax, [esi+9Ch]
0x5826E3: cmp     eax, edi
0x5826E5: jz      short loc_582737
0x5826E7: cmp     dword ptr [eax+24h], 1
0x5826EB: jnz     short loc_582737
0x5826ED: mov     ecx, [esi+98h]; this
0x5826F3: fld1
0x5826F5: push    ecx
0x5826F6: fstp    [esp+238h+var_238]; a3
0x5826F9: push    0FDDh; a2
0x5826FE: mov     [esi+88h], ecx
0x582704: call    Tile_SetFloat
0x582709: mov     ecx, [esi+98h]
0x58270F: mov     eax, [esi+9Ch]
0x582715: mov     edi, [eax]
0x582717: push    ecx
0x582718: push    0FA8h
0x58271D: add     edi, 10h
0x582720: call    Tile_GetFloat
0x582725: call    Double_To_SInt32
0x58272A: mov     ecx, [esi+9Ch]
0x582730: mov     edx, [edi]
0x582732: push    eax
0x582733: call    edx
0x582735: xor     edi, edi
0x582737: cmp     byte ptr [esi+0B9h], 0
0x58273E: jz      loc_5833FC
0x582744: mov     [esi+88h], edi
0x58274A: cmp     byte ptr [esi+0B9h], 0
0x582751: jz      loc_5833FC
0x582757: cmp     [esp+23Ch+var_1F0], edi
0x58275B: jz      loc_5833FC
0x582761: mov     ecx, [esi+98h]
0x582767: cmp     ecx, edi
0x582769: jz      short loc_5827A0
0x58276B: mov     eax, [esi+9Ch]
0x582771: cmp     eax, edi
0x582773: jz      short loc_5827A0
0x582775: cmp     dword ptr [eax+24h], 1
0x582779: jnz     short loc_5827A0
0x58277B: mov     edi, [eax]
0x58277D: push    ecx
0x58277E: push    0FA8h
0x582783: add     edi, 8
0x582786: call    Tile_GetFloat
0x58278B: call    Double_To_SInt32
0x582790: mov     ecx, [esi+9Ch]
0x582796: push    eax
0x582797: mov     eax, [edi]
0x582799: call    eax
0x58279B: jmp     loc_5833FA
0x5827A0: push    1
0x5827A2: call    GetGlobalScriptStateObj??
0x5827A7: add     esp, 4
0x5827AA: cmp     byte ptr [eax+31h], 0
0x5827AE: jle     loc_5833FC
0x5827B4: lea     ecx, [esp+23Ch+a2.dwSequence]
0x5827B8: mov     byte ptr [esp+23Ch+var_1F8+3], 1
0x5827BD: call    sub_959BC0
0x5827C2: mov     ecx, ds:0B333A0h
0x5827C8: mov     byte ptr [esp+23Ch+var_1B8+1], 1
0x5827D0: mov     eax, [ecx+0Ch]
0x5827D3: push    eax
0x5827D4: lea     ecx, [esp+240h+a2.dwSequence]
0x5827D8: mov     byte ptr [esp+240h+var_3C], 1
0x5827E0: call    sub_441920
0x5827E5: fld     dword ptr [esi+34h]
0x5827E8: mov     edx, ds:0B333CCh
0x5827EE: lea     eax, [esp+23Ch+var_198]
0x5827F5: push    eax
0x5827F6: lea     ecx, [esp+240h+var_18C]
0x5827FD: mov     [esp+240h+var_1C4], edi
0x582801: mov     ebx, [edx+0DCh]
0x582807: push    ecx
0x582808: call    Double_To_SInt32
0x58280D: fld     dword ptr [esi+2Ch]
0x582810: push    eax
0x582811: call    Double_To_SInt32
0x582816: push    eax
0x582817: mov     ecx, ebx
0x582819: call    sub_70D300
0x58281E: push    edi
0x58281F: lea     edx, [esp+240h+var_198]
0x582826: push    edx
0x582827: lea     eax, [esp+244h+var_18C]
0x58282E: push    eax
0x58282F: lea     ecx, [esp+248h+a2.dwSequence]
0x582836: call    sub_959D60
0x58283B: test    al, al
0x58283D: jz      loc_583399
0x582843: mov     ecx, [esp+23Ch+var_1AC]
0x58284A: mov     eax, [ecx]
0x58284C: test    eax, eax
0x58284E: jz      loc_583399
0x582854: mov     eax, [eax]
0x582856: push    eax
0x582857: call    sub_4DC270
0x58285C: add     esp, 4
0x58285F: xor     ebx, ebx
0x582861: mov     [esp+23Ch+var_208.dwData], 1
0x582869: mov     edi, eax
0x58286B: test    edi, edi
0x58286D: jnz     short loc_5828A1
0x58286F: movzx   edx, word ptr [esp+23Ch+var_1A8+2]
0x582877: cmp     [esp+23Ch+var_208.dwData], edx
0x58287B: jnb     short loc_5828A1
0x58287D: mov     eax, [esp+23Ch+var_1AC]
0x582884: mov     eax, [eax+ebx+4]
0x582888: add     [esp+23Ch+var_208.dwData], 1
0x58288D: add     ebx, 4
0x582890: test    eax, eax
0x582892: jz      short loc_5828A1
0x582894: mov     eax, [eax]
0x582896: push    eax
0x582897: call    sub_4DC270
0x58289C: add     esp, 4
0x58289F: jmp     short loc_582869
0x5828A1: mov     ebx, ds:0B02E1Ch
0x5828A7: mov     ecx, ds:0B12DB4h
0x5828AD: add     ecx, 0FFFFFFFFh
0x5828B0: add     ebx, 3Ch ; '<'
0x5828B3: mov     [esp+23Ch+var_208.dwOfs], ebx
0x5828B7: mov     [esp+23Ch+var_210], ecx
0x5828BB: call    FontManager_GetSingleton
0x5828C0: mov     edx, [esp+23Ch+var_210]
0x5828C4: mov     ecx, [eax+edx*4]
0x5828C7: call    sub_404FB0
0x5828CC: fadd    qword ptr ds:0A30E48h
0x5828D2: call    Double_To_SInt32
0x5828D7: test    edi, edi
0x5828D9: mov     [esp+23Ch+var_20C], eax
0x5828DD: jz      loc_58332A
0x5828E3: cmp     edi, [esi+0BCh]
0x5828E9: jz      loc_58332A
0x5828EF: mov     [esi+0BCh], edi
0x5828F5: mov     eax, [edi+0Ch]
0x5828F8: push    eax
0x5828F9: mov     ecx, edi; this
0x5828FB: call    TESObjectREFR_GetName
0x582900: push    eax; ArgList
0x582901: lea     eax, [esp+244h+var_208.dwTimeStamp]
0x582905: push    offset aS08x_0; "\"%s\" (%08x)"
0x58290A: push    eax; int
0x58290B: call    BSStringT_Static_Format
0x582910: fld     dword ptr ds:0A30634h
0x582916: mov     edx, [esp+24Ch+var_208.dwTimeStamp]
0x58291A: add     esp, 10h
0x58291D: push    0; int
0x58291F: push    ecx
0x582920: mov     ecx, ds:0B02E1Ch
0x582926: fstp    [esp+244h+var_244]; float
0x582929: push    0FFFFFFFFh; int
0x58292B: add     ecx, 14h
0x58292E: mov     [esp+248h+var_210], ecx
0x582932: fild    [esp+248h+var_210]
0x582936: push    2; int
0x582938: sub     esp, 8
0x58293B: fstp    dword ptr [esp+254h+var_254+4]; float
0x58293F: fld     dword ptr ds:0A4D6FCh
0x582945: fstp    dword ptr [esp+254h+var_254]; float
0x582948: push    edx; int
0x582949: push    1
0x58294B: call    sub_571F90
0x582950: add     esp, 4
0x582953: mov     ecx, eax
0x582955: call    sub_5723E0
0x58295A: cmp     byte ptr [esi+0A8h], 0
0x582961: jz      loc_583325
0x582967: mov     ecx, [esi+0BCh]
0x58296D: add     ecx, 44h ; 'D'
0x582970: call    ExtraDataList_GetExtraScript
0x582975: test    eax, eax
0x582977: jz      loc_582A00
0x58297D: mov     ecx, [esi+0BCh]
0x582983: add     ecx, 44h ; 'D'
0x582986: call    ExtraDataList_GetExtraScript
0x58298B: mov     ecx, [esi+0BCh]
0x582991: add     ecx, 44h ; 'D'
0x582994: mov     edi, eax
0x582996: call    ExtraDataList_GetExtraScript
0x58299B: mov     eax, [eax+0Ch]
0x58299E: push    eax
0x58299F: mov     eax, [edi]
0x5829A1: mov     edx, [eax+0D4h]
0x5829A7: mov     ecx, edi
0x5829A9: call    edx
0x5829AB: push    eax; ArgList
0x5829AC: lea     eax, [esp+244h+var_208.dwTimeStamp]
0x5829B0: push    offset aScriptNameS08x; "Script name '%s' (%08x)"
0x5829B5: push    eax; int
0x5829B6: call    BSStringT_Static_Format
0x5829BB: fld     dword ptr ds:0A30634h
0x5829C1: add     esp, 10h
0x5829C4: push    0; int
0x5829C6: push    ecx
0x5829C7: mov     ecx, [esp+244h+var_208.dwTimeStamp]
0x5829CB: fstp    [esp+244h+var_244]; float
0x5829CE: fild    [esp+244h+var_208.dwOfs]
0x5829D2: push    0FFFFFFFFh; int
0x5829D4: push    2; int
0x5829D6: sub     esp, 8
0x5829D9: fstp    dword ptr [esp+254h+var_254+4]; float
0x5829DD: fld     dword ptr ds:0A4D6FCh
0x5829E3: fstp    dword ptr [esp+254h+var_254]; float
0x5829E6: push    ecx; int
0x5829E7: push    1
0x5829E9: call    sub_571F90
0x5829EE: add     esp, 4
0x5829F1: mov     ecx, eax
0x5829F3: call    sub_5723E0
0x5829F8: add     ebx, [esp+23Ch+var_20C]
0x5829FC: mov     [esp+23Ch+var_208.dwOfs], ebx
0x582A00: mov     ecx, [esi+0BCh]; this
0x582A06: call    TESObjectREFR_GetOwner
0x582A0B: test    eax, eax
0x582A0D: jz      short loc_582A8C
0x582A0F: mov     ecx, [esi+0BCh]; this
0x582A15: call    TESObjectREFR_GetOwner
0x582A1A: mov     ecx, [esi+0BCh]; this
0x582A20: mov     edi, eax
0x582A22: call    TESObjectREFR_GetOwner
0x582A27: mov     eax, [eax+0Ch]
0x582A2A: mov     edx, [edi]
0x582A2C: push    eax
0x582A2D: mov     eax, [edx+0D4h]
0x582A33: mov     ecx, edi
0x582A35: call    eax
0x582A37: push    eax; ArgList
0x582A38: lea     ecx, [esp+244h+var_208.dwTimeStamp]
0x582A3C: push    offset aOwnerNameS08x; "Owner name '%s' (%08x)"
0x582A41: push    ecx; int
0x582A42: call    BSStringT_Static_Format
0x582A47: fld     dword ptr ds:0A30634h
0x582A4D: mov     edx, [esp+24Ch+var_208.dwTimeStamp]
0x582A51: add     esp, 10h
0x582A54: push    0; int
0x582A56: push    ecx
0x582A57: fstp    [esp+244h+var_244]; float
0x582A5A: push    0FFFFFFFFh; int
0x582A5C: fild    [esp+248h+var_208.dwOfs]
0x582A60: push    2; int
0x582A62: sub     esp, 8
0x582A65: fstp    dword ptr [esp+254h+var_254+4]; float
0x582A69: fld     dword ptr ds:0A4D6FCh
0x582A6F: fstp    dword ptr [esp+254h+var_254]; float
0x582A72: push    edx; int
0x582A73: push    1
0x582A75: call    sub_571F90
0x582A7A: add     esp, 4
0x582A7D: mov     ecx, eax
0x582A7F: call    sub_5723E0
0x582A84: add     ebx, [esp+23Ch+var_20C]
0x582A88: mov     [esp+23Ch+var_208.dwOfs], ebx
0x582A8C: mov     ecx, [esi+0BCh]
0x582A92: add     ecx, 44h ; 'D'
0x582A95: call    ExtraDataList_GetExtraCount
0x582A9A: cmp     ax, 1
0x582A9E: jz      short loc_582B06
0x582AA0: mov     ecx, [esi+0BCh]
0x582AA6: add     ecx, 44h ; 'D'
0x582AA9: call    ExtraDataList_GetExtraCount
0x582AAE: movsx   eax, ax
0x582AB1: push    eax; ArgList
0x582AB2: lea     ecx, [esp+240h+var_208.dwTimeStamp]
0x582AB6: push    offset aCountD; "Count %d"
0x582ABB: push    ecx; int
0x582ABC: call    BSStringT_Static_Format
0x582AC1: mov     edx, [esp+248h+var_208.dwTimeStamp]
0x582AC5: fld     dword ptr ds:0A30634h
0x582ACB: add     esp, 0Ch
0x582ACE: push    0; int
0x582AD0: push    ecx
0x582AD1: fstp    [esp+244h+var_244]; float
0x582AD4: push    0FFFFFFFFh; int
0x582AD6: fild    [esp+248h+var_208.dwOfs]
0x582ADA: push    2; int
0x582ADC: sub     esp, 8
0x582ADF: fstp    dword ptr [esp+254h+var_254+4]; float
0x582AE3: fld     dword ptr ds:0A4D6FCh
0x582AE9: fstp    dword ptr [esp+254h+var_254]; float
0x582AEC: push    edx; int
0x582AED: push    1
0x582AEF: call    sub_571F90
0x582AF4: add     esp, 4
0x582AF7: mov     ecx, eax
0x582AF9: call    sub_5723E0
0x582AFE: add     ebx, [esp+23Ch+var_20C]
0x582B02: mov     [esp+23Ch+var_208.dwOfs], ebx
0x582B06: mov     ecx, [esi+0BCh]
0x582B0C: mov     eax, [ecx]
0x582B0E: mov     edx, [eax+190h]
0x582B14: call    edx
0x582B16: test    al, al
0x582B18: jz      loc_582D33
0x582B1E: mov     eax, [esi+0BCh]
0x582B24: push    0; int
0x582B26: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x582B2B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x582B30: push    0; int
0x582B32: push    eax; void *
0x582B33: call    OblivionDynamicCast
0x582B38: mov     edi, eax
0x582B3A: mov     edx, [edi]
0x582B3C: mov     eax, [edx+388h]
0x582B42: add     esp, 14h
0x582B45: mov     ecx, edi
0x582B47: call    eax
0x582B49: test    eax, eax
0x582B4B: jz      loc_582BD4
0x582B51: mov     edx, [edi]
0x582B53: mov     eax, [edx+388h]
0x582B59: mov     ecx, edi
0x582B5B: call    eax
0x582B5D: mov     edx, [edi]
0x582B5F: mov     [esp+23Ch+var_210], eax
0x582B63: mov     eax, [edx+388h]
0x582B69: mov     ecx, edi
0x582B6B: call    eax
0x582B6D: mov     eax, [eax+0Ch]
0x582B70: mov     ecx, [esp+23Ch+var_210]
0x582B74: mov     edx, [ecx]
0x582B76: push    eax
0x582B77: mov     eax, [edx+0D4h]
0x582B7D: call    eax
0x582B7F: push    eax; ArgList
0x582B80: lea     ecx, [esp+244h+var_208.dwTimeStamp]
0x582B84: push    offset aRiderS08x; "Rider '%s' (%08x)"
0x582B89: push    ecx; int
0x582B8A: call    BSStringT_Static_Format
0x582B8F: fld     dword ptr ds:0A30634h
0x582B95: mov     edx, [esp+24Ch+var_208.dwTimeStamp]
0x582B99: add     esp, 10h
0x582B9C: push    0; int
0x582B9E: push    ecx
0x582B9F: fstp    [esp+244h+var_244]; float
0x582BA2: push    0FFFFFFFFh; int
0x582BA4: fild    [esp+248h+var_208.dwOfs]
0x582BA8: push    2; int
0x582BAA: sub     esp, 8
0x582BAD: fstp    dword ptr [esp+254h+var_254+4]; float
0x582BB1: fld     dword ptr ds:0A4D6FCh
0x582BB7: fstp    dword ptr [esp+254h+var_254]; float
0x582BBA: push    edx; int
0x582BBB: push    1
0x582BBD: call    sub_571F90
0x582BC2: add     esp, 4
0x582BC5: mov     ecx, eax
0x582BC7: call    sub_5723E0
0x582BCC: add     ebx, [esp+23Ch+var_20C]
0x582BD0: mov     [esp+23Ch+var_208.dwOfs], ebx
0x582BD4: mov     eax, [edi]
0x582BD6: mov     edx, [eax+380h]
0x582BDC: mov     ecx, edi
0x582BDE: call    edx
0x582BE0: test    eax, eax
0x582BE2: mov     ecx, edi
0x582BE4: jz      short loc_582C53
0x582BE6: mov     eax, [edi]
0x582BE8: mov     edx, [eax+380h]
0x582BEE: call    edx
0x582BF0: mov     [esp+23Ch+var_210], eax
0x582BF4: mov     eax, [edi]
0x582BF6: mov     edx, [eax+380h]
0x582BFC: mov     ecx, edi
0x582BFE: call    edx
0x582C00: mov     eax, [eax+0Ch]
0x582C03: mov     ecx, [esp+23Ch+var_210]
0x582C07: push    eax
0x582C08: mov     eax, [ecx]
0x582C0A: mov     edx, [eax+0D4h]
0x582C10: call    edx
0x582C12: push    eax; ArgList
0x582C13: lea     eax, [esp+244h+var_208.dwTimeStamp]
0x582C17: push    offset aHorseS08x; "Horse '%s' (%08x)"
0x582C1C: push    eax; int
0x582C1D: call    BSStringT_Static_Format
0x582C22: fld     dword ptr ds:0A30634h
0x582C28: add     esp, 10h
0x582C2B: push    0
0x582C2D: push    ecx
0x582C2E: mov     ecx, [esp+244h+var_208.dwTimeStamp]
0x582C32: fstp    [esp+244h+var_244]
0x582C35: fild    [esp+244h+var_208.dwOfs]
0x582C39: push    0FFFFFFFFh
0x582C3B: push    2
0x582C3D: sub     esp, 8
0x582C40: fstp    dword ptr [esp+254h+var_254+4]
0x582C44: fld     dword ptr ds:0A4D6FCh
0x582C4A: fstp    dword ptr [esp+254h+var_254]
0x582C4D: push    ecx
0x582C4E: jmp     loc_582D1A
0x582C53: mov     edx, [edi]
0x582C55: mov     eax, [edx+18Ch]
0x582C5B: call    eax
0x582C5D: test    eax, eax
0x582C5F: jz      loc_582D33
0x582C65: mov     ecx, [edi+58h]
0x582C68: mov     edx, [ecx]
0x582C6A: mov     eax, [edx+378h]
0x582C70: call    eax
0x582C72: test    eax, eax
0x582C74: jnz     short loc_582C98
0x582C76: mov     ecx, [edi+58h]
0x582C79: mov     edx, [ecx]
0x582C7B: mov     eax, [edx+37Ch]
0x582C81: call    eax
0x582C83: push    eax; ArgList
0x582C84: lea     ecx, [esp+240h+var_208.dwTimeStamp]
0x582C88: push    offset aFurnitureUnkno; "Furniture 'UNKNOWN' (UNKNOWN) index %d"
0x582C8D: push    ecx; int
0x582C8E: call    BSStringT_Static_Format
0x582C93: add     esp, 0Ch
0x582C96: jmp     short loc_582CF1
0x582C98: mov     edi, [edi+58h]
0x582C9B: mov     edx, [edi]
0x582C9D: mov     eax, [edx+378h]
0x582CA3: mov     ecx, edi
0x582CA5: call    eax
0x582CA7: mov     edx, [edi]
0x582CA9: mov     [esp+23Ch+var_1F4], eax
0x582CAD: mov     eax, [edx+378h]
0x582CB3: mov     ecx, edi
0x582CB5: call    eax
0x582CB7: mov     ecx, [eax+0Ch]
0x582CBA: mov     edx, [edi]
0x582CBC: mov     eax, [edx+37Ch]
0x582CC2: mov     [esp+23Ch+var_210], ecx
0x582CC6: mov     ecx, edi
0x582CC8: call    eax
0x582CCA: mov     ecx, [esp+23Ch+var_210]
0x582CCE: push    eax
0x582CCF: push    ecx
0x582CD0: mov     ecx, [esp+244h+var_1F4]
0x582CD4: mov     edx, [ecx]
0x582CD6: mov     eax, [edx+0D4h]
0x582CDC: call    eax
0x582CDE: push    eax; ArgList
0x582CDF: lea     ecx, [esp+248h+var_208.dwTimeStamp]
0x582CE3: push    offset aFurnitureS08xI; "Furniture '%s' (%08x) index %d"
0x582CE8: push    ecx; int
0x582CE9: call    BSStringT_Static_Format
0x582CEE: add     esp, 14h
0x582CF1: fld     dword ptr ds:0A30634h
0x582CF7: mov     edx, [esp+23Ch+var_208.dwTimeStamp]
0x582CFB: push    0; int
0x582CFD: push    ecx
0x582CFE: fstp    [esp+244h+var_244]; float
0x582D01: push    0FFFFFFFFh; int
0x582D03: fild    [esp+248h+var_208.dwOfs]
0x582D07: push    2; int
0x582D09: sub     esp, 8
0x582D0C: fstp    dword ptr [esp+254h+var_254+4]; float
0x582D10: fld     dword ptr ds:0A4D6FCh
0x582D16: fstp    dword ptr [esp+254h+var_254]; float
0x582D19: push    edx; int
0x582D1A: push    1
0x582D1C: call    sub_571F90
0x582D21: add     esp, 4
0x582D24: mov     ecx, eax
0x582D26: call    sub_5723E0
0x582D2B: add     ebx, [esp+23Ch+var_20C]
0x582D2F: mov     [esp+23Ch+var_208.dwOfs], ebx
0x582D33: mov     ecx, [esi+0BCh]
0x582D39: call    sub_4D74B0
0x582D3E: test    al, al
0x582D40: jz      loc_582F8D
0x582D46: mov     eax, [esi+0BCh]
0x582D4C: fld     dword ptr [eax+28h]
0x582D4F: fmul    qword ptr ds:0A30DC8h
0x582D55: call    Double_To_SInt32
0x582D5A: push    eax; ArgList
0x582D5B: lea     ecx, [esp+240h+var_208.dwTimeStamp]
0x582D5F: push    offset aOrentationDDeg; "Orentation %d deg"
0x582D64: push    ecx; int
0x582D65: call    BSStringT_Static_Format
0x582D6A: fld     dword ptr ds:0A30634h
0x582D70: mov     edx, [esp+248h+var_208.dwTimeStamp]
0x582D74: add     esp, 0Ch
0x582D77: xor     edi, edi
0x582D79: push    edi; int
0x582D7A: push    ecx
0x582D7B: fstp    [esp+244h+var_244]; float
0x582D7E: push    0FFFFFFFFh; int
0x582D80: fild    [esp+248h+var_208.dwOfs]
0x582D84: push    2; int
0x582D86: sub     esp, 8
0x582D89: fstp    dword ptr [esp+254h+var_254+4]; float
0x582D8D: fld     dword ptr ds:0A4D6FCh
0x582D93: fstp    dword ptr [esp+254h+var_254]; float
0x582D96: push    edx; int
0x582D97: push    1
0x582D99: call    sub_571F90
0x582D9E: add     esp, 4
0x582DA1: mov     ecx, eax
0x582DA3: call    sub_5723E0
0x582DA8: add     ebx, [esp+23Ch+var_20C]
0x582DAC: mov     ecx, [esi+0BCh]
0x582DB2: lea     eax, [esp+23Ch+var_1E4]
0x582DB6: push    eax
0x582DB7: push    edi
0x582DB8: mov     [esp+244h+var_208.dwOfs], ebx
0x582DBC: mov     word ptr [esp+244h+ArgList], di
0x582DC1: mov     [esp+244h+ArgList+2], 0FFh
0x582DC6: mov     [esp+244h+var_208.dwData], edi
0x582DCA: call    sub_4DB9D0
0x582DCF: test    al, al
0x582DD1: jz      loc_582F8D
0x582DD7: jmp     short loc_582DE0
0x582DD9: align 10h
0x582DE0: mov     ecx, [esi+0BCh]
0x582DE6: mov     edx, [ecx]
0x582DE8: mov     eax, [edx+170h]
0x582DEE: call    eax
0x582DF0: mov     ecx, [esp+23Ch+var_208.dwData]
0x582DF4: movzx   edi, [esp+23Ch+ArgList+2]
0x582DF9: push    ecx
0x582DFA: mov     ecx, eax
0x582DFC: mov     [esp+240h+var_1F4], eax
0x582E00: call    sub_4AE5B0
0x582E05: test    al, al
0x582E07: jz      loc_582EFC
0x582E0D: movzx   edx, [esp+23Ch+ArgList+2]
0x582E12: mov     ecx, ds:0B333C4h
0x582E18: mov     eax, [ecx]
0x582E1A: mov     [esp+23Ch+var_210], edx
0x582E1E: mov     edx, [eax+0ECh]
0x582E24: call    edx
0x582E26: mov     eax, [esp+23Ch+var_210]
0x582E2A: push    ecx
0x582E2B: lea     ecx, [esp+240h+a2]
0x582E2F: fstp    [esp+240h+var_240]; float
0x582E32: push    eax; int
0x582E33: push    ecx; int
0x582E34: mov     ecx, [esp+248h+var_1F4]
0x582E38: call    sub_4AEB40
0x582E3D: mov     edx, [esp+23Ch+var_208.dwData]
0x582E41: mov     ecx, [esi+0BCh]
0x582E47: push    edx
0x582E48: call    sub_4D72C0
0x582E4D: test    al, al
0x582E4F: mov     [esp+23Ch+var_1F0], offset aUsed; "USED"
0x582E57: jnz     short loc_582E61
0x582E59: mov     [esp+23Ch+var_1F0], offset aUnused; "UNUSED"
0x582E61: push    edi
0x582E62: call    sub_4AE5E0
0x582E67: add     esp, 4
0x582E6A: test    al, al
0x582E6C: mov     [esp+23Ch+var_210], offset off_A64100
0x582E74: jnz     short loc_582E7E
0x582E76: mov     [esp+23Ch+var_210], offset aSleep; "Sleep"
0x582E7E: mov     eax, [esp+23Ch+var_1F0]
0x582E82: mov     ecx, [esp+23Ch+var_1F4]
0x582E86: push    eax
0x582E87: push    edi
0x582E88: call    sub_4AEBE0
0x582E8D: fmul    qword ptr ds:0A30DC8h
0x582E93: call    Double_To_SInt32
0x582E98: fld     [esp+240h+a2.dwTimeStamp]
0x582E9C: mov     ecx, [esp+240h+var_210]
0x582EA0: push    eax
0x582EA1: sub     esp, 18h
0x582EA4: fstp    qword ptr [esp+10h]
0x582EA8: lea     edx, [esp+25Ch+var_208.dwTimeStamp]
0x582EAC: fld     [esp+25Ch+a2.dwData]
0x582EB3: fstp    [esp+25Ch+var_254]
0x582EB7: fld     [esp+25Ch+a2.dwOfs]
0x582EBE: fstp    qword ptr [esp+25Ch+duration]
0x582EC1: push    edi
0x582EC2: push    ecx; ArgList
0x582EC3: push    offset aSMarkerDDelta0; "%s Marker %d Delta %0.2f,%0.2f,%0.2f (%"...
0x582EC8: push    edx; int
0x582EC9: call    BSStringT_Static_Format
0x582ECE: fld     dword ptr ds:0A30634h
0x582ED4: mov     eax, [esp+26Ch+var_208.dwTimeStamp]
0x582ED8: add     esp, 30h
0x582EDB: push    0
0x582EDD: push    ecx
0x582EDE: fstp    [esp+244h+var_244]
0x582EE1: push    0FFFFFFFFh
0x582EE3: fild    [esp+248h+var_208.dwOfs]
0x582EE7: push    2
0x582EE9: sub     esp, 8
0x582EEC: fstp    dword ptr [esp+254h+var_254+4]
0x582EF0: fld     dword ptr ds:0A4D6FCh
0x582EF6: fstp    dword ptr [esp+254h+var_254]
0x582EF9: push    eax
0x582EFA: jmp     short loc_582F50
0x582EFC: push    edi
0x582EFD: call    sub_4AE5E0
0x582F02: add     esp, 4
0x582F05: test    al, al
0x582F07: mov     eax, offset off_A64100
0x582F0C: jnz     short loc_582F13
0x582F0E: mov     eax, offset aSleep; "Sleep"
0x582F13: push    edi
0x582F14: push    eax; ArgList
0x582F15: lea     ecx, [esp+244h+var_208.dwTimeStamp]
0x582F19: push    offset aDisabledSMarke; "Disabled %s Marker %d"
0x582F1E: push    ecx; int
0x582F1F: call    BSStringT_Static_Format
0x582F24: fld     dword ptr ds:0A30634h
0x582F2A: mov     edx, [esp+24Ch+var_208.dwTimeStamp]
0x582F2E: add     esp, 10h
0x582F31: push    0; int
0x582F33: push    ecx
0x582F34: fstp    [esp+244h+var_244]; float
0x582F37: push    0FFFFFFFFh; int
0x582F39: fild    [esp+248h+var_208.dwOfs]
0x582F3D: push    2; int
0x582F3F: sub     esp, 8
0x582F42: fstp    dword ptr [esp+254h+var_254+4]; float
0x582F46: fld     dword ptr ds:0A4D6FCh
0x582F4C: fstp    dword ptr [esp+254h+var_254]; float
0x582F4F: push    edx; int
0x582F50: push    1
0x582F52: call    sub_571F90
0x582F57: add     esp, 4
0x582F5A: mov     ecx, eax
0x582F5C: call    sub_5723E0
0x582F61: mov     eax, [esp+23Ch+var_208.dwData]
0x582F65: add     ebx, [esp+23Ch+var_20C]
0x582F69: lea     ecx, [esp+23Ch+var_1E4]
0x582F6D: add     eax, 1
0x582F70: push    ecx
0x582F71: mov     ecx, [esi+0BCh]
0x582F77: push    eax
0x582F78: mov     [esp+244h+var_208.dwOfs], ebx
0x582F7C: mov     [esp+244h+var_208.dwData], eax
0x582F80: call    sub_4DB9D0
0x582F85: test    al, al
0x582F87: jnz     loc_582DE0
0x582F8D: mov     ecx, [esi+0BCh]
0x582F93: call    sub_4D7740
0x582F98: test    eax, eax
0x582F9A: jz      loc_5830A0
0x582FA0: mov     ecx, [esi+0BCh]
0x582FA6: call    sub_4D7740
0x582FAB: mov     ecx, eax
0x582FAD: mov     [esp+23Ch+var_210], eax
0x582FB1: call    sub_428E70
0x582FB6: test    al, al
0x582FB8: mov     edi, offset aLocked_0; "Locked"
0x582FBD: jnz     short loc_582FC4
0x582FBF: mov     edi, offset aUnlocked; "Unlocked"
0x582FC4: mov     ecx, [esp+23Ch+var_210]
0x582FC8: call    sub_42ACD0
0x582FCD: mov     eax, ds:0B03E1Ch[eax*4]
0x582FD4: test    eax, eax
0x582FD6: jz      short loc_582FDC
0x582FD8: mov     eax, [eax]
0x582FDA: jmp     short loc_582FDE
0x582FDC: xor     eax, eax
0x582FDE: push    edi
0x582FDF: push    eax; ArgList
0x582FE0: lea     edx, [esp+244h+var_208.dwTimeStamp]
0x582FE4: push    offset aLockSS_; "Lock '%s' %s."
0x582FE9: push    edx; int
0x582FEA: call    BSStringT_Static_Format
0x582FEF: fld     dword ptr ds:0A30634h
0x582FF5: mov     eax, [esp+24Ch+var_208.dwTimeStamp]
0x582FF9: add     esp, 10h
0x582FFC: push    0; int
0x582FFE: push    ecx
0x582FFF: fstp    [esp+244h+var_244]; float
0x583002: push    0FFFFFFFFh; int
0x583004: fild    [esp+248h+var_208.dwOfs]
0x583008: push    2; int
0x58300A: sub     esp, 8
0x58300D: fstp    dword ptr [esp+254h+var_254+4]; float
0x583011: fld     dword ptr ds:0A4D6FCh
0x583017: fstp    dword ptr [esp+254h+var_254]; float
0x58301A: push    eax; int
0x58301B: push    1
0x58301D: call    sub_571F90
0x583022: add     esp, 4
0x583025: mov     ecx, eax
0x583027: call    sub_5723E0
0x58302C: mov     ecx, [esp+23Ch+var_210]
0x583030: mov     edi, [esp+23Ch+var_20C]
0x583034: mov     eax, [ecx+4]
0x583037: add     ebx, edi
0x583039: test    eax, eax
0x58303B: mov     [esp+23Ch+var_208.dwOfs], ebx
0x58303F: jz      short loc_5830A0
0x583041: mov     eax, [eax+28h]
0x583044: test    eax, eax
0x583046: jnz     short loc_58304D
0x583048: mov     eax, offset EmptyString
0x58304D: push    eax; ArgList
0x58304E: lea     edx, [esp+240h+var_208.dwTimeStamp]
0x583052: push    offset aKeyS_; "Key '%s'."
0x583057: push    edx; int
0x583058: call    BSStringT_Static_Format
0x58305D: fld     dword ptr ds:0A30634h
0x583063: mov     eax, [esp+248h+var_208.dwTimeStamp]
0x583067: add     esp, 0Ch
0x58306A: push    0; int
0x58306C: push    ecx
0x58306D: fstp    [esp+244h+var_244]; float
0x583070: push    0FFFFFFFFh; int
0x583072: fild    [esp+248h+var_208.dwOfs]
0x583076: push    2; int
0x583078: sub     esp, 8
0x58307B: fstp    dword ptr [esp+254h+var_254+4]; float
0x58307F: fld     dword ptr ds:0A4D6FCh
0x583085: fstp    dword ptr [esp+254h+var_254]; float
0x583088: push    eax; int
0x583089: push    1
0x58308B: call    sub_571F90
0x583090: add     esp, 4
0x583093: mov     ecx, eax
0x583095: call    sub_5723E0
0x58309A: add     ebx, edi
0x58309C: mov     [esp+23Ch+var_208.dwOfs], ebx
0x5830A0: mov     ecx, [esi+0BCh]; this
0x5830A6: call    GetTeleportExtraData
0x5830AB: test    eax, eax
0x5830AD: jz      loc_583191
0x5830B3: mov     ecx, [esi+0BCh]; this
0x5830B9: call    GetTeleportExtraData
0x5830BE: mov     edi, eax
0x5830C0: mov     ecx, edi
0x5830C2: call    sub_42B460
0x5830C7: mov     ecx, edi
0x5830C9: mov     [esp+23Ch+var_210], eax
0x5830CD: call    sub_42B410
0x5830D2: cmp     [esp+23Ch+var_210], 0
0x5830D7: mov     edi, offset aUnknown_2; "Unknown"
0x5830DC: mov     [esp+23Ch+var_208.dwData], eax
0x5830E0: mov     [esp+23Ch+var_1F4], edi
0x5830E4: jz      short loc_5830FA
0x5830E6: mov     ecx, [esp+23Ch+var_210]
0x5830EA: mov     eax, [ecx+1Ch]
0x5830ED: test    eax, eax
0x5830EF: jnz     short loc_5830F6
0x5830F1: mov     eax, offset EmptyString
0x5830F6: mov     edi, eax
0x5830F8: jmp     short loc_583116
0x5830FA: cmp     [esp+23Ch+var_208.dwData], 0
0x5830FF: jz      short loc_583137
0x583101: mov     ecx, [esp+23Ch+var_208.dwData]
0x583105: add     ecx, 44h ; 'D'
0x583108: call    sub_41FF80
0x58310D: test    eax, eax
0x58310F: jz      short loc_583116
0x583111: mov     edi, offset aPersistent_0; "Persistent"
0x583116: cmp     [esp+23Ch+var_208.dwData], 0
0x58311B: jz      short loc_583137
0x58311D: mov     ecx, [esp+23Ch+var_208.dwData]; this
0x583121: call    TESObjectREFR_GetName
0x583126: test    eax, eax
0x583128: jz      short loc_583137
0x58312A: mov     ecx, [esp+23Ch+var_208.dwData]; this
0x58312E: call    TESObjectREFR_GetName
0x583133: mov     [esp+23Ch+var_1F4], eax
0x583137: mov     ecx, [esp+23Ch+var_1F4]
0x58313B: push    ecx
0x58313C: push    edi; ArgList
0x58313D: lea     edx, [esp+244h+var_208.dwTimeStamp]
0x583141: push    offset aTeleportCellSD; "Teleport Cell '%s' Door '%s'."
0x583146: push    edx; int
0x583147: call    BSStringT_Static_Format
0x58314C: fld     dword ptr ds:0A30634h
0x583152: mov     eax, [esp+24Ch+var_208.dwTimeStamp]
0x583156: add     esp, 10h
0x583159: push    0; int
0x58315B: push    ecx
0x58315C: fstp    [esp+244h+var_244]; float
0x58315F: push    0FFFFFFFFh; int
0x583161: fild    [esp+248h+var_208.dwOfs]
0x583165: push    2; int
0x583167: sub     esp, 8
0x58316A: fstp    dword ptr [esp+254h+var_254+4]; float
0x58316E: fld     dword ptr ds:0A4D6FCh
0x583174: fstp    dword ptr [esp+254h+var_254]; float
0x583177: push    eax; int
0x583178: push    1
0x58317A: call    sub_571F90
0x58317F: add     esp, 4
0x583182: mov     ecx, eax
0x583184: call    sub_5723E0
0x583189: add     ebx, [esp+23Ch+var_20C]
0x58318D: mov     [esp+23Ch+var_208.dwOfs], ebx
0x583191: mov     ecx, [esi+0BCh]
0x583197: call    sub_4D8250
0x58319C: test    eax, eax
0x58319E: jz      loc_583325
0x5831A4: test    al, 1
0x5831A6: mov     ecx, ds:0A69248h
0x5831AC: mov     edx, ds:0A6924Ch
0x5831B2: mov     dword ptr [esp+23Ch+var_180], ecx
0x5831B9: mov     ecx, ds:0A69250h
0x5831BF: mov     dword ptr [esp+23Ch+var_180+4], edx
0x5831C6: mov     dx, ds:0A69254h
0x5831CD: mov     dword ptr [esp+23Ch+var_180+8], ecx
0x5831D4: mov     cl, ds:0A69256h
0x5831DA: mov     [esp+23Ch+var_174], dx
0x5831E2: mov     [esp+23Ch+var_172], cl
0x5831E9: jz      short loc_583219
0x5831EB: lea     ecx, [esp+23Ch+var_180]
0x5831F2: add     ecx, 0FFFFFFFFh
0x5831F5: mov     dl, [ecx+1]
0x5831F8: add     ecx, 1
0x5831FB: test    dl, dl
0x5831FD: jnz     short loc_5831F5
0x5831FF: mov     edx, ds:0A6923Ch
0x583205: mov     [ecx], edx
0x583207: mov     edx, ds:0A69240h
0x58320D: mov     [ecx+4], edx
0x583210: mov     edx, ds:0A69244h
0x583216: mov     [ecx+8], edx
0x583219: test    al, 2
0x58321B: jz      short loc_583256
0x58321D: lea     ecx, [esp+23Ch+var_180]
0x583224: add     ecx, 0FFFFFFFFh
0x583227: mov     dl, [ecx+1]
0x58322A: add     ecx, 1
0x58322D: test    dl, dl
0x58322F: jnz     short loc_583227
0x583231: mov     edx, ds:0A69230h
0x583237: mov     [ecx], edx
0x583239: mov     edx, ds:0A69234h
0x58323F: mov     [ecx+4], edx
0x583242: mov     dx, ds:0A69238h
0x583249: mov     [ecx+8], dx
0x58324D: mov     dl, ds:0A6923Ah
0x583253: mov     [ecx+0Ah], dl
0x583256: test    al, 4
0x583258: jz      short loc_583288
0x58325A: lea     ecx, [esp+23Ch+var_180]
0x583261: add     ecx, 0FFFFFFFFh
0x583264: mov     dl, [ecx+1]
0x583267: add     ecx, 1
0x58326A: test    dl, dl
0x58326C: jnz     short loc_583264
0x58326E: mov     edx, ds:0A69224h
0x583274: mov     [ecx], edx
0x583276: mov     edx, ds:0A69228h
0x58327C: mov     [ecx+4], edx
0x58327F: mov     edx, ds:0A6922Ch
0x583285: mov     [ecx+8], edx
0x583288: test    al, 8
0x58328A: jz      short loc_5832CE
0x58328C: lea     eax, [esp+23Ch+var_180]
0x583293: add     eax, 0FFFFFFFFh
0x583296: mov     cl, [eax+1]
0x583299: add     eax, 1
0x58329C: test    cl, cl
0x58329E: jnz     short loc_583296
0x5832A0: mov     ecx, ds:0A69210h
0x5832A6: mov     edx, ds:0A69214h
0x5832AC: mov     [eax], ecx
0x5832AE: mov     ecx, ds:0A69218h
0x5832B4: mov     [eax+4], edx
0x5832B7: mov     edx, ds:0A6921Ch
0x5832BD: mov     [eax+8], ecx
0x5832C0: mov     cx, ds:0A69220h
0x5832C7: mov     [eax+0Ch], edx
0x5832CA: mov     [eax+10h], cx
0x5832CE: lea     edx, [esp+23Ch+var_180]
0x5832D5: push    edx; Format
0x5832D6: lea     eax, [esp+240h+var_208.dwTimeStamp]
0x5832DA: push    eax; int
0x5832DB: call    BSStringT_Static_Format
0x5832E0: fld     dword ptr ds:0A30634h
0x5832E6: add     esp, 8
0x5832E9: push    0; int
0x5832EB: push    ecx
0x5832EC: mov     ecx, [esp+244h+var_208.dwTimeStamp]
0x5832F0: fstp    [esp+244h+var_244]; float
0x5832F3: fild    [esp+244h+var_208.dwOfs]
0x5832F7: push    0FFFFFFFFh; int
0x5832F9: push    2; int
0x5832FB: sub     esp, 8
0x5832FE: fstp    dword ptr [esp+254h+var_254+4]; float
0x583302: fld     dword ptr ds:0A4D6FCh
0x583308: fstp    dword ptr [esp+254h+var_254]; float
0x58330B: push    ecx; int
0x58330C: push    1
0x58330E: call    sub_571F90
0x583313: add     esp, 4
0x583316: mov     ecx, eax
0x583318: call    sub_5723E0
0x58331D: add     ebx, [esp+23Ch+var_20C]
0x583321: mov     [esp+23Ch+var_208.dwOfs], ebx
0x583325: mov     byte ptr [esp+23Ch+var_1F8+3], 0
0x58332A: cmp     ebx, ds:0B3A6F8h
0x583330: mov     [esp+23Ch+var_210], ebx
0x583334: jge     short loc_583388
0x583336: mov     edi, [esp+23Ch+var_20C]
0x58333A: lea     ebx, [ebx+0]
0x583340: fld     dword ptr ds:0A30634h
0x583346: push    0; int
0x583348: push    ecx
0x583349: fstp    [esp+244h+var_244]; float
0x58334C: push    0FFFFFFFFh; int
0x58334E: fild    [esp+248h+var_208.dwOfs]
0x583352: push    2; int
0x583354: sub     esp, 8
0x583357: fstp    dword ptr [esp+254h+var_254+4]; float
0x58335B: fld     dword ptr ds:0A4D6FCh
0x583361: fstp    dword ptr [esp+254h+var_254]; float
0x583364: push    offset EmptyString; int
0x583369: push    1
0x58336B: call    sub_571F90
0x583370: add     esp, 4
0x583373: mov     ecx, eax
0x583375: call    sub_5723E0
0x58337A: add     ebx, edi
0x58337C: cmp     ebx, ds:0B3A6F8h
0x583382: mov     [esp+23Ch+var_208.dwOfs], ebx
0x583386: jl      short loc_583340
0x583388: cmp     byte ptr [esp+23Ch+var_1F8+3], 0
0x58338D: mov     edx, [esp+23Ch+var_210]
0x583391: mov     ds:0B3A6F8h, edx
0x583397: jz      short loc_5833E9
0x583399: fld     dword ptr ds:0A30634h
0x58339F: push    0; int
0x5833A1: push    ecx
0x5833A2: fstp    [esp+244h+var_244]; float
0x5833A5: mov     dword ptr [esi+0BCh], 0
0x5833AF: mov     eax, ds:0B02E1Ch
0x5833B4: push    0FFFFFFFFh; int
0x5833B6: add     eax, 14h
0x5833B9: mov     [esp+248h+var_210], eax
0x5833BD: fild    [esp+248h+var_210]
0x5833C1: push    2; int
0x5833C3: sub     esp, 8
0x5833C6: fstp    dword ptr [esp+254h+var_254+4]; float
0x5833CA: fld     dword ptr ds:0A4D6FCh
0x5833D0: fstp    dword ptr [esp+254h+var_254]; float
0x5833D3: push    offset EmptyString; int
0x5833D8: push    1
0x5833DA: call    sub_571F90
0x5833DF: add     esp, 4
0x5833E2: mov     ecx, eax
0x5833E4: call    sub_5723E0
0x5833E9: lea     ecx, [esp+23Ch+a2.dwSequence]
0x5833ED: mov     byte ptr [esp+23Ch+var_3C], 0
0x5833F5: call    sub_959EC0
0x5833FA: xor     edi, edi
0x5833FC: cmp     [esp+244h+var_1F0], edi
0x583400: jz      short loc_58346A
0x583402: mov     eax, [esi+9Ch]
0x583408: cmp     eax, edi
0x58340A: jz      short loc_583434
0x58340C: mov     ecx, [esi+98h]
0x583412: mov     edi, [eax]
0x583414: push    ecx
0x583415: push    0FA8h
0x58341A: add     edi, 20h ; ' '
0x58341D: call    Tile_GetFloat
0x583422: call    Double_To_SInt32
0x583427: mov     ecx, [esi+9Ch]
0x58342D: mov     edx, [edi]
0x58342F: push    eax
0x583430: call    edx
0x583432: xor     edi, edi
0x583434: mov     eax, [esi+0A4h]
0x58343A: cmp     eax, edi
0x58343C: jz      short loc_5834A8
0x58343E: mov     ecx, [esi+98h]
0x583444: cmp     ecx, edi
0x583446: jz      short loc_5834A8
0x583448: mov     edi, [eax]
0x58344A: push    ecx
0x58344B: push    0FA8h
0x583450: add     edi, 24h ; '$'
0x583453: call    Tile_GetFloat
0x583458: call    Double_To_SInt32
0x58345D: mov     ecx, [esi+0A4h]
0x583463: push    eax
0x583464: mov     eax, [edi]
0x583466: call    eax
0x583468: jmp     short loc_5834A6
0x58346A: fldz
0x58346C: fcomp   dword ptr [esi+38h]
0x58346F: fnstsw  ax
0x583471: test    ah, 44h
0x583474: jnp     short loc_5834A8
0x583476: mov     eax, [esi+9Ch]
0x58347C: cmp     eax, edi
0x58347E: jz      short loc_5834A8
0x583480: mov     ecx, [esi+98h]
0x583486: mov     edi, [eax]
0x583488: push    ecx
0x583489: push    0FA8h
0x58348E: add     edi, 28h ; '('
0x583491: call    Tile_GetFloat
0x583496: call    Double_To_SInt32
0x58349B: mov     ecx, [esi+9Ch]
0x5834A1: mov     edx, [edi]
0x5834A3: push    eax
0x5834A4: call    edx
0x5834A6: xor     edi, edi
0x5834A8: mov     eax, ds:0B33398h
0x5834AD: lea     edx, [esp+254h+var_224]
0x5834B1: mov     [esp+254h+var_224.dwOfs], edi
0x5834B5: mov     ecx, [eax+20h]; this
0x5834B8: push    edx; a2
0x5834B9: call    OSInputGlobals__GetBufferedKeyStateChange
0x5834BE: cmp     eax, 2
0x5834C1: jnz     short loc_5834FF
0x5834C3: mov     ecx, ds:0B33EA0h
0x5834C9: mov     edx, [esp+254h+var_224.dwOfs]
0x5834CD: push    edx
0x5834CE: mov     [esi+120h], ecx
0x5834D4: push    eax
0x5834D5: mov     ecx, esi
0x5834D7: mov     [esi+124h], edi
0x5834DD: mov     [esi+11Ch], edi
0x5834E3: call    sub_57F7A0
0x5834E8: mov     eax, ds:0B33398h
0x5834ED: mov     ecx, [eax+20h]; this
0x5834F0: lea     edx, [esp+254h+var_224]
0x5834F4: push    edx; a2
0x5834F5: call    OSInputGlobals__GetBufferedKeyStateChange
0x5834FA: cmp     eax, 2
0x5834FD: jz      short loc_5834C3
0x5834FF: mov     ecx, [esp+254h+var_224.dwOfs]
0x583503: push    ecx
0x583504: push    eax
0x583505: mov     ecx, esi
0x583507: call    sub_57F7A0
0x58350C: mov     edi, eax
0x58350E: test    edi, edi
0x583510: jnz     short loc_583521
0x583512: fld1
0x583514: push    ecx
0x583515: mov     ecx, esi
0x583517: fstp    [esp+258h+duration+4]
0x58351A: call    sub_57DC60
0x58351F: mov     edi, eax
0x583521: push    0
0x583523: call    GetGlobalScriptStateObj??
0x583528: add     esp, 4
0x58352B: test    edi, edi
0x58352D: mov     [esp+254h+a3], eax
0x583531: jz      def_58360C; jumptable 0058360C default case, cases -2147483643--2147483641
0x583537: test    eax, eax
0x583539: jz      loc_5835D0
0x58353F: nop
0x583540: cmp     [esp+254h+var_224.dwOfs], 29h ; ')'
0x583545: jnz     short loc_58354B
0x583547: xor     bl, bl
0x583549: jmp     short loc_5835C0
0x58354B: mov     ecx, [esp+254h+a3]
0x58354F: push    edi
0x583550: call    sub_586000
0x583555: mov     bl, al
0x583557: test    bl, bl
0x583559: jz      short loc_5835C0
0x58355B: mov     edx, ds:0B33398h
0x583561: mov     ecx, [edx+20h]; this
0x583564: lea     eax, [esp+254h+var_224]
0x583568: push    eax; a2
0x583569: call    OSInputGlobals__GetBufferedKeyStateChange
0x58356E: cmp     eax, 2
0x583571: jnz     short loc_5835B1
0x583573: xor     edi, edi
0x583575: mov     ecx, ds:0B33EA0h
0x58357B: mov     edx, [esp+254h+var_224.dwOfs]
0x58357F: push    edx
0x583580: mov     [esi+120h], ecx
0x583586: push    eax
0x583587: mov     ecx, esi
0x583589: mov     [esi+124h], edi
0x58358F: mov     [esi+11Ch], edi
0x583595: call    sub_57F7A0
0x58359A: mov     eax, ds:0B33398h
0x58359F: mov     ecx, [eax+20h]; this
0x5835A2: lea     edx, [esp+254h+var_224]
0x5835A6: push    edx; a2
0x5835A7: call    OSInputGlobals__GetBufferedKeyStateChange
0x5835AC: cmp     eax, 2
0x5835AF: jz      short loc_583575
0x5835B1: mov     ecx, [esp+254h+var_224.dwOfs]
0x5835B5: push    ecx
0x5835B6: push    eax
0x5835B7: mov     ecx, esi
0x5835B9: call    sub_57F7A0
0x5835BE: mov     edi, eax
0x5835C0: test    edi, edi
0x5835C2: jz      def_58360C; jumptable 0058360C default case, cases -2147483643--2147483641
0x5835C8: test    bl, bl
0x5835CA: jnz     loc_583540
0x5835D0: mov     ecx, esi
0x5835D2: call    InterfaceManager__GetTopVisibleMenuID
0x5835D7: push    eax
0x5835D8: call    Menu_GetOpenMenuTile
0x5835DD: add     esp, 4
0x5835E0: mov     ecx, eax
0x5835E2: call    Tile_GetParentMenu
0x5835E7: test    eax, eax
0x5835E9: jz      short loc_5835FD
0x5835EB: mov     edx, [eax]
0x5835ED: mov     ecx, eax
0x5835EF: mov     eax, [edx+30h]
0x5835F2: push    edi
0x5835F3: call    eax
0x5835F5: test    al, al
0x5835F7: jnz     def_58360C; jumptable 0058360C default case, cases -2147483643--2147483641
0x5835FD: add     edi, 7FFFFFFFh; switch 8 cases
0x583603: cmp     edi, 7
0x583606: ja      def_58360C; jumptable 0058360C default case, cases -2147483643--2147483641
0x58360C: jmp     ds:jpt_58360C[edi*4]; switch jump
0x583613: mov     eax, 1; jumptable 0058360C case -2147483645
0x583618: jmp     short loc_583677
0x58361A: mov     eax, 2; jumptable 0058360C case -2147483644
0x58361F: jmp     short loc_583677
0x583621: mov     eax, 4; jumptable 0058360C case -2147483647
0x583626: jmp     short loc_583644
0x583628: mov     eax, 3; jumptable 0058360C case -2147483646
0x58362D: jmp     short loc_58365E
0x58362F: mov     al, [esi+0B9h]; jumptable 0058360C case -2147483640
0x583635: neg     al
0x583637: sbb     eax, eax
0x583639: and     eax, 2
0x58363C: add     eax, 0FFFFFFFEh
0x58363F: cmp     eax, 4
0x583642: jnz     short loc_583659
0x583644: mov     ecx, [esi+118h]
0x58364A: shr     ecx, 2
0x58364D: test    cl, 1
0x583650: jz      short loc_583677
0x583652: mov     eax, 0Dh
0x583657: jmp     short loc_583677
0x583659: cmp     eax, 3
0x58365C: jnz     short loc_583673
0x58365E: mov     edx, [esi+118h]
0x583664: shr     edx, 2
0x583667: test    dl, 1
0x58366A: jz      short loc_583677
0x58366C: mov     eax, 0Eh
0x583671: jmp     short loc_583677
0x583673: test    eax, eax
0x583675: jz      short def_58360C; jumptable 0058360C default case, cases -2147483643--2147483641
0x583677: push    eax
0x583678: mov     ecx, esi
0x58367A: call    InterfaceManager__HandleNavigationKeypress
0x58367F: mov     edi, [esp+258h+var_208.dwOfs]
0x583683: mov     ecx, edi; this
0x583685: call    InputGlobals__FlushKeyboardBuffer
0x58368A: jmp     short loc_583690
0x58368C: mov     edi, [esp+258h+var_208.dwOfs]; jumptable 0058360C default case, cases -2147483643--2147483641
0x583690: push    1; a3
0x583692: push    1Ah; a2
0x583694: mov     ecx, edi; this
0x583696: call    InputGlobals__QueryControlState
0x58369B: test    eax, eax
0x58369D: mov     ebx, 2Bh ; '+'
0x5836A2: jz      short loc_5836D4
0x5836A4: cmp     ds:0B1397Ah, bx
0x5836AB: jbe     short loc_5836BB
0x5836AD: mov     eax, ds:0B13974h
0x5836B2: cmp     dword ptr [eax+0ACh], 0
0x5836B9: jnz     short loc_5836D4
0x5836BB: fld1
0x5836BD: push    ecx
0x5836BE: mov     ecx, ds:0B387A0h
0x5836C4: fstp    [esp+25Ch+duration]; duration
0x5836C7: push    1; unk2
0x5836C9: push    0; unk1
0x5836CB: push    ecx; string
0x5836CC: call    GameUI_QueueMessage
0x5836D1: add     esp, 10h
0x5836D4: push    1; a3
0x5836D6: push    1Bh; a2
0x5836D8: mov     ecx, edi; this
0x5836DA: call    InputGlobals__QueryControlState
0x5836DF: test    eax, eax
0x5836E1: jz      short loc_583713
0x5836E3: cmp     ds:0B1397Ah, bx
0x5836EA: jbe     short loc_5836FB
0x5836EC: mov     edx, ds:0B13974h
0x5836F2: cmp     dword ptr [edx+0ACh], 0
0x5836F9: jnz     short loc_583713
0x5836FB: fld1
0x5836FD: mov     eax, ds:0B387A8h
0x583702: push    ecx
0x583703: fstp    [esp+25Ch+duration]; duration
0x583706: push    1; unk2
0x583708: push    0; unk1
0x58370A: push    eax; string
0x58370B: call    GameUI_QueueMessage
0x583710: add     esp, 10h
0x583713: mov     ecx, [esp+258h+var_224.dwTimeStamp]
0x583717: push    ecx
0x583718: mov     [esp+25Ch+var_58], 0FFFFFFFFh
0x583723: call    FormHeapFree
0x583728: mov     ebx, [esp+25Ch+var_208.dwOfs]
0x58372C: add     esp, 4
0x58372F: push    1; a3
0x583731: push    1Eh; a2
0x583733: mov     ecx, ebx; this
0x583735: call    InputGlobals__QueryControlState
0x58373A: test    eax, eax
0x58373C: jz      short loc_58377C
0x58373E: call    GetOpenedMenuCode
0x583743: cmp     eax, 414h
0x583748: jz      short loc_58377C
0x58374A: push    1
0x58374C: call    GetGlobalScriptStateObj??
0x583751: add     esp, 4
0x583754: mov     ecx, ebx; this
0x583756: mov     edi, eax
0x583758: call    InputGlobals__FlushKeyboardBuffer
0x58375D: mov     ecx, edi
0x58375F: call    sub_5859C0
0x583764: test    al, al
0x583766: mov     ecx, esi
0x583768: jz      short loc_583773
0x58376A: push    3
0x58376C: call    sub_57D640
0x583771: jmp     short loc_58377C
0x583773: push    0
0x583775: push    3
0x583777: call    sub_57CFE0
0x58377C: push    1; a3
0x58377E: push    1Dh; a2
0x583780: mov     ecx, ebx; this
0x583782: call    InputGlobals__QueryControlState
0x583787: test    eax, eax
0x583789: jz      loc_58383E
0x58378F: push    414h
0x583794: push    1
0x583796: call    Menu_GetB3A708
0x58379B: add     esp, 4
0x58379E: mov     ecx, eax
0x5837A0: call    sub_5878B0
0x5837A5: test    al, al
0x5837A7: jnz     loc_58383E
0x5837AD: push    3EFh
0x5837B2: push    1
0x5837B4: call    Menu_GetB3A708
0x5837B9: add     esp, 4
0x5837BC: mov     ecx, eax
0x5837BE: call    sub_5878B0
0x5837C3: test    al, al
0x5837C5: jnz     short loc_58383E
0x5837C7: push    40Fh
0x5837CC: push    1
0x5837CE: call    Menu_GetB3A708
0x5837D3: add     esp, 4
0x5837D6: mov     ecx, eax
0x5837D8: call    sub_5878B0
0x5837DD: test    al, al
0x5837DF: jnz     loc_583889
0x5837E5: push    40Eh
0x5837EA: push    1
0x5837EC: call    Menu_GetB3A708
0x5837F1: add     esp, 4
0x5837F4: mov     ecx, eax
0x5837F6: call    sub_5878B0
0x5837FB: test    al, al
0x5837FD: jnz     loc_583889
0x583803: push    3F5h
0x583808: push    1
0x58380A: call    Menu_GetB3A708
0x58380F: add     esp, 4
0x583812: mov     ecx, eax
0x583814: call    sub_5878B0
0x583819: test    al, al
0x58381B: jz      short loc_583827
0x58381D: call    sub_5BDCD0
0x583822: jmp     loc_58392B
0x583827: cmp     byte ptr ds:0B143AEh, 0
0x58382E: jz      loc_58392B
0x583834: call    sub_57B560
0x583839: jmp     loc_58392B
0x58383E: push    1; a3
0x583840: push    1Dh; a2
0x583842: mov     ecx, ebx; this
0x583844: call    InputGlobals__QueryControlState
0x583849: test    eax, eax
0x58384B: jz      loc_58392B
0x583851: push    40Fh
0x583856: push    1
0x583858: call    Menu_GetB3A708
0x58385D: add     esp, 4
0x583860: mov     ecx, eax
0x583862: call    sub_5878B0
0x583867: test    al, al
0x583869: jnz     short loc_583889
0x58386B: push    40Eh
0x583870: push    1
0x583872: call    Menu_GetB3A708
0x583877: add     esp, 4
0x58387A: mov     ecx, eax
0x58387C: call    sub_5878B0
0x583881: test    al, al
0x583883: jz      loc_58392B
0x583889: push    40Fh
0x58388E: push    1
0x583890: call    Menu_GetB3A708
0x583895: add     esp, 4
0x583898: mov     ecx, eax
0x58389A: call    sub_5878B0
0x58389F: test    al, al
0x5838A1: jz      short loc_5838CF
0x5838A3: push    40Fh
0x5838A8: call    Menu_GetOpenMenuTile
0x5838AD: add     esp, 4
0x5838B0: mov     ecx, eax
0x5838B2: call    Tile_GetParentMenu
0x5838B7: mov     edi, eax
0x5838B9: test    edi, edi
0x5838BB: jz      short loc_58392B
0x5838BD: mov     edx, [edi]
0x5838BF: mov     eax, [edx+34h]
0x5838C2: mov     ecx, edi
0x5838C4: call    eax
0x5838C6: cmp     eax, 40Fh
0x5838CB: jnz     short loc_58392B
0x5838CD: jmp     short loc_58391E
0x5838CF: push    40Eh
0x5838D4: push    1
0x5838D6: call    Menu_GetB3A708
0x5838DB: add     esp, 4
0x5838DE: mov     ecx, eax
0x5838E0: call    sub_5878B0
0x5838E5: test    al, al
0x5838E7: jz      short loc_58392B
0x5838E9: push    40Eh
0x5838EE: call    Menu_GetOpenMenuTile
0x5838F3: add     esp, 4
0x5838F6: mov     ecx, eax
0x5838F8: call    Tile_GetParentMenu
0x5838FD: mov     edi, eax
0x5838FF: test    edi, edi
0x583901: jz      short loc_58392B
0x583903: mov     edx, [edi]
0x583905: mov     eax, [edx+34h]
0x583908: mov     ecx, edi
0x58390A: call    eax
0x58390C: cmp     eax, 40Eh
0x583911: jnz     short loc_58392B
0x583913: mov     ecx, edi
0x583915: call    sub_57D3F0
0x58391A: test    al, al
0x58391C: jz      short loc_58392B
0x58391E: mov     edx, [edi]
0x583920: mov     eax, [edx+0Ch]
0x583923: push    0
0x583925: push    1
0x583927: mov     ecx, edi
0x583929: call    eax
0x58392B: push    3EAh
0x583930: call    Menu_GetOpenMenuTile
0x583935: push    3FEh
0x58393A: mov     edi, eax
0x58393C: call    Menu_GetOpenMenuTile
0x583941: add     esp, 8
0x583944: test    edi, edi
0x583946: mov     ebx, eax
0x583948: jz      short loc_583963
0x58394A: push    0FA1h
0x58394F: mov     ecx, edi
0x583951: call    Tile_GetFloat
0x583956: fcomp   dword ptr ds:0A2F948h
0x58395C: fnstsw  ax
0x58395E: test    ah, 44h
0x583961: jp      short loc_583975
0x583963: test    ebx, ebx
0x583965: jz      short loc_583975
0x583967: push    0FA1h
0x58396C: mov     ecx, ebx
0x58396E: call    Tile_GetFloat
0x583973: fstp    st
0x583975: call    sub_572170
0x58397A: mov     ecx, [esi+68h]
0x58397D: mov     edi, [ecx+34h]
0x583980: test    edi, edi
0x583982: jz      short loc_5839A6
0x583984: mov     ecx, [edi+8]
0x583987: test    ecx, ecx
0x583989: lea     eax, [edi+8]
0x58398C: mov     edi, [edi]
0x58398E: jz      short loc_5839A2
0x583990: call    Tile_GetParentMenu
0x583995: test    eax, eax
0x583997: jz      short loc_5839A2
0x583999: mov     edx, [eax]
0x58399B: mov     ecx, eax
0x58399D: mov     eax, [edx+2Ch]
0x5839A0: call    eax
0x5839A2: test    edi, edi
0x5839A4: jnz     short loc_583984
0x5839A6: mov     ebx, [esp+258h+var_208.dwOfs]
0x5839AA: push    1; a3
0x5839AC: xor     edi, edi
0x5839AE: push    3Bh ; ';'; a2
0x5839B0: mov     ecx, ebx; this
0x5839B2: mov     [esp+260h+var_224.dwData], edi
0x5839B6: call    InputGlobals__QueryKeyboardState
0x5839BB: test    eax, eax
0x5839BD: jz      short loc_5839C6
0x5839BF: mov     edi, 3EBh
0x5839C4: jmp     short loc_583A06
0x5839C6: push    1; a3
0x5839C8: push    3Ch ; '<'; a2
0x5839CA: mov     ecx, ebx; this
0x5839CC: call    InputGlobals__QueryKeyboardState
0x5839D1: test    eax, eax
0x5839D3: jz      short loc_5839DC
0x5839D5: mov     edi, 3EAh
0x5839DA: jmp     short loc_583A06
0x5839DC: push    1; a3
0x5839DE: push    3Dh ; '='; a2
0x5839E0: mov     ecx, ebx; this
0x5839E2: call    InputGlobals__QueryKeyboardState
0x5839E7: test    eax, eax
0x5839E9: jz      short loc_5839F2
0x5839EB: mov     edi, 3FEh
0x5839F0: jmp     short loc_583A06
0x5839F2: push    1; a3
0x5839F4: push    3Eh ; '>'; a2
0x5839F6: mov     ecx, ebx; this
0x5839F8: call    InputGlobals__QueryKeyboardState
0x5839FD: test    eax, eax
0x5839FF: jz      short loc_583A0A
0x583A01: mov     edi, 3FFh
0x583A06: mov     [esp+258h+var_224.dwData], edi
0x583A0A: mov     ecx, [esi+68h]
0x583A0D: push    1771h
0x583A12: call    Tile_GetFloat
0x583A17: call    Double_To_SInt32
0x583A1C: test    edi, edi
0x583A1E: mov     [esp+258h+var_230+4], eax
0x583A22: jz      short loc_583A95
0x583A24: mov     ecx, esi
0x583A26: call    InterfaceManager__GetTopVisibleMenuID
0x583A2B: cmp     eax, 1
0x583A2E: jz      short loc_583A36
0x583A30: cmp     byte ptr [esi+8], 1
0x583A34: jnz     short loc_583A95
0x583A36: cmp     edi, [esp+258h+var_230+4]
0x583A3A: jz      short loc_583A95
0x583A3C: mov     ecx, ds:0B333C4h
0x583A42: cmp     byte ptr [ecx+5C0h], 0
0x583A49: jnz     short loc_583A95
0x583A4B: mov     edx, [ecx]
0x583A4D: mov     eax, [edx+198h]
0x583A53: push    0
0x583A55: call    eax
0x583A57: test    al, al
0x583A59: jnz     short loc_583A95
0x583A5B: cmp     edi, 3EBh
0x583A61: jnz     short loc_583A6A
0x583A63: call    sub_5A5E80
0x583A68: jmp     short loc_583A95
0x583A6A: cmp     edi, 3EAh
0x583A70: jnz     short loc_583A79
0x583A72: call    sub_5A5EF0
0x583A77: jmp     short loc_583A95
0x583A79: cmp     edi, 3FEh
0x583A7F: jnz     short loc_583A88
0x583A81: call    sub_5A5F60
0x583A86: jmp     short loc_583A95
0x583A88: cmp     edi, 3FFh
0x583A8E: jnz     short loc_583A95
0x583A90: call    sub_5A5FD0
0x583A95: push    1; a3
0x583A97: push    0Fh; a2
0x583A99: mov     ecx, ebx; this
0x583A9B: call    InputGlobals__QueryControlState
0x583AA0: test    eax, eax
0x583AA2: jnz     short loc_583AA8
0x583AA4: test    edi, edi
0x583AA6: jz      short loc_583B1A
0x583AA8: mov     ecx, ds:0B333C4h
0x583AAE: cmp     byte ptr [ecx+5C0h], 0
0x583AB5: jnz     short loc_583B1A
0x583AB7: mov     edx, [ecx]
0x583AB9: mov     eax, [edx+198h]
0x583ABF: push    0; a3
0x583AC1: call    eax
0x583AC3: test    al, al
0x583AC5: jnz     short loc_583B1A
0x583AC7: push    0
0x583AC9: mov     ecx, esi
0x583ACB: call    sub_57D240
0x583AD0: test    al, al
0x583AD2: jz      short loc_583B1A
0x583AD4: cmp     byte ptr [esi+8], 1
0x583AD8: jnz     short loc_583B1A
0x583ADA: cmp     dword ptr [esi+0E0h], 0
0x583AE1: jnz     short loc_583B1A
0x583AE3: test    edi, edi
0x583AE5: jz      short loc_583AFC
0x583AE7: fild    [esp+260h+a3]
0x583AEB: push    ecx
0x583AEC: mov     ecx, [esi+68h]; this
0x583AEF: fstp    [esp+264h+var_264]; a3
0x583AF2: push    1771h; a2
0x583AF7: call    Tile_SetFloat
0x583AFC: mov     ecx, ds:0B333C4h
0x583B02: call    sub_663920
0x583B07: push    1
0x583B09: mov     ecx, esi
0x583B0B: call    sub_57D640
0x583B10: call    sub_57CAC0
0x583B15: jmp     loc_583BAA
0x583B1A: push    1; a3
0x583B1C: push    0Fh; a2
0x583B1E: mov     ecx, ebx; this
0x583B20: call    InputGlobals__QueryControlState
0x583B25: test    eax, eax
0x583B27: jnz     short loc_583B37
0x583B29: test    edi, edi
0x583B2B: jz      loc_583BAA
0x583B31: cmp     edi, [esp+260h+var_238+4]
0x583B35: jnz     short loc_583BAA
0x583B37: mov     ecx, ds:0B333C4h
0x583B3D: cmp     byte ptr [ecx+5C0h], 0
0x583B44: jnz     short loc_583BAA
0x583B46: push    0
0x583B48: mov     ecx, esi
0x583B4A: call    sub_57D240
0x583B4F: test    al, al
0x583B51: jz      short loc_583BAA
0x583B53: cmp     byte ptr [esi+8], 2
0x583B57: jnz     short loc_583BAA
0x583B59: push    0
0x583B5B: push    1
0x583B5D: mov     ecx, esi
0x583B5F: call    sub_57CFE0
0x583B64: test    eax, eax
0x583B66: jl      short loc_583BAA
0x583B68: mov     edx, ds:0B33398h
0x583B6E: mov     ecx, [edx+24h]
0x583B71: test    ecx, ecx
0x583B73: jz      short loc_583BA5
0x583B75: push    1
0x583B77: push    121h
0x583B7C: push    offset aUiinventoryclo; "UIInventoryClose"
0x583B81: call    PlaySound???
0x583B86: mov     edi, eax
0x583B88: test    edi, edi
0x583B8A: jz      short loc_583BA5
0x583B8C: push    0
0x583B8E: mov     ecx, edi
0x583B90: call    sub_6B7190
0x583B95: mov     ecx, edi; this
0x583B97: call    sub_6B73E0
0x583B9C: push    edi
0x583B9D: call    FormHeapFree
0x583BA2: add     esp, 4
0x583BA5: call    sub_57CC00
0x583BAA: cmp     byte ptr [esi+8], 1
0x583BAE: jz      short loc_583BD1
0x583BB0: mov     ecx, ds:0B333C4h; int
0x583BB6: test    ecx, ecx
0x583BB8: jz      short loc_583BD1
0x583BBA: mov     eax, ds:0B3A6E0h
0x583BBF: mov     eax, [eax+60h]
0x583BC2: test    eax, eax
0x583BC4: jz      short loc_583BD1
0x583BC6: test    byte ptr [eax+18h], 1
0x583BCA: jnz     short loc_583BD1
0x583BCC: call    sub_664C40
0x583BD1: mov     eax, [esi+0B4h]
0x583BD7: test    eax, eax
0x583BD9: jz      short loc_583BE7
0x583BDB: mov     dword ptr [esi+0B4h], 0
0x583BE5: call    eax
0x583BE7: mov     ecx, [esp+260h+var_68]
0x583BEE: mov     large fs:0, ecx
0x583BF5: pop     ecx
0x583BF6: pop     edi
0x583BF7: pop     esi
0x583BF8: pop     ebx
0x583BF9: mov     ecx, [esp+250h+var_A0]
0x583C00: xor     ecx, esp
0x583C02: call    @__security_check_cookie@4; __security_check_cookie(x)
0x583C07: mov     esp, ebp
0x583C09: pop     ebp
0x583C0A: retn
