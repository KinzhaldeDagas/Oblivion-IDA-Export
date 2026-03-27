0x7920A0: push    ebp
0x7920A1: mov     ebp, esp
0x7920A3: and     esp, 0FFFFFFF8h
0x7920A6: sub     esp, 0F4h
0x7920AC: push    ebx
0x7920AD: mov     ebx, ecx
0x7920AF: mov     ecx, ds:0B429E0h
0x7920B5: test    ecx, ecx
0x7920B7: push    esi
0x7920B8: mov     esi, [ebp+arg_8]
0x7920BB: push    edi
0x7920BC: jz      short loc_7920CC
0x7920BE: mov     eax, ds:0B429E4h
0x7920C3: sub     eax, ecx
0x7920C5: sar     eax, 2
0x7920C8: cmp     esi, eax
0x7920CA: jb      short loc_7920D7
0x7920CC: call    __invalid_parameter_noinfo
0x7920D1: mov     ecx, ds:0B429E0h
0x7920D7: mov     esi, [ecx+esi*4]
0x7920DA: fldz
0x7920DC: fst     [esp+100h+var_90]
0x7920E0: fst     [esp+100h+var_94]
0x7920E4: fst     [esp+100h+var_98]
0x7920E8: fst     [esp+100h+var_84]
0x7920EC: fst     [esp+100h+var_88]
0x7920F0: fst     [esp+100h+var_8C]
0x7920F4: fld1
0x7920F6: fst     [esp+100h+var_7C]
0x7920FD: fst     [esp+100h+var_6C]
0x792104: fst     [esp+100h+var_5C]
0x79210B: fst     [esp+100h+var_34]
0x792112: fst     [esp+100h+var_24]
0x792119: fstp    [esp+100h+var_14]
0x792120: fst     [esp+100h+var_78]
0x792127: fst     [esp+100h+var_74]
0x79212E: fst     [esp+100h+var_70]
0x792135: fst     [esp+100h+var_68]
0x79213C: fst     [esp+100h+var_64]
0x792143: fst     [esp+100h+var_60]
0x79214A: fst     [esp+100h+var_48]
0x792151: fst     [esp+100h+var_4C]
0x792158: fst     [esp+100h+var_50]
0x79215F: fst     [esp+100h+var_3C]
0x792166: fst     [esp+100h+var_40]
0x79216D: fst     [esp+100h+var_44]
0x792174: fst     [esp+100h+var_30]
0x79217B: fst     [esp+100h+var_2C]
0x792182: fst     [esp+100h+var_28]
0x792189: fst     [esp+100h+var_20]
0x792190: fst     [esp+100h+var_1C]
0x792197: fstp    [esp+100h+var_18]
0x79219E: mov     ecx, [esi+60h]
0x7921A1: fld     [ebp+arg_10]
0x7921A4: push    ecx
0x7921A5: fstp    [esp+104h+var_104]; float
0x7921A8: call    sub_784210
0x7921AD: fmul    [ebp+arg_4]
0x7921B0: fstp    dword ptr [esp+100h+var_A0]
0x7921B4: fld     dword ptr [esp+100h+var_A0]
0x7921B8: fidiv   dword ptr [esi+4]
0x7921BB: fld     qword ptr ds:0A3D8E8h
0x7921C1: fcom    st(1)
0x7921C3: fnstsw  ax
0x7921C5: test    ah, 5
0x7921C8: jp      short loc_7921CE
0x7921CA: fstp    st
0x7921CC: jmp     short loc_7921D0
0x7921CE: fstp    st(1)
0x7921D0: fstp    [esp+100h+var_F0]
0x7921D4: sub     esp, 8
0x7921D7: fld     dword ptr ds:0A3F420h
0x7921DD: mov     ecx, offset unk_B429C9
0x7921E2: fstp    [esp+108h+var_104]; float
0x7921E6: fld     dword ptr ds:0A8C694h
0x7921EC: fstp    dword ptr [esp+108h+var_10C+4]; float
0x7921EF: call    sub_78EA00
0x7921F4: mov     esi, [ebp+arg_14]
0x7921F7: fstp    dword ptr [esp+100h+var_A0]
0x7921FB: mov     eax, [ebp+arg_18]
0x7921FE: fld     dword ptr [eax+4]
0x792201: sub     esp, 0Ch
0x792204: fld     dword ptr [eax]
0x792206: lea     edi, [esp+10Ch+var_7C]
0x79220D: fld     dword ptr [eax+8]
0x792210: mov     eax, [ebp+arg_C]
0x792213: fld     dword ptr [esi+4]
0x792216: mov     ecx, [eax]
0x792218: fmul    st, st(3)
0x79221A: mov     edx, [eax+4]
0x79221D: fld     dword ptr [esi]
0x79221F: mov     eax, [eax+8]
0x792222: fmul    st, st(3)
0x792224: mov     [esp+10Ch+var_8C], ecx
0x79222B: mov     [esp+10Ch+var_88], edx
0x792232: mov     [esp+10Ch+var_84], eax
0x792239: faddp   st(1), st
0x79223B: mov     eax, esp
0x79223D: fld     dword ptr [esi+8]
0x792240: mov     ecx, 9
0x792245: fmul    st, st(2)
0x792247: faddp   st(1), st
0x792249: fstp    dword ptr [esp+10Ch+var_EC]
0x79224D: fld     dword ptr [esi+0Ch]
0x792250: fmul    st, st(2)
0x792252: fld     dword ptr [esi+10h]
0x792255: fmul    st, st(4)
0x792257: faddp   st(1), st
0x792259: fld     dword ptr [esi+14h]
0x79225C: fmul    st, st(2)
0x79225E: faddp   st(1), st
0x792260: fstp    dword ptr [esp+10Ch+var_EC+4]
0x792264: mov     edx, dword ptr [esp+10Ch+var_EC+4]
0x792268: fld     dword ptr [esi+18h]
0x79226B: fmulp   st(2), st
0x79226D: fld     dword ptr [esi+1Ch]
0x792270: fmulp   st(3), st
0x792272: fxch    st(1)
0x792274: faddp   st(2), st
0x792276: fmul    dword ptr [esi+20h]
0x792279: rep movsd
0x79227B: faddp   st(1), st
0x79227D: fstp    [esp+10Ch+var_E4]
0x792281: fld     dword ptr [esp+10Ch+var_A0]
0x792285: mov     ecx, dword ptr [esp+10Ch+var_EC]
0x792289: mov     [eax], ecx
0x79228B: mov     ecx, [esp+10Ch+var_E4]
0x79228F: mov     [eax+4], edx
0x792292: mov     [eax+8], ecx
0x792295: push    ecx
0x792296: lea     ecx, [esp+110h+var_7C]
0x79229D: fstp    [esp+110h+var_110]; float
0x7922A0: call    sub_78F050
0x7922A5: fld     dword ptr ds:0A5793Ch
0x7922AB: push    ecx
0x7922AC: lea     ecx, [esp+104h+var_7C]
0x7922B3: fstp    [esp+104h+var_104]; float
0x7922B6: call    sub_78EEC0
0x7922BB: fld     dword ptr ds:0B2B71Ch
0x7922C1: fld     dword ptr ds:0B2B718h
0x7922C7: fld     dword ptr ds:0B2B720h
0x7922CD: fld     [esp+100h+var_7C]
0x7922D4: fmul    st, st(2)
0x7922D6: fld     [esp+100h+var_70]
0x7922DD: fmul    st, st(4)
0x7922DF: faddp   st(1), st
0x7922E1: fld     [esp+100h+var_64]
0x7922E8: fmul    st, st(2)
0x7922EA: faddp   st(1), st
0x7922EC: fstp    dword ptr [esp+100h+var_EC]
0x7922F0: fld     [esp+100h+var_78]
0x7922F7: mov     edx, dword ptr [esp+100h+var_EC]
0x7922FB: fmul    st, st(2)
0x7922FD: mov     [esp+100h+var_98], edx
0x792301: fld     [esp+100h+var_6C]
0x792308: fmul    st, st(4)
0x79230A: faddp   st(1), st
0x79230C: fld     [esp+100h+var_60]
0x792313: fmul    st, st(2)
0x792315: faddp   st(1), st
0x792317: fstp    dword ptr [esp+100h+var_EC+4]
0x79231B: mov     eax, dword ptr [esp+100h+var_EC+4]
0x79231F: fld     [esp+100h+var_74]
0x792326: mov     [esp+100h+var_94], eax
0x79232A: fmulp   st(2), st
0x79232C: fld     [esp+100h+var_68]
0x792333: fmulp   st(3), st
0x792335: fxch    st(1)
0x792337: faddp   st(2), st
0x792339: fmul    [esp+100h+var_5C]
0x792340: faddp   st(1), st
0x792342: fstp    [esp+100h+var_E4]
0x792346: mov     ecx, [esp+100h+var_E4]
0x79234A: fld     [esp+100h+var_F0]
0x79234E: mov     [esp+100h+var_90], ecx
0x792352: fld     dword ptr [esp+100h+var_EC]
0x792356: fmul    st, st(1)
0x792358: fstp    dword ptr [esp+100h+var_B0]
0x79235C: fld     dword ptr [esp+100h+var_EC+4]
0x792360: fmul    st, st(1)
0x792362: fstp    dword ptr [esp+100h+var_B0+4]
0x792366: fmul    [esp+100h+var_E4]
0x79236A: fstp    [esp+100h+var_A8]
0x79236E: fld     [esp+100h+var_8C]
0x792372: fld     dword ptr [esp+100h+var_B0]
0x792376: fadd    st, st(1)
0x792378: fstp    dword ptr [esp+100h+var_D0]
0x79237C: mov     edx, dword ptr [esp+100h+var_D0]
0x792380: fld     [esp+100h+var_88]
0x792384: mov     [esp+100h+var_44], edx
0x79238B: fld     dword ptr [esp+100h+var_B0+4]
0x79238F: fadd    st, st(1)
0x792391: fstp    dword ptr [esp+100h+var_D0+4]
0x792395: mov     eax, dword ptr [esp+100h+var_D0+4]
0x792399: fld     [esp+100h+var_84]
0x79239D: mov     [esp+100h+var_40], eax
0x7923A4: fld     [esp+100h+var_A8]
0x7923A8: fadd    st, st(1)
0x7923AA: fstp    [esp+100h+var_C8]
0x7923AE: mov     ecx, [esp+100h+var_C8]
0x7923B2: fld     dword ptr [esp+100h+var_D0]
0x7923B6: mov     [esp+100h+var_3C], ecx
0x7923BD: fst     [esp+100h+var_C0]
0x7923C1: fsubrp  st(3), st
0x7923C3: fxch    st(2)
0x7923C5: fstp    dword ptr [esp+100h+var_EC]
0x7923C9: fld     dword ptr [esp+100h+var_D0+4]
0x7923CD: fst     [esp+100h+var_B0]
0x7923D1: fsubrp  st(1), st
0x7923D3: fstp    dword ptr [esp+100h+var_EC+4]
0x7923D7: fld     [esp+100h+var_C8]
0x7923DB: fst     [esp+100h+var_D0]
0x7923DF: fsubrp  st(1), st
0x7923E1: fstp    [esp+100h+var_E4]
0x7923E5: fld     dword ptr [esp+100h+var_EC+4]
0x7923E9: fst     [esp+100h+var_8]
0x7923F0: fld     dword ptr [esp+100h+var_EC]
0x7923F4: fst     [esp+100h+var_A0]
0x7923F8: fld     [esp+100h+var_E4]
0x7923FC: fst     [esp+100h+var_E0]
0x792400: fld     st(1)
0x792402: fmulp   st(2), st
0x792404: fld     st(2)
0x792406: fmulp   st(3), st
0x792408: fxch    st(1)
0x79240A: faddp   st(2), st
0x79240C: fmul    st, st
0x79240E: faddp   st(1), st
0x792410: fstp    [esp+100h+var_F0]
0x792414: fld     [esp+100h+var_F0]
0x792418: call    __CIsqrt
0x79241D: fstp    [esp+100h+var_F0]
0x792421: mov     eax, [ebp+arg_0]
0x792424: test    eax, eax
0x792426: fld     [esp+100h+var_F0]
0x79242A: fld1
0x79242C: fdivrp  st(1), st
0x79242E: fstp    [esp+100h+var_F0]
0x792432: fld     [esp+100h+var_F0]
0x792436: fld     [esp+100h+var_A0]
0x79243A: fmul    st, st(1)
0x79243C: fstp    dword ptr [esp+100h+var_EC]
0x792440: fld     [esp+100h+var_8]
0x792447: fmul    st, st(1)
0x792449: fstp    dword ptr [esp+100h+var_EC+4]
0x79244D: fmul    [esp+100h+var_E0]
0x792451: fstp    [esp+100h+var_E4]
0x792455: jz      loc_7924F0
0x79245B: cmp     dword ptr [eax+1Ch], 0
0x79245F: jz      loc_7924F0
0x792465: mov     ecx, [eax+18h]
0x792468: mov     edx, [ecx+0Ch]
0x79246B: add     ecx, 0Ch
0x79246E: mov     dword ptr [esp+100h+var_E0], edx
0x792472: mov     edx, [ecx+4]
0x792475: mov     ecx, [ecx+8]
0x792478: mov     dword ptr [esp+100h+var_E0+4], edx
0x79247C: mov     edx, ds:0B429B8h
0x792482: mov     edx, [edx+2Ch]
0x792485: test    edx, edx
0x792487: mov     [esp+100h+var_D8], ecx
0x79248B: jz      short loc_7924BE
0x79248D: xor     ecx, ecx
0x79248F: nop
0x792490: cmp     ecx, edx
0x792492: jge     short loc_79249F
0x792494: mov     eax, [eax]
0x792496: add     ecx, 1
0x792499: test    eax, eax
0x79249B: jnz     short loc_792490
0x79249D: jmp     short loc_7924BE
0x79249F: test    eax, eax
0x7924A1: jz      short loc_7924BE
0x7924A3: mov     eax, [eax+18h]
0x7924A6: mov     ecx, [eax+0Ch]
0x7924A9: mov     edx, [eax+10h]
0x7924AC: add     eax, 0Ch
0x7924AF: mov     eax, [eax+8]
0x7924B2: mov     dword ptr [esp+100h+var_E0], ecx
0x7924B6: mov     dword ptr [esp+100h+var_E0+4], edx
0x7924BA: mov     [esp+100h+var_D8], eax
0x7924BE: fld     dword ptr [esp+100h+var_E0]
0x7924C2: fsubr   [esp+100h+var_C0]
0x7924C6: fstp    dword ptr [esp+100h+var_C0]
0x7924CA: mov     ecx, dword ptr [esp+100h+var_C0]
0x7924CE: fld     dword ptr [esp+100h+var_E0+4]
0x7924D2: fsubr   [esp+100h+var_B0]
0x7924D6: fstp    dword ptr [esp+100h+var_C0+4]
0x7924DA: mov     edx, dword ptr [esp+100h+var_C0+4]
0x7924DE: fld     [esp+100h+var_D8]
0x7924E2: fsubr   [esp+100h+var_D0]
0x7924E6: fstp    [esp+100h+var_B8]
0x7924EA: mov     eax, [esp+100h+var_B8]
0x7924EE: jmp     short loc_7924FC
0x7924F0: mov     ecx, dword ptr [esp+100h+var_EC]
0x7924F4: mov     edx, dword ptr [esp+100h+var_EC+4]
0x7924F8: mov     eax, [esp+100h+var_E4]
0x7924FC: mov     dword ptr [esp+100h+var_E0+4], edx
0x792500: fld     dword ptr [esp+100h+var_E0+4]
0x792504: fst     [esp+100h+var_B0]
0x792508: mov     dword ptr [esp+100h+var_E0], ecx
0x79250C: fld     dword ptr [esp+100h+var_E0]
0x792510: mov     [esp+100h+var_D8], eax
0x792514: fst     [esp+100h+var_D0]
0x792518: fld     [esp+100h+var_D8]
0x79251C: fst     [esp+100h+var_C0]
0x792520: fld     st(1)
0x792522: fmulp   st(2), st
0x792524: fld     st(2)
0x792526: fmulp   st(3), st
0x792528: fxch    st(1)
0x79252A: faddp   st(2), st
0x79252C: fmul    st, st
0x79252E: faddp   st(1), st
0x792530: fstp    [esp+100h+var_F0]
0x792534: fld     [esp+100h+var_F0]
0x792538: call    __CIsqrt
0x79253D: fstp    [esp+100h+var_F0]
0x792541: fld     [esp+100h+var_F0]
0x792545: mov     ecx, [ebp+arg_1C]
0x792548: fld1
0x79254A: mov     edx, [ebp+arg_24]
0x79254D: fdivrp  st(1), st
0x79254F: push    ecx; int
0x792550: push    edx; int
0x792551: push    ecx
0x792552: lea     eax, [esp+10Ch+var_E0]
0x792556: lea     ecx, [esp+10Ch+var_EC]
0x79255A: lea     edx, [esp+10Ch+var_44]
0x792561: fstp    [esp+10Ch+var_F0]
0x792565: fld     [esp+10Ch+var_F0]
0x792569: fld     [esp+10Ch+var_D0]
0x79256D: fmul    st, st(1)
0x79256F: fstp    dword ptr [esp+10Ch+var_E0]
0x792573: fld     [esp+10Ch+var_B0]
0x792577: fmul    st, st(1)
0x792579: fstp    dword ptr [esp+10Ch+var_E0+4]
0x79257D: fmul    [esp+10Ch+var_C0]
0x792581: fstp    [esp+10Ch+var_D8]
0x792585: fld     [ebp+arg_20]
0x792588: fstp    dword ptr [esp+10Ch+var_10C]; float
0x79258B: push    eax; int
0x79258C: fld     [ebp+arg_10]
0x79258F: push    ecx; int
0x792590: push    ebx; int
0x792591: push    ecx
0x792592: fstp    [esp+11Ch+var_11C]; float
0x792595: push    edx; int
0x792596: mov     ecx, ebx
0x792598: call    sub_7919D0
0x79259D: pop     edi
0x79259E: pop     esi
0x79259F: pop     ebx
0x7925A0: mov     esp, ebp
0x7925A2: pop     ebp
0x7925A3: retn    28h ; '('
