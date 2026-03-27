0x444340: sub     esp, 18h
0x444343: mov     eax, ds:0B06A2Ch
0x444348: push    ebx
0x444349: push    ebp
0x44434A: mov     ebp, ecx
0x44434C: mov     ecx, [ebp+20h]
0x44434F: shr     eax, 1
0x444351: sub     ecx, eax
0x444353: mov     [esp+20h+var_4], ecx
0x444357: mov     ecx, [ebp+24h]
0x44435A: push    esi
0x44435B: sub     ecx, eax
0x44435D: push    edi
0x44435E: mov     [esp+28h+var_8], ecx
0x444362: mov     [esp+28h+var_14], 0
0x44436A: mov     [esp+28h+var_16], 0
0x44436F: call    sub_57BAC0
0x444374: test    al, al
0x444376: jz      short loc_44437D
0x444378: mov     [esp+28h+var_16], 1
0x44437D: call    sub_57BAC0
0x444382: mov     [esp+28h+var_15], al
0x444386: call    sub_4E9F40
0x44438B: test    al, al
0x44438D: jz      short loc_44439B
0x44438F: mov     eax, [ebp+74h]
0x444392: mov     ecx, [ebp+4]
0x444395: push    eax
0x444396: call    sub_483D60
0x44439B: mov     eax, ds:0B33B00h
0x4443A0: or      dword ptr [eax+18h], 100h
0x4443A7: mov     ecx, ds:0B35C24h
0x4443AD: test    ecx, ecx
0x4443AF: jz      short loc_4443B6
0x4443B1: call    sub_889E00
0x4443B6: mov     eax, ds:0B06A2Ch
0x4443BB: xor     ecx, ecx
0x4443BD: cmp     ecx, eax
0x4443BF: mov     [esp+28h+var_C], ecx
0x4443C3: jnb     loc_444534
0x4443C9: xor     ebx, ebx
0x4443CB: jmp     short loc_4443D0
0x4443CD: align 10h
0x4443D0: cmp     ebx, eax
0x4443D2: jnb     loc_44452C
0x4443D8: mov     edx, [esp+28h+var_8]
0x4443DC: mov     eax, [esp+28h+var_4]
0x4443E0: lea     esi, [ebx+edx]
0x4443E3: push    esi
0x4443E4: lea     edi, [ecx+eax]
0x4443E7: push    edi
0x4443E8: push    ebx
0x4443E9: push    ecx
0x4443EA: mov     ecx, ebp
0x4443EC: call    sub_4441A0
0x4443F1: mov     eax, [ebp+74h]
0x4443F4: mov     ecx, ds:0B33A98h
0x4443FA: push    0
0x4443FC: push    eax
0x4443FD: push    esi
0x4443FE: push    edi
0x4443FF: call    sub_447740
0x444404: mov     edi, ds:0B333A0h
0x44440A: mov     esi, eax
0x44440C: test    esi, esi
0x44440E: jz      short loc_44446B
0x444410: mov     ecx, esi; this
0x444412: call    TESObjectCELL_IsInterior
0x444417: test    al, al
0x444419: jz      short loc_444434
0x44441B: mov     ecx, ds:0B051D4h
0x444421: xor     eax, eax
0x444423: cmp     eax, ecx
0x444425: jnb     short loc_44446B
0x444427: mov     edx, [edi+38h]
0x44442A: cmp     [edx+eax*4], esi
0x44442D: jz      short loc_444451
0x44442F: add     eax, 1
0x444432: jmp     short loc_444423
0x444434: mov     ecx, ds:0B051DCh
0x44443A: xor     eax, eax
0x44443C: lea     esp, [esp+0]
0x444440: cmp     eax, ecx
0x444442: jnb     short loc_44446B
0x444444: mov     edx, [edi+3Ch]
0x444447: cmp     [edx+eax*4], esi
0x44444A: jz      short loc_444451
0x44444C: add     eax, 1
0x44444F: jmp     short loc_444440
0x444451: mov     ecx, esi; this
0x444453: call    TESObjectCELL_IsInterior
0x444458: test    al, al
0x44445A: push    esi; a2
0x44445B: mov     ecx, ebp; this
0x44445D: jz      short loc_444466
0x44445F: call    sub_43FD70
0x444464: jmp     short loc_44446B
0x444466: call    sub_43FED0
0x44446B: cmp     [esp+28h+var_15], 0
0x444470: jnz     short loc_444499
0x444472: mov     ecx, ds:0B33B00h
0x444478: call    sub_45A500
0x44447D: test    al, al
0x44447F: jz      loc_44451B
0x444485: mov     eax, ds:0B33B00h
0x44448A: mov     ecx, [eax+18h]
0x44448D: shr     ecx, 0Bh
0x444490: test    cl, 1
0x444493: jz      loc_44451B
0x444499: mov     eax, ds:0B06A2Ch
0x44449E: add     [esp+28h+var_14], 1
0x4444A3: fild    [esp+28h+var_14]
0x4444A7: mov     edx, eax
0x4444A9: imul    edx, eax
0x4444AC: test    edx, edx
0x4444AE: mov     [esp+28h+var_10], edx
0x4444B2: fild    [esp+28h+var_10]
0x4444B6: jge     short loc_4444BE
0x4444B8: fadd    dword ptr ds:0A2FC78h
0x4444BE: fdivp   st(1), st
0x4444C0: mov     ecx, ds:0B33B00h
0x4444C6: fmul    qword ptr ds:0A309F0h
0x4444CC: fstp    [esp+28h+var_10]
0x4444D0: call    sub_45A500
0x4444D5: test    al, al
0x4444D7: jz      short loc_444509
0x4444D9: mov     ecx, ds:0B33B00h
0x4444DF: mov     eax, [ecx+18h]
0x4444E2: shr     eax, 0Bh
0x4444E5: test    al, 1
0x4444E7: jz      short loc_444509
0x4444E9: fld     [esp+28h+var_10]
0x4444ED: push    ecx
0x4444EE: fstp    [esp+2Ch+var_2C]; float
0x4444F1: push    1; int
0x4444F3: call    sub_4523A0
0x4444F8: mov     eax, ds:0B06A2Ch
0x4444FD: mov     ecx, [esp+28h+var_C]
0x444501: add     ebx, 1
0x444504: jmp     loc_4443D0
0x444509: fld     [esp+28h+var_10]
0x44450D: push    ecx
0x44450E: fstp    [esp+2Ch+var_2C]; float
0x444511: push    1; int
0x444513: call    sub_57B950
0x444518: add     esp, 8
0x44451B: mov     eax, ds:0B06A2Ch
0x444520: mov     ecx, [esp+28h+var_C]
0x444524: add     ebx, 1
0x444527: jmp     loc_4443D0
0x44452C: add     ecx, 1
0x44452F: jmp     loc_4443BD
0x444534: mov     ecx, ds:0B35C24h
0x44453A: test    ecx, ecx
0x44453C: jz      short loc_444545
0x44453E: push    0
0x444540: call    sub_88D1D0
0x444545: mov     eax, ds:0B33B00h
0x44454A: and     dword ptr [eax+18h], 0FFFFFEFFh
0x444551: mov     ecx, ds:0B33B00h
0x444557: cmp     dword ptr [ecx+1Ch], 0
0x44455B: jz      short loc_4445CC
0x44455D: call    sub_45A500
0x444562: mov     ecx, ds:0B33B00h
0x444568: mov     ebx, [ecx+18h]
0x44456B: shr     ebx, 7
0x44456E: push    1
0x444570: mov     byte ptr [esp+2Ch+var_C], al
0x444574: and     bl, 1
0x444577: call    sub_45A530
0x44457C: mov     eax, ds:0B33B00h
0x444581: push    0
0x444583: mov     esi, 80h ; '€'
0x444588: or      [eax+18h], esi
0x44458B: mov     ecx, ds:0B33B00h
0x444591: push    0
0x444593: push    0
0x444595: call    sub_45FDA0
0x44459A: mov     ecx, ds:0B33B00h
0x4445A0: push    0
0x4445A2: call    sub_461030
0x4445A7: test    bl, bl
0x4445A9: mov     eax, ds:0B33B00h
0x4445AE: jz      short loc_4445B5
0x4445B0: or      [eax+18h], esi
0x4445B3: jmp     short loc_4445BC
0x4445B5: and     dword ptr [eax+18h], 0FFFFFF7Fh
0x4445BC: mov     ecx, [esp+28h+var_C]
0x4445C0: push    ecx
0x4445C1: mov     ecx, ds:0B33B00h
0x4445C7: call    sub_45A530
0x4445CC: mov     ecx, ds:0B35C24h
0x4445D2: test    ecx, ecx
0x4445D4: jz      short loc_4445DB
0x4445D6: call    sub_889E00
0x4445DB: xor     ecx, ecx
0x4445DD: cmp     ecx, ds:0B06A2Ch
0x4445E3: mov     [esp+28h+var_C], ecx
0x4445E7: jnb     loc_4446E2
0x4445ED: xor     ebx, ebx
0x4445EF: nop
0x4445F0: cmp     ebx, ds:0B06A2Ch
0x4445F6: jnb     loc_4446DA
0x4445FC: mov     eax, [ebp+74h]
0x4445FF: test    eax, eax
0x444601: jz      loc_4446CE
0x444607: mov     edx, [esp+28h+var_8]
0x44460B: push    0
0x44460D: push    eax
0x44460E: lea     eax, [ebx+edx]
0x444611: mov     edx, [esp+30h+var_4]
0x444615: add     ecx, edx
0x444617: push    eax
0x444618: push    ecx
0x444619: mov     ecx, ds:0B33A98h
0x44461F: call    sub_447740
0x444624: mov     esi, eax
0x444626: test    esi, esi
0x444628: jz      loc_4446CE
0x44462E: cmp     byte ptr [esi+26h], 5
0x444632: jnz     short loc_44469E
0x444634: cmp     [esp+28h+var_16], 0
0x444639: mov     ecx, esi
0x44463B: setz    al
0x44463E: push    eax
0x44463F: call    sub_4D5BD0
0x444644: mov     ecx, esi; this
0x444646: call    TESObjectCELL_IsInterior
0x44464B: test    al, al
0x44464D: push    esi; a2
0x44464E: mov     ecx, ebp; this
0x444650: jz      short loc_444659
0x444652: call    sub_43FD70
0x444657: jmp     short loc_44465E
0x444659: call    sub_43FED0
0x44465E: mov     ecx, esi
0x444660: call    sub_4D58B0
0x444665: mov     edi, eax
0x444667: mov     ecx, edi; this
0x444669: call    NiAVObject_InitializePropertyState
0x44466E: mov     ecx, edi
0x444670: call    NiNode_UpdateDynamicEffectState
0x444675: mov     ecx, [ebp+10h]; this
0x444678: call    NiAVObject_InitializePropertyState
0x44467D: mov     ecx, [ebp+10h]
0x444680: call    NiNode_UpdateDynamicEffectState
0x444685: cmp     word ptr [edi+0B8h], 0
0x44468D: jnz     short loc_44469E
0x44468F: fldz
0x444691: push    0; a3
0x444693: push    ecx
0x444694: fstp    [esp+30h+a2]; a2
0x444697: mov     ecx, edi; this
0x444699: call    NiAVObject_UpdateNiAVObject
0x44469E: cmp     dword ptr [ebp+78h], 0
0x4446A2: jz      short loc_4446CB
0x4446A4: push    8; Size
0x4446A6: call    FormHeapAlloc
0x4446AB: add     esp, 4
0x4446AE: test    eax, eax
0x4446B0: jz      short loc_4446C0
0x4446B2: mov     ecx, [ebp+78h]
0x4446B5: mov     [eax], ecx
0x4446B7: mov     dword ptr [eax+4], 0
0x4446BE: jmp     short loc_4446C2
0x4446C0: xor     eax, eax
0x4446C2: mov     edx, [ebp+7Ch]
0x4446C5: mov     [eax+4], edx
0x4446C8: mov     [ebp+7Ch], eax
0x4446CB: mov     [ebp+78h], esi
0x4446CE: mov     ecx, [esp+28h+var_C]
0x4446D2: add     ebx, 1
0x4446D5: jmp     loc_4445F0
0x4446DA: add     ecx, 1
0x4446DD: jmp     loc_4445DD
0x4446E2: mov     ecx, ds:0B35C24h
0x4446E8: test    ecx, ecx
0x4446EA: jz      short loc_4446F3
0x4446EC: push    0
0x4446EE: call    sub_88D1D0
0x4446F3: mov     esi, ds:0B4310Ch
0x4446F9: test    esi, esi
0x4446FB: jz      short loc_444723
0x4446FD: lea     eax, [esi+4]
0x444700: push    eax; lpAddend
0x444701: call    dword ptr ds:0A2807Ch
0x444707: test    eax, eax
0x444709: jnz     short loc_444719
0x44470B: test    esi, esi
0x44470D: jz      short loc_444719
0x44470F: mov     edx, [esi]
0x444711: mov     eax, [edx]
0x444713: push    1
0x444715: mov     ecx, esi
0x444717: call    eax
0x444719: mov     dword ptr ds:0B4310Ch, 0
0x444723: pop     edi
0x444724: pop     esi
0x444725: pop     ebp
0x444726: mov     byte ptr ds:0B06A28h, 1
0x44472D: pop     ebx
0x44472E: add     esp, 18h
0x444731: retn
