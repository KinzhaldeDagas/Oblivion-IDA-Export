0x7E6710: sub     esp, 0CCh
0x7E6716: push    ebx
0x7E6717: push    ebp
0x7E6718: push    esi
0x7E6719: mov     esi, [esp+0D8h+a8]
0x7E6720: push    edi
0x7E6721: mov     ebp, ecx
0x7E6723: mov     ecx, [ebp+14h]
0x7E6726: push    0
0x7E6728: push    esi
0x7E6729: call    sub_765480
0x7E672E: fld     dword ptr [esi+30h]
0x7E6731: fmul    dword ptr [esi]
0x7E6733: mov     eax, ds:0B42E90h
0x7E6738: lea     ecx, [esp+0DCh+var_8C]
0x7E673C: push    ecx
0x7E673D: fstp    [esp+0E0h+var_8C]
0x7E6741: push    0
0x7E6743: fld     dword ptr [esi+0Ch]
0x7E6746: lea     edx, [esp+0E4h+var_40]
0x7E674D: fmul    dword ptr [esi+30h]
0x7E6750: push    edx
0x7E6751: mov     [esp+0E8h+var_94], eax
0x7E6755: fstp    [esp+0E8h+var_88]
0x7E6759: fld     dword ptr [esi+18h]
0x7E675C: fmul    dword ptr [esi+30h]
0x7E675F: fstp    [esp+0E8h+var_84]
0x7E6763: fld     dword ptr [esi+4]
0x7E6766: fmul    dword ptr [esi+30h]
0x7E6769: fstp    [esp+0E8h+var_7C]
0x7E676D: fld     dword ptr [esi+10h]
0x7E6770: fmul    dword ptr [esi+30h]
0x7E6773: fstp    [esp+0E8h+var_78]
0x7E6777: fld     dword ptr [esi+1Ch]
0x7E677A: fmul    dword ptr [esi+30h]
0x7E677D: fstp    [esp+0E8h+var_74]
0x7E6781: fld     dword ptr [esi+8]
0x7E6784: fmul    dword ptr [esi+30h]
0x7E6787: fstp    [esp+0E8h+var_6C]
0x7E678B: fld     dword ptr [esi+14h]
0x7E678E: fmul    dword ptr [esi+30h]
0x7E6791: fstp    [esp+0E8h+var_68]
0x7E6798: fld     dword ptr [esi+20h]
0x7E679B: fmul    dword ptr [esi+30h]
0x7E679E: fstp    [esp+0E8h+var_64]
0x7E67A5: fld     dword ptr [esi+24h]
0x7E67A8: fstp    [esp+0E8h+var_5C]
0x7E67AF: fld     dword ptr [esi+28h]
0x7E67B2: fstp    [esp+0E8h+var_58]
0x7E67B9: fld     dword ptr [esi+2Ch]
0x7E67BC: fstp    [esp+0E8h+var_54]
0x7E67C3: fldz
0x7E67C5: fst     [esp+0E8h+var_80]
0x7E67C9: fst     [esp+0E8h+var_70]
0x7E67CD: fstp    [esp+0E8h+var_60]
0x7E67D4: fld1
0x7E67D6: fstp    [esp+0E8h+var_50]
0x7E67DD: call    D3DXMatrixInverse_0
0x7E67E2: fldz
0x7E67E4: fst     [esp+0DCh+var_B0]
0x7E67E8: lea     eax, [esp+0DCh+var_40]
0x7E67EF: fld1
0x7E67F1: push    eax
0x7E67F2: lea     ecx, [esp+0E0h+var_B0]
0x7E67F6: fstp    [esp+0E0h+var_AC]
0x7E67FA: push    ecx
0x7E67FB: lea     edx, [esp+0E4h+var_4C]
0x7E6802: push    edx
0x7E6803: fstp    [esp+0E8h+var_A8]
0x7E6807: call    D3DXVec3TransformNormal_0
0x7E680C: lea     eax, [esp+0DCh+var_4C]
0x7E6813: push    eax
0x7E6814: lea     ecx, [esp+0E0h+var_B0]
0x7E6818: push    ecx
0x7E6819: call    D3DXVec3Normalize_0
0x7E681E: fld     [esp+0DCh+var_B0]
0x7E6822: mov     edx, [esp+0DCh+a6]
0x7E6829: fstp    dword ptr ds:0B460B0h
0x7E682F: fld     [esp+0DCh+var_AC]
0x7E6833: fstp    dword ptr ds:0B460B4h
0x7E6839: mov     edi, [edx+18h]
0x7E683C: test    edi, edi
0x7E683E: jnz     short loc_7E6844
0x7E6840: xor     eax, eax
0x7E6842: jmp     short loc_7E6857
0x7E6844: mov     eax, [edi]
0x7E6846: mov     edx, [eax+54h]
0x7E6849: mov     ecx, edi
0x7E684B: call    edx
0x7E684D: xor     ecx, ecx
0x7E684F: cmp     eax, 4
0x7E6852: setz    cl
0x7E6855: mov     eax, ecx
0x7E6857: neg     eax
0x7E6859: sbb     eax, eax
0x7E685B: and     eax, edi
0x7E685D: mov     ebx, eax
0x7E685F: jz      loc_7E6A3B
0x7E6865: mov     eax, [ebx+1Ch]
0x7E6868: shr     eax, 1Ch
0x7E686B: movzx   edx, al
0x7E686E: push    edx
0x7E686F: call    GetShadowSceneNode
0x7E6874: add     esp, 4
0x7E6877: lea     ecx, [esp+0DCh+var_98]
0x7E687B: push    ecx
0x7E687C: mov     ecx, [eax+118h]
0x7E6882: call    sub_405AD0
0x7E6887: mov     edi, [eax]
0x7E6889: mov     eax, [esp+0DCh+var_98]
0x7E688D: test    eax, eax
0x7E688F: jz      short loc_7E68B3
0x7E6891: mov     [esp+0DCh+var_90], eax
0x7E6895: add     eax, 4
0x7E6898: push    eax; lpAddend
0x7E6899: call    dword ptr ds:0A2807Ch
0x7E689F: test    eax, eax
0x7E68A1: jnz     short loc_7E68B3
0x7E68A3: mov     ecx, [esp+0DCh+var_90]
0x7E68A7: test    ecx, ecx
0x7E68A9: jz      short loc_7E68B3
0x7E68AB: mov     edx, [ecx]
0x7E68AD: mov     eax, [edx]
0x7E68AF: push    1
0x7E68B1: call    eax
0x7E68B3: test    edi, edi
0x7E68B5: jz      loc_7E69F0
0x7E68BB: mov     ecx, [edi+108h]
0x7E68C1: mov     edx, [edi+10Ch]
0x7E68C7: mov     eax, [edi+110h]
0x7E68CD: mov     [esp+0DCh+var_A4], ecx
0x7E68D1: lea     ecx, [esp+0DCh+var_A4]
0x7E68D5: mov     [esp+0DCh+var_A0], edx
0x7E68D9: mov     [esp+0DCh+var_9C], eax
0x7E68DD: call    sub_43F350
0x7E68E2: fstp    st
0x7E68E4: mov     ecx, [edi+0E0h]
0x7E68EA: mov     edx, [edi+0E4h]
0x7E68F0: mov     eax, [edi+0E8h]
0x7E68F6: mov     [esp+0DCh+var_BC], ecx
0x7E68FA: fld     [esp+0DCh+var_BC]
0x7E68FE: fstp    [esp+0DCh+var_CC]
0x7E6902: mov     ecx, [esp+0DCh+var_CC]
0x7E6906: mov     [esp+0DCh+var_B8], edx
0x7E690A: fld     [esp+0DCh+var_B8]
0x7E690E: fstp    [esp+0DCh+var_C8]
0x7E6912: mov     edx, [esp+0DCh+var_C8]
0x7E6916: mov     [esp+0DCh+var_B4], eax
0x7E691A: fld     [esp+0DCh+var_B4]
0x7E691E: fstp    [esp+0DCh+var_C4]
0x7E6922: mov     eax, [esp+0DCh+var_C4]
0x7E6926: fld1
0x7E6928: mov     ds:0B460D0h, ecx
0x7E692E: fst     [esp+0DCh+var_C0]
0x7E6932: mov     ds:0B460D4h, edx
0x7E6938: mov     ecx, [esp+0DCh+var_C0]
0x7E693C: mov     ds:0B460D8h, eax
0x7E6941: mov     ds:0B460DCh, ecx
0x7E6947: mov     edx, [edi+0ECh]
0x7E694D: mov     eax, [edi+0F0h]
0x7E6953: mov     ecx, [edi+0F4h]
0x7E6959: mov     [esp+0DCh+var_BC], edx
0x7E695D: fld     [esp+0DCh+var_BC]
0x7E6961: fstp    [esp+0DCh+var_CC]
0x7E6965: mov     edx, [esp+0DCh+var_CC]
0x7E6969: mov     [esp+0DCh+var_B8], eax
0x7E696D: fld     [esp+0DCh+var_B8]
0x7E6971: fstp    [esp+0DCh+var_C8]
0x7E6975: mov     eax, [esp+0DCh+var_C8]
0x7E6979: mov     [esp+0DCh+var_B4], ecx
0x7E697D: fld     [esp+0DCh+var_B4]
0x7E6981: fstp    [esp+0DCh+var_C4]
0x7E6985: mov     ecx, [esp+0DCh+var_C4]
0x7E6989: mov     ds:0B46080h, edx
0x7E698F: fst     [esp+0DCh+var_C0]
0x7E6993: mov     edx, [esp+0DCh+var_C0]
0x7E6997: fld     [esp+0DCh+var_A4]
0x7E699B: mov     ds:0B46084h, eax
0x7E69A0: fchs
0x7E69A2: mov     ds:0B46088h, ecx
0x7E69A8: fstp    [esp+0DCh+var_CC]
0x7E69AC: mov     eax, [esp+0DCh+var_CC]
0x7E69B0: fld     [esp+0DCh+var_A0]
0x7E69B4: mov     ds:0B4608Ch, edx
0x7E69BA: fchs
0x7E69BC: mov     ds:0B46070h, eax
0x7E69C1: fstp    [esp+0DCh+var_C8]
0x7E69C5: mov     ecx, [esp+0DCh+var_C8]
0x7E69C9: fld     [esp+0DCh+var_9C]
0x7E69CD: mov     ds:0B46074h, ecx
0x7E69D3: fchs
0x7E69D5: fstp    [esp+0DCh+var_C4]
0x7E69D9: mov     edx, [esp+0DCh+var_C4]
0x7E69DD: mov     ds:0B46078h, edx
0x7E69E3: fstp    [esp+0DCh+var_C0]
0x7E69E7: mov     eax, [esp+0DCh+var_C0]
0x7E69EB: mov     ds:0B4607Ch, eax
0x7E69F0: mov     edi, [esp+0DCh+var_94]
0x7E69F4: cmp     edi, 197h
0x7E69FA: jnz     short loc_7E6A0E
0x7E69FC: mov     ecx, [esp+0DCh+a3]
0x7E6A03: push    esi
0x7E6A04: push    ecx
0x7E6A05: mov     ecx, ebp
0x7E6A07: call    sub_7E6310
0x7E6A0C: jmp     short loc_7E6A3B
0x7E6A0E: cmp     byte ptr ds:0B43344h, 0
0x7E6A15: jz      short loc_7E6A3B
0x7E6A17: mov     ecx, ebx
0x7E6A19: call    sub_7ED600
0x7E6A1E: test    ax, ax
0x7E6A21: jbe     short loc_7E6A3B
0x7E6A23: fld     dword ptr [esi+30h]
0x7E6A26: push    edi
0x7E6A27: push    ecx
0x7E6A28: fstp    [esp+0E4h+var_E4]
0x7E6A2B: lea     edx, [esp+0E4h+var_40]
0x7E6A32: push    edx
0x7E6A33: push    ebx
0x7E6A34: mov     ecx, ebp
0x7E6A36: call    sub_7E61C0
0x7E6A3B: mov     eax, [esp+0DCh+a9]
0x7E6A42: mov     ecx, [esp+0DCh+a7]
0x7E6A49: mov     edx, [esp+0DCh+a6]
0x7E6A50: push    eax; a9
0x7E6A51: mov     eax, [esp+0E0h+a5]
0x7E6A58: push    esi; a8
0x7E6A59: push    ecx; a7
0x7E6A5A: mov     ecx, [esp+0E8h+a4]
0x7E6A61: push    edx; a6
0x7E6A62: mov     edx, [esp+0ECh+a3]
0x7E6A69: push    eax; a5
0x7E6A6A: mov     eax, [esp+0F0h+a2]
0x7E6A71: push    ecx; a4
0x7E6A72: push    edx; a3
0x7E6A73: push    eax; a2
0x7E6A74: mov     ecx, ebp; this
0x7E6A76: call    sub_779710
0x7E6A7B: pop     edi
0x7E6A7C: pop     esi
0x7E6A7D: pop     ebp
0x7E6A7E: pop     ebx
0x7E6A7F: add     esp, 0CCh
0x7E6A85: retn    20h ; ' '
