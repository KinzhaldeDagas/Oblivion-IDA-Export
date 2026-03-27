0x6C0170: fld     qword ptr ds:0A3D0C0h
0x6C0176: sub     esp, 6Ch
0x6C0179: push    ebx
0x6C017A: push    ebp
0x6C017B: mov     ebp, [esp+74h+arg_4]
0x6C017F: cmp     ebp, 2
0x6C0182: push    edi
0x6C0183: mov     edi, [esp+78h+arg_0]
0x6C0187: lea     ebx, [ebp-1]
0x6C018A: jb      loc_6C02BD
0x6C0190: fld     dword ptr [edi+4]
0x6C0193: push    esi
0x6C0194: fmul    st, st(1)
0x6C0196: lea     esi, [edi+4]
0x6C0199: lea     eax, [edi+50h]
0x6C019C: sub     esp, 8
0x6C019F: fstp    [esp+84h+var_6C]
0x6C01A3: mov     ecx, edi
0x6C01A5: fld     dword ptr [esi+4]
0x6C01A8: fmul    st, st(1)
0x6C01AA: fstp    [esp+84h+var_68]
0x6C01AE: fmul    dword ptr [esi+8]
0x6C01B1: fstp    [esp+84h+var_64]
0x6C01B5: fld     [esp+84h+var_6C]
0x6C01B9: fsub    dword ptr [eax]
0x6C01BB: fstp    [esp+84h+var_C]
0x6C01BF: fld     [esp+84h+var_68]
0x6C01C3: fsub    dword ptr [eax+4]
0x6C01C6: fstp    [esp+84h+var_8]
0x6C01CA: fld     [esp+84h+var_64]
0x6C01CE: fsub    dword ptr [eax+8]
0x6C01D1: fstp    [esp+84h+var_4]
0x6C01D8: fld1
0x6C01DA: fst     [esp+84h+var_80]; float
0x6C01DE: fstp    [esp+84h+var_84]; float
0x6C01E1: push    eax; int
0x6C01E2: lea     eax, [esp+88h+var_C]
0x6C01E6: push    eax; int
0x6C01E7: call    sub_6BFF30
0x6C01EC: cmp     ebx, 1
0x6C01EF: jbe     short loc_6C0246
0x6C01F1: lea     ebp, [ebx-1]
0x6C01F4: fld     dword ptr [esi+94h]
0x6C01FA: lea     ecx, [esi+48h]
0x6C01FD: fsub    dword ptr [ecx]
0x6C01FF: sub     esp, 8
0x6C0202: lea     edx, [esi+98h]
0x6C0208: fstp    [esp+84h+arg_0]
0x6C020F: fld     [esp+84h+arg_0]
0x6C0216: fstp    [esp+84h+var_80]; float
0x6C021A: fld     dword ptr [ecx]
0x6C021C: fsub    dword ptr [esi-4]
0x6C021F: fstp    [esp+84h+arg_0]
0x6C0226: fld     [esp+84h+arg_0]
0x6C022D: fstp    [esp+84h+var_84]; float
0x6C0230: push    edx; int
0x6C0231: push    esi; int
0x6C0232: call    sub_6BFF30
0x6C0237: add     esi, 4Ch ; 'L'
0x6C023A: sub     ebp, 1
0x6C023D: jnz     short loc_6C01F4
0x6C023F: mov     ebp, [esp+7Ch+arg_4]
0x6C0246: mov     ecx, ebx
0x6C0248: imul    ecx, 4Ch ; 'L'
0x6C024B: fld     dword ptr [ecx+edi+4]
0x6C024F: fld     qword ptr ds:0A3D0C0h
0x6C0255: fmul    st(1), st
0x6C0257: fxch    st(1)
0x6C0259: fstp    [esp+7Ch+var_6C]
0x6C025D: fld     dword ptr [ecx+edi+8]
0x6C0261: add     ecx, edi
0x6C0263: fmul    st, st(1)
0x6C0265: lea     eax, [ebp-2]
0x6C0268: imul    eax, 4Ch ; 'L'
0x6C026B: fstp    [esp+7Ch+var_68]
0x6C026F: fmul    dword ptr [ecx+0Ch]
0x6C0272: fstp    [esp+7Ch+var_64]
0x6C0276: fld     [esp+7Ch+var_6C]
0x6C027A: fsub    dword ptr [eax+edi+4]
0x6C027E: lea     eax, [eax+edi+4]
0x6C0282: fstp    [esp+7Ch+var_C]
0x6C0286: sub     esp, 8
0x6C0289: fld     [esp+84h+var_68]
0x6C028D: lea     edx, [esp+84h+var_C]
0x6C0291: fsub    dword ptr [eax+4]
0x6C0294: fstp    [esp+84h+var_8]
0x6C0298: fld     [esp+84h+var_64]
0x6C029C: fsub    dword ptr [eax+8]
0x6C029F: fstp    [esp+84h+var_4]
0x6C02A6: fld1
0x6C02A8: fst     [esp+84h+var_80]; float
0x6C02AC: fstp    [esp+84h+var_84]; float
0x6C02AF: push    edx; int
0x6C02B0: push    eax; int
0x6C02B1: call    sub_6BFF30
0x6C02B6: fld     qword ptr ds:0A3D0C0h
0x6C02BC: pop     esi
0x6C02BD: test    ebx, ebx
0x6C02BF: jbe     loc_6C041E
0x6C02C5: fld     qword ptr ds:0A30E48h
0x6C02CB: lea     eax, [edi+58h]
0x6C02CE: fld     dword ptr [eax-30h]
0x6C02D1: fmul    st, st(2)
0x6C02D3: fstp    [esp+78h+var_6C]
0x6C02D7: fld     dword ptr [eax-2Ch]
0x6C02DA: fmul    st, st(2)
0x6C02DC: fstp    [esp+78h+var_68]
0x6C02E0: fld     dword ptr [eax-28h]
0x6C02E3: fmul    st, st(2)
0x6C02E5: fstp    [esp+78h+var_64]
0x6C02E9: fld     [esp+78h+var_6C]
0x6C02ED: fadd    dword ptr [eax+10h]
0x6C02F0: fstp    [esp+78h+var_48]
0x6C02F4: fld     [esp+78h+var_68]
0x6C02F8: fadd    dword ptr [eax+14h]
0x6C02FB: fstp    [esp+78h+var_44]
0x6C02FF: fld     [esp+78h+var_64]
0x6C0303: fadd    dword ptr [eax+18h]
0x6C0306: fstp    [esp+78h+var_40]
0x6C030A: fld     dword ptr [eax-8]
0x6C030D: fsub    dword ptr [eax-54h]
0x6C0310: fstp    [esp+78h+var_60]
0x6C0314: fld     dword ptr [eax-4]
0x6C0317: fsub    dword ptr [eax-50h]
0x6C031A: fstp    [esp+78h+var_5C]
0x6C031E: fld     dword ptr [eax]
0x6C0320: fsub    dword ptr [eax-4Ch]
0x6C0323: fstp    [esp+78h+var_58]
0x6C0327: fld     [esp+78h+var_60]
0x6C032B: fmul    st, st(1)
0x6C032D: fstp    [esp+78h+var_54]
0x6C0331: fld     [esp+78h+var_5C]
0x6C0335: fmul    st, st(1)
0x6C0337: fstp    [esp+78h+var_50]
0x6C033B: fld     [esp+78h+var_58]
0x6C033F: fmul    st, st(1)
0x6C0341: fstp    [esp+78h+var_4C]
0x6C0345: fld     [esp+78h+var_54]
0x6C0349: fsub    [esp+78h+var_48]
0x6C034D: fstp    [esp+78h+var_3C]
0x6C0351: mov     ecx, [esp+78h+var_3C]
0x6C0355: fld     [esp+78h+var_50]
0x6C0359: mov     [eax-24h], ecx
0x6C035C: fsub    [esp+78h+var_44]
0x6C0360: fstp    [esp+78h+var_38]
0x6C0364: mov     edx, [esp+78h+var_38]
0x6C0368: fld     [esp+78h+var_4C]
0x6C036C: mov     [eax-20h], edx
0x6C036F: fsub    [esp+78h+var_40]
0x6C0373: fstp    [esp+78h+var_34]
0x6C0377: mov     ecx, [esp+78h+var_34]
0x6C037B: mov     [eax-1Ch], ecx
0x6C037E: fld     dword ptr [eax-8]
0x6C0381: fsub    dword ptr [eax-54h]
0x6C0384: fstp    [esp+78h+var_30]
0x6C0388: fld     dword ptr [eax-4]
0x6C038B: fsub    dword ptr [eax-50h]
0x6C038E: fstp    [esp+78h+var_2C]
0x6C0392: fld     dword ptr [eax]
0x6C0394: fsub    dword ptr [eax-4Ch]
0x6C0397: fstp    [esp+78h+var_28]
0x6C039B: fld     [esp+78h+var_30]
0x6C039F: fmul    st, st(2)
0x6C03A1: fstp    [esp+78h+var_18]
0x6C03A5: fld     [esp+78h+var_2C]
0x6C03A9: fmul    st, st(2)
0x6C03AB: fstp    [esp+78h+var_14]
0x6C03AF: fld     [esp+78h+var_28]
0x6C03B3: fmul    st, st(2)
0x6C03B5: fstp    [esp+78h+var_10]
0x6C03B9: fld     dword ptr [eax-30h]
0x6C03BC: fadd    dword ptr [eax+10h]
0x6C03BF: fstp    [esp+78h+var_24]
0x6C03C3: fld     dword ptr [eax+14h]
0x6C03C6: fadd    dword ptr [eax-2Ch]
0x6C03C9: fstp    [esp+78h+var_20]
0x6C03CD: fld     dword ptr [eax+18h]
0x6C03D0: fadd    dword ptr [eax-28h]
0x6C03D3: fstp    [esp+78h+var_1C]
0x6C03D7: fld     [esp+78h+var_24]
0x6C03DB: fsub    [esp+78h+var_18]
0x6C03DF: fstp    [esp+78h+var_C]
0x6C03E3: fld     [esp+78h+var_20]
0x6C03E7: mov     edx, [esp+78h+var_C]
0x6C03EB: fsub    [esp+78h+var_14]
0x6C03EF: mov     [eax-18h], edx
0x6C03F2: add     eax, 4Ch ; 'L'
0x6C03F5: sub     ebx, 1
0x6C03F8: fstp    [esp+78h+var_8]
0x6C03FC: mov     ecx, [esp+78h+var_8]
0x6C0400: fld     [esp+78h+var_1C]
0x6C0404: mov     [eax-60h], ecx
0x6C0407: fsub    [esp+78h+var_10]
0x6C040B: fstp    [esp+78h+var_4]
0x6C040F: mov     edx, [esp+78h+var_4]
0x6C0413: mov     [eax-5Ch], edx
0x6C0416: jnz     loc_6C02CE
0x6C041C: fstp    st(1)
0x6C041E: pop     edi
0x6C041F: fstp    st
0x6C0421: pop     ebp
0x6C0422: pop     ebx
0x6C0423: add     esp, 6Ch
0x6C0426: retn
