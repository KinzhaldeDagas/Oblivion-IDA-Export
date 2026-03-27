0x544EA0: push    0FFFFFFFFh
0x544EA2: push    offset SEH_544EA0
0x544EA7: mov     eax, large fs:0
0x544EAD: push    eax
0x544EAE: sub     esp, 28h
0x544EB1: push    ebx
0x544EB2: push    ebp
0x544EB3: push    esi
0x544EB4: push    edi
0x544EB5: mov     eax, ds:0B30AACh
0x544EBA: xor     eax, esp
0x544EBC: push    eax
0x544EBD: lea     eax, [esp+48h+var_C]
0x544EC1: mov     large fs:0, eax
0x544EC7: mov     esi, ecx
0x544EC9: mov     eax, [esp+48h+arg_0]
0x544ECD: push    eax
0x544ECE: call    sub_543D30
0x544ED3: mov     ecx, [esi+4]
0x544ED6: push    offset aSunRoot; "Sun Root"
0x544EDB: call    NiObjectNET_SetName
0x544EE0: push    30h ; '0'; Size
0x544EE2: call    FormHeapAlloc
0x544EE7: fld     dword ptr ds:0B11E2Ch
0x544EED: fld     st
0x544EEF: push    30h ; '0'; Size
0x544EF1: fld     qword ptr ds:0A3D360h
0x544EF7: mov     [esp+50h+var_2C], eax
0x544EFB: fmul    st(1), st
0x544EFD: fxch    st(1)
0x544EFF: fstp    [esp+50h+var_1C]
0x544F03: mov     ecx, [esp+50h+var_1C]
0x544F07: mov     [eax], ecx
0x544F09: fxch    st(1)
0x544F0B: fstp    [esp+50h+var_18]
0x544F0F: mov     edx, [esp+50h+var_18]
0x544F13: fldz
0x544F15: mov     [eax+4], edx
0x544F18: fst     [esp+50h+var_14]
0x544F1C: mov     ecx, [esp+50h+var_14]
0x544F20: mov     [eax+8], ecx
0x544F23: fld     dword ptr ds:0B11E2Ch
0x544F29: fmul    st, st(2)
0x544F2B: fstp    [esp+50h+arg_0]
0x544F2F: fld     [esp+50h+arg_0]
0x544F33: fst     [esp+50h+arg_0]
0x544F37: fstp    [esp+50h+var_34]
0x544F3B: fld     [esp+50h+arg_0]
0x544F3F: fstp    [esp+50h+var_1C]
0x544F43: mov     edx, [esp+50h+var_1C]
0x544F47: fld     [esp+50h+var_34]
0x544F4B: mov     [eax+0Ch], edx
0x544F4E: fstp    [esp+50h+var_18]
0x544F52: mov     ecx, [esp+50h+var_18]
0x544F56: mov     [eax+10h], ecx
0x544F59: fst     [esp+50h+var_14]
0x544F5D: mov     edx, [esp+50h+var_14]
0x544F61: mov     [eax+14h], edx
0x544F64: fld     dword ptr ds:0B11E2Ch
0x544F6A: fst     [esp+50h+var_1C]
0x544F6E: mov     ecx, [esp+50h+var_1C]
0x544F72: fstp    [esp+50h+var_18]
0x544F76: mov     edx, [esp+50h+var_18]
0x544F7A: mov     [eax+18h], ecx
0x544F7D: fst     [esp+50h+var_14]
0x544F81: mov     ecx, [esp+50h+var_14]
0x544F85: mov     [eax+1Ch], edx
0x544F88: mov     [eax+20h], ecx
0x544F8B: fld     dword ptr ds:0B11E2Ch
0x544F91: fld     st
0x544F93: fmulp   st(3), st
0x544F95: fxch    st(2)
0x544F97: fstp    [esp+50h+arg_0]
0x544F9B: fxch    st(1)
0x544F9D: fstp    [esp+50h+var_1C]
0x544FA1: mov     edx, [esp+50h+var_1C]
0x544FA5: fld     [esp+50h+arg_0]
0x544FA9: mov     [eax+24h], edx
0x544FAC: fstp    [esp+50h+var_18]
0x544FB0: mov     ecx, [esp+50h+var_18]
0x544FB4: mov     [eax+28h], ecx
0x544FB7: fstp    [esp+50h+var_14]
0x544FBB: mov     edx, [esp+50h+var_14]
0x544FBF: mov     [eax+2Ch], edx
0x544FC2: call    FormHeapAlloc
0x544FC7: mov     ecx, ds:0B3F9A8h
0x544FCD: mov     [eax], ecx
0x544FCF: mov     edx, ds:0B3F9ACh
0x544FD5: mov     [eax+4], edx
0x544FD8: mov     ecx, ds:0B3F9B0h
0x544FDE: mov     [eax+8], ecx
0x544FE1: mov     edx, ds:0B3F9A8h
0x544FE7: mov     [eax+0Ch], edx
0x544FEA: mov     ecx, ds:0B3F9ACh
0x544FF0: mov     [esp+50h+var_30], eax
0x544FF4: mov     [eax+10h], ecx
0x544FF7: mov     edx, ds:0B3F9B0h
0x544FFD: mov     [eax+14h], edx
0x545000: mov     ecx, ds:0B3F9A8h
0x545006: mov     [eax+18h], ecx
0x545009: mov     edx, ds:0B3F9ACh
0x54500F: mov     [eax+1Ch], edx
0x545012: mov     ecx, ds:0B3F9B0h
0x545018: mov     [eax+20h], ecx
0x54501B: mov     edx, ds:0B3F9A8h
0x545021: mov     [eax+24h], edx
0x545024: mov     ecx, ds:0B3F9ACh
0x54502A: mov     [eax+28h], ecx
0x54502D: mov     edx, ds:0B3F9B0h
0x545033: push    30h ; '0'; Size
0x545035: mov     [eax+2Ch], edx
0x545038: call    FormHeapAlloc
0x54503D: fld     dword ptr ds:0B11E34h
0x545043: fld     st
0x545045: push    30h ; '0'; Size
0x545047: fld     qword ptr ds:0A3D360h
0x54504D: mov     [esp+58h+var_20], eax
0x545051: fmul    st(1), st
0x545053: fxch    st(1)
0x545055: fstp    [esp+58h+var_1C]
0x545059: mov     ecx, [esp+58h+var_1C]
0x54505D: mov     [eax], ecx
0x54505F: fxch    st(1)
0x545061: fstp    [esp+58h+var_18]
0x545065: mov     edx, [esp+58h+var_18]
0x545069: fldz
0x54506B: mov     [eax+4], edx
0x54506E: fst     [esp+58h+var_14]
0x545072: mov     ecx, [esp+58h+var_14]
0x545076: mov     [eax+8], ecx
0x545079: fld     dword ptr ds:0B11E34h
0x54507F: fmul    st, st(2)
0x545081: fstp    [esp+58h+arg_0]
0x545085: fld     [esp+58h+arg_0]
0x545089: fst     [esp+58h+arg_0]
0x54508D: fstp    [esp+58h+var_34]
0x545091: fld     [esp+58h+arg_0]
0x545095: fstp    [esp+58h+var_1C]
0x545099: mov     edx, [esp+58h+var_1C]
0x54509D: fld     [esp+58h+var_34]
0x5450A1: mov     [eax+0Ch], edx
0x5450A4: fstp    [esp+58h+var_18]
0x5450A8: mov     ecx, [esp+58h+var_18]
0x5450AC: mov     [eax+10h], ecx
0x5450AF: fst     [esp+58h+var_14]
0x5450B3: mov     edx, [esp+58h+var_14]
0x5450B7: mov     [eax+14h], edx
0x5450BA: fld     dword ptr ds:0B11E34h
0x5450C0: fst     [esp+58h+var_1C]
0x5450C4: mov     ecx, [esp+58h+var_1C]
0x5450C8: fstp    [esp+58h+var_18]
0x5450CC: mov     edx, [esp+58h+var_18]
0x5450D0: mov     [eax+18h], ecx
0x5450D3: fst     [esp+58h+var_14]
0x5450D7: mov     ecx, [esp+58h+var_14]
0x5450DB: mov     [eax+1Ch], edx
0x5450DE: mov     [eax+20h], ecx
0x5450E1: fld     dword ptr ds:0B11E34h
0x5450E7: fld     st
0x5450E9: fmulp   st(3), st
0x5450EB: fxch    st(2)
0x5450ED: fstp    [esp+58h+arg_0]
0x5450F1: fxch    st(1)
0x5450F3: fstp    [esp+58h+var_1C]
0x5450F7: mov     edx, [esp+58h+var_1C]
0x5450FB: fld     [esp+58h+arg_0]
0x5450FF: mov     [eax+24h], edx
0x545102: fstp    [esp+58h+var_18]
0x545106: mov     ecx, [esp+58h+var_18]
0x54510A: mov     [eax+28h], ecx
0x54510D: fstp    [esp+58h+var_14]
0x545111: mov     edx, [esp+58h+var_14]
0x545115: mov     [eax+2Ch], edx
0x545118: call    FormHeapAlloc
0x54511D: mov     ecx, ds:0B3F9A8h
0x545123: mov     [esp+58h+var_24], eax
0x545127: mov     [eax], ecx
0x545129: mov     edx, ds:0B3F9ACh
0x54512F: fld1
0x545131: mov     [eax+4], edx
0x545134: fst     [esp+58h+var_1C]
0x545138: mov     ecx, ds:0B3F9B0h
0x54513E: fldz
0x545140: mov     [eax+8], ecx
0x545143: fst     [esp+58h+var_18]
0x545147: mov     edx, ds:0B3F9A8h
0x54514D: fstp    [esp+58h+var_14]
0x545151: mov     [eax+0Ch], edx
0x545154: mov     ecx, ds:0B3F9ACh
0x54515A: mov     [eax+10h], ecx
0x54515D: mov     edx, ds:0B3F9B0h
0x545163: fstp    [esp+58h+var_10]
0x545167: mov     [eax+14h], edx
0x54516A: mov     ecx, ds:0B3F9A8h
0x545170: mov     [eax+18h], ecx
0x545173: mov     edx, ds:0B3F9ACh
0x545179: mov     [eax+1Ch], edx
0x54517C: mov     ecx, ds:0B3F9B0h
0x545182: mov     [eax+20h], ecx
0x545185: mov     edx, ds:0B3F9A8h
0x54518B: mov     [eax+24h], edx
0x54518E: mov     ecx, ds:0B3F9ACh
0x545194: mov     [eax+28h], ecx
0x545197: mov     edx, ds:0B3F9B0h
0x54519D: push    40h ; '@'; Size
0x54519F: mov     [eax+2Ch], edx
0x5451A2: call    FormHeapAlloc
0x5451A7: mov     ebx, eax
0x5451A9: add     esp, 14h
0x5451AC: mov     [esp+48h+arg_0], ebx
0x5451B0: test    ebx, ebx
0x5451B2: mov     [esp+48h+var_4], 0
0x5451BA: jz      short loc_5451CD
0x5451BC: push    offset sub_47EA50
0x5451C1: push    4
0x5451C3: push    10h
0x5451C5: push    ebx
0x5451C6: call    sub_401080
0x5451CB: jmp     short loc_5451CF
0x5451CD: xor     ebx, ebx
0x5451CF: mov     ebp, [esp+48h+var_1C]
0x5451D3: mov     eax, [esp+48h+var_18]
0x5451D7: mov     ecx, [esp+48h+var_14]
0x5451DB: mov     edx, [esp+48h+var_10]
0x5451DF: mov     [ebx], ebp
0x5451E1: mov     [ebx+10h], ebp
0x5451E4: mov     [ebx+20h], ebp
0x5451E7: mov     [ebx+30h], ebp
0x5451EA: mov     [ebx+4], eax
0x5451ED: mov     [ebx+14h], eax
0x5451F0: mov     [ebx+24h], eax
0x5451F3: mov     [ebx+34h], eax
0x5451F6: mov     [ebx+8], ecx
0x5451F9: mov     [ebx+18h], ecx
0x5451FC: mov     [ebx+28h], ecx
0x5451FF: mov     [ebx+38h], ecx
0x545202: push    40h ; '@'; Size
0x545204: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x54520C: mov     [ebx+0Ch], edx
0x54520F: mov     [ebx+1Ch], edx
0x545212: mov     [ebx+2Ch], edx
0x545215: mov     [ebx+3Ch], edx
0x545218: call    FormHeapAlloc
0x54521D: mov     edi, eax
0x54521F: add     esp, 4
0x545222: mov     [esp+48h+arg_0], edi
0x545226: test    edi, edi
0x545228: mov     [esp+48h+var_4], 1
0x545230: jz      short loc_545243
0x545232: push    offset sub_47EA50
0x545237: push    4
0x545239: push    10h
0x54523B: push    edi
0x54523C: call    sub_401080
0x545241: jmp     short loc_545245
0x545243: xor     edi, edi
0x545245: mov     eax, [esp+48h+var_18]
0x545249: mov     ecx, [esp+48h+var_14]
0x54524D: mov     edx, [esp+48h+var_10]
0x545251: mov     [edi], ebp
0x545253: mov     [edi+10h], ebp
0x545256: mov     [edi+20h], ebp
0x545259: mov     [edi+30h], ebp
0x54525C: mov     [edi+4], eax
0x54525F: mov     [edi+14h], eax
0x545262: mov     [edi+24h], eax
0x545265: mov     [edi+34h], eax
0x545268: mov     [edi+8], ecx
0x54526B: mov     [edi+18h], ecx
0x54526E: mov     [edi+28h], ecx
0x545271: mov     [edi+38h], ecx
0x545274: push    20h ; ' '; Size
0x545276: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x54527E: mov     [edi+0Ch], edx
0x545281: mov     [edi+1Ch], edx
0x545284: mov     [edi+2Ch], edx
0x545287: mov     [edi+3Ch], edx
0x54528A: call    FormHeapAlloc
0x54528F: fldz
0x545291: mov     ebp, eax
0x545293: fst     [esp+4Ch+var_1C]
0x545297: mov     eax, [esp+4Ch+var_1C]
0x54529B: fst     [esp+4Ch+var_18]
0x54529F: mov     ecx, [esp+4Ch+var_18]
0x5452A3: fst     [esp+4Ch+var_1C]
0x5452A7: fld1
0x5452A9: mov     edx, [esp+4Ch+var_1C]
0x5452AD: fst     [esp+4Ch+var_18]
0x5452B1: mov     [ebp+0], eax
0x5452B4: fst     [esp+4Ch+var_1C]
0x5452B8: mov     [ebp+4], ecx
0x5452BB: mov     eax, [esp+4Ch+var_18]
0x5452BF: fxch    st(1)
0x5452C1: mov     ecx, [esp+4Ch+var_1C]
0x5452C5: fstp    [esp+4Ch+var_18]
0x5452C9: mov     [ebp+8], edx
0x5452CC: mov     edx, [esp+4Ch+var_18]
0x5452D0: mov     [ebp+0Ch], eax
0x5452D3: fst     [esp+4Ch+var_1C]
0x5452D7: mov     eax, [esp+4Ch+var_1C]
0x5452DB: mov     [ebp+10h], ecx
0x5452DE: fstp    [esp+4Ch+var_18]
0x5452E2: mov     ecx, [esp+4Ch+var_18]
0x5452E6: push    20h ; ' '; Size
0x5452E8: mov     [ebp+14h], edx
0x5452EB: mov     [ebp+18h], eax
0x5452EE: mov     [ebp+1Ch], ecx
0x5452F1: call    FormHeapAlloc
0x5452F6: fldz
0x5452F8: fst     [esp+50h+var_1C]
0x5452FC: mov     [esp+50h+var_28], eax
0x545300: mov     edx, [esp+50h+var_1C]
0x545304: fst     [esp+50h+var_18]
0x545308: mov     ecx, [esp+50h+var_18]
0x54530C: fst     [esp+50h+var_1C]
0x545310: fld1
0x545312: mov     [eax], edx
0x545314: mov     edx, [esp+50h+var_1C]
0x545318: fst     [esp+50h+var_18]
0x54531C: fst     [esp+50h+var_1C]
0x545320: mov     [eax+4], ecx
0x545323: mov     ecx, [esp+50h+var_18]
0x545327: fxch    st(1)
0x545329: fstp    [esp+50h+var_18]
0x54532D: mov     [eax+8], edx
0x545330: mov     edx, [esp+50h+var_1C]
0x545334: mov     [eax+0Ch], ecx
0x545337: mov     ecx, [esp+50h+var_18]
0x54533B: fst     [esp+50h+var_1C]
0x54533F: mov     [eax+10h], edx
0x545342: mov     edx, [esp+50h+var_1C]
0x545346: fstp    [esp+50h+var_18]
0x54534A: mov     [eax+14h], ecx
0x54534D: mov     ecx, [esp+50h+var_18]
0x545351: mov     [eax+18h], edx
0x545354: mov     [eax+1Ch], ecx
0x545357: push    0Ch; Size
0x545359: call    FormHeapAlloc
0x54535E: mov     ecx, 1
0x545363: mov     edx, 2
0x545368: push    0Ch; Size
0x54536A: mov     [esp+58h+arg_0], eax
0x54536E: mov     word ptr [eax], 0
0x545373: mov     [eax+2], cx
0x545377: mov     [eax+4], dx
0x54537B: mov     [eax+6], dx
0x54537F: mov     [eax+8], cx
0x545383: mov     word ptr [eax+0Ah], 3
0x545389: call    FormHeapAlloc
0x54538E: mov     ecx, 1
0x545393: mov     edx, 2
0x545398: push    0C0h ; 'À'; Size
0x54539D: mov     [esp+5Ch+var_34], eax
0x5453A1: mov     word ptr [eax], 0
0x5453A6: mov     [eax+2], cx
0x5453AA: mov     [eax+4], dx
0x5453AE: mov     [eax+6], dx
0x5453B2: mov     [eax+8], cx
0x5453B6: mov     word ptr [eax+0Ah], 3
0x5453BC: call    FormHeapAlloc
0x5453C1: add     esp, 14h
0x5453C4: mov     [esp+48h+var_1C], eax
0x5453C8: test    eax, eax
0x5453CA: mov     [esp+48h+var_4], 2
0x5453D2: jz      short loc_5453F8
0x5453D4: mov     edx, [esp+48h+arg_0]
0x5453D8: mov     ecx, [esp+48h+var_30]
0x5453DC: push    edx
0x5453DD: mov     edx, [esp+4Ch+var_2C]
0x5453E1: push    2
0x5453E3: push    0
0x5453E5: push    1
0x5453E7: push    ebp
0x5453E8: push    ebx
0x5453E9: push    ecx
0x5453EA: push    edx
0x5453EB: push    4
0x5453ED: mov     ecx, eax
0x5453EF: call    sub_7174B0
0x5453F4: mov     ebx, eax
0x5453F6: jmp     short loc_5453FA
0x5453F8: xor     ebx, ebx
0x5453FA: mov     ebp, [esi+10h]
0x5453FD: cmp     ebp, ebx
0x5453FF: mov     [esp+48h+var_4], 0FFFFFFFFh
0x545407: jz      short loc_54543B
0x545409: test    ebp, ebp
0x54540B: jz      short loc_54542A
0x54540D: lea     eax, [ebp+4]
0x545410: push    eax; lpAddend
0x545411: call    dword ptr ds:0A2807Ch
0x545417: test    eax, eax
0x545419: jnz     short loc_54542A
0x54541B: test    ebp, ebp
0x54541D: jz      short loc_54542A
0x54541F: mov     edx, [ebp+0]
0x545422: mov     eax, [edx]
0x545424: push    1
0x545426: mov     ecx, ebp
0x545428: call    eax
0x54542A: test    ebx, ebx
0x54542C: mov     [esi+10h], ebx
0x54542F: jz      short loc_54543B
0x545431: add     ebx, 4
0x545434: push    ebx; lpAddend
0x545435: call    dword ptr ds:0A28078h
0x54543B: mov     ecx, [esi+10h]
0x54543E: push    offset aSunGeometry; "Sun Geometry"
0x545443: call    NiObjectNET_SetName
0x545448: mov     eax, [esi+10h]
0x54544B: or      word ptr [eax+18h], 2
