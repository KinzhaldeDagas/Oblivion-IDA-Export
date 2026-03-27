0x765990: sub     esp, 108h
0x765996: push    ebp
0x765997: mov     ebp, ecx
0x765999: cmp     byte ptr [ebp+6F0h], 0
0x7659A0: jnz     loc_76686C
0x7659A6: mov     eax, [ebp+0Ch]
0x7659A9: mov     ecx, [eax+8]
0x7659AC: test    byte ptr [ecx+18h], 1
0x7659B0: jz      short loc_7659C5
0x7659B2: mov     edx, [eax+10h]
0x7659B5: fldz
0x7659B7: fcomp   dword ptr [edx+50h]
0x7659BA: fnstsw  ax
0x7659BC: test    ah, 1
0x7659BF: jz      loc_76686C
0x7659C5: mov     eax, [esp+10Ch+arg_0]
0x7659CC: mov     edx, [eax+24h]
0x7659CF: push    ebx
0x7659D0: mov     ebx, [eax+0B4h]
0x7659D6: push    esi
0x7659D7: push    edi
0x7659D8: lea     esi, [eax+64h]
0x7659DB: mov     ecx, 0Dh
0x7659E0: lea     edi, [esp+118h+var_60]
0x7659E7: rep movsd
0x7659E9: mov     ecx, [eax+20h]
0x7659EC: mov     [esp+118h+var_98], ecx
0x7659F3: mov     ecx, [eax+28h]
0x7659F6: mov     [esp+118h+var_94], edx
0x7659FD: mov     edx, [eax+2Ch]
0x765A00: mov     [esp+118h+var_90], ecx
0x765A07: mov     [esp+118h+var_8C], edx
0x765A0E: mov     eax, [ebx]
0x765A10: mov     edx, [eax+50h]
0x765A13: mov     ecx, ebx
0x765A15: mov     [esp+118h+var_108], ebx
0x765A19: call    edx
0x765A1B: movzx   esi, ax
0x765A1E: test    si, si
0x765A21: movzx   eax, word ptr [ebx+8]
0x765A25: mov     [esp+118h+var_FC], eax
0x765A29: jz      loc_766869
0x765A2F: mov     ecx, [ebp+8A8h]
0x765A35: push    0; int
0x765A37: push    0; int
0x765A39: push    0; char
0x765A3B: push    0; NiSkinInstance *
0x765A3D: push    ebx; NiGeometryData *
0x765A3E: push    ecx; NiGeometryGroup *
0x765A3F: mov     ecx, [ebp+8A0h]
0x765A45: call    NiGeometryGroup__AddGeometryDataToGroup
0x765A4A: movzx   edi, si
0x765A4D: mov     esi, [ebx+38h]
0x765A50: push    1; streamCount
0x765A52: mov     ecx, esi; this
0x765A54: mov     [esp+11Ch+var_100], edi
0x765A58: mov     [esp+11Ch+var_2C], esi
0x765A5F: call    sub_777F70
0x765A64: movzx   ecx, word ptr [esp+118h+var_FC]
0x765A69: lea     edx, ds:0[ecx*4]
0x765A70: mov     [esi+18h], edx
0x765A73: mov     dword ptr [esi+44h], 1
0x765A7A: lea     eax, ds:0[edi*4]
0x765A81: mov     [esi+14h], eax
0x765A84: add     ecx, ecx
0x765A86: mov     [esi+40h], ecx
0x765A89: lea     edx, [edi+edi]
0x765A8C: mov     [esi+3Ch], edx
0x765A8F: xor     edi, edi
0x765A91: mov     [esi+4Ch], edi
0x765A94: mov     [esi+48h], edi
0x765A97: mov     edx, [esp+118h+var_98]
0x765A9E: mov     ecx, [esp+118h+var_94]
0x765AA5: mov     [ebp+658h], edx
0x765AAB: mov     edx, [esp+118h+var_90]
0x765AB2: mov     [ebp+65Ch], ecx
0x765AB8: mov     ecx, [esp+118h+var_8C]
0x765ABF: push    1
0x765AC1: push    edi
0x765AC2: mov     [ebp+660h], edx
0x765AC8: mov     [ebp+664h], ecx
0x765ACE: push    edi
0x765ACF: mov     dword ptr [esi], 1C00000h
0x765AD5: mov     ecx, [ebp+8B4h]
0x765ADB: push    eax
0x765ADC: call    sub_778350
0x765AE1: cmp     eax, edi
0x765AE3: mov     [esp+118h+var_28], eax
0x765AEA: jz      loc_766869
0x765AF0: mov     eax, [esp+118h+var_108]
0x765AF4: mov     ecx, [eax+4Ch]
0x765AF7: mov     edx, [eax+44h]
0x765AFA: mov     edi, [eax+1Ch]
0x765AFD: mov     ebx, [ebx+24h]
0x765B00: mov     [esp+118h+var_F0], edx
0x765B04: mov     edx, [eax+54h]
0x765B07: mov     [esp+118h+var_EC], ecx
0x765B0B: mov     ecx, [ebp+8ACh]
0x765B11: mov     eax, [ecx]
0x765B13: mov     [esp+118h+var_C0], edx
0x765B17: mov     edx, [eax+30h]
0x765B1A: push    0
0x765B1C: call    edx
0x765B1E: fld     [esp+11Ch+var_34]
0x765B25: push    ecx
0x765B26: fstp    [esp+120h+var_120]; float
0x765B29: lea     ecx, [esp+120h+var_40]
0x765B30: push    ecx; int
0x765B31: lea     edx, [esp+124h+var_64]
0x765B38: lea     eax, [ebp+940h]
0x765B3E: push    edx; int
0x765B3F: push    eax; int
0x765B40: call    sub_761AE0
0x765B45: mov     eax, [ebp+280h]
0x765B4B: mov     edx, [eax]
0x765B4D: add     esp, 10h
0x765B50: lea     ecx, [ebp+940h]
0x765B56: push    ecx
0x765B57: push    100h
0x765B5C: push    eax
0x765B5D: mov     eax, [edx+0B0h]
0x765B63: call    eax
0x765B65: mov     ecx, [ebp+8ACh]
0x765B6B: mov     edx, [ecx]
0x765B6D: mov     edx, [edx+34h]
0x765B70: lea     eax, [esp+128h+var_70]
0x765B77: push    eax
0x765B78: call    edx
0x765B7A: lea     eax, [esp+12Ch+var_74]
0x765B81: push    eax
0x765B82: lea     ecx, [ebp+628h]
0x765B88: push    ecx
0x765B89: lea     edx, [esp+134h+var_80]
0x765B90: push    edx
0x765B91: call    sub_710250
0x765B96: mov     ecx, [eax]
0x765B98: mov     [ebp+640h], ecx
0x765B9E: mov     edx, [eax+4]
0x765BA1: mov     [ebp+644h], edx
0x765BA7: mov     eax, [eax+8]
0x765BAA: lea     ecx, [esp+138h+var_74]
0x765BB1: push    ecx
0x765BB2: lea     edx, [ebp+634h]
0x765BB8: mov     [ebp+648h], eax
0x765BBE: push    edx
0x765BBF: lea     eax, [esp+140h+var_80]
0x765BC6: push    eax
0x765BC7: call    sub_710250
0x765BCC: mov     edx, [eax]
0x765BCE: lea     ecx, [ebp+64Ch]
0x765BD4: mov     [ecx], edx
0x765BD6: mov     edx, [eax+4]
0x765BD9: mov     [ecx+4], edx
0x765BDC: mov     eax, [eax+8]
0x765BDF: add     esp, 18h
0x765BE2: push    ecx
0x765BE3: mov     [ecx+8], eax
0x765BE6: lea     ecx, [esp+130h+var_9C]
0x765BED: push    ecx
0x765BEE: lea     ecx, [ebp+640h]
0x765BF4: call    sub_498FE0
0x765BF9: push    152h
0x765BFE: mov     ecx, esi
0x765C00: call    sub_7780A0
0x765C05: cmp     dword ptr [esi+1Ch], 0
0x765C09: jbe     short loc_765C14
0x765C0B: mov     edx, [esi+20h]
0x765C0E: mov     dword ptr [edx], 24h ; '$'
0x765C14: mov     ecx, [ebp+8B0h]
0x765C1A: push    0
0x765C1C: push    esi
0x765C1D: call    NiGeometryBufferData__RefreshVBChips
0x765C22: cmp     dword ptr [esi+1Ch], 0
0x765C26: jbe     short loc_765C36
0x765C28: mov     eax, [esi+24h]
0x765C2B: mov     eax, [eax]
0x765C2D: mov     [esp+12Ch+var_8C], eax
0x765C34: jmp     short loc_765C48
0x765C36: mov     [esp+12Ch+var_8C], 0
0x765C41: mov     eax, [esp+12Ch+var_8C]
0x765C48: mov     esi, [eax+8]
0x765C4B: test    esi, esi
0x765C4D: jz      loc_766869
0x765C53: mov     ecx, [eax+10h]
0x765C56: mov     edx, [eax+14h]
0x765C59: mov     eax, [eax+0Ch]
0x765C5C: push    ecx; int
0x765C5D: mov     ecx, [ebp+8B0h]
0x765C63: push    edx; Size
0x765C64: push    eax; int
0x765C65: push    esi; int
0x765C66: call    sub_776C90
0x765C6B: mov     esi, eax
0x765C6D: test    esi, esi
0x765C6F: jz      loc_766869
0x765C75: cmp     [esp+12Ch+var_D4], 0
0x765C7A: jz      loc_766227
0x765C80: test    ebx, ebx
0x765C82: mov     eax, [esp+12Ch+var_114]
0x765C86: jz      loc_765F99
0x765C8C: test    eax, eax
0x765C8E: jbe     loc_766695
0x765C94: mov     [esp+12Ch+var_110], eax
0x765C98: jmp     short loc_765CA0
0x765C9A: align 10h
0x765CA0: fld     dword ptr [ebx+0Ch]
0x765CA3: fmul    qword ptr ds:0A3DDD8h
0x765CA9: fstp    [esp+12Ch+var_11C]
0x765CAD: fld     [esp+12Ch+var_11C]
0x765CB1: fistp   [esp+12Ch+var_118]
0x765CB5: fld     dword ptr [ebx]
0x765CB7: mov     eax, [esp+12Ch+var_118]
0x765CBB: fmul    qword ptr ds:0A3DDD8h
0x765CC1: fstp    [esp+12Ch+var_11C]
0x765CC5: fld     [esp+12Ch+var_11C]
0x765CC9: fistp   [esp+12Ch+var_10C]
0x765CCD: fld     dword ptr [ebx+4]
0x765CD0: mov     ecx, [esp+12Ch+var_10C]
0x765CD4: fmul    qword ptr ds:0A3DDD8h
0x765CDA: fstp    [esp+12Ch+var_11C]
0x765CDE: fld     [esp+12Ch+var_11C]
0x765CE2: fistp   [esp+12Ch+var_114]
0x765CE6: fld     dword ptr [ebx+8]
0x765CE9: mov     edx, [esp+12Ch+var_114]
0x765CED: fmul    qword ptr ds:0A3DDD8h
0x765CF3: fstp    [esp+12Ch+var_11C]
0x765CF7: fld     [esp+12Ch+var_11C]
0x765CFB: fistp   [esp+12Ch+var_84]
0x765D02: shl     eax, 8
0x765D05: or      eax, ecx
0x765D07: mov     ecx, [esp+12Ch+var_100]
0x765D0B: fld     dword ptr [ecx]
0x765D0D: shl     eax, 8
0x765D10: or      eax, edx
0x765D12: mov     edx, [esp+12Ch+var_104]
0x765D16: fmul    dword ptr [edx]
0x765D18: mov     edx, [esp+12Ch+var_D4]
0x765D1C: shl     eax, 8
0x765D1F: or      eax, [esp+12Ch+var_84]
0x765D26: lea     ecx, [esp+12Ch+var_90]
0x765D2D: fstp    [esp+12Ch+var_11C]
0x765D31: fld     dword ptr [edx]
0x765D33: mov     [esp+12Ch+var_108], eax
0x765D37: lea     eax, [esp+12Ch+var_88]
0x765D3E: push    eax; int
0x765D3F: push    ecx; int
0x765D40: push    ecx
0x765D41: fstp    [esp+138h+var_138]; float
0x765D44: call    sub_532C20
0x765D49: fld     [esp+138h+var_90]
0x765D50: add     esp, 0Ch
0x765D53: fld     st
0x765D55: lea     eax, [ebp+64Ch]
0x765D5B: fld     [esp+12Ch+var_88]
0x765D62: push    eax; int
0x765D63: fld     st
0x765D65: push    ecx
0x765D66: faddp   st(2), st
0x765D68: lea     eax, [esp+134h+var_80]
0x765D6F: fld     [esp+134h+var_11C]
0x765D73: fld     st
0x765D75: fmulp   st(3), st
0x765D77: fxch    st(2)
0x765D79: fstp    [esp+134h+var_F0]
0x765D7D: fsubrp  st(2), st
0x765D7F: fmulp   st(1), st
0x765D81: fstp    [esp+134h+var_11C]
0x765D85: fld     [esp+134h+var_11C]
0x765D89: fstp    [esp+134h+var_134]; float
0x765D8C: push    eax; int
0x765D8D: call    sub_47DA10
0x765D92: fld     [esp+138h+var_F0]
0x765D96: add     esp, 0Ch
0x765D99: push    eax
0x765D9A: lea     ecx, [esp+130h+var_C4]
0x765D9E: push    ecx
0x765D9F: lea     eax, [ebp+640h]
0x765DA5: push    eax; int
0x765DA6: push    ecx
0x765DA7: lea     edx, [esp+13Ch+var_38]
0x765DAE: fstp    [esp+13Ch+var_13C]; float
0x765DB1: push    edx; int
0x765DB2: call    sub_47DA10
0x765DB7: add     esp, 0Ch
0x765DBA: mov     ecx, eax
0x765DBC: call    sub_47D9B0
0x765DC1: fld     [esp+12Ch+var_F0]
0x765DC5: lea     eax, [ebp+64Ch]
0x765DCB: push    eax; int
0x765DCC: push    ecx
0x765DCD: lea     eax, [esp+134h+var_20]
0x765DD4: fstp    [esp+134h+var_134]; float
0x765DD7: push    eax; int
0x765DD8: call    sub_47DA10
0x765DDD: fld     [esp+138h+var_11C]
0x765DE1: add     esp, 0Ch
0x765DE4: fchs
0x765DE6: push    eax
0x765DE7: lea     ecx, [esp+130h+var_FC]
0x765DEB: push    ecx
0x765DEC: lea     eax, [ebp+640h]
0x765DF2: push    eax; int
0x765DF3: push    ecx
0x765DF4: lea     edx, [esp+13Ch+var_2C]
0x765DFB: fstp    [esp+13Ch+var_13C]; float
0x765DFE: push    edx; int
0x765DFF: call    sub_47DA10
0x765E04: add     esp, 0Ch
0x765E07: mov     ecx, eax
0x765E09: call    sub_47D9B0
0x765E0E: fld     dword ptr [edi]
0x765E10: fld     [esp+12Ch+var_C4]
0x765E14: mov     eax, [esp+12Ch+var_108]
0x765E18: fld     st
0x765E1A: add     esi, 24h ; '$'
0x765E1D: fsubp   st(2), st
0x765E1F: add     esi, 24h ; '$'
0x765E22: fxch    st(1)
0x765E24: fstp    [esp+12Ch+var_EC]
0x765E28: fld     dword ptr [edi+4]
0x765E2B: fsub    [esp+12Ch+var_C0]
0x765E2F: fstp    [esp+12Ch+var_E8]
0x765E33: fld     dword ptr [edi+8]
0x765E36: mov     [esi-30h], eax
0x765E39: fsub    [esp+12Ch+var_BC]
0x765E3D: fstp    [esp+12Ch+var_E4]
0x765E41: fld     [esp+12Ch+var_EC]
0x765E45: fstp    dword ptr [esi-48h]
0x765E48: fld     [esp+12Ch+var_E8]
0x765E4C: fstp    dword ptr [esi-44h]
0x765E4F: fld     [esp+12Ch+var_E4]
0x765E53: fstp    dword ptr [esi-40h]
0x765E56: fld     [esp+12Ch+var_9C]
0x765E5D: fst     dword ptr [esi-3Ch]
0x765E60: fld     [esp+12Ch+var_98]
0x765E67: fst     dword ptr [esi-38h]
0x765E6A: fld     [esp+12Ch+var_94]
0x765E71: fst     dword ptr [esi-34h]
0x765E74: fldz
0x765E76: fst     dword ptr [esi-2Ch]
0x765E79: fld1
0x765E7B: fst     dword ptr [esi-28h]
0x765E7E: fld     dword ptr [edi]
0x765E80: fsub    [esp+12Ch+var_FC]
0x765E84: fstp    [esp+12Ch+var_E0]
0x765E88: fld     dword ptr [edi+4]
0x765E8B: fsub    [esp+12Ch+var_F8]
0x765E8F: fstp    [esp+12Ch+var_DC]
0x765E93: fld     dword ptr [edi+8]
0x765E96: mov     [esi-0Ch], eax
0x765E99: fsub    [esp+12Ch+var_F4]
0x765E9D: fstp    [esp+12Ch+var_D8]
0x765EA1: fld     [esp+12Ch+var_E0]
0x765EA5: fstp    dword ptr [esi-24h]
0x765EA8: fld     [esp+12Ch+var_DC]
0x765EAC: fstp    dword ptr [esi-20h]
0x765EAF: fld     [esp+12Ch+var_D8]
0x765EB3: fstp    dword ptr [esi-1Ch]
0x765EB6: fxch    st(4)
0x765EB8: fst     dword ptr [esi-18h]
0x765EBB: fxch    st(3)
0x765EBD: fst     dword ptr [esi-14h]
0x765EC0: fxch    st(2)
0x765EC2: fst     dword ptr [esi-10h]
0x765EC5: fxch    st(4)
0x765EC7: fst     dword ptr [esi-8]
0x765ECA: fst     dword ptr [esi-4]
0x765ECD: fld     dword ptr [edi]
0x765ECF: faddp   st(6), st
0x765ED1: fxch    st(5)
0x765ED3: fstp    [esp+12Ch+var_B8]
0x765ED7: fld     [esp+12Ch+var_C0]
0x765EDB: add     esi, 24h ; '$'
0x765EDE: fadd    dword ptr [edi+4]
0x765EE1: add     esi, 24h ; '$'
0x765EE4: add     edi, 0Ch
0x765EE7: add     ebx, 10h
0x765EEA: fstp    [esp+12Ch+var_B4]
0x765EEE: fld     dword ptr [edi-4]
0x765EF1: mov     [esi-30h], eax
0x765EF4: fadd    [esp+12Ch+var_BC]
0x765EF8: fstp    [esp+12Ch+var_B0]
0x765EFC: fld     [esp+12Ch+var_B8]
0x765F00: fstp    dword ptr [esi-48h]
0x765F03: fld     [esp+12Ch+var_B4]
0x765F07: fstp    dword ptr [esi-44h]
0x765F0A: fld     [esp+12Ch+var_B0]
0x765F0E: fstp    dword ptr [esi-40h]
0x765F11: fxch    st(2)
0x765F13: fst     dword ptr [esi-3Ch]
0x765F16: fxch    st(1)
0x765F18: fst     dword ptr [esi-38h]
0x765F1B: fxch    st(3)
0x765F1D: fst     dword ptr [esi-34h]
0x765F20: fxch    st(4)
0x765F22: fstp    dword ptr [esi-2Ch]
0x765F25: fxch    st(1)
0x765F27: fst     dword ptr [esi-28h]
0x765F2A: fld     [esp+12Ch+var_FC]
0x765F2E: fadd    dword ptr [edi-0Ch]
0x765F31: fstp    [esp+12Ch+var_D0]
0x765F35: fld     [esp+12Ch+var_F8]
0x765F39: fadd    dword ptr [edi-8]
0x765F3C: fstp    [esp+12Ch+var_CC]
0x765F40: fld     dword ptr [edi-4]
0x765F43: mov     [esi-0Ch], eax
0x765F46: fadd    [esp+12Ch+var_F4]
0x765F4A: mov     eax, 4
0x765F4F: add     [esp+12Ch+var_104], eax
0x765F53: add     [esp+12Ch+var_100], eax
0x765F57: fstp    [esp+12Ch+var_C8]
0x765F5B: add     [esp+12Ch+var_D4], eax
0x765F5F: sub     [esp+12Ch+var_110], 1
0x765F64: fld     [esp+12Ch+var_D0]
0x765F68: fstp    dword ptr [esi-24h]
0x765F6B: fld     [esp+12Ch+var_CC]
0x765F6F: fstp    dword ptr [esi-20h]
0x765F72: fld     [esp+12Ch+var_C8]
0x765F76: fstp    dword ptr [esi-1Ch]
0x765F79: fxch    st(1)
0x765F7B: fstp    dword ptr [esi-18h]
0x765F7E: fxch    st(1)
0x765F80: fstp    dword ptr [esi-14h]
0x765F83: fxch    st(1)
0x765F85: fstp    dword ptr [esi-10h]
0x765F88: fst     dword ptr [esi-8]
0x765F8B: fstp    dword ptr [esi-4]
0x765F8E: jnz     loc_765CA0
0x765F94: jmp     loc_766695
0x765F99: test    eax, eax
0x765F9B: jbe     loc_766695
0x765FA1: mov     [esp+12Ch+var_F0], eax
0x765FA5: or      ebx, 0FFFFFFFFh
0x765FA8: jmp     short loc_765FB0
0x765FAA: align 10h
0x765FB0: mov     eax, [esp+12Ch+var_100]
0x765FB4: fld     dword ptr [eax]
0x765FB6: mov     ecx, [esp+12Ch+var_104]
0x765FBA: fmul    dword ptr [ecx]
0x765FBC: lea     edx, [esp+12Ch+var_88]
0x765FC3: push    edx; int
0x765FC4: lea     eax, [esp+130h+var_108]
0x765FC8: push    eax; int
0x765FC9: fstp    [esp+134h+var_90]
0x765FD0: push    ecx
0x765FD1: mov     ecx, [esp+138h+var_D4]
0x765FD5: fld     dword ptr [ecx]
0x765FD7: fstp    [esp+138h+var_138]; float
0x765FDA: call    sub_532C20
0x765FDF: fld     [esp+138h+var_108]
0x765FE3: add     esp, 0Ch
0x765FE6: fld     st
0x765FE8: lea     eax, [ebp+64Ch]
0x765FEE: fld     [esp+12Ch+var_88]
0x765FF5: push    eax; int
0x765FF6: fld     st
0x765FF8: push    ecx
0x765FF9: faddp   st(2), st
0x765FFB: lea     edx, [esp+134h+var_2C]
0x766002: fld     [esp+134h+var_90]
0x766009: fld     st
0x76600B: fmulp   st(3), st
0x76600D: fxch    st(2)
0x76600F: fstp    [esp+134h+var_110]
0x766013: fsubrp  st(2), st
0x766015: fmulp   st(1), st
0x766017: fstp    [esp+134h+var_11C]
0x76601B: fld     [esp+134h+var_11C]
0x76601F: fstp    [esp+134h+var_134]; float
0x766022: push    edx; int
0x766023: call    sub_47DA10
0x766028: fld     [esp+138h+var_110]
0x76602C: add     esp, 0Ch
0x76602F: push    eax
0x766030: lea     eax, [esp+130h+var_C4]
0x766034: push    eax
0x766035: lea     eax, [ebp+640h]
0x76603B: push    eax; int
0x76603C: push    ecx
0x76603D: lea     ecx, [esp+13Ch+var_20]
0x766044: fstp    [esp+13Ch+var_13C]; float
0x766047: push    ecx; int
0x766048: call    sub_47DA10
0x76604D: add     esp, 0Ch
0x766050: mov     ecx, eax
0x766052: call    sub_47D9B0
0x766057: fld     [esp+12Ch+var_110]
0x76605B: lea     eax, [ebp+64Ch]
0x766061: push    eax; int
0x766062: push    ecx
0x766063: lea     edx, [esp+134h+var_80]
0x76606A: fstp    [esp+134h+var_134]; float
0x76606D: push    edx; int
0x76606E: call    sub_47DA10
0x766073: fld     [esp+138h+var_11C]
0x766077: add     esp, 0Ch
0x76607A: fchs
0x76607C: push    eax
0x76607D: lea     eax, [esp+130h+var_FC]
0x766081: push    eax
0x766082: lea     eax, [ebp+640h]
0x766088: push    eax; int
0x766089: push    ecx
0x76608A: lea     ecx, [esp+13Ch+var_38]
0x766091: fstp    [esp+13Ch+var_13C]; float
0x766094: push    ecx; int
0x766095: call    sub_47DA10
0x76609A: add     esp, 0Ch
0x76609D: mov     ecx, eax
0x76609F: call    sub_47D9B0
0x7660A4: fld     dword ptr [edi]
0x7660A6: fld     [esp+12Ch+var_C4]
0x7660AA: fld     st
0x7660AC: fsubp   st(2), st
0x7660AE: fxch    st(1)
0x7660B0: fstp    [esp+12Ch+var_D0]
0x7660B4: fld     dword ptr [edi+4]
0x7660B7: add     esi, 24h ; '$'
0x7660BA: fsub    [esp+12Ch+var_C0]
0x7660BE: add     esi, 24h ; '$'
0x7660C1: add     esi, 24h ; '$'
0x7660C4: fstp    [esp+12Ch+var_CC]
0x7660C8: fld     dword ptr [edi+8]
0x7660CB: mov     [esi-54h], ebx
0x7660CE: fsub    [esp+12Ch+var_BC]
0x7660D2: fstp    [esp+12Ch+var_C8]
0x7660D6: fld     [esp+12Ch+var_D0]
0x7660DA: fstp    dword ptr [esi-6Ch]
0x7660DD: fld     [esp+12Ch+var_CC]
0x7660E1: fstp    dword ptr [esi-68h]
0x7660E4: fld     [esp+12Ch+var_C8]
0x7660E8: fstp    dword ptr [esi-64h]
0x7660EB: fld     [esp+12Ch+var_9C]
0x7660F2: fst     dword ptr [esi-60h]
0x7660F5: fld     [esp+12Ch+var_98]
0x7660FC: fst     dword ptr [esi-5Ch]
0x7660FF: fld     [esp+12Ch+var_94]
0x766106: fst     dword ptr [esi-58h]
0x766109: fldz
0x76610B: fst     dword ptr [esi-50h]
0x76610E: fld1
0x766110: fst     dword ptr [esi-4Ch]
0x766113: fld     dword ptr [edi]
0x766115: fsub    [esp+12Ch+var_FC]
0x766119: fstp    [esp+12Ch+var_B8]
0x76611D: fld     dword ptr [edi+4]
0x766120: fsub    [esp+12Ch+var_F8]
0x766124: fstp    [esp+12Ch+var_B4]
0x766128: fld     dword ptr [edi+8]
0x76612B: mov     [esi-30h], ebx
0x76612E: fsub    [esp+12Ch+var_F4]
0x766132: fstp    [esp+12Ch+var_B0]
0x766136: fld     [esp+12Ch+var_B8]
0x76613A: fstp    dword ptr [esi-48h]
0x76613D: fld     [esp+12Ch+var_B4]
0x766141: fstp    dword ptr [esi-44h]
0x766144: fld     [esp+12Ch+var_B0]
0x766148: fstp    dword ptr [esi-40h]
0x76614B: fxch    st(4)
0x76614D: fst     dword ptr [esi-3Ch]
0x766150: fxch    st(3)
0x766152: fst     dword ptr [esi-38h]
0x766155: fxch    st(2)
0x766157: fst     dword ptr [esi-34h]
0x76615A: fxch    st(4)
0x76615C: fst     dword ptr [esi-2Ch]
0x76615F: fst     dword ptr [esi-28h]
0x766162: fld     dword ptr [edi]
0x766164: faddp   st(6), st
0x766166: fxch    st(5)
0x766168: fstp    [esp+12Ch+var_E0]
0x76616C: fld     [esp+12Ch+var_C0]
0x766170: fadd    dword ptr [edi+4]
0x766173: fstp    [esp+12Ch+var_DC]
