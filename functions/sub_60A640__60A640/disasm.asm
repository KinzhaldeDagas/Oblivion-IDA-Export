0x60A640: push    ebp
0x60A641: mov     ebp, esp
0x60A643: and     esp, 0FFFFFFF0h
0x60A646: sub     esp, 1A4h
0x60A64C: mov     eax, ds:0B30AACh
0x60A651: xor     eax, esp
0x60A653: mov     [esp+1A4h+var_4], eax
0x60A65A: mov     eax, [ebp+arg_8]
0x60A65D: push    ebx
0x60A65E: push    esi
0x60A65F: push    edi
0x60A660: push    54h ; 'T'; Size
0x60A662: mov     ebx, ecx
0x60A664: mov     [esp+1B4h+var_174], eax
0x60A668: call    FormHeapAlloc
0x60A66D: mov     [ebx+5Ch], eax
0x60A670: xor     ecx, ecx
0x60A672: mov     [eax], ecx
0x60A674: mov     edx, [ebx+5Ch]
0x60A677: mov     [edx+2Ch], ecx
0x60A67A: mov     eax, [ebx+5Ch]
0x60A67D: mov     [eax+28h], ecx
0x60A680: mov     eax, [ebx+5Ch]
0x60A683: mov     ecx, [ebp+arg_4]
0x60A686: mov     edx, [ecx]
0x60A688: mov     [eax+10h], edx
0x60A68B: mov     edx, [ecx+4]
0x60A68E: mov     [eax+14h], edx
0x60A691: mov     ecx, [ecx+8]
0x60A694: mov     [eax+18h], ecx
0x60A697: mov     ecx, [ebp+arg_0]
0x60A69A: mov     edx, [ecx]
0x60A69C: add     eax, 10h
0x60A69F: mov     eax, [ebx+5Ch]
0x60A6A2: mov     [eax+4], edx
0x60A6A5: mov     edx, [ecx+4]
0x60A6A8: mov     [eax+8], edx
0x60A6AB: mov     ecx, [ecx+8]
0x60A6AE: add     eax, 4
0x60A6B1: mov     [eax+8], ecx
0x60A6B4: mov     edi, [ebx+5Ch]
0x60A6B7: add     edi, 30h ; '0'
0x60A6BA: mov     ecx, 9
0x60A6BF: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x60A6C4: rep movsd
0x60A6C6: mov     eax, [ebx+5Ch]
0x60A6C9: mov     edx, ds:0B3F9A8h
0x60A6CF: add     eax, 1Ch
0x60A6D2: mov     [eax], edx
0x60A6D4: mov     ecx, ds:0B3F9ACh
0x60A6DA: mov     [eax+4], ecx
0x60A6DD: mov     edx, ds:0B3F9B0h
0x60A6E3: add     esp, 4
0x60A6E6: mov     ecx, ebx; this
0x60A6E8: mov     [eax+8], edx
0x60A6EB: call    MobileObject_GetCharProxy
0x60A6F0: test    eax, eax
0x60A6F2: jz      loc_60A7E5
0x60A6F8: mov     ecx, ebx; this
0x60A6FA: call    MobileObject_GetCharProxy
0x60A6FF: test    eax, eax
0x60A701: jz      short loc_60A713
0x60A703: mov     eax, [eax+8]
0x60A706: test    eax, eax
0x60A708: jz      short loc_60A713
0x60A70A: mov     ecx, eax
0x60A70C: call    sub_8AC0A0
0x60A711: jmp     short loc_60A718
0x60A713: mov     eax, offset stru_BA7A40
0x60A718: movaps  xmm0, xmmword ptr [eax]
0x60A71B: movss   [esp+1B0h+var_30], xmm0
0x60A724: fld     [esp+1B0h+var_30]
0x60A72B: fld     dword ptr ds:0A7DEB4h
0x60A731: movaps  [esp+1B0h+var_40], xmm0
0x60A739: fchs
0x60A73B: fucompp
0x60A73D: fnstsw  ax
0x60A73F: test    ah, 44h
0x60A742: jp      loc_60A7CE
0x60A748: mov     eax, [ebx]
0x60A74A: mov     edx, [eax+154h]
0x60A750: mov     ecx, ebx
0x60A752: call    edx
0x60A754: test    eax, eax
0x60A756: jz      loc_60A7E5
0x60A75C: fld     dword ptr [ebx+6Ch]
0x60A75F: mov     eax, [ebx]
0x60A761: fstp    [esp+1B0h+var_188]
0x60A765: mov     edx, [eax+154h]
0x60A76B: fld     [esp+1B0h+var_188]
0x60A76F: mov     ecx, ebx
0x60A771: fld     st
0x60A773: fmul    dword ptr ds:0B258DCh
0x60A779: fstp    dword ptr [esp+1B0h+var_40]
0x60A780: fld     st
0x60A782: fmul    dword ptr ds:0B258E0h
0x60A788: fstp    dword ptr [esp+1B0h+var_40+4]
0x60A78F: fmul    dword ptr ds:0B258E4h
0x60A795: fstp    dword ptr [esp+1B0h+var_40+8]
0x60A79C: call    edx
0x60A79E: lea     ecx, [esp+1B0h+var_40]
0x60A7A5: push    ecx
0x60A7A6: lea     edx, [esp+1B4h+var_30]
0x60A7AD: push    edx
0x60A7AE: lea     ecx, [eax+64h]
0x60A7B1: call    sub_7101F0
0x60A7B6: mov     ecx, [ebx+5Ch]
0x60A7B9: mov     edx, [eax]
0x60A7BB: add     ecx, 1Ch
0x60A7BE: mov     [ecx], edx
0x60A7C0: mov     edx, [eax+4]
0x60A7C3: mov     [ecx+4], edx
0x60A7C6: mov     eax, [eax+8]
0x60A7C9: mov     [ecx+8], eax
0x60A7CC: jmp     short loc_60A7E5
0x60A7CE: mov     edx, [ebx+5Ch]
0x60A7D1: lea     ecx, [esp+1B0h+var_40]
0x60A7D8: push    ecx
0x60A7D9: add     edx, 1Ch
0x60A7DC: push    edx
0x60A7DD: call    sub_43F3E0
0x60A7E2: add     esp, 8
0x60A7E5: mov     esi, [esp+1B0h+var_174]
0x60A7E9: test    esi, esi
0x60A7EB: mov     dword ptr [ebx+60h], 1
0x60A7F2: jz      loc_60B0D3
0x60A7F8: mov     eax, [ebx]
0x60A7FA: mov     edx, [eax+154h]
0x60A800: mov     ecx, ebx
0x60A802: call    edx
0x60A804: mov     ecx, [ebx+78h]
0x60A807: test    ecx, ecx
0x60A809: mov     [esp+1B0h+var_170], eax
0x60A80D: jz      short loc_60A842
0x60A80F: mov     eax, [ecx]
0x60A811: mov     edx, [eax+330h]
0x60A817: call    edx
0x60A819: test    eax, eax
0x60A81B: jz      short loc_60A842
0x60A81D: mov     eax, [esi]
0x60A81F: mov     edx, [eax+174h]
0x60A825: mov     edi, [ebx+78h]
0x60A828: push    1; float
0x60A82A: mov     ecx, esi
0x60A82C: call    edx
0x60A82E: push    eax; int
0x60A82F: mov     eax, [edi]
0x60A831: mov     edx, [eax+330h]
0x60A837: mov     ecx, edi
0x60A839: call    edx
0x60A83B: mov     ecx, eax
0x60A83D: call    sub_618120
0x60A842: mov     eax, [ebx+5Ch]
0x60A845: mov     [eax+28h], esi
0x60A848: mov     ecx, [ebx+5Ch]
0x60A84B: mov     eax, [ecx+28h]
0x60A84E: mov     edx, [ebx]
0x60A850: add     eax, 44h ; 'D'
0x60A853: push    100h
0x60A858: push    eax
0x60A859: mov     eax, [edx+170h]
0x60A85F: mov     ecx, ebx
0x60A861: call    eax
0x60A863: push    eax
0x60A864: call    Script_AddEventToExtraScript
0x60A869: mov     ecx, [ebx+78h]
0x60A86C: add     esp, 0Ch
0x60A86F: test    ecx, ecx
0x60A871: jz      loc_60AA2A
0x60A877: cmp     ecx, ds:0B333C4h
0x60A87D: jz      short loc_60A8A5
0x60A87F: mov     edx, [ecx]
0x60A881: mov     eax, [edx+334h]
0x60A887: push    1
0x60A889: call    eax
0x60A88B: test    al, al
0x60A88D: jnz     short loc_60A8A5
0x60A88F: mov     ecx, [ebx+78h]
0x60A892: mov     edx, [ecx]
0x60A894: mov     eax, [edx+3B0h]
0x60A89A: push    esi
0x60A89B: push    ebx
0x60A89C: push    0
0x60A89E: call    eax
0x60A8A0: jmp     loc_60AA2A
0x60A8A5: mov     edx, [esi]
0x60A8A7: mov     eax, [edx+198h]
0x60A8AD: push    0
0x60A8AF: mov     ecx, esi
0x60A8B1: call    eax
0x60A8B3: mov     ecx, [ebx+78h]
0x60A8B6: mov     edx, [ecx]
0x60A8B8: push    esi
0x60A8B9: push    ebx
0x60A8BA: mov     byte ptr [esp+1B8h+var_198+2], al
0x60A8BE: mov     eax, [edx+3ACh]
0x60A8C4: push    0
0x60A8C6: call    eax
0x60A8C8: cmp     byte ptr [esp+1B0h+var_198+2], 0
0x60A8CD: jnz     loc_60AA2A
0x60A8D3: mov     edx, [esi]
0x60A8D5: mov     eax, [edx+198h]
0x60A8DB: push    0
0x60A8DD: mov     ecx, esi
0x60A8DF: call    eax
0x60A8E1: test    al, al
0x60A8E3: jz      loc_60AA2A
0x60A8E9: mov     ecx, esi; this
0x60A8EB: call    Actor_IsCreature
0x60A8F0: test    al, al
0x60A8F2: jz      short loc_60A908
0x60A8F4: mov     edx, [esi]
0x60A8F6: mov     eax, [edx+278h]
0x60A8FC: mov     ecx, esi
0x60A8FE: call    eax
0x60A900: test    al, al
0x60A902: jz      loc_60AA2A
0x60A908: mov     edi, [esi+3Ch]
0x60A90B: test    edi, edi
0x60A90D: jz      loc_60AA2A
0x60A913: mov     ecx, offset flt_B371F8
0x60A918: call    GameSetting_GetSafeFloatPointer
0x60A91D: fld     dword ptr [eax]
0x60A91F: push    ecx
0x60A920: fstp    [esp+1B4h+var_1B4]; float
0x60A923: call    sub_547770
0x60A928: push    edi
0x60A929: fstp    [esp+1B8h+var_188]
0x60A92D: call    sub_8B8700
0x60A932: push    0; a4
0x60A934: push    1; a3
0x60A936: push    1; a2
0x60A938: push    edi; a1
0x60A939: call    sub_88D070
0x60A93E: fldz
0x60A940: add     esp, 18h
0x60A943: push    0; a3
0x60A945: push    ecx
0x60A946: mov     ecx, edi; this
0x60A948: fstp    [esp+1B8h+a2]; a2
0x60A94B: call    NiAVObject_UpdateNiAVObject
0x60A950: push    offset dword_B258DC
0x60A955: lea     ecx, [esp+1B4h+var_194]
0x60A959: push    ecx
0x60A95A: mov     ecx, [esp+1B8h+var_170]
0x60A95E: add     ecx, 64h ; 'd'
0x60A961: call    sub_7101F0
0x60A966: lea     ecx, [esp+1B0h+var_194]
0x60A96A: call    sub_43F350
0x60A96F: fstp    st
0x60A971: fld     dword ptr [esp+1B0h+var_194]
0x60A975: mov     edx, [ebx]
0x60A977: fld     qword ptr ds:0A3F410h
0x60A97D: mov     eax, [edx+174h]
0x60A983: fmul    st(1), st
0x60A985: mov     ecx, ebx
0x60A987: fxch    st(1)
0x60A989: fstp    [esp+1B0h+var_20]
0x60A990: fld     dword ptr [esp+1B0h+var_194+4]
0x60A994: fmul    st, st(1)
0x60A996: fstp    [esp+1B0h+var_1C]
0x60A99D: fmul    [esp+1B0h+var_18C]
0x60A9A1: fstp    [esp+1B0h+var_18]
0x60A9A8: call    eax
0x60A9AA: fld     dword ptr [eax]
0x60A9AC: fadd    [esp+1B0h+var_20]
0x60A9B3: fstp    dword ptr [esp+1B0h+var_40]
0x60A9BA: mov     ecx, dword ptr [esp+1B0h+var_40]
0x60A9C1: fld     dword ptr [eax+4]
0x60A9C4: fadd    [esp+1B0h+var_1C]
0x60A9CB: fstp    dword ptr [esp+1B0h+var_40+4]
0x60A9D2: mov     edx, dword ptr [esp+1B0h+var_40+4]
0x60A9D9: fld     dword ptr [eax+8]
0x60A9DC: mov     dword ptr [esp+1B0h+var_194], ecx
0x60A9E0: fadd    [esp+1B0h+var_18]
0x60A9E7: lea     ecx, [esp+1B0h+var_194]
0x60A9EB: mov     dword ptr [esp+1B0h+var_194+4], edx
0x60A9EF: push    ecx
0x60A9F0: lea     edx, [esp+1B4h+var_30]
0x60A9F7: fstp    dword ptr [esp+1B4h+var_40+8]
0x60A9FE: mov     eax, dword ptr [esp+1B4h+var_40+8]
0x60AA05: push    edx
0x60AA06: mov     [esp+1B8h+var_18C], eax
0x60AA0A: call    sub_4529E0
0x60AA0F: fld     [esp+1B8h+var_188]
0x60AA13: add     esp, 4
0x60AA16: lea     eax, [esp+1B4h+var_30]
0x60AA1D: fstp    [esp+1B4h+var_1B4]; float
0x60AA20: push    eax; int
0x60AA21: push    edi; float
0x60AA22: call    sub_5364B0
0x60AA27: add     esp, 0Ch
0x60AA2A: mov     ecx, ds:0B333C4h
0x60AA30: cmp     esi, ecx
0x60AA32: mov     [esp+1B0h+var_16C], 0
0x60AA3A: jnz     short loc_60AA49
0x60AA3C: push    0
0x60AA3E: call    PlayerCharacter_GetPlayerNode
0x60AA43: mov     [esp+1B0h+var_164], eax
0x60AA47: jmp     short loc_60AA50
0x60AA49: mov     ecx, [esi+3Ch]
0x60AA4C: mov     [esp+1B0h+var_164], ecx
0x60AA50: mov     edx, [ebx]
0x60AA52: fld     dword ptr ds:0A427E0h
0x60AA58: mov     eax, [edx+1E0h]
0x60AA5E: fstp    [esp+1B0h+var_160]
0x60AA62: mov     ecx, ebx
0x60AA64: call    eax
0x60AA66: push    ecx
0x60AA67: lea     ecx, [esp+1B4h+var_15C]
0x60AA6B: fstp    [esp+1B4h+var_1B4]; float
0x60AA6E: call    NiMatrix33_InitRotationTransform
0x60AA73: mov     ecx, ebx
0x60AA75: call    sub_4A9720
0x60AA7A: push    ecx
0x60AA7B: lea     ecx, [esp+1B4h+var_F0]
0x60AA82: fstp    [esp+1B4h+var_1B4]; float
0x60AA85: call    NiMatrix33_InitRotationTransposedTransform???
0x60AA8A: lea     ecx, [esp+1B0h+var_F0]
0x60AA91: push    ecx
0x60AA92: lea     edx, [esp+1B4h+var_138]
0x60AA96: push    edx
0x60AA97: lea     ecx, [esp+1B8h+var_15C]
0x60AA9B: call    NiMAtrix33_Multiply
0x60AAA0: mov     esi, eax
0x60AAA2: mov     ecx, 9
0x60AAA7: lea     edi, [esp+1B0h+var_15C]
0x60AAAB: rep movsd
0x60AAAD: fld     [esp+1B0h+var_158]
0x60AAB1: fstp    dword ptr [esp+1B0h+var_194]
0x60AAB5: fld     [esp+1B0h+var_14C]
0x60AAB9: fstp    dword ptr [esp+1B0h+var_194+4]
0x60AABD: fld     [esp+1B0h+var_140]
0x60AAC1: fstp    [esp+1B0h+var_18C]
0x60AAC5: lea     eax, [esp+1B0h+var_194]
0x60AAC9: push    eax
0x60AACA: call    sub_4BFAA0
0x60AACF: mov     edx, [ebx]
0x60AAD1: fld     dword ptr [esp+1B4h+var_194]
0x60AAD5: mov     eax, [edx+174h]
0x60AADB: fld     [esp+1B4h+var_160]
0x60AADF: add     esp, 4
0x60AAE2: fld     st
0x60AAE4: mov     ecx, ebx
0x60AAE6: fmulp   st(2), st
0x60AAE8: fxch    st(1)
0x60AAEA: fstp    dword ptr [esp+1B0h+var_40]
0x60AAF1: fld     dword ptr [esp+1B0h+var_194+4]
0x60AAF5: fmul    st, st(1)
0x60AAF7: fstp    dword ptr [esp+1B0h+var_40+4]
0x60AAFE: fmul    [esp+1B0h+var_18C]
0x60AB02: fstp    dword ptr [esp+1B0h+var_40+8]
0x60AB09: fld     dword ptr [esp+1B0h+var_40]
0x60AB10: fld     qword ptr ds:0A2FAA0h
0x60AB16: fmul    st(1), st
0x60AB18: fxch    st(1)
0x60AB1A: fstp    [esp+1B0h+var_188]
0x60AB1E: fld     dword ptr [esp+1B0h+var_40+4]
0x60AB25: fmul    st, st(1)
0x60AB27: fstp    [esp+1B0h+var_184]
0x60AB2B: fmul    dword ptr [esp+1B0h+var_40+8]
0x60AB32: fstp    [esp+1B0h+var_180]
0x60AB36: call    eax
0x60AB38: fld     dword ptr [eax]
0x60AB3A: mov     esi, [esp+1B0h+var_174]
0x60AB3E: fsub    [esp+1B0h+var_188]
0x60AB42: mov     edx, [esi]
0x60AB44: push    1
0x60AB46: mov     ecx, esi
0x60AB48: fstp    [esp+1B4h+var_20]
0x60AB4F: mov     byte ptr [esp+1B4h+var_198+2], 0
0x60AB54: fld     dword ptr [eax+4]
0x60AB57: fsub    [esp+1B4h+var_184]
0x60AB5B: fstp    [esp+1B4h+var_1C]
0x60AB62: fld     dword ptr [eax+8]
0x60AB65: mov     eax, [edx+198h]
0x60AB6B: fsub    [esp+1B4h+var_180]
0x60AB6F: fstp    [esp+1B4h+var_18]
0x60AB76: call    eax
0x60AB78: test    al, al
0x60AB7A: setz    cl
0x60AB7D: lea     edx, [esp+1B0h+var_160]
0x60AB81: push    ecx; int
0x60AB82: mov     ecx, dword ptr [esp+1B4h+var_194]
0x60AB86: push    edx; int
0x60AB87: mov     edx, dword ptr [esp+1B8h+var_194+4]
0x60AB8B: sub     esp, 0Ch
0x60AB8E: mov     eax, esp
0x60AB90: mov     [eax], ecx
0x60AB92: mov     ecx, [esp+1C4h+var_18C]
0x60AB96: mov     [eax+4], edx
0x60AB99: mov     edx, [esp+1C4h+var_20]
0x60ABA0: mov     [eax+8], ecx
0x60ABA3: mov     ecx, [esp+1C4h+var_1C]
0x60ABAA: sub     esp, 0Ch
0x60ABAD: mov     eax, esp
0x60ABAF: mov     [eax], edx
0x60ABB1: mov     edx, [esp+1D0h+var_18]
0x60ABB8: mov     [eax+4], ecx
0x60ABBB: mov     [eax+8], edx
0x60ABBE: mov     eax, [esi]
0x60ABC0: mov     edx, [eax+154h]
0x60ABC6: mov     ecx, esi
0x60ABC8: call    edx
0x60ABCA: push    eax; int
0x60ABCB: mov     ecx, ebx
0x60ABCD: call    sub_609DF0
0x60ABD2: test    eax, eax
0x60ABD4: mov     [esp+1B0h+var_188], eax
0x60ABD8: jz      loc_60ACFA
0x60ABDE: fld     [esp+1B0h+var_160]
0x60ABE2: lea     esi, [eax+64h]
0x60ABE5: fadd    qword ptr ds:0A492D8h
0x60ABEB: lea     eax, [esp+1B0h+var_CC]
0x60ABF2: push    eax
0x60ABF3: mov     ecx, esi
0x60ABF5: fstp    [esp+1B4h+var_168]
0x60ABF9: fld     dword ptr [esp+1B4h+var_194]
0x60ABFD: fld     [esp+1B4h+var_168]
0x60AC01: fld     st
0x60AC03: fmulp   st(2), st
0x60AC05: fxch    st(1)
0x60AC07: fstp    dword ptr [esp+1B4h+var_40]
0x60AC0E: fld     dword ptr [esp+1B4h+var_194+4]
0x60AC12: fmul    st, st(1)
0x60AC14: fstp    dword ptr [esp+1B4h+var_40+4]
0x60AC1B: fmul    [esp+1B4h+var_18C]
0x60AC1F: fstp    dword ptr [esp+1B4h+var_40+8]
0x60AC26: call    sub_718A80
0x60AC2B: fld     dword ptr [esp+1B0h+var_40]
0x60AC32: lea     ecx, [esp+1B0h+var_30]
0x60AC39: fadd    [esp+1B0h+var_20]
0x60AC40: push    ecx
0x60AC41: lea     edx, [esp+1B4h+var_40]
0x60AC48: push    edx
0x60AC49: fstp    [esp+1B8h+var_30]
0x60AC50: lea     ecx, [esp+1B8h+var_CC]
0x60AC57: fld     dword ptr [esp+1B8h+var_40+4]
0x60AC5E: fadd    [esp+1B8h+var_1C]
0x60AC65: fstp    [esp+1B8h+var_2C]
0x60AC6C: fld     dword ptr [esp+1B8h+var_40+8]
0x60AC73: fadd    [esp+1B8h+var_18]
0x60AC7A: fstp    [esp+1B8h+var_28]
0x60AC81: call    sub_53D4B0
0x60AC86: mov     ecx, [ebx+5Ch]
0x60AC89: mov     edx, [eax]
0x60AC8B: add     ecx, 4
0x60AC8E: mov     [ecx], edx
0x60AC90: mov     edx, [eax+4]
0x60AC93: mov     [ecx+4], edx
0x60AC96: mov     eax, [eax+8]
0x60AC99: mov     [ecx+8], eax
0x60AC9C: lea     ecx, [esp+1B0h+var_114]
0x60ACA3: push    ecx
0x60ACA4: mov     ecx, esi
0x60ACA6: call    sub_7102B0
0x60ACAB: mov     edx, [esp+1B0h+var_170]
0x60ACAF: add     edx, 64h ; 'd'
0x60ACB2: push    edx
0x60ACB3: lea     eax, [esp+1B4h+var_138]
0x60ACB7: push    eax
0x60ACB8: lea     ecx, [esp+1B8h+var_114]
0x60ACBF: call    NiMAtrix33_Multiply
0x60ACC4: mov     edi, [ebx+5Ch]
0x60ACC7: mov     esi, eax
0x60ACC9: mov     eax, [esp+1B0h+var_188]
0x60ACCD: add     edi, 30h ; '0'
0x60ACD0: mov     ecx, 9
0x60ACD5: rep movsd
0x60ACD7: mov     ecx, [ebx+5Ch]
0x60ACDA: push    eax
0x60ACDB: mov     [ecx+2Ch], eax
0x60ACDE: call    sub_480340
0x60ACE3: add     esp, 4
0x60ACE6: test    eax, eax
0x60ACE8: jz      short loc_60ACF1
0x60ACEA: mov     edx, [eax+10h]
0x60ACED: mov     [esp+1B0h+var_16C], edx
0x60ACF1: mov     esi, [esp+1B0h+var_174]
0x60ACF5: mov     byte ptr [esp+1B0h+var_198+2], 1
0x60ACFA: mov     ecx, esi
0x60ACFC: mov     byte ptr [esp+1B0h+var_198+3], 0
0x60AD01: call    Actor_IsBlocking
0x60AD06: test    al, al
0x60AD08: jz      short loc_60AD84
0x60AD0A: mov     ecx, [esi+58h]
0x60AD0D: test    ecx, ecx
0x60AD0F: jz      short loc_60AD84
0x60AD11: mov     eax, [ecx]
0x60AD13: mov     edx, [eax+0F8h]
0x60AD19: push    1
0x60AD1B: call    edx
0x60AD1D: test    eax, eax
0x60AD1F: jz      short loc_60AD84
0x60AD21: push    0
0x60AD23: push    ebx
0x60AD24: push    esi
0x60AD25: call    sub_6131D0
0x60AD2A: add     esp, 0Ch
0x60AD2D: test    al, al
0x60AD2F: jz      short loc_60AD84
0x60AD31: mov     ecx, [esi+30h]
0x60AD34: mov     edi, [ebp+arg_0]
0x60AD37: mov     eax, [esi+2Ch]
0x60AD3A: fld     dword ptr [edi+8]
0x60AD3D: mov     edx, [esi+34h]
0x60AD40: fstp    qword ptr [esp+1B0h+var_188]
0x60AD44: mov     [esp+1B0h+var_2C], ecx
0x60AD4B: mov     ecx, esi
0x60AD4D: mov     [esp+1B0h+var_30], eax
0x60AD54: mov     [esp+1B0h+var_28], edx
0x60AD5B: call    sub_5E0660
0x60AD60: fmul    qword ptr ds:0A2FAA0h
0x60AD66: fadd    [esp+1B0h+var_28]
0x60AD6D: fstp    [esp+1B0h+var_168]
0x60AD71: fld     [esp+1B0h+var_168]
0x60AD75: fcomp   qword ptr [esp+1B0h+var_188]
0x60AD79: fnstsw  ax
0x60AD7B: test    ah, 41h
0x60AD7E: jp      short loc_60AD87
0x60AD80: mov     al, 1
0x60AD82: jmp     short loc_60AD8B
0x60AD84: mov     edi, [ebp+arg_0]
0x60AD87: mov     al, byte ptr [esp+1B0h+var_198+3]
0x60AD8B: cmp     byte ptr [esp+1B0h+var_198+2], 0
0x60AD90: jz      short loc_60AD9A
0x60AD92: test    al, al
0x60AD94: jz      loc_60AF82
0x60AD9A: test    al, al
0x60AD9C: fld     dword ptr [edi]
0x60AD9E: fld     qword ptr ds:0A39088h
0x60ADA4: fmul    st(1), st
0x60ADA6: fxch    st(1)
0x60ADA8: fstp    [esp+1B0h+var_30]
0x60ADAF: fld     dword ptr [edi+4]
0x60ADB2: fmul    st, st(1)
0x60ADB4: fstp    [esp+1B0h+var_2C]
0x60ADBB: fmul    dword ptr [edi+8]
0x60ADBE: fstp    [esp+1B0h+var_28]
0x60ADC5: fld     [esp+1B0h+var_30]
0x60ADCC: fstp    [esp+1B0h+var_20]
0x60ADD3: fld     [esp+1B0h+var_2C]
0x60ADDA: fstp    [esp+1B0h+var_1C]
0x60ADE1: fld     [esp+1B0h+var_28]
0x60ADE8: fstp    [esp+1B0h+var_18]
0x60ADEF: fld     dword ptr ds:0A57EF8h
0x60ADF5: fstp    [esp+1B0h+var_14]
0x60ADFC: jz      short loc_60AE0F
0x60ADFE: mov     eax, [esp+1B0h+var_164]
0x60AE02: push    7
0x60AE04: push    eax
0x60AE05: call    sub_8AFB50
0x60AE0A: add     esp, 8
0x60AE0D: jmp     short loc_60AE38
0x60AE0F: mov     edx, [esi]
0x60AE11: mov     eax, [edx+198h]
0x60AE17: push    1
0x60AE19: mov     ecx, esi
0x60AE1B: call    eax
0x60AE1D: test    al, al
0x60AE1F: mov     eax, [esp+1B0h+var_164]
0x60AE23: setz    cl
0x60AE26: lea     edx, [esp+1B0h+var_20]
0x60AE2D: push    ecx
0x60AE2E: push    edx
0x60AE2F: push    eax
0x60AE30: call    sub_8AFD70
0x60AE35: add     esp, 0Ch
0x60AE38: test    eax, eax
0x60AE3A: jz      loc_60AF5A
0x60AE40: mov     ecx, [eax+8]
0x60AE43: push    ecx
0x60AE44: mov     [esp+1B4h+var_16C], eax
0x60AE48: call    sub_47FA60
0x60AE4D: add     esp, 4
0x60AE50: test    eax, eax
0x60AE52: jz      loc_60AF5A
0x60AE58: mov     ecx, eax
0x60AE5A: call    sub_452A60
0x60AE5F: fld     dword ptr [esp+1B0h+var_194]
0x60AE63: fld     qword ptr ds:0A492D8h
0x60AE69: mov     esi, eax
0x60AE6B: fmul    st(1), st
0x60AE6D: lea     edx, [esp+1B0h+var_98]
0x60AE74: fxch    st(1)
0x60AE76: lea     edi, [esi+64h]
0x60AE79: push    edx
0x60AE7A: fstp    dword ptr [esp+1B4h+var_40]
0x60AE81: mov     ecx, edi
0x60AE83: fld     dword ptr [esp+1B4h+var_194+4]
0x60AE87: mov     [esp+1B4h+var_188], esi
0x60AE8B: fmul    st, st(1)
0x60AE8D: fstp    dword ptr [esp+1B4h+var_40+4]
0x60AE94: fmul    [esp+1B4h+var_18C]
0x60AE98: fstp    dword ptr [esp+1B4h+var_40+8]
0x60AE9F: call    sub_718A80
0x60AEA4: fld     dword ptr [esi+88h]
0x60AEAA: lea     eax, [esp+1B0h+var_30]
0x60AEB1: fadd    dword ptr [esp+1B0h+var_40]
0x60AEB8: push    eax
0x60AEB9: lea     ecx, [esp+1B4h+var_40]
0x60AEC0: push    ecx
0x60AEC1: fstp    [esp+1B8h+var_30]
0x60AEC8: lea     ecx, [esp+1B8h+var_98]
0x60AECF: fld     dword ptr [esi+8Ch]
0x60AED5: fadd    dword ptr [esp+1B8h+var_40+4]
0x60AEDC: fstp    [esp+1B8h+var_2C]
0x60AEE3: fld     dword ptr [esi+90h]
0x60AEE9: fadd    dword ptr [esp+1B8h+var_40+8]
0x60AEF0: fstp    [esp+1B8h+var_28]
0x60AEF7: call    sub_53D4B0
0x60AEFC: mov     ecx, [ebx+5Ch]
0x60AEFF: mov     edx, [eax]
0x60AF01: add     ecx, 4
0x60AF04: mov     [ecx], edx
0x60AF06: mov     edx, [eax+4]
0x60AF09: mov     [ecx+4], edx
0x60AF0C: mov     eax, [eax+8]
0x60AF0F: mov     [ecx+8], eax
0x60AF12: lea     ecx, [esp+1B0h+var_138]
0x60AF16: push    ecx
0x60AF17: mov     ecx, edi
0x60AF19: call    sub_7102B0
0x60AF1E: mov     edx, [esp+1B0h+var_170]
0x60AF22: add     edx, 64h ; 'd'
0x60AF25: push    edx
0x60AF26: lea     eax, [esp+1B4h+var_64]
0x60AF2D: push    eax
0x60AF2E: lea     ecx, [esp+1B8h+var_138]
0x60AF35: call    NiMAtrix33_Multiply
0x60AF3A: mov     edi, [ebx+5Ch]
0x60AF3D: mov     edx, [esp+1B0h+var_188]
0x60AF41: add     edi, 30h ; '0'
0x60AF44: mov     ecx, 9
0x60AF49: mov     esi, eax
0x60AF4B: rep movsd
0x60AF4D: mov     ecx, [ebx+5Ch]
0x60AF50: mov     esi, [esp+1B0h+var_174]
0x60AF54: mov     edi, [ebp+arg_0]
0x60AF57: mov     [ecx+2Ch], edx
0x60AF5A: mov     eax, [ebx+5Ch]
0x60AF5D: cmp     dword ptr [eax+2Ch], 0
0x60AF61: jnz     short loc_60AF82
0x60AF63: push    esi
0x60AF64: mov     ecx, ebx
0x60AF66: call    sub_6079A0
0x60AF6B: pop     edi
0x60AF6C: pop     esi
0x60AF6D: pop     ebx
0x60AF6E: mov     ecx, [esp+1A4h+var_4]
0x60AF75: xor     ecx, esp
0x60AF77: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60AF7C: mov     esp, ebp
0x60AF7E: pop     ebp
0x60AF7F: retn    0Ch
0x60AF82: cmp     [esp+1B0h+var_16C], 0
0x60AF87: jz      short loc_60AFD8
0x60AF89: push    offset dword_B258DC
0x60AF8E: lea     ecx, [esp+1B4h+var_30]
0x60AF95: push    ecx; float
0x60AF96: mov     ecx, [esp+1B8h+var_170]
0x60AF9A: add     ecx, 64h ; 'd'
0x60AF9D: call    sub_7101F0
0x60AFA2: mov     edx, [esp+1B0h+var_16C]
0x60AFA6: push    edx; int
0x60AFA7: mov     edx, [eax]
0x60AFA9: sub     esp, 0Ch
0x60AFAC: mov     ecx, esp
0x60AFAE: mov     [ecx], edx
0x60AFB0: mov     edx, [eax+4]
0x60AFB3: mov     eax, [eax+8]
0x60AFB6: mov     [ecx+4], edx
0x60AFB9: mov     edx, [edi+4]
0x60AFBC: mov     [ecx+8], eax
0x60AFBF: mov     ecx, [edi]
0x60AFC1: sub     esp, 0Ch
0x60AFC4: mov     eax, esp
0x60AFC6: mov     [eax], ecx
0x60AFC8: mov     ecx, [edi+8]
0x60AFCB: mov     [eax+4], edx
0x60AFCE: mov     [eax+8], ecx
0x60AFD1: mov     ecx, ebx
0x60AFD3: call    sub_6088F0
0x60AFD8: mov     edx, [ebx+5Ch]
0x60AFDB: mov     eax, [edx+2Ch]
0x60AFDE: test    eax, eax
0x60AFE0: jz      short def_60B022; jumptable 0060B022 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60AFE2: push    eax
0x60AFE3: call    sub_47FAC0
0x60AFE8: add     esp, 4
0x60AFEB: test    eax, eax
0x60AFED: jz      short def_60B022; jumptable 0060B022 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60AFEF: mov     eax, [eax+10h]
0x60AFF2: test    eax, eax
0x60AFF4: jz      short def_60B022; jumptable 0060B022 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60AFF6: mov     eax, [eax+8]
0x60AFF9: test    eax, eax
0x60AFFB: jz      short loc_60B00D
0x60AFFD: add     eax, 14h
0x60B000: jz      short loc_60B00D
0x60B002: mov     eax, [eax]
0x60B004: test    eax, eax
0x60B006: jz      short loc_60B00D
0x60B008: mov     eax, [eax+8]
0x60B00B: jmp     short loc_60B00F
0x60B00D: xor     eax, eax
0x60B00F: test    eax, eax
0x60B011: jz      short def_60B022; jumptable 0060B022 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60B013: mov     eax, [eax+10h]
0x60B016: cmp     eax, 1Eh; switch 31 cases
0x60B019: ja      short def_60B022; jumptable 0060B022 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60B01B: movzx   eax, ds:byte_60B0F4[eax]
0x60B022: jmp     ds:jpt_60B022[eax*4]; switch jump
0x60B029: mov     ecx, [ebp+arg_4]; jumptable 0060B022 cases 0,3,5,10,11,13,15,18,20,25,26,28,30
0x60B02C: push    ecx
0x60B02D: push    edi
0x60B02E: mov     ecx, ebx
0x60B030: call    sub_608DA0
0x60B035: pop     edi
0x60B036: pop     esi
0x60B037: pop     ebx
0x60B038: mov     ecx, [esp+1A4h+var_4]
0x60B03F: xor     ecx, esp
0x60B041: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60B046: mov     esp, ebp
0x60B048: pop     ebp
0x60B049: retn    0Ch
0x60B04C: mov     ecx, esi; jumptable 0060B022 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60B04E: call    Actor_IsCreature
0x60B053: test    al, al
0x60B055: jz      short loc_60B08D
0x60B057: mov     edx, [esi]
0x60B059: mov     eax, [edx+278h]
0x60B05F: mov     ecx, esi
0x60B061: call    eax
0x60B063: test    al, al
0x60B065: jnz     short loc_60B08D
0x60B067: push    esi
0x60B068: mov     ecx, ebx
0x60B06A: call    sub_6079A0
0x60B06F: mov     dword ptr [ebx+60h], 3
0x60B076: pop     edi
0x60B077: pop     esi
0x60B078: pop     ebx
0x60B079: mov     ecx, [esp+1A4h+var_4]
0x60B080: xor     ecx, esp
0x60B082: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60B087: mov     esp, ebp
0x60B089: pop     ebp
0x60B08A: retn    0Ch
0x60B08D: cmp     dword ptr [ebx+7Ch], 0
0x60B091: jnz     short loc_60B0D3
0x60B093: push    0; Seed
0x60B095: call    GetRandomLargeInteger?
0x60B09A: cdq
0x60B09B: mov     ecx, 64h ; 'd'
0x60B0A0: idiv    ecx
0x60B0A2: add     esp, 4
0x60B0A5: cmp     edx, ds:0B370C8h
0x60B0AB: jge     short loc_60B0D3
0x60B0AD: mov     edx, [ebx]
0x60B0AF: mov     edi, [esi]
0x60B0B1: mov     eax, [edx+170h]
0x60B0B7: push    1
0x60B0B9: push    0
0x60B0BB: mov     ecx, ebx
0x60B0BD: add     edi, 114h
0x60B0C3: call    eax
0x60B0C5: mov     edx, [edi]
0x60B0C7: push    eax
0x60B0C8: mov     ecx, esi
0x60B0CA: call    edx
0x60B0CC: mov     byte ptr [ebx+95h], 1
0x60B0D3: mov     ecx, [esp+1B0h+var_4]
0x60B0DA: pop     edi
0x60B0DB: pop     esi
0x60B0DC: pop     ebx
0x60B0DD: xor     ecx, esp
0x60B0DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60B0E4: mov     esp, ebp
0x60B0E6: pop     ebp
0x60B0E7: retn    0Ch
