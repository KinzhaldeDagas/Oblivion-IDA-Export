0x9A66F0: sub     esp, 220h
0x9A66F6: push    esi; int
0x9A66F7: push    edi
0x9A66F8: push    40h ; '@'
0x9A66FA: lea     eax, [esp+22Ch+var_15C]
0x9A6701: push    0
0x9A6703: push    eax
0x9A6704: call    __memset
0x9A6709: fld1
0x9A670B: mov     eax, [esp+234h+arg_8]
0x9A6712: fst     [esp+234h+var_120]; int
0x9A6719: add     eax, 0FFFFFFFFh; switch 22 cases
0x9A671C: fst     [esp+234h+var_134]; int
0x9A6723: add     esp, 0Ch
0x9A6726: fst     [esp+228h+var_148]; int
0x9A672D: cmp     eax, 15h
0x9A6730: fst     [esp+228h+var_15C]; int
0x9A6737: ja      def_9A673D
0x9A673D: jmp     ds:jpt_9A673D[eax*4]; switch jump
0x9A6744: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 1
0x9A674B: fstp    st
0x9A674D: test    eax, eax
0x9A674F: jz      loc_9A72FF
0x9A6755: fld     dword ptr [eax+0DCh]
0x9A675B: mov     eax, [esp+228h+arg_0]
0x9A6762: fstp    dword ptr [eax]
0x9A6764: pop     edi
0x9A6765: fldz
0x9A6767: pop     esi
0x9A6768: fst     dword ptr [eax+4]
0x9A676B: fst     dword ptr [eax+8]
0x9A676E: fstp    dword ptr [eax+0Ch]
0x9A6771: mov     al, 1
0x9A6773: add     esp, 220h
0x9A6779: retn
0x9A677A: mov     ecx, [esp+228h+arg_C]; jumptable 009A673D case 2
0x9A6781: test    ecx, ecx
0x9A6783: mov     eax, [esp+228h+arg_0]
0x9A678A: jz      short loc_9A67B4
0x9A678C: fld     dword ptr [ecx+0E0h]
0x9A6792: pop     edi
0x9A6793: fstp    dword ptr [eax]
0x9A6795: pop     esi
0x9A6796: fld     dword ptr [ecx+0E4h]
0x9A679C: fstp    dword ptr [eax+4]
0x9A679F: fld     dword ptr [ecx+0E8h]
0x9A67A5: fstp    dword ptr [eax+8]
0x9A67A8: fstp    dword ptr [eax+0Ch]
0x9A67AB: mov     al, 1
0x9A67AD: add     esp, 220h
0x9A67B3: retn
0x9A67B4: fldz
0x9A67B6: pop     edi
0x9A67B7: fst     dword ptr [eax]
0x9A67B9: pop     esi
0x9A67BA: fst     dword ptr [eax+4]
0x9A67BD: fstp    dword ptr [eax+8]
0x9A67C0: fstp    dword ptr [eax+0Ch]
0x9A67C3: xor     al, al
0x9A67C5: add     esp, 220h
0x9A67CB: retn
0x9A67CC: mov     ecx, [esp+228h+arg_C]; jumptable 009A673D case 3
0x9A67D3: test    ecx, ecx
0x9A67D5: mov     eax, [esp+228h+arg_0]
0x9A67DC: jz      short loc_9A67B4
0x9A67DE: fld     dword ptr [ecx+0ECh]
0x9A67E4: pop     edi
0x9A67E5: fstp    dword ptr [eax]
0x9A67E7: pop     esi
0x9A67E8: fld     dword ptr [ecx+0F0h]
0x9A67EE: fstp    dword ptr [eax+4]
0x9A67F1: fld     dword ptr [ecx+0F4h]
0x9A67F7: fstp    dword ptr [eax+8]
0x9A67FA: fstp    dword ptr [eax+0Ch]
0x9A67FD: mov     al, 1
0x9A67FF: add     esp, 220h
0x9A6805: retn
0x9A6806: mov     ecx, [esp+228h+arg_C]; jumptable 009A673D case 4
0x9A680D: test    ecx, ecx
0x9A680F: mov     eax, [esp+228h+arg_0]
0x9A6816: jz      short loc_9A67B4
0x9A6818: fld     dword ptr [ecx+0F8h]
0x9A681E: pop     edi
0x9A681F: fstp    dword ptr [eax]
0x9A6821: pop     esi
0x9A6822: fld     dword ptr [ecx+0FCh]
0x9A6828: fstp    dword ptr [eax+4]
0x9A682B: fld     dword ptr [ecx+100h]
0x9A6831: fstp    dword ptr [eax+8]
0x9A6834: fstp    dword ptr [eax+0Ch]
0x9A6837: mov     al, 1
0x9A6839: add     esp, 220h
0x9A683F: retn
0x9A6840: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 5
0x9A6847: test    eax, eax
0x9A6849: jz      short loc_9A68A9
0x9A684B: mov     ecx, [eax+0E0h]
0x9A6851: mov     edx, [eax+0E4h]
0x9A6857: mov     [esp+228h+var_220], ecx
0x9A685B: mov     ecx, [eax+0E8h]
0x9A6861: mov     [esp+228h+var_21C], edx
0x9A6865: mov     [esp+228h+var_218], ecx
0x9A6869: fstp    st
0x9A686B: push    ecx
0x9A686C: fld     dword ptr [eax+0DCh]
0x9A6872: lea     ecx, [esp+22Ch+var_220]
0x9A6876: fstp    [esp+22Ch+var_22C]; float
0x9A6879: call    NiPoint3__MutliplyByValue
0x9A687E: mov     eax, [esp+228h+arg_0]
0x9A6885: fld     [esp+228h+var_220]
0x9A6889: pop     edi
0x9A688A: fstp    dword ptr [eax]
0x9A688C: pop     esi
0x9A688D: fld     [esp+220h+var_21C]
0x9A6891: fstp    dword ptr [eax+4]
0x9A6894: fld     [esp+220h+var_218]
0x9A6898: fstp    dword ptr [eax+8]
0x9A689B: fld1
0x9A689D: fstp    dword ptr [eax+0Ch]
0x9A68A0: mov     al, 1
0x9A68A2: add     esp, 220h
0x9A68A8: retn
0x9A68A9: mov     eax, [esp+228h+arg_0]
0x9A68B0: fldz
0x9A68B2: fst     dword ptr [eax]
0x9A68B4: pop     edi
0x9A68B5: fst     dword ptr [eax+4]
0x9A68B8: pop     esi
0x9A68B9: fstp    dword ptr [eax+8]
0x9A68BC: fstp    dword ptr [eax+0Ch]
0x9A68BF: xor     al, al
0x9A68C1: add     esp, 220h
0x9A68C7: retn
0x9A68C8: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 6
0x9A68CF: test    eax, eax
0x9A68D1: jz      short loc_9A68A9
0x9A68D3: mov     edx, [eax+0ECh]
0x9A68D9: mov     ecx, [eax+0F0h]
0x9A68DF: mov     [esp+228h+var_220], edx
0x9A68E3: mov     edx, [eax+0F4h]
0x9A68E9: mov     [esp+228h+var_21C], ecx
0x9A68ED: mov     [esp+228h+var_218], edx
0x9A68F1: jmp     loc_9A6869
0x9A68F6: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 7
0x9A68FD: test    eax, eax
0x9A68FF: jz      short loc_9A68A9
0x9A6901: mov     ecx, [eax+0F8h]
0x9A6907: mov     edx, [eax+0FCh]
0x9A690D: mov     [esp+228h+var_220], ecx
0x9A6911: mov     ecx, [eax+100h]
0x9A6917: jmp     loc_9A6861
0x9A691C: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 8
0x9A6923: test    esi, esi
0x9A6925: jz      short loc_9A68A9
0x9A6927: push    esi
0x9A6928: fstp    st
0x9A692A: push    offset dword_B3FCFC
0x9A692F: call    sub_435CC0
0x9A6934: add     esp, 8
0x9A6937: test    al, al
0x9A6939: mov     eax, [esp+228h+arg_0]
0x9A6940: jz      short loc_9A6971
0x9A6942: fld     dword ptr [esi+108h]
0x9A6948: fld     ds:dbl_AB2C20
0x9A694E: fmul    st(1), st
0x9A6950: fxch    st(1)
0x9A6952: fstp    [esp+228h+var_220]
0x9A6956: fld     dword ptr [esi+10Ch]
0x9A695C: fmul    st, st(1)
0x9A695E: fstp    [esp+228h+var_21C]
0x9A6962: fmul    dword ptr [esi+110h]
0x9A6968: fstp    [esp+228h+var_218]
0x9A696C: jmp     loc_9A6885
0x9A6971: fld     dword ptr [esi+88h]
0x9A6977: pop     edi
0x9A6978: fstp    dword ptr [eax]
0x9A697A: fld     dword ptr [esi+8Ch]
0x9A6980: fstp    dword ptr [eax+4]
0x9A6983: fld     dword ptr [esi+90h]
0x9A6989: pop     esi
0x9A698A: fstp    dword ptr [eax+8]
0x9A698D: fld1
0x9A698F: fstp    dword ptr [eax+0Ch]
0x9A6992: mov     al, 1
0x9A6994: add     esp, 220h
0x9A699A: retn
0x9A699B: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 9
0x9A69A2: test    esi, esi
0x9A69A4: jz      loc_9A68A9
0x9A69AA: mov     ecx, [esp+228h+arg_28]
0x9A69B1: fstp    st
0x9A69B3: lea     edx, [esp+228h+var_11C]
0x9A69BA: push    edx
0x9A69BB: call    sub_718A80
0x9A69C0: push    esi
0x9A69C1: push    offset dword_B3FCFC
0x9A69C6: call    sub_435CC0
0x9A69CB: add     esp, 8
0x9A69CE: test    al, al
0x9A69D0: jz      short loc_9A6A2E
0x9A69D2: fld     dword ptr [esi+108h]
0x9A69D8: lea     eax, [esp+228h+var_210]
0x9A69DC: fld     ds:dbl_AB2C20
0x9A69E2: push    eax
0x9A69E3: fmul    st(1), st
0x9A69E5: lea     ecx, [esp+22Ch+var_AC]
0x9A69EC: fxch    st(1)
0x9A69EE: push    ecx
0x9A69EF: lea     ecx, [esp+230h+var_11C]
0x9A69F6: fstp    [esp+230h+var_210]
0x9A69FA: fld     dword ptr [esi+10Ch]
0x9A6A00: fmul    st, st(1)
0x9A6A02: fstp    [esp+230h+var_20C]
0x9A6A06: fmul    dword ptr [esi+110h]
0x9A6A0C: fstp    [esp+230h+var_208]
0x9A6A10: call    sub_53D4B0
0x9A6A15: mov     edx, [eax]
0x9A6A17: mov     ecx, [eax+4]
0x9A6A1A: mov     [esp+228h+var_220], edx
0x9A6A1E: mov     edx, [eax+8]
0x9A6A21: mov     [esp+228h+var_21C], ecx
0x9A6A25: mov     [esp+228h+var_218], edx
0x9A6A29: jmp     loc_9A687E
0x9A6A2E: add     esi, 88h ; 'ˆ'
0x9A6A34: push    esi
0x9A6A35: lea     eax, [esp+22Ch+var_D0]
0x9A6A3C: push    eax
0x9A6A3D: lea     ecx, [esp+230h+var_11C]
0x9A6A44: call    sub_53D4B0
0x9A6A49: mov     ecx, [eax]
0x9A6A4B: mov     [esp+228h+var_220], ecx
0x9A6A4F: mov     edx, [eax+4]
0x9A6A52: mov     [esp+228h+var_21C], edx
0x9A6A56: mov     eax, [eax+8]
0x9A6A59: mov     [esp+228h+var_218], eax
0x9A6A5D: jmp     loc_9A687E
0x9A6A62: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 10
0x9A6A69: test    esi, esi
0x9A6A6B: jz      loc_9A6B1C
0x9A6A71: push    esi
0x9A6A72: fstp    st
0x9A6A74: push    offset dword_B3FD80
0x9A6A79: call    sub_435CC0
0x9A6A7E: add     esp, 8
0x9A6A81: test    al, al
0x9A6A83: jz      short loc_9A6AC4
0x9A6A85: add     esi, 88h ; 'ˆ'
0x9A6A8B: push    esi
0x9A6A8C: lea     ecx, [esp+22Ch+var_DC]
0x9A6A93: push    ecx
0x9A6A94: mov     ecx, [esp+230h+arg_2C]
0x9A6A9B: call    sub_4121A0
0x9A6AA0: mov     edx, [eax]
0x9A6AA2: mov     ecx, [eax+4]
0x9A6AA5: mov     [esp+228h+var_220], edx
0x9A6AA9: mov     edx, [eax+8]
0x9A6AAC: mov     [esp+228h+var_21C], ecx
0x9A6AB0: lea     ecx, [esp+228h+var_220]
0x9A6AB4: mov     [esp+228h+var_218], edx
0x9A6AB8: call    sub_43F350
0x9A6ABD: fstp    st
0x9A6ABF: jmp     loc_9A687E
0x9A6AC4: push    esi
0x9A6AC5: push    offset dword_B3FCFC
0x9A6ACA: call    sub_435CC0
0x9A6ACF: add     esp, 8
0x9A6AD2: test    al, al
0x9A6AD4: jz      short loc_9A6AF9
0x9A6AD6: mov     eax, [esi+108h]
0x9A6ADC: mov     ecx, [esi+10Ch]
0x9A6AE2: mov     edx, [esi+110h]
0x9A6AE8: mov     [esp+228h+var_218], edx
0x9A6AEC: mov     [esp+228h+var_21C], ecx
0x9A6AF0: mov     [esp+228h+var_220], eax
0x9A6AF4: jmp     loc_9A687E
0x9A6AF9: mov     eax, [esi+114h]
0x9A6AFF: mov     ecx, [esi+118h]
0x9A6B05: mov     edx, [esi+11Ch]
0x9A6B0B: mov     [esp+228h+var_218], edx
0x9A6B0F: mov     [esp+228h+var_21C], ecx
0x9A6B13: mov     [esp+228h+var_220], eax
0x9A6B17: jmp     loc_9A687E
0x9A6B1C: mov     eax, [esp+228h+arg_0]
0x9A6B23: fst     dword ptr [eax]
0x9A6B25: pop     edi
0x9A6B26: fldz
0x9A6B28: pop     esi
0x9A6B29: fst     dword ptr [eax+4]
0x9A6B2C: fstp    dword ptr [eax+8]
0x9A6B2F: fstp    dword ptr [eax+0Ch]
0x9A6B32: xor     al, al
0x9A6B34: add     esp, 220h
0x9A6B3A: retn
0x9A6B3B: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 11
0x9A6B42: test    esi, esi
0x9A6B44: jz      short loc_9A6B1C
0x9A6B46: push    esi
0x9A6B47: fstp    st
0x9A6B49: push    offset dword_B3FD80
0x9A6B4E: call    sub_435CC0
0x9A6B53: add     esp, 8
0x9A6B56: test    al, al
0x9A6B58: jz      short loc_9A6B96
0x9A6B5A: mov     ecx, [esp+228h+arg_2C]
0x9A6B61: add     esi, 88h ; 'ˆ'
0x9A6B67: push    esi
0x9A6B68: lea     eax, [esp+22Ch+var_C4]
0x9A6B6F: push    eax
0x9A6B70: call    sub_4121A0
0x9A6B75: mov     ecx, [eax]
0x9A6B77: mov     [esp+228h+var_220], ecx
0x9A6B7B: mov     edx, [eax+4]
0x9A6B7E: mov     [esp+228h+var_21C], edx
0x9A6B82: mov     eax, [eax+8]
0x9A6B85: lea     ecx, [esp+228h+var_220]
0x9A6B89: mov     [esp+228h+var_218], eax
0x9A6B8D: call    sub_43F350
0x9A6B92: fstp    st
0x9A6B94: jmp     short loc_9A6BDA
0x9A6B96: push    esi
0x9A6B97: push    offset dword_B3FCFC
0x9A6B9C: call    sub_435CC0
0x9A6BA1: add     esp, 8
0x9A6BA4: test    al, al
0x9A6BA6: jz      short loc_9A6BBC
0x9A6BA8: mov     ecx, [esi+108h]
0x9A6BAE: mov     edx, [esi+10Ch]
0x9A6BB4: mov     eax, [esi+110h]
0x9A6BBA: jmp     short loc_9A6BCE
0x9A6BBC: mov     ecx, [esi+114h]
0x9A6BC2: mov     edx, [esi+118h]
0x9A6BC8: mov     eax, [esi+11Ch]
0x9A6BCE: mov     [esp+228h+var_218], eax
0x9A6BD2: mov     [esp+228h+var_21C], edx
0x9A6BD6: mov     [esp+228h+var_220], ecx
0x9A6BDA: lea     ecx, [esp+228h+var_220]
0x9A6BDE: push    ecx
0x9A6BDF: mov     ecx, [esp+22Ch+arg_28]
0x9A6BE6: lea     edx, [esp+22Ch+var_E8]
0x9A6BED: push    edx
0x9A6BEE: lea     eax, [esp+230h+var_7C]
0x9A6BF5: push    eax
0x9A6BF6: call    sub_710400
0x9A6BFB: mov     ecx, eax
0x9A6BFD: call    sub_7101F0
0x9A6C02: jmp     loc_9A6A49
0x9A6C07: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 12
0x9A6C0E: test    esi, esi
0x9A6C10: jz      loc_9A6CE0
0x9A6C16: fldz
0x9A6C18: push    esi
0x9A6C19: fst     [esp+22Ch+var_17C]
0x9A6C20: push    offset dword_B3FCFC
0x9A6C25: fst     [esp+230h+var_18C]
0x9A6C2C: fstp    [esp+230h+var_19C]
0x9A6C33: fstp    [esp+230h+var_16C]
0x9A6C3A: call    sub_435CC0
0x9A6C3F: add     esp, 8
0x9A6C42: test    al, al
0x9A6C44: jz      short loc_9A6CAE
0x9A6C46: fld     dword ptr [esi+108h]
0x9A6C4C: push    ecx
0x9A6C4D: fld     ds:dbl_AB2C20
0x9A6C53: lea     ecx, [esp+22Ch+var_210]
0x9A6C57: fmul    st(1), st
0x9A6C59: add     esi, 64h ; 'd'
0x9A6C5C: fxch    st(1)
0x9A6C5E: lea     edx, [esp+22Ch+var_1A8]
0x9A6C65: fstp    [esp+22Ch+var_210]
0x9A6C69: fld     dword ptr [esi+0A8h]
0x9A6C6F: fmul    st, st(1)
0x9A6C71: fstp    [esp+22Ch+var_20C]
0x9A6C75: fmul    dword ptr [esi+0ACh]
0x9A6C7B: fstp    [esp+22Ch+var_208]
0x9A6C7F: fld     dword ptr [esi+30h]
0x9A6C82: fstp    [esp+22Ch+var_22C]; float
0x9A6C85: push    ecx; int
0x9A6C86: push    esi; int
0x9A6C87: push    edx; int
0x9A6C88: call    sub_761AE0
0x9A6C8D: mov     ecx, [esp+238h+arg_0]
0x9A6C94: add     esp, 10h
0x9A6C97: lea     eax, [esp+228h+var_1A8]
0x9A6C9E: call    sub_9A4770
0x9A6CA3: pop     edi
0x9A6CA4: mov     al, 1
0x9A6CA6: pop     esi
0x9A6CA7: add     esp, 220h
0x9A6CAD: retn
0x9A6CAE: add     esi, 64h ; 'd'
0x9A6CB1: lea     eax, [esp+228h+var_1A8]
0x9A6CB8: push    esi
0x9A6CB9: push    eax
0x9A6CBA: call    sub_7640A0
0x9A6CBF: mov     ecx, [esp+230h+arg_0]
0x9A6CC6: add     esp, 8
0x9A6CC9: lea     eax, [esp+228h+var_1A8]
0x9A6CD0: call    sub_9A4770
0x9A6CD5: pop     edi
0x9A6CD6: mov     al, 1
0x9A6CD8: pop     esi
0x9A6CD9: add     esp, 220h
0x9A6CDF: retn
0x9A6CE0: mov     ecx, [esp+228h+arg_0]
0x9A6CE7: fstp    st
0x9A6CE9: lea     eax, [esp+228h+var_15C]
0x9A6CF0: call    sub_9A4770
0x9A6CF5: pop     edi
0x9A6CF6: xor     al, al
0x9A6CF8: pop     esi
0x9A6CF9: add     esp, 220h
0x9A6CFF: retn
0x9A6D00: push    ebx; jumptable 009A673D case 13
0x9A6D01: fstp    st
0x9A6D03: mov     ebx, [esp+22Ch+arg_C]
0x9A6D0A: test    ebx, ebx
0x9A6D0C: jz      loc_9A6E15
0x9A6D12: lea     ecx, [esp+22Ch+var_1A8]
0x9A6D19: push    ecx
0x9A6D1A: mov     ecx, [esp+230h+arg_28]
0x9A6D21: call    sub_718A80
0x9A6D26: fldz
0x9A6D28: fst     [esp+22Ch+var_1BC]
0x9A6D2C: push    ebx
0x9A6D2D: fst     [esp+230h+var_1CC]
0x9A6D31: push    offset dword_B3FCFC
0x9A6D36: fstp    [esp+234h+var_1DC]
0x9A6D3A: fld1
0x9A6D3C: fstp    [esp+234h+var_1AC]
0x9A6D43: call    sub_435CC0
0x9A6D48: add     esp, 8
0x9A6D4B: test    al, al
0x9A6D4D: jz      loc_9A6DD3
0x9A6D53: fld     dword ptr [ebx+108h]
0x9A6D59: lea     esi, [ebx+64h]
0x9A6D5C: fld     ds:dbl_AB2C20
0x9A6D62: mov     ecx, 0Dh
0x9A6D67: fmul    st(1), st
0x9A6D69: lea     edi, [esp+22Ch+var_11C]
0x9A6D70: fxch    st(1)
0x9A6D72: rep movsd
0x9A6D74: fstp    [esp+22Ch+var_220]
0x9A6D78: fld     dword ptr [ebx+10Ch]
0x9A6D7E: fmul    st, st(1)
0x9A6D80: fstp    [esp+22Ch+var_21C]
0x9A6D84: fmul    dword ptr [ebx+110h]
0x9A6D8A: mov     edx, [esp+22Ch+var_220]
0x9A6D8E: mov     eax, [esp+22Ch+var_21C]
0x9A6D92: fstp    [esp+22Ch+var_218]
0x9A6D96: mov     ecx, [esp+22Ch+var_218]
0x9A6D9A: mov     [esp+22Ch+var_F8], edx
0x9A6DA1: lea     edx, [esp+22Ch+var_11C]
0x9A6DA8: mov     [esp+22Ch+var_F4], eax
0x9A6DAF: push    edx
0x9A6DB0: lea     eax, [esp+230h+var_34]
0x9A6DB7: mov     [esp+230h+var_F0], ecx
0x9A6DBE: push    eax
0x9A6DBF: lea     ecx, [esp+234h+var_1A8]
0x9A6DC6: call    sub_53D7A0
0x9A6DCB: push    eax
0x9A6DCC: lea     ecx, [esp+230h+var_1E8]
0x9A6DD0: push    ecx
0x9A6DD1: jmp     short loc_9A6DF1
0x9A6DD3: add     ebx, 64h ; 'd'
0x9A6DD6: push    ebx
0x9A6DD7: lea     edx, [esp+230h+var_15C]
0x9A6DDE: push    edx
0x9A6DDF: lea     ecx, [esp+234h+var_1A8]
0x9A6DE6: call    sub_53D7A0
0x9A6DEB: push    eax
0x9A6DEC: lea     eax, [esp+230h+var_1E8]
0x9A6DF0: push    eax
0x9A6DF1: call    sub_7640A0
0x9A6DF6: mov     ecx, [esp+234h+arg_0]
0x9A6DFD: add     esp, 8
0x9A6E00: lea     eax, [esp+22Ch+var_1E8]
0x9A6E04: call    sub_9A4770
0x9A6E09: pop     ebx
0x9A6E0A: pop     edi
0x9A6E0B: mov     al, 1
0x9A6E0D: pop     esi
0x9A6E0E: add     esp, 220h
0x9A6E14: retn
0x9A6E15: mov     ecx, [esp+22Ch+arg_0]
0x9A6E1C: lea     eax, [esp+22Ch+var_15C]
0x9A6E23: call    sub_9A4770
0x9A6E28: pop     ebx
0x9A6E29: pop     edi
0x9A6E2A: xor     al, al
0x9A6E2C: pop     esi
0x9A6E2D: add     esp, 220h
0x9A6E33: retn
0x9A6E34: mov     edi, [esp+228h+arg_C]; jumptable 009A673D case 14
0x9A6E3B: fstp    st
0x9A6E3D: test    edi, edi
0x9A6E3F: jz      loc_9A6ECA
0x9A6E45: push    edi
0x9A6E46: push    offset dword_B40190
0x9A6E4B: call    sub_435CC0
0x9A6E50: add     esp, 8
0x9A6E53: test    al, al
0x9A6E55: jz      short loc_9A6EA5
0x9A6E57: fld1
0x9A6E59: mov     esi, [esp+228h+arg_0]
0x9A6E60: fstp    dword ptr [esi]
0x9A6E62: fld     dword ptr [edi+120h]
0x9A6E68: fmul    flt_B3F9A4
0x9A6E6E: fdiv    ds:dbl_A3F418
0x9A6E74: fstp    [esp+228h+var_214]
0x9A6E78: fld     [esp+228h+var_214]
0x9A6E7C: call    __CIcos
0x9A6E81: fstp    [esp+228h+var_214]
0x9A6E85: fld     [esp+228h+var_214]
0x9A6E89: mov     al, 1
0x9A6E8B: fstp    dword ptr [esi+4]
0x9A6E8E: fld     dword ptr [edi+124h]
0x9A6E94: pop     edi
0x9A6E95: fstp    dword ptr [esi+8]
0x9A6E98: fldz
0x9A6E9A: fstp    dword ptr [esi+0Ch]
0x9A6E9D: pop     esi
0x9A6E9E: add     esp, 220h
0x9A6EA4: retn
0x9A6EA5: mov     eax, [esp+228h+arg_0]
0x9A6EAC: fld     ds:flt_A30634
0x9A6EB2: fst     dword ptr [eax]
0x9A6EB4: pop     edi
0x9A6EB5: fstp    dword ptr [eax+4]
0x9A6EB8: pop     esi
0x9A6EB9: fldz
0x9A6EBB: fst     dword ptr [eax+8]
0x9A6EBE: fstp    dword ptr [eax+0Ch]
0x9A6EC1: mov     al, 1
0x9A6EC3: add     esp, 220h
0x9A6EC9: retn
0x9A6ECA: mov     eax, [esp+228h+arg_0]
0x9A6ED1: fld     ds:flt_A30634
0x9A6ED7: fst     dword ptr [eax]
0x9A6ED9: pop     edi
0x9A6EDA: fstp    dword ptr [eax+4]
0x9A6EDD: pop     esi
0x9A6EDE: fldz
0x9A6EE0: fst     dword ptr [eax+8]
0x9A6EE3: fstp    dword ptr [eax+0Ch]
0x9A6EE6: xor     al, al
0x9A6EE8: add     esp, 220h
0x9A6EEE: retn
0x9A6EEF: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 15
0x9A6EF6: test    esi, esi
0x9A6EF8: jz      short loc_9A6F59
0x9A6EFA: push    esi
0x9A6EFB: fstp    st
0x9A6EFD: push    offset dword_B3FD80
0x9A6F02: call    NiRTTI__IsObjectOfRTTIType
0x9A6F07: add     esp, 8
0x9A6F0A: test    al, al
0x9A6F0C: mov     eax, [esp+228h+arg_0]
0x9A6F13: jz      short loc_9A6F3F
0x9A6F15: fld     dword ptr [esi+108h]
0x9A6F1B: pop     edi
0x9A6F1C: fstp    dword ptr [eax]
0x9A6F1E: fld     dword ptr [esi+10Ch]
0x9A6F24: fstp    dword ptr [eax+4]
0x9A6F27: fld     dword ptr [esi+110h]
0x9A6F2D: pop     esi
0x9A6F2E: fstp    dword ptr [eax+8]
0x9A6F31: fldz
0x9A6F33: fstp    dword ptr [eax+0Ch]
0x9A6F36: mov     al, 1
0x9A6F38: add     esp, 220h
0x9A6F3E: retn
0x9A6F3F: fld1
0x9A6F41: pop     edi
0x9A6F42: fstp    dword ptr [eax]
0x9A6F44: pop     esi
0x9A6F45: fldz
0x9A6F47: fst     dword ptr [eax+4]
0x9A6F4A: fst     dword ptr [eax+8]
0x9A6F4D: fstp    dword ptr [eax+0Ch]
0x9A6F50: mov     al, 1
0x9A6F52: add     esp, 220h
0x9A6F58: retn
0x9A6F59: mov     eax, [esp+228h+arg_0]
0x9A6F60: fstp    dword ptr [eax]
0x9A6F62: pop     edi
0x9A6F63: fldz
0x9A6F65: pop     esi
0x9A6F66: fst     dword ptr [eax+4]
0x9A6F69: fst     dword ptr [eax+8]
0x9A6F6C: fstp    dword ptr [eax+0Ch]
0x9A6F6F: xor     al, al
0x9A6F71: add     esp, 220h
0x9A6F77: retn
0x9A6F78: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 16
0x9A6F7F: test    eax, eax
0x9A6F81: jz      loc_9A6CE0
0x9A6F87: fldz
0x9A6F89: push    ecx
0x9A6F8A: fst     [esp+22Ch+var_1BC]
0x9A6F8E: add     eax, 10Ch
0x9A6F93: fst     [esp+22Ch+var_1CC]
0x9A6F97: fstp    [esp+22Ch+var_1DC]
0x9A6F9B: fst     [esp+22Ch+var_1AC]
0x9A6FA2: fstp    [esp+22Ch+var_22C]; float
0x9A6FA5: push    offset Vector3_InitValue?; int
0x9A6FAA: push    eax; int
0x9A6FAB: lea     ecx, [esp+234h+var_1E8]
0x9A6FAF: push    ecx; int
0x9A6FB0: call    sub_761AE0
0x9A6FB5: mov     ecx, [esp+238h+arg_0]
0x9A6FBC: add     esp, 10h
0x9A6FBF: lea     eax, [esp+228h+var_1E8]
0x9A6FC3: call    sub_9A4770
0x9A6FC8: pop     edi
0x9A6FC9: mov     al, 1
0x9A6FCB: pop     esi
0x9A6FCC: add     esp, 220h
0x9A6FD2: retn
0x9A6FD3: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 17
0x9A6FDA: test    eax, eax
0x9A6FDC: jz      loc_9A6CE0
0x9A6FE2: fldz
0x9A6FE4: push    ecx
0x9A6FE5: mov     ecx, [esp+22Ch+arg_28]
0x9A6FEC: fst     [esp+22Ch+var_1BC]
0x9A6FF0: fst     [esp+22Ch+var_1CC]
0x9A6FF4: add     eax, 10Ch
0x9A6FF9: fstp    [esp+22Ch+var_1DC]
0x9A6FFD: lea     edx, [esp+22Ch+var_A0]
0x9A7004: fst     [esp+22Ch+var_1AC]
0x9A700B: fstp    [esp+22Ch+var_22C]
0x9A700E: push    offset Vector3_InitValue?
0x9A7013: push    eax
0x9A7014: push    edx
0x9A7015: lea     eax, [esp+238h+var_58]
0x9A701C: push    eax
0x9A701D: call    sub_710400
0x9A7022: mov     ecx, eax
0x9A7024: call    NiMAtrix33_Multiply
0x9A7029: jmp     loc_9A6FAA
0x9A702E: mov     ecx, [esp+228h+arg_C]; jumptable 009A673D case 18
0x9A7035: test    ecx, ecx
0x9A7037: mov     eax, [esp+228h+arg_0]
0x9A703E: jz      loc_9A67B4
0x9A7044: fld     dword ptr [ecx+130h]
0x9A704A: pop     edi
0x9A704B: fstp    dword ptr [eax]
0x9A704D: pop     esi
0x9A704E: fld     dword ptr [ecx+134h]
0x9A7054: fstp    dword ptr [eax+4]
0x9A7057: fld     dword ptr [ecx+138h]
0x9A705D: fstp    dword ptr [eax+8]
0x9A7060: fstp    dword ptr [eax+0Ch]
0x9A7063: mov     al, 1
0x9A7065: add     esp, 220h
0x9A706B: retn
0x9A706C: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 19
0x9A7073: test    esi, esi
0x9A7075: jz      loc_9A68A9
0x9A707B: mov     ecx, [esp+228h+arg_28]
0x9A7082: fstp    st
0x9A7084: lea     edx, [esp+228h+var_1A8]
0x9A708B: push    edx
0x9A708C: call    sub_718A80
0x9A7091: mov     eax, [esi+130h]
0x9A7097: mov     ecx, [esi+134h]
0x9A709D: mov     edx, [esi+138h]
0x9A70A3: mov     [esp+228h+var_220], eax
0x9A70A7: mov     [esp+228h+var_21C], ecx
0x9A70AB: lea     eax, [esp+228h+var_220]
0x9A70AF: push    eax
0x9A70B0: lea     ecx, [esp+22Ch+var_B8]
0x9A70B7: push    ecx
0x9A70B8: lea     ecx, [esp+230h+var_1A8]
0x9A70BF: mov     [esp+230h+var_218], edx
0x9A70C3: call    sub_53D4B0
0x9A70C8: mov     edx, [eax]
0x9A70CA: mov     [esp+228h+var_220], edx
0x9A70CE: mov     ecx, [eax+4]
0x9A70D1: mov     [esp+228h+var_21C], ecx
0x9A70D5: mov     edx, [eax+8]
0x9A70D8: mov     [esp+228h+var_218], edx
0x9A70DC: jmp     loc_9A687E
0x9A70E1: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 20
0x9A70E8: test    eax, eax
0x9A70EA: jz      loc_9A6F59
0x9A70F0: cmp     byte ptr [eax+150h], 0
0x9A70F7: fstp    st
0x9A70F9: jz      short loc_9A7130
0x9A70FB: fld     dword ptr [eax+164h]
0x9A7101: mov     ecx, [esp+228h+arg_0]
0x9A7108: fstp    dword ptr [ecx]
0x9A710A: pop     edi
0x9A710B: fld     dword ptr [eax+168h]
0x9A7111: pop     esi
0x9A7112: fstp    dword ptr [ecx+4]
0x9A7115: fld     dword ptr [eax+16Ch]
0x9A711B: fstp    dword ptr [ecx+8]
0x9A711E: fld     dword ptr [eax+170h]
0x9A7124: mov     al, 1
0x9A7126: fstp    dword ptr [ecx+0Ch]
0x9A7129: add     esp, 220h
0x9A712F: retn
0x9A7130: fldz
0x9A7132: mov     eax, [esp+228h+arg_0]
0x9A7139: fst     dword ptr [eax]
0x9A713B: pop     edi
0x9A713C: fst     dword ptr [eax+4]
0x9A713F: pop     esi
0x9A7140: fst     dword ptr [eax+8]
0x9A7143: fstp    dword ptr [eax+0Ch]
0x9A7146: mov     al, 1
0x9A7148: add     esp, 220h
0x9A714E: retn
0x9A714F: mov     esi, [esp+228h+arg_C]; jumptable 009A673D case 21
0x9A7156: test    esi, esi
0x9A7158: jz      loc_9A6F59
0x9A715E: cmp     byte ptr [esi+150h], 0
0x9A7165: fstp    st
0x9A7167: jz      short loc_9A7130
0x9A7169: mov     ecx, [esp+228h+arg_28]
0x9A7170: lea     eax, [esp+228h+var_1A8]
0x9A7177: push    eax
0x9A7178: call    sub_718A80
0x9A717D: mov     edx, [esi+168h]
0x9A7183: mov     ecx, [esi+164h]
0x9A7189: mov     eax, [esi+16Ch]
0x9A718F: mov     [esp+228h+var_204], ecx
0x9A7193: mov     ecx, [esi+170h]
0x9A7199: mov     [esp+228h+var_200], edx
0x9A719D: lea     edx, [esp+228h+var_204]
0x9A71A1: mov     [esp+228h+var_1FC], eax
0x9A71A5: push    edx
0x9A71A6: lea     eax, [esp+22Ch+var_220]
0x9A71AA: mov     [esp+22Ch+var_1F8], ecx
0x9A71AE: push    eax
0x9A71AF: lea     ecx, [esp+230h+var_1A8]
0x9A71B6: call    sub_7101F0
0x9A71BB: fld     [esp+228h+var_1F8]
0x9A71BF: fld     st
0x9A71C1: lea     ecx, [esp+228h+var_1F4]
0x9A71C5: fmul    [esp+228h+var_204]
0x9A71C9: push    ecx
0x9A71CA: lea     edx, [esp+22Ch+var_168]
0x9A71D1: push    edx
0x9A71D2: fstp    [esp+230h+var_1F4]
0x9A71D6: lea     ecx, [esp+230h+var_1A8]
0x9A71DD: fld     [esp+230h+var_200]
0x9A71E1: fmul    st, st(1)
0x9A71E3: fstp    [esp+230h+var_1F0]
0x9A71E7: fmul    [esp+230h+var_1FC]
0x9A71EB: fstp    [esp+230h+var_1EC]
0x9A71EF: call    sub_53D4B0
0x9A71F4: mov     esi, [esp+228h+arg_0]
0x9A71FB: fld     [esp+228h+var_220]
0x9A71FF: fstp    dword ptr [esi]
0x9A7201: lea     eax, [esp+228h+var_168]
0x9A7208: fld     [esp+228h+var_21C]
0x9A720C: push    eax
0x9A720D: fstp    dword ptr [esi+4]
0x9A7210: lea     ecx, [esp+22Ch+var_220]
0x9A7214: fld     [esp+22Ch+var_218]
0x9A7218: fstp    dword ptr [esi+8]
0x9A721B: call    sub_47D9E0
0x9A7220: pop     edi
0x9A7221: fstp    dword ptr [esi+0Ch]
0x9A7224: mov     al, 1
0x9A7226: pop     esi
0x9A7227: add     esp, 220h
0x9A722D: retn
0x9A722E: mov     eax, [esp+228h+arg_C]; jumptable 009A673D case 22
0x9A7235: test    eax, eax
0x9A7237: jz      loc_9A72FD
0x9A723D: fldz
0x9A723F: mov     eax, [eax+14Ch]
0x9A7245: cmp     eax, 4; switch 5 cases
0x9A7248: fst     [esp+228h+var_214]; float
0x9A724C: ja      def_9A7252
0x9A7252: jmp     ds:jpt_9A7252[eax*4]; switch jump
0x9A7259: mov     eax, [esp+228h+arg_0]; jumptable 009A7252 cases 0,1
0x9A7260: fstp    st(1)
0x9A7262: fld     ds:fConstant_2
0x9A7268: pop     edi
0x9A7269: fstp    [esp+224h+var_214]
0x9A726D: pop     esi
0x9A726E: fld     [esp+220h+var_214]
0x9A7272: fstp    dword ptr [eax]
0x9A7274: fst     dword ptr [eax+4]
0x9A7277: fst     dword ptr [eax+8]
0x9A727A: fstp    dword ptr [eax+0Ch]
0x9A727D: mov     al, 1
0x9A727F: add     esp, 220h
0x9A7285: retn
0x9A7286: mov     eax, [esp+228h+arg_0]; jumptable 009A7252 cases 2,3
0x9A728D: fstp    st(1)
0x9A728F: fld     ds:dword_A46C30
0x9A7295: pop     edi
0x9A7296: fstp    [esp+224h+var_214]
0x9A729A: pop     esi
0x9A729B: fld     [esp+220h+var_214]
0x9A729F: fstp    dword ptr [eax]
0x9A72A1: fst     dword ptr [eax+4]
0x9A72A4: fst     dword ptr [eax+8]
0x9A72A7: fstp    dword ptr [eax+0Ch]
0x9A72AA: mov     al, 1
0x9A72AC: add     esp, 220h
0x9A72B2: retn
0x9A72B3: mov     eax, [esp+228h+arg_0]; jumptable 009A7252 case 4
0x9A72BA: fxch    st(1)
0x9A72BC: fstp    [esp+228h+var_214]
0x9A72C0: pop     edi
0x9A72C1: fld     [esp+224h+var_214]
0x9A72C5: pop     esi
0x9A72C6: fstp    dword ptr [eax]
0x9A72C8: fst     dword ptr [eax+4]
0x9A72CB: fst     dword ptr [eax+8]
0x9A72CE: fstp    dword ptr [eax+0Ch]
0x9A72D1: mov     al, 1
0x9A72D3: add     esp, 220h
0x9A72D9: retn
