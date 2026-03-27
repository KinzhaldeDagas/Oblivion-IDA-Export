0x6DAEB0: sub     esp, 0E8h
0x6DAEB6: push    ebx
0x6DAEB7: push    ebp
0x6DAEB8: push    esi
0x6DAEB9: mov     ebx, ecx
0x6DAEBB: mov     eax, [ebx+18h]
0x6DAEBE: test    eax, eax
0x6DAEC0: push    edi
0x6DAEC1: mov     ecx, 9
0x6DAEC6: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6DAECB: lea     edi, [esp+0F8h+var_AC]
0x6DAECF: rep movsd
0x6DAED1: jz      loc_6DB641
0x6DAED7: mov     edx, [eax+8]
0x6DAEDA: cmp     edx, 2
0x6DAEDD: mov     ebp, [eax+10h]
0x6DAEE0: mov     cl, [eax+14h]
0x6DAEE3: mov     edi, [eax+0Ch]
0x6DAEE6: mov     [esp+0F8h+var_DC], edx
0x6DAEEA: jb      loc_6DB641
0x6DAEF0: mov     al, [ebx+0Ch]
0x6DAEF3: fld     [esp+0F8h+arg_8]
0x6DAEFA: shr     al, 2
0x6DAEFD: test    al, 1
0x6DAEFF: jz      loc_6DB32B
0x6DAF05: movzx   esi, cl
0x6DAF08: mov     ecx, esi
0x6DAF0A: imul    ecx, [esp+0F8h+arg_4]
0x6DAF12: mov     edx, esi
0x6DAF14: imul    edx, [esp+0F8h+arg_0]
0x6DAF1C: lea     eax, [ecx+edi]
0x6DAF1F: lea     ecx, [edx+edi]
0x6DAF22: lea     edx, [esp+0F8h+var_D4]
0x6DAF26: push    edx; int
0x6DAF27: lea     edx, [esp+0FCh+var_7C]
0x6DAF2E: push    edx; int
0x6DAF2F: lea     edx, [esp+100h+var_B8]
0x6DAF33: push    edx; int
0x6DAF34: lea     edx, [esp+104h+var_88]
0x6DAF38: push    edx; int
0x6DAF39: push    ebp; int
0x6DAF3A: push    eax; int
0x6DAF3B: push    ecx; int
0x6DAF3C: push    ecx
0x6DAF3D: mov     [esp+118h+var_70], eax
0x6DAF44: mov     [esp+118h+var_D8], ecx
0x6DAF48: fstp    [esp+118h+var_118]; float
0x6DAF4B: call    sub_6BBEE0
0x6DAF50: add     esp, 20h
0x6DAF53: fldz
0x6DAF55: fcomp   dword ptr [ebx+2Ch]
0x6DAF58: fnstsw  ax
0x6DAF5A: test    ah, 44h
0x6DAF5D: jnp     loc_6DB29C
0x6DAF63: fld     [esp+0F8h+arg_8]
0x6DAF6A: fld     dword ptr [ebx+2Ch]
0x6DAF6D: fld1
0x6DAF6F: fld     st
0x6DAF71: fsubrp  st(2), st
0x6DAF73: fxch    st(1)
0x6DAF75: fcomp   st(2)
0x6DAF77: fnstsw  ax
0x6DAF79: test    ah, 41h
0x6DAF7C: jp      loc_6DB10B
0x6DAF82: mov     al, [ebx+0Ch]
0x6DAF85: shr     al, 1
0x6DAF87: test    al, 1
0x6DAF89: jnz     short loc_6DAFA5
0x6DAF8B: mov     ecx, [esp+0F8h+var_DC]
0x6DAF8F: add     ecx, 0FFFFFFFFh
0x6DAF92: cmp     [esp+0F8h+arg_4], ecx
0x6DAF99: jnz     short loc_6DAFA5
0x6DAF9B: mov     [esp+0F8h+var_CC], 0
0x6DAFA3: jmp     short loc_6DAFB0
0x6DAFA5: mov     edx, [esp+0F8h+arg_4]
0x6DAFAC: mov     [esp+0F8h+var_CC], edx
0x6DAFB0: mov     eax, [esp+0F8h+var_DC]
0x6DAFB4: add     eax, 0FFFFFFFFh
0x6DAFB7: cmp     [esp+0F8h+var_CC], eax
0x6DAFBB: jnb     loc_6DB298
0x6DAFC1: fld     st
0x6DAFC3: lea     ecx, [esp+0F8h+var_D4]
0x6DAFC7: fsubrp  st(2), st
0x6DAFC9: push    ecx; int
0x6DAFCA: fld     dword ptr [ebx+2Ch]
0x6DAFCD: lea     edx, [esp+0FCh+var_7C]
0x6DAFD4: push    edx; int
0x6DAFD5: faddp   st(2), st
0x6DAFD7: mov     edx, [esp+100h+var_70]
0x6DAFDE: fld     dword ptr [ebx+2Ch]
0x6DAFE1: lea     eax, [esp+100h+var_B8]
0x6DAFE5: fadd    st, st
0x6DAFE7: push    eax; int
0x6DAFE8: mov     eax, [esp+104h+var_D8]
0x6DAFEC: lea     ecx, [esp+104h+var_C4]
0x6DAFF0: fdivp   st(2), st
0x6DAFF2: push    ecx; int
0x6DAFF3: push    ebp; int
0x6DAFF4: push    edx; int
0x6DAFF5: push    eax; int
0x6DAFF6: push    ecx
0x6DAFF7: fxch    st(1)
0x6DAFF9: fstp    [esp+118h+var_DC]
0x6DAFFD: fld     [esp+118h+var_DC]
0x6DB001: fsubr   st, st(1)
0x6DB003: fstp    [esp+118h+var_C8]
0x6DB007: fsub    dword ptr [ebx+2Ch]
0x6DB00A: fstp    [esp+118h+var_D8]
0x6DB00E: fld     [esp+118h+var_D8]
0x6DB012: fstp    [esp+118h+var_118]; float
0x6DB015: call    sub_6BBEE0
0x6DB01A: add     esp, 20h
0x6DB01D: fld     dword ptr [ebx+2Ch]
0x6DB020: lea     ecx, [esp+0F8h+var_D0]
0x6DB024: push    ecx; int
0x6DB025: lea     edx, [esp+0FCh+var_7C]
0x6DB02C: push    edx; int
0x6DB02D: lea     eax, [esp+100h+var_E8]
0x6DB031: push    eax; int
0x6DB032: mov     eax, [esp+104h+var_CC]
0x6DB036: lea     edx, [eax+1]
0x6DB039: imul    edx, esi
0x6DB03C: imul    esi, eax
0x6DB03F: lea     ecx, [esp+104h+var_C4]
0x6DB043: push    ecx; int
0x6DB044: push    ebp; int
0x6DB045: add     edx, edi
0x6DB047: push    edx; int
0x6DB048: add     esi, edi
0x6DB04A: push    esi; int
0x6DB04B: push    ecx
0x6DB04C: fstp    [esp+118h+var_118]; float
0x6DB04F: call    sub_6BBEE0
0x6DB054: fld     [esp+118h+var_C8]
0x6DB058: add     esp, 20h
0x6DB05B: lea     eax, [esp+0F8h+var_E8]
0x6DB05F: push    eax; int
0x6DB060: push    ecx
0x6DB061: lea     ecx, [esp+100h+var_54]
0x6DB068: fstp    [esp+100h+var_100]; float
0x6DB06B: push    ecx; int
0x6DB06C: call    sub_47DA10
0x6DB071: fld     [esp+104h+var_DC]
0x6DB075: add     esp, 0Ch
0x6DB078: push    eax
0x6DB079: lea     edx, [esp+0FCh+var_60]
0x6DB080: push    edx
0x6DB081: lea     eax, [esp+100h+var_B8]
0x6DB085: push    eax; int
0x6DB086: push    ecx
0x6DB087: lea     ecx, [esp+108h+var_6C]
0x6DB08E: fstp    [esp+108h+var_108]; float
0x6DB091: push    ecx; int
0x6DB092: call    sub_47DA10
0x6DB097: add     esp, 0Ch
0x6DB09A: mov     ecx, eax
0x6DB09C: call    sub_47D9B0
0x6DB0A1: mov     edx, [eax]
0x6DB0A3: mov     [esp+0F8h+var_B8], edx
0x6DB0A7: mov     ecx, [eax+4]
0x6DB0AA: mov     [esp+0F8h+var_B4], ecx
0x6DB0AE: mov     edx, [eax+8]
0x6DB0B1: lea     ecx, [esp+0F8h+var_B8]
0x6DB0B5: mov     [esp+0F8h+var_B0], edx
0x6DB0B9: call    sub_43F350
0x6DB0BE: fstp    st
0x6DB0C0: fld     [esp+0F8h+var_D0]
0x6DB0C4: lea     eax, [esp+0F8h+var_B8]
0x6DB0C8: fmul    [esp+0F8h+var_C8]
0x6DB0CC: push    eax
0x6DB0CD: fld     [esp+0FCh+var_DC]
0x6DB0D1: lea     ecx, [esp+0FCh+var_6C]
0x6DB0D8: fmul    [esp+0FCh+var_D4]
0x6DB0DC: push    ecx
0x6DB0DD: lea     ecx, [esp+100h+var_88]
0x6DB0E1: faddp   st(1), st
0x6DB0E3: fstp    [esp+100h+var_D4]
0x6DB0E7: call    sub_498FE0
0x6DB0EC: mov     edx, [eax]
0x6DB0EE: mov     [esp+0F8h+var_7C], edx
0x6DB0F2: mov     ecx, [eax+4]
0x6DB0F5: mov     [esp+0F8h+var_78], ecx
0x6DB0FC: mov     edx, [eax+8]
0x6DB0FF: mov     [esp+0F8h+var_74], edx
0x6DB106: jmp     loc_6DB29C
0x6DB10B: fld     dword ptr [ebx+2Ch]
0x6DB10E: fcomp   st(2)
0x6DB110: fnstsw  ax
0x6DB112: test    ah, 1
0x6DB115: jnz     loc_6DB298
0x6DB11B: mov     al, [ebx+0Ch]
0x6DB11E: shr     al, 1
0x6DB120: test    al, 1
0x6DB122: jnz     short loc_6DB13B
0x6DB124: cmp     [esp+0F8h+arg_0], 0
0x6DB12C: jnz     short loc_6DB13B
0x6DB12E: mov     ecx, [esp+0F8h+var_DC]
0x6DB132: add     ecx, 0FFFFFFFFh
0x6DB135: mov     [esp+0F8h+var_CC], ecx
0x6DB139: jmp     short loc_6DB146
0x6DB13B: mov     edx, [esp+0F8h+arg_0]
0x6DB142: mov     [esp+0F8h+var_CC], edx
0x6DB146: cmp     [esp+0F8h+var_CC], 1
0x6DB14B: jb      loc_6DB298
0x6DB151: fld     dword ptr [ebx+2Ch]
0x6DB154: lea     eax, [esp+0F8h+var_D4]
0x6DB158: fsubrp  st(2), st
0x6DB15A: push    eax; int
0x6DB15B: fld     dword ptr [ebx+2Ch]
0x6DB15E: lea     ecx, [esp+0FCh+var_7C]
0x6DB165: fadd    st, st
0x6DB167: push    ecx; int
0x6DB168: mov     ecx, [esp+100h+var_70]
0x6DB16F: lea     edx, [esp+100h+var_B8]
0x6DB173: fdivp   st(2), st
0x6DB175: push    edx; int
0x6DB176: mov     edx, [esp+104h+var_D8]
0x6DB17A: lea     eax, [esp+104h+var_C4]
0x6DB17E: push    eax; int
0x6DB17F: push    ebp; int
0x6DB180: push    ecx; int
0x6DB181: push    edx; int
0x6DB182: push    ecx
0x6DB183: fxch    st(1)
0x6DB185: fstp    [esp+118h+var_C8]
0x6DB189: fsub    [esp+118h+var_C8]
0x6DB18D: fstp    [esp+118h+var_DC]
0x6DB191: fld     dword ptr [ebx+2Ch]
0x6DB194: fstp    [esp+118h+var_118]; float
0x6DB197: call    sub_6BBEE0
0x6DB19C: fld     dword ptr [ebx+2Ch]
0x6DB19F: add     esp, 20h
0x6DB1A2: fld1
0x6DB1A4: lea     eax, [esp+0F8h+var_D0]
0x6DB1A8: push    eax; int
0x6DB1A9: fsubrp  st(1), st
0x6DB1AB: lea     ecx, [esp+0FCh+var_7C]
0x6DB1B2: push    ecx; int
0x6DB1B3: lea     edx, [esp+100h+var_E8]
0x6DB1B7: push    edx; int
0x6DB1B8: fstp    [esp+104h+var_D8]
0x6DB1BC: fld     [esp+104h+var_D8]
0x6DB1C0: lea     eax, [esp+104h+var_C4]
0x6DB1C4: push    eax; int
0x6DB1C5: mov     eax, [esp+108h+var_CC]
0x6DB1C9: mov     ecx, esi
0x6DB1CB: imul    ecx, eax
0x6DB1CE: add     eax, 0FFFFFFFFh
0x6DB1D1: imul    eax, esi
0x6DB1D4: push    ebp; int
0x6DB1D5: add     ecx, edi
0x6DB1D7: push    ecx; int
0x6DB1D8: add     eax, edi
0x6DB1DA: push    eax; int
0x6DB1DB: push    ecx
0x6DB1DC: fstp    [esp+118h+var_118]; float
0x6DB1DF: call    sub_6BBEE0
0x6DB1E4: fld     [esp+118h+var_C8]
0x6DB1E8: add     esp, 20h
0x6DB1EB: lea     edx, [esp+0F8h+var_E8]
0x6DB1EF: push    edx; int
0x6DB1F0: push    ecx
0x6DB1F1: lea     eax, [esp+100h+var_6C]
0x6DB1F8: fstp    [esp+100h+var_100]; float
0x6DB1FB: push    eax; int
0x6DB1FC: call    sub_47DA10
0x6DB201: fld     [esp+104h+var_DC]
0x6DB205: add     esp, 0Ch
0x6DB208: push    eax
0x6DB209: lea     ecx, [esp+0FCh+var_60]
0x6DB210: push    ecx
0x6DB211: lea     edx, [esp+100h+var_B8]
0x6DB215: push    edx; int
0x6DB216: push    ecx
0x6DB217: lea     eax, [esp+108h+var_54]
0x6DB21E: fstp    [esp+108h+var_108]; float
0x6DB221: push    eax; int
0x6DB222: call    sub_47DA10
0x6DB227: add     esp, 0Ch
0x6DB22A: mov     ecx, eax
0x6DB22C: call    sub_47D9B0
0x6DB231: mov     ecx, [eax]
0x6DB233: mov     [esp+0F8h+var_B8], ecx
0x6DB237: mov     edx, [eax+4]
0x6DB23A: mov     [esp+0F8h+var_B4], edx
0x6DB23E: mov     eax, [eax+8]
0x6DB241: lea     ecx, [esp+0F8h+var_B8]
0x6DB245: mov     [esp+0F8h+var_B0], eax
0x6DB249: call    sub_43F350
0x6DB24E: fstp    st
0x6DB250: fld     [esp+0F8h+var_D0]
0x6DB254: lea     ecx, [esp+0F8h+var_B8]
0x6DB258: fmul    [esp+0F8h+var_C8]
0x6DB25C: push    ecx
0x6DB25D: fld     [esp+0FCh+var_DC]
0x6DB261: lea     edx, [esp+0FCh+var_6C]
0x6DB268: fmul    [esp+0FCh+var_D4]
0x6DB26C: push    edx
0x6DB26D: lea     ecx, [esp+100h+var_88]
0x6DB271: faddp   st(1), st
0x6DB273: fstp    [esp+100h+var_D4]
0x6DB277: call    sub_498FE0
0x6DB27C: mov     ecx, [eax]
0x6DB27E: mov     [esp+0F8h+var_7C], ecx
0x6DB282: mov     edx, [eax+4]
0x6DB285: mov     [esp+0F8h+var_78], edx
0x6DB28C: mov     eax, [eax+8]
0x6DB28F: mov     [esp+0F8h+var_74], eax
0x6DB296: jmp     short loc_6DB29C
0x6DB298: fstp    st
0x6DB29A: fstp    st
0x6DB29C: fld     [esp+0F8h+var_88]
0x6DB2A0: fst     [esp+0F8h+var_AC]
0x6DB2A4: fld     [esp+0F8h+var_84]
0x6DB2A8: fst     [esp+0F8h+var_A0]
0x6DB2AC: fld     [esp+0F8h+var_80]
0x6DB2B0: fst     [esp+0F8h+var_94]
0x6DB2B4: fld     [esp+0F8h+var_B8]
0x6DB2B8: fchs
0x6DB2BA: fstp    [esp+0F8h+var_E8]
0x6DB2BE: fld     [esp+0F8h+var_B4]
0x6DB2C2: fchs
0x6DB2C4: fstp    [esp+0F8h+var_E4]
0x6DB2C8: fld     [esp+0F8h+var_B0]
0x6DB2CC: fchs
0x6DB2CE: fstp    [esp+0F8h+var_E0]
0x6DB2D2: fld     [esp+0F8h+var_E8]
0x6DB2D6: fstp    [esp+0F8h+var_A8]
0x6DB2DA: fld     [esp+0F8h+var_E4]
0x6DB2DE: fstp    [esp+0F8h+var_9C]
0x6DB2E2: fld     [esp+0F8h+var_E0]
0x6DB2E6: fstp    [esp+0F8h+var_90]
0x6DB2EA: fld     [esp+0F8h+var_7C]
0x6DB2EE: fchs
0x6DB2F0: fstp    [esp+0F8h+var_E8]
0x6DB2F4: fld     [esp+0F8h+var_78]
0x6DB2FB: fchs
0x6DB2FD: fstp    [esp+0F8h+var_E4]
0x6DB301: fld     [esp+0F8h+var_74]
0x6DB308: fchs
0x6DB30A: fstp    [esp+0F8h+var_E0]
0x6DB30E: fld     [esp+0F8h+var_E8]
0x6DB312: fstp    [esp+0F8h+var_A4]
0x6DB316: fld     [esp+0F8h+var_E4]
0x6DB31A: fstp    [esp+0F8h+var_98]
0x6DB31E: fld     [esp+0F8h+var_E0]
0x6DB322: fstp    [esp+0F8h+var_8C]
0x6DB326: jmp     loc_6DB40F
0x6DB32B: movzx   eax, cl
0x6DB32E: lea     ecx, [esp+0F8h+var_D4]
0x6DB332: push    ecx; int
0x6DB333: lea     edx, [esp+0FCh+var_7C]
0x6DB33A: push    edx; int
0x6DB33B: lea     ecx, [esp+100h+var_B8]
0x6DB33F: push    ecx; int
0x6DB340: mov     ecx, eax
0x6DB342: imul    eax, [esp+104h+arg_0]
0x6DB34A: imul    ecx, [esp+104h+arg_4]
0x6DB352: lea     edx, [esp+104h+var_88]
0x6DB356: push    edx; int
0x6DB357: push    ebp; int
0x6DB358: add     ecx, edi
0x6DB35A: push    ecx; int
0x6DB35B: add     eax, edi
0x6DB35D: push    eax; int
0x6DB35E: push    ecx
0x6DB35F: fstp    [esp+118h+var_118]; float
0x6DB362: call    sub_6BBEE0
0x6DB367: fld     [esp+118h+var_88]
0x6DB36E: add     esp, 20h
0x6DB371: fstp    [esp+0F8h+var_AC]
0x6DB375: lea     edx, [esp+0F8h+var_88]
0x6DB379: fld     [esp+0F8h+var_84]
0x6DB37D: push    edx
0x6DB37E: fstp    [esp+0FCh+var_A0]
0x6DB382: lea     eax, [esp+0FCh+var_C4]
0x6DB386: fld     [esp+0FCh+var_80]
0x6DB38A: push    eax
0x6DB38B: mov     ecx, offset dword_B258E8
0x6DB390: fstp    [esp+100h+var_94]
0x6DB394: call    sub_4BF9E0
0x6DB399: fld     [esp+0F8h+var_C4]
0x6DB39D: fst     [esp+0F8h+var_A8]
0x6DB3A1: fld     [esp+0F8h+var_C0]
0x6DB3A5: fst     [esp+0F8h+var_9C]
0x6DB3A9: fld     [esp+0F8h+var_BC]
0x6DB3AD: fst     [esp+0F8h+var_90]
0x6DB3B1: fld     st
0x6DB3B3: fld     [esp+0F8h+var_84]
0x6DB3B7: fld     st
0x6DB3B9: fmulp   st(2), st
0x6DB3BB: fld     st(3)
0x6DB3BD: fld     [esp+0F8h+var_80]
0x6DB3C1: fld     st
0x6DB3C3: fmulp   st(2), st
0x6DB3C5: fxch    st(3)
0x6DB3C7: fsubrp  st(1), st
0x6DB3C9: fstp    [esp+0F8h+var_E8]
0x6DB3CD: fld     st(1)
0x6DB3CF: fmul    st, st(5)
0x6DB3D1: fld     [esp+0F8h+var_88]
0x6DB3D5: fld     st
0x6DB3D7: fmulp   st(5), st
0x6DB3D9: fxch    st(1)
0x6DB3DB: fsubrp  st(4), st
0x6DB3DD: fxch    st(3)
0x6DB3DF: fstp    [esp+0F8h+var_E4]
0x6DB3E3: fld     st(2)
0x6DB3E5: fmulp   st(4), st
0x6DB3E7: fld     st
0x6DB3E9: fmulp   st(5), st
0x6DB3EB: fxch    st(3)
0x6DB3ED: fsubrp  st(4), st
0x6DB3EF: fxch    st(3)
0x6DB3F1: fstp    [esp+0F8h+var_E0]
0x6DB3F5: fld     [esp+0F8h+var_E8]
0x6DB3F9: fstp    [esp+0F8h+var_A4]
0x6DB3FD: fld     [esp+0F8h+var_E4]
0x6DB401: fstp    [esp+0F8h+var_98]
0x6DB405: fld     [esp+0F8h+var_E0]
0x6DB409: fstp    [esp+0F8h+var_8C]
0x6DB40D: fxch    st(2)
0x6DB40F: movzx   ecx, word ptr [ebx+0Ch]
0x6DB413: mov     dl, cl
0x6DB415: shr     dl, 6
0x6DB418: test    dl, 1
0x6DB41B: jz      short loc_6DB483
0x6DB41D: fld     st(2)
0x6DB41F: fchs
0x6DB421: fstp    [esp+0F8h+var_E8]
0x6DB425: fld     st(1)
0x6DB427: fchs
0x6DB429: fstp    [esp+0F8h+var_E4]
0x6DB42D: fld     st
0x6DB42F: fchs
0x6DB431: fstp    [esp+0F8h+var_E0]
0x6DB435: fld     [esp+0F8h+var_E8]
0x6DB439: fstp    [esp+0F8h+var_AC]
0x6DB43D: fld     [esp+0F8h+var_E4]
0x6DB441: fstp    [esp+0F8h+var_A0]
0x6DB445: fld     [esp+0F8h+var_E0]
0x6DB449: fstp    [esp+0F8h+var_94]
0x6DB44D: fld     [esp+0F8h+var_A8]
0x6DB451: fchs
0x6DB453: fstp    [esp+0F8h+var_E8]
0x6DB457: fld     [esp+0F8h+var_9C]
0x6DB45B: fchs
0x6DB45D: fstp    [esp+0F8h+var_E4]
0x6DB461: fld     [esp+0F8h+var_90]
0x6DB465: fchs
0x6DB467: fstp    [esp+0F8h+var_E0]
0x6DB46B: fld     [esp+0F8h+var_E8]
0x6DB46F: fstp    [esp+0F8h+var_A8]
0x6DB473: fld     [esp+0F8h+var_E4]
0x6DB477: fstp    [esp+0F8h+var_9C]
0x6DB47B: fld     [esp+0F8h+var_E0]
0x6DB47F: fstp    [esp+0F8h+var_90]
0x6DB483: movsx   eax, word ptr [ebx+30h]
0x6DB487: sub     eax, 1
0x6DB48A: jz      short loc_6DB4FD
0x6DB48C: sub     eax, 1
0x6DB48F: jnz     loc_6DB563
0x6DB495: fld     [esp+0F8h+var_AC]
0x6DB499: fstp    [esp+0F8h+var_E8]
0x6DB49D: fld     [esp+0F8h+var_A0]
0x6DB4A1: fstp    [esp+0F8h+var_E4]
0x6DB4A5: fld     [esp+0F8h+var_94]
0x6DB4A9: fstp    [esp+0F8h+var_E0]
0x6DB4AD: fld     [esp+0F8h+var_A4]
0x6DB4B1: fchs
0x6DB4B3: fstp    [esp+0F8h+var_C4]
0x6DB4B7: fld     [esp+0F8h+var_98]
0x6DB4BB: fchs
0x6DB4BD: fstp    [esp+0F8h+var_C0]
0x6DB4C1: fld     [esp+0F8h+var_8C]
0x6DB4C5: fchs
0x6DB4C7: fstp    [esp+0F8h+var_BC]
0x6DB4CB: fld     [esp+0F8h+var_C4]
0x6DB4CF: fstp    [esp+0F8h+var_AC]
0x6DB4D3: fld     [esp+0F8h+var_C0]
0x6DB4D7: fstp    [esp+0F8h+var_A0]
0x6DB4DB: fld     [esp+0F8h+var_BC]
0x6DB4DF: fstp    [esp+0F8h+var_94]
0x6DB4E3: fld     [esp+0F8h+var_E8]
0x6DB4E7: fstp    [esp+0F8h+var_A4]
0x6DB4EB: fld     [esp+0F8h+var_E4]
0x6DB4EF: fstp    [esp+0F8h+var_98]
0x6DB4F3: fld     [esp+0F8h+var_E0]
0x6DB4F7: fstp    [esp+0F8h+var_8C]
0x6DB4FB: jmp     short loc_6DB563
0x6DB4FD: fld     [esp+0F8h+var_AC]
0x6DB501: fstp    [esp+0F8h+var_E8]
0x6DB505: fld     [esp+0F8h+var_A0]
0x6DB509: fstp    [esp+0F8h+var_E4]
0x6DB50D: fld     [esp+0F8h+var_94]
0x6DB511: fstp    [esp+0F8h+var_E0]
0x6DB515: fld     [esp+0F8h+var_A8]
0x6DB519: fchs
0x6DB51B: fstp    [esp+0F8h+var_C4]
0x6DB51F: fld     [esp+0F8h+var_9C]
0x6DB523: fchs
0x6DB525: fstp    [esp+0F8h+var_C0]
0x6DB529: fld     [esp+0F8h+var_90]
0x6DB52D: fchs
0x6DB52F: fstp    [esp+0F8h+var_BC]
0x6DB533: fld     [esp+0F8h+var_C4]
0x6DB537: fstp    [esp+0F8h+var_AC]
0x6DB53B: fld     [esp+0F8h+var_C0]
0x6DB53F: fstp    [esp+0F8h+var_A0]
0x6DB543: fld     [esp+0F8h+var_BC]
0x6DB547: fstp    [esp+0F8h+var_94]
0x6DB54B: fld     [esp+0F8h+var_E8]
0x6DB54F: fstp    [esp+0F8h+var_A8]
0x6DB553: fld     [esp+0F8h+var_E4]
0x6DB557: fstp    [esp+0F8h+var_9C]
0x6DB55B: fld     [esp+0F8h+var_E0]
0x6DB55F: fstp    [esp+0F8h+var_90]
0x6DB563: shr     cl, 3
0x6DB566: test    cl, 1
0x6DB569: jz      loc_6DB63B
0x6DB56F: test    byte ptr ds:0B3DD34h, 1
0x6DB576: jnz     short loc_6DB591
0x6DB578: fld     dword ptr ds:0B3F9A4h
0x6DB57E: or      dword ptr ds:0B3DD34h, 1
0x6DB585: fdivr   qword ptr ds:0A3C800h
0x6DB58B: fstp    dword ptr ds:0B3DD30h
0x6DB591: fild    dword ptr [ebx+38h]
0x6DB594: fmul    dword ptr [ebx+28h]
0x6DB597: fstp    [esp+0F8h+var_D0]
0x6DB59B: fld     [esp+0F8h+var_D4]
0x6DB59F: fld     dword ptr [ebx+34h]
0x6DB5A2: fcomp   st(1)
0x6DB5A4: fnstsw  ax
0x6DB5A6: test    ah, 41h
0x6DB5A9: jnz     loc_6DB637
0x6DB5AF: fstp    st(3)
0x6DB5B1: fstp    st(1)
0x6DB5B3: fstp    st
0x6DB5B5: fdiv    dword ptr [ebx+34h]
0x6DB5B8: fstp    [esp+0F8h+var_D8]
0x6DB5BC: fld     [esp+0F8h+var_D8]
0x6DB5C0: call    __CIatan
0x6DB5C5: fstp    [esp+0F8h+var_D8]
0x6DB5C9: fld     [esp+0F8h+var_D8]
0x6DB5CD: fmul    dword ptr ds:0B3DD30h
0x6DB5D3: fmul    [esp+0F8h+var_D0]
0x6DB5D7: fstp    [esp+0F8h+var_D0]
0x6DB5DB: fld     [esp+0F8h+var_84]
0x6DB5DF: fld     [esp+0F8h+var_88]
0x6DB5E3: fld     [esp+0F8h+var_80]
0x6DB5E7: fxch    st(1)
0x6DB5E9: fxch    st(2)
0x6DB5EB: fxch    st(1)
0x6DB5ED: sub     esp, 10h
0x6DB5F0: fstp    [esp+108h+var_FC]; float
0x6DB5F4: lea     ecx, [esp+108h+var_48]
0x6DB5FB: fstp    [esp+108h+var_100]; float
0x6DB5FF: fstp    [esp+108h+var_104]; float
0x6DB603: fld     [esp+108h+var_D0]
0x6DB607: fstp    [esp+108h+var_108]; float
0x6DB60A: call    sub_70FE20
0x6DB60F: lea     eax, [esp+0F8h+var_AC]
0x6DB613: push    eax
0x6DB614: lea     ecx, [esp+0FCh+var_24]
0x6DB61B: push    ecx
0x6DB61C: lea     ecx, [esp+100h+var_48]
0x6DB623: call    NiMAtrix33_Multiply
0x6DB628: mov     ecx, 9
0x6DB62D: mov     esi, eax
0x6DB62F: lea     edi, [esp+0F8h+var_AC]
0x6DB633: rep movsd
0x6DB635: jmp     short loc_6DB641
0x6DB637: fstp    st
0x6DB639: jmp     short loc_6DB5ED
0x6DB63B: fstp    st(2)
0x6DB63D: fstp    st
0x6DB63F: fstp    st
0x6DB641: mov     edi, [esp+0F8h+arg_C]
0x6DB648: mov     ecx, 9
0x6DB64D: lea     esi, [esp+0F8h+var_AC]
0x6DB651: rep movsd
0x6DB653: pop     edi
0x6DB654: pop     esi
0x6DB655: pop     ebp
0x6DB656: pop     ebx
0x6DB657: add     esp, 0E8h
0x6DB65D: retn    10h
