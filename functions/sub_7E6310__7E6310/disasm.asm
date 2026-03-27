0x7E6310: push    ebp
0x7E6311: mov     ebp, esp
0x7E6313: and     esp, 0FFFFFFF0h
0x7E6316: sub     esp, 144h
0x7E631C: fldz
0x7E631E: mov     eax, [ebp+arg_0]
0x7E6321: test    eax, eax
0x7E6323: fst     [esp+144h+var_88]
0x7E632A: fst     [esp+144h+var_8C]
0x7E6331: push    ebx
0x7E6332: fst     [esp+148h+var_90]
0x7E6339: push    esi
0x7E633A: fst     [esp+14Ch+var_94]
0x7E6341: push    edi
0x7E6342: fst     [esp+150h+var_9C]
0x7E6349: mov     ebx, ecx
0x7E634B: fst     [esp+150h+var_A0]
0x7E6352: fst     [esp+150h+var_A4]
0x7E6359: fst     [esp+150h+var_A8]
0x7E6360: fst     [esp+150h+var_B0]
0x7E6367: fst     [esp+150h+var_B4]
0x7E636E: fst     [esp+150h+var_B8]
0x7E6375: fst     [esp+150h+var_BC]
0x7E637C: fld1
0x7E637E: fst     [esp+150h+var_84]
0x7E6385: fst     [esp+150h+var_98]
0x7E638C: fst     [esp+150h+var_AC]
0x7E6393: fst     [esp+150h+var_C0]
0x7E639A: fst     [esp+150h+var_E4]
0x7E639E: fst     [esp+150h+var_F8]
0x7E63A2: fst     [esp+150h+var_10C]
0x7E63A6: fstp    [esp+150h+var_120]
0x7E63AA: fst     [esp+150h+var_E8]
0x7E63AE: fst     [esp+150h+var_EC]
0x7E63B2: fst     [esp+150h+var_F0]
0x7E63B6: fst     [esp+150h+var_F4]
0x7E63BA: fst     [esp+150h+var_FC]
0x7E63BE: fst     [esp+150h+var_100]
0x7E63C2: fst     [esp+150h+var_104]
0x7E63C6: fst     [esp+150h+var_108]
0x7E63CA: fst     [esp+150h+var_110]
0x7E63CE: fst     [esp+150h+var_114]
0x7E63D2: fst     [esp+150h+var_118]
0x7E63D6: fstp    [esp+150h+var_11C]
0x7E63DA: jz      short loc_7E63F1
0x7E63DC: mov     eax, [eax+28h]
0x7E63DF: mov     ecx, 10h
0x7E63E4: mov     esi, eax
0x7E63E6: lea     edi, [esp+150h+var_C0]
0x7E63ED: rep movsd
0x7E63EF: jmp     short loc_7E6410
0x7E63F1: mov     eax, [ebp+arg_4]
0x7E63F4: fld     dword ptr [eax+30h]
0x7E63F7: push    ecx
0x7E63F8: fstp    [esp+154h+var_154]; float
0x7E63FB: lea     ecx, [eax+24h]
0x7E63FE: push    ecx; int
0x7E63FF: push    eax; int
0x7E6400: lea     edx, [esp+15Ch+var_C0]
0x7E6407: push    edx; int
0x7E6408: call    sub_761AE0
0x7E640D: add     esp, 10h
0x7E6410: fld     dword ptr ds:0B3F92Ch
0x7E6416: mov     eax, ds:0B42EB8h
0x7E641B: fadd    [esp+150h+var_90]
0x7E6422: lea     edx, [esp+150h+var_80]
0x7E6429: push    edx
0x7E642A: lea     edi, [esp+154h+var_80]
0x7E6431: fstp    [esp+154h+var_90]
0x7E6438: fld     dword ptr ds:0B3F930h
0x7E643E: fadd    [esp+154h+var_8C]
0x7E6445: fstp    [esp+154h+var_8C]
0x7E644C: fld     dword ptr ds:0B3F934h
0x7E6452: fadd    [esp+154h+var_88]
0x7E6459: fstp    [esp+154h+var_88]
0x7E6460: mov     ecx, [eax+0Ch]
0x7E6463: mov     esi, [ecx]
0x7E6465: add     esi, 10h
0x7E6468: mov     ecx, 10h
0x7E646D: lea     eax, [esp+154h+var_C0]
0x7E6474: rep movsd
0x7E6476: push    eax
0x7E6477: lea     ecx, [esp+158h+var_40]
0x7E647E: push    ecx
0x7E647F: call    D3DXMatrixMultiply_0
0x7E6484: lea     edx, [esp+144h+var_114]
0x7E6488: push    edx
0x7E6489: mov     eax, edx
0x7E648B: mov     ecx, 10h
0x7E6490: lea     esi, [esp+148h+var_34]
0x7E6497: lea     edi, [esp+148h+var_114]
0x7E649B: push    eax
0x7E649C: rep movsd
0x7E649E: call    D3DXMatrixTranspose_0
0x7E64A3: fld     [esp+144h+var_114]
0x7E64A7: fstp    [esp+144h+var_134]
0x7E64AB: mov     ecx, [esp+144h+var_134]
0x7E64AF: fld     [esp+144h+var_110]
0x7E64B3: mov     ds:0B46070h, ecx
0x7E64B9: fstp    [esp+144h+var_130]
0x7E64BD: mov     edx, [esp+144h+var_130]
0x7E64C1: fld     [esp+144h+var_10C]
0x7E64C5: mov     ds:0B46074h, edx
0x7E64CB: fstp    [esp+144h+var_12C]
0x7E64CF: mov     eax, [esp+144h+var_12C]
0x7E64D3: fld     [esp+144h+var_108]
0x7E64D7: mov     ds:0B46078h, eax
0x7E64DC: fstp    [esp+144h+var_128]
0x7E64E0: mov     ecx, [esp+144h+var_128]
0x7E64E4: fld     [esp+144h+var_104]
0x7E64E8: mov     ds:0B4607Ch, ecx
0x7E64EE: fstp    [esp+144h+var_134]
0x7E64F2: mov     edx, [esp+144h+var_134]
0x7E64F6: fld     [esp+144h+var_100]
0x7E64FA: mov     ds:0B46080h, edx
0x7E6500: fstp    [esp+144h+var_130]
0x7E6504: mov     eax, [esp+144h+var_130]
0x7E6508: fld     [esp+144h+var_FC]
0x7E650C: mov     ds:0B46084h, eax
0x7E6511: fstp    [esp+144h+var_12C]
0x7E6515: mov     ecx, [esp+144h+var_12C]
0x7E6519: fld     [esp+144h+var_F8]
0x7E651D: mov     ds:0B46088h, ecx
0x7E6523: fstp    [esp+144h+var_128]
0x7E6527: mov     edx, [esp+144h+var_128]
0x7E652B: fld     [esp+144h+var_F4]
0x7E652F: mov     ds:0B4608Ch, edx
0x7E6535: fstp    [esp+144h+var_134]
0x7E6539: mov     eax, [esp+144h+var_134]
0x7E653D: fld     [esp+144h+var_F0]
0x7E6541: mov     ds:0B460A0h, eax
0x7E6546: fstp    [esp+144h+var_130]
0x7E654A: mov     ecx, [esp+144h+var_130]
0x7E654E: fld     [esp+144h+var_EC]
0x7E6552: mov     ds:0B460A4h, ecx
0x7E6558: fstp    [esp+144h+var_12C]
0x7E655C: mov     edx, [esp+144h+var_12C]
0x7E6560: fld     [esp+144h+var_E8]
0x7E6564: mov     ds:0B460A8h, edx
0x7E656A: fstp    [esp+144h+var_128]
0x7E656E: mov     eax, [esp+144h+var_128]
0x7E6572: fld     [esp+144h+var_E4]
0x7E6576: mov     ds:0B460ACh, eax
0x7E657B: fstp    [esp+144h+var_134]
0x7E657F: mov     ecx, [esp+144h+var_134]
0x7E6583: fld     [esp+144h+var_E0]
0x7E6587: mov     ds:0B460D0h, ecx
0x7E658D: fstp    [esp+144h+var_130]
0x7E6591: mov     edx, [esp+144h+var_130]
0x7E6595: fld     [esp+144h+var_DC]
0x7E6599: mov     ds:0B460D4h, edx
0x7E659F: fstp    [esp+144h+var_12C]
0x7E65A3: mov     eax, [esp+144h+var_12C]
0x7E65A7: fld     [esp+144h+var_D8]
0x7E65AB: mov     ds:0B460D8h, eax
0x7E65B0: mov     eax, ds:0B42EB8h
0x7E65B5: fstp    [esp+144h+var_128]
0x7E65B9: mov     ecx, [esp+144h+var_128]
0x7E65BD: mov     ds:0B460DCh, ecx
0x7E65C3: mov     ecx, [eax+0Ch]
0x7E65C6: mov     ecx, [ecx]
0x7E65C8: lea     edx, [esp+144h+var_C4]
0x7E65CF: push    edx
0x7E65D0: call    sub_405AD0
0x7E65D5: mov     esi, [eax]
0x7E65D7: mov     eax, [esp+144h+var_C4]
0x7E65DE: test    eax, eax
0x7E65E0: jz      short loc_7E6600
0x7E65E2: mov     edi, eax
0x7E65E4: add     eax, 4
0x7E65E7: push    eax; lpAddend
0x7E65E8: call    dword ptr ds:0A2807Ch
0x7E65EE: test    eax, eax
0x7E65F0: jnz     short loc_7E6600
0x7E65F2: test    edi, edi
0x7E65F4: jz      short loc_7E6600
0x7E65F6: mov     edx, [edi]
0x7E65F8: mov     eax, [edx]
0x7E65FA: push    1
0x7E65FC: mov     ecx, edi
0x7E65FE: call    eax
0x7E6600: mov     ecx, [esi+0ECh]
0x7E6606: mov     edx, [esi+0F0h]
0x7E660C: mov     eax, [esi+0F4h]
0x7E6612: mov     [esp+144h+var_C0], ecx
0x7E6619: fld     [esp+144h+var_C0]
0x7E6620: mov     ecx, [esi+88h]
0x7E6626: fstp    [esp+144h+var_124]
0x7E662A: mov     [esp+144h+var_BC], edx
0x7E6631: fld     [esp+144h+var_BC]
0x7E6638: mov     edx, [esi+8Ch]
0x7E663E: fstp    [esp+144h+var_120]
0x7E6642: mov     [esp+144h+var_B8], eax
0x7E6649: fld     [esp+144h+var_B8]
0x7E6650: mov     eax, [esi+90h]
0x7E6656: fstp    [esp+144h+var_11C]
0x7E665A: fld1
0x7E665C: mov     [esp+144h+var_D0], ecx
0x7E6660: mov     ecx, [esi+0F8h]
0x7E6666: fstp    [esp+144h+var_118]
0x7E666A: fld     [esp+144h+var_D0]
0x7E666E: mov     [esp+144h+var_CC], edx
0x7E6672: mov     edx, [esi+0FCh]
0x7E6678: mov     [esp+144h+var_134], ecx
0x7E667C: mov     ecx, [esp+144h+var_124]
0x7E6680: fstp    [esp+144h+var_124]
0x7E6684: fld     [esp+144h+var_CC]
0x7E6688: mov     [esp+144h+var_C8], eax
0x7E668C: mov     eax, [esi+100h]
0x7E6692: mov     [esp+144h+var_130], edx
0x7E6696: mov     edx, [esp+144h+var_120]
0x7E669A: fstp    [esp+144h+var_120]
0x7E669E: fld     [esp+144h+var_C8]
0x7E66A2: mov     [ebx+164h], ecx
0x7E66A8: mov     ecx, [esp+144h+var_118]
0x7E66AC: mov     [ebx+168h], edx
0x7E66B2: mov     edx, [esp+144h+var_124]
0x7E66B6: mov     [esp+144h+var_12C], eax
0x7E66BA: mov     eax, [esp+144h+var_11C]
0x7E66BE: fstp    [esp+144h+var_11C]
0x7E66C2: fld     [esp+144h+var_134]
0x7E66C6: mov     [ebx+16Ch], eax
0x7E66CC: mov     eax, [esp+144h+var_120]
0x7E66D0: fstp    [esp+144h+var_118]
0x7E66D4: mov     [ebx+174h], edx
0x7E66DA: mov     edx, [esp+144h+var_118]
0x7E66DE: mov     [ebx+170h], ecx
0x7E66E4: mov     ecx, [esp+144h+var_11C]
0x7E66E8: mov     [ebx+178h], eax
0x7E66EE: pop     edi
0x7E66EF: mov     [ebx+17Ch], ecx
0x7E66F5: pop     esi
0x7E66F6: mov     [ebx+180h], edx
0x7E66FC: pop     ebx
0x7E66FD: mov     esp, ebp
0x7E66FF: pop     ebp
0x7E6700: retn    8
