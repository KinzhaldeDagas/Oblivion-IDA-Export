0x8112A0: sub     esp, 0ACh
0x8112A6: push    ebx
0x8112A7: push    esi
0x8112A8: mov     esi, [esp+0B4h+a8]
0x8112AF: push    edi
0x8112B0: mov     edi, ecx
0x8112B2: mov     ecx, [edi+14h]
0x8112B5: push    0
0x8112B7: push    esi
0x8112B8: call    sub_765480
0x8112BD: fld     dword ptr [esi+30h]
0x8112C0: fmul    dword ptr [esi]
0x8112C2: lea     eax, [esp+0B8h+var_80]
0x8112C6: push    eax
0x8112C7: push    0
0x8112C9: fstp    [esp+0C0h+var_80]
0x8112CD: lea     ecx, [esp+0C0h+var_40]
0x8112D4: fld     dword ptr [esi+0Ch]
0x8112D7: push    ecx
0x8112D8: fmul    dword ptr [esi+30h]
0x8112DB: fstp    [esp+0C4h+var_7C]
0x8112DF: fld     dword ptr [esi+18h]
0x8112E2: fmul    dword ptr [esi+30h]
0x8112E5: fstp    [esp+0C4h+var_78]
0x8112E9: fld     dword ptr [esi+4]
0x8112EC: fmul    dword ptr [esi+30h]
0x8112EF: fstp    [esp+0C4h+var_70]
0x8112F3: fld     dword ptr [esi+10h]
0x8112F6: fmul    dword ptr [esi+30h]
0x8112F9: fstp    [esp+0C4h+var_6C]
0x8112FD: fld     dword ptr [esi+1Ch]
0x811300: fmul    dword ptr [esi+30h]
0x811303: fstp    [esp+0C4h+var_68]
0x811307: fld     dword ptr [esi+8]
0x81130A: fmul    dword ptr [esi+30h]
0x81130D: fstp    [esp+0C4h+var_60]
0x811311: fld     dword ptr [esi+14h]
0x811314: fmul    dword ptr [esi+30h]
0x811317: fstp    [esp+0C4h+var_5C]
0x81131B: fld     dword ptr [esi+20h]
0x81131E: fmul    dword ptr [esi+30h]
0x811321: fstp    [esp+0C4h+var_58]
0x811325: fld     dword ptr [esi+24h]
0x811328: fstp    [esp+0C4h+var_50]
0x81132C: fld     dword ptr [esi+28h]
0x81132F: fstp    [esp+0C4h+var_4C]
0x811333: fld     dword ptr [esi+2Ch]
0x811336: fstp    [esp+0C4h+var_48]
0x81133A: fldz
0x81133C: fst     [esp+0C4h+var_74]
0x811340: fst     [esp+0C4h+var_64]
0x811344: fstp    [esp+0C4h+var_54]
0x811348: fld1
0x81134A: fstp    [esp+0C4h+var_44]
0x811351: call    D3DXMatrixInverse_0
0x811356: mov     edx, [esp+0B8h+a6]
0x81135D: mov     ebx, [edx+18h]
0x811360: test    ebx, ebx
0x811362: jnz     short loc_811368
0x811364: xor     eax, eax
0x811366: jmp     short loc_81137B
0x811368: mov     eax, [ebx]
0x81136A: mov     edx, [eax+54h]
0x81136D: mov     ecx, ebx
0x81136F: call    edx
0x811371: xor     ecx, ecx
0x811373: cmp     eax, 2
0x811376: setz    cl
0x811379: mov     eax, ecx
0x81137B: neg     eax
0x81137D: sbb     eax, eax
0x81137F: and     eax, ebx
0x811381: jz      loc_811573
0x811387: mov     eax, [eax+1Ch]
0x81138A: shr     eax, 1Ch
0x81138D: movzx   edx, al
0x811390: push    edx
0x811391: call    GetShadowSceneNode
0x811396: add     esp, 4
0x811399: lea     ecx, [esp+0B8h+var_84]
0x81139D: push    ecx
0x81139E: mov     ecx, [eax+118h]
0x8113A4: call    sub_405AD0
0x8113A9: mov     ebx, [eax]
0x8113AB: mov     eax, [esp+0B8h+var_84]
0x8113AF: test    eax, eax
0x8113B1: jz      short loc_8113D4
0x8113B3: push    ebp
0x8113B4: mov     ebp, eax
0x8113B6: add     eax, 4
0x8113B9: push    eax; lpAddend
0x8113BA: call    dword ptr ds:0A2807Ch
0x8113C0: test    eax, eax
0x8113C2: jnz     short loc_8113D3
0x8113C4: test    ebp, ebp
0x8113C6: jz      short loc_8113D3
0x8113C8: mov     edx, [ebp+0]
0x8113CB: mov     eax, [edx]
0x8113CD: push    1
0x8113CF: mov     ecx, ebp
0x8113D1: call    eax
0x8113D3: pop     ebp
0x8113D4: test    ebx, ebx
0x8113D6: jz      loc_811515
0x8113DC: mov     ecx, [ebx+108h]
0x8113E2: mov     edx, [ebx+10Ch]
0x8113E8: mov     eax, [ebx+110h]
0x8113EE: mov     [esp+0B8h+var_90], ecx
0x8113F2: lea     ecx, [esp+0B8h+var_90]
0x8113F6: mov     [esp+0B8h+var_8C], edx
0x8113FA: mov     [esp+0B8h+var_88], eax
0x8113FE: call    sub_43F350
0x811403: fstp    st
0x811405: mov     ecx, [ebx+0E0h]
0x81140B: mov     edx, [ebx+0E4h]
0x811411: mov     eax, [ebx+0E8h]
0x811417: mov     [esp+0B8h+var_9C], ecx
0x81141B: fld     [esp+0B8h+var_9C]
0x81141F: fstp    [esp+0B8h+var_AC]
0x811423: mov     ecx, [esp+0B8h+var_AC]
0x811427: mov     [esp+0B8h+var_98], edx
0x81142B: fld     [esp+0B8h+var_98]
0x81142F: fstp    [esp+0B8h+var_A8]
0x811433: mov     edx, [esp+0B8h+var_A8]
0x811437: mov     [esp+0B8h+var_94], eax
0x81143B: fld     [esp+0B8h+var_94]
0x81143F: fstp    [esp+0B8h+var_A4]
0x811443: mov     eax, [esp+0B8h+var_A4]
0x811447: fld1
0x811449: mov     [edi+0B0h], ecx
0x81144F: fst     [esp+0B8h+var_A0]
0x811453: mov     [edi+0B4h], edx
0x811459: mov     ecx, [esp+0B8h+var_A0]
0x81145D: mov     [edi+0B8h], eax
0x811463: mov     [edi+0BCh], ecx
0x811469: mov     edx, [ebx+0ECh]
0x81146F: mov     eax, [ebx+0F0h]
0x811475: mov     ecx, [ebx+0F4h]
0x81147B: mov     [esp+0B8h+var_9C], edx
0x81147F: fld     [esp+0B8h+var_9C]
0x811483: fstp    [esp+0B8h+var_AC]
0x811487: mov     edx, [esp+0B8h+var_AC]
0x81148B: mov     [esp+0B8h+var_98], eax
0x81148F: fld     [esp+0B8h+var_98]
0x811493: fstp    [esp+0B8h+var_A8]
0x811497: mov     eax, [esp+0B8h+var_A8]
0x81149B: mov     [esp+0B8h+var_94], ecx
0x81149F: fld     [esp+0B8h+var_94]
0x8114A3: fstp    [esp+0B8h+var_A4]
0x8114A7: mov     ecx, [esp+0B8h+var_A4]
0x8114AB: mov     [edi+0D0h], edx
0x8114B1: fst     [esp+0B8h+var_A0]
0x8114B5: mov     edx, [esp+0B8h+var_A0]
0x8114B9: fld     [esp+0B8h+var_90]
0x8114BD: mov     [edi+0D4h], eax
0x8114C3: fchs
0x8114C5: mov     [edi+0D8h], ecx
0x8114CB: fstp    [esp+0B8h+var_AC]
0x8114CF: mov     eax, [esp+0B8h+var_AC]
0x8114D3: fld     [esp+0B8h+var_8C]
0x8114D7: mov     [edi+0C0h], eax
0x8114DD: fchs
0x8114DF: mov     [edi+0DCh], edx
0x8114E5: fstp    [esp+0B8h+var_A8]
0x8114E9: mov     ecx, [esp+0B8h+var_A8]
0x8114ED: fld     [esp+0B8h+var_88]
0x8114F1: mov     [edi+0C4h], ecx
0x8114F7: fchs
0x8114F9: fstp    [esp+0B8h+var_A4]
0x8114FD: mov     edx, [esp+0B8h+var_A4]
0x811501: mov     [edi+0C8h], edx
0x811507: fstp    [esp+0B8h+var_A0]
0x81150B: mov     eax, [esp+0B8h+var_A0]
0x81150F: mov     [edi+0CCh], eax
0x811515: mov     ecx, ds:0B46668h
0x81151B: mov     [edi+0F0h], ecx
0x811521: mov     edx, ds:0B4666Ch
0x811527: mov     [edi+0F4h], edx
0x81152D: mov     eax, ds:0B46670h
0x811532: mov     [edi+0F8h], eax
0x811538: mov     ecx, ds:0B46674h
0x81153E: mov     [edi+0FCh], ecx
0x811544: mov     edx, ds:0B46658h
0x81154A: mov     [edi+100h], edx
0x811550: mov     eax, ds:0B4665Ch
0x811555: mov     [edi+104h], eax
0x81155B: mov     ecx, ds:0B46660h
0x811561: mov     [edi+108h], ecx
0x811567: mov     edx, ds:0B46664h
0x81156D: mov     [edi+10Ch], edx
0x811573: mov     eax, [esp+0B8h+a9]
0x81157A: mov     ecx, [esp+0B8h+a7]
0x811581: mov     edx, [esp+0B8h+a6]
0x811588: push    eax; a9
0x811589: mov     eax, [esp+0BCh+a5]
0x811590: push    esi; a8
0x811591: push    ecx; a7
0x811592: mov     ecx, [esp+0C4h+a4]
0x811599: push    edx; a6
0x81159A: mov     edx, [esp+0C8h+a3]
0x8115A1: push    eax; a5
0x8115A2: mov     eax, [esp+0CCh+a2]
0x8115A9: push    ecx; a4
0x8115AA: push    edx; a3
0x8115AB: push    eax; a2
0x8115AC: mov     ecx, edi; this
0x8115AE: call    sub_779710
0x8115B3: pop     edi
0x8115B4: pop     esi
0x8115B5: pop     ebx
0x8115B6: add     esp, 0ACh
0x8115BC: retn    20h ; ' '
