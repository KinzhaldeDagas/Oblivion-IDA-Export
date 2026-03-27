0x410840: sub     esp, 138h
0x410846: mov     eax, ___security_cookie
0x41084B: xor     eax, esp
0x41084D: mov     [esp+138h+var_4], eax
0x410854: mov     ecx, ds:dword_A31918
0x41085A: mov     edx, ds:dword_A3191C
0x410860: mov     eax, [esp+138h+arg_0]
0x410867: mov     [esp+138h+var_108], ecx
0x41086B: mov     ecx, ds:off_A31920
0x410871: mov     [esp+138h+var_104], edx
0x410875: mov     [esp+138h+var_100], ecx
0x410879: mov     edx, eax
0x41087B: jmp     short loc_410880
0x41087D: align 10h
0x410880: mov     cl, [eax]
0x410882: add     eax, 1
0x410885: test    cl, cl
0x410887: jnz     short loc_410880
0x410889: push    esi
0x41088A: push    edi
0x41088B: lea     edi, [esp+140h+var_108]
0x41088F: sub     eax, edx
0x410891: add     edi, 0FFFFFFFFh
0x410894: mov     cl, [edi+1]
0x410897: add     edi, 1
0x41089A: test    cl, cl
0x41089C: jnz     short loc_410894
0x41089E: mov     ecx, eax
0x4108A0: shr     ecx, 2
0x4108A3: mov     esi, edx
0x4108A5: mov     edx, dword_B350D8
0x4108AB: rep movsd
0x4108AD: mov     ecx, eax
0x4108AF: and     ecx, 3
0x4108B2: rep movsb
0x4108B4: lea     eax, [esp+140h+var_134]
0x4108B8: push    eax
0x4108B9: lea     ecx, [esp+144h+var_108]
0x4108BD: mov     [esp+144h+var_134], 0
0x4108C5: mov     esi, [edx+280h]
0x4108CB: push    ecx
0x4108CC: push    esi
0x4108CD: call    D3DXCreateTextureFromFileA_0
0x4108D2: test    eax, eax
0x4108D4: jnz     loc_410A55
0x4108DA: fld1
0x4108DC: mov     edx, [esi]
0x4108DE: push    eax
0x4108DF: push    ecx
0x4108E0: fstp    [esp+148h+var_148]
0x4108E3: push    0FF000000h
0x4108E8: push    1
0x4108EA: push    eax
0x4108EB: push    eax
0x4108EC: mov     eax, [edx+0ACh]
0x4108F2: push    esi
0x4108F3: call    eax
0x4108F5: mov     ecx, [esi]
0x4108F7: mov     edx, [ecx+0A4h]
0x4108FD: push    esi
0x4108FE: call    edx
0x410900: xor     eax, eax
0x410902: mov     [esp+138h+var_120], eax
0x410906: mov     [esp+138h+var_11C], eax
0x41090A: mov     [esp+138h+var_118], eax
0x41090E: mov     [esp+138h+var_114], eax
0x410912: mov     [esp+138h+var_110], eax
0x410916: mov     [esp+138h+var_10C], eax
0x41091A: mov     [esp+138h+var_108], eax
0x41091E: mov     [esp+138h+var_104], eax
0x410922: mov     eax, dword ptr [esp+138h+var_12C]
0x410926: mov     ecx, [eax]
0x410928: lea     edx, [esp+138h+var_120]
0x41092C: push    edx
0x41092D: push    0
0x41092F: push    eax
0x410930: mov     eax, [ecx+44h]
0x410933: call    eax
0x410935: fild    nWidth
0x41093B: mov     ecx, [esp+138h+var_104]
0x41093F: fild    nHeight
0x410945: test    ecx, ecx
0x410947: fild    [esp+138h+var_104]
0x41094B: jge     short loc_410953
0x41094D: fadd    ds:flt_A2FC78
0x410953: fdivp   st(1), st
0x410955: mov     edx, [esp+138h+var_108]
0x410959: test    edx, edx
0x41095B: fstp    [esp+138h+var_130]
0x41095F: fld     [esp+138h+var_130]
0x410963: fild    [esp+138h+var_108]
0x410967: jge     short loc_41096F
0x410969: fadd    ds:flt_A2FC78
0x41096F: fmulp   st(1), st
0x410971: fsubp   st(1), st
0x410973: fmul    ds:dbl_A2FAA0
0x410979: fstp    [esp+138h+var_130]
0x41097D: call    sub_40F970
0x410982: mov     ecx, dword ptr [esp+138h+var_12C]
0x410986: mov     eax, [esi]
0x410988: mov     edx, [eax+104h]
0x41098E: push    ecx
0x41098F: push    0
0x410991: push    esi
0x410992: call    edx
0x410994: fild    nWidth
0x41099A: fld     [esp+13Ch+var_134]
0x41099E: mov     eax, nHeight
0x4109A3: fld     st
0x4109A5: push    eax; int
0x4109A6: fadd    st, st(1)
0x4109A8: fsubp   st(2), st
0x4109AA: fxch    st(1)
0x4109AC: call    Double_To_SInt32
0x4109B1: fld1
0x4109B3: push    eax; int
0x4109B4: sub     esp, 10h
0x4109B7: fst     [esp+154h+var_148]; float
0x4109BB: fstp    [esp+154h+var_14C]; float
0x4109BF: fldz
0x4109C1: fstp    [esp+154h+var_150]; float
0x4109C5: fstp    [esp+154h+var_154]; float
0x4109C8: call    sub_40F760
0x4109CD: mov     ecx, [esi]
0x4109CF: mov     edx, [ecx+0A8h]
0x4109D5: add     esp, 18h
0x4109D8: push    esi
0x4109D9: call    edx
0x4109DB: mov     eax, [esi]
0x4109DD: mov     ecx, [eax+44h]
0x4109E0: push    0
0x4109E2: push    0
0x4109E4: push    0
0x4109E6: push    0
0x4109E8: push    esi
0x4109E9: call    ecx
0x4109EB: mov     esi, ds:GetTickCount
0x4109F1: call    esi ; GetTickCount
0x4109F3: test    eax, eax
0x4109F5: mov     dword ptr [esp+13Ch+var_12C], eax
0x4109F9: fild    dword ptr [esp+13Ch+var_12C]
0x4109FD: jge     short loc_410A05
0x4109FF: fadd    ds:flt_A2FC78
0x410A05: fld     flt_B030AC
0x410A0B: fmul    ds:dbl_A2FC70
0x410A11: fnstcw  word ptr [esp+13Ch+var_134]
0x410A15: movzx   eax, word ptr [esp+13Ch+var_134]
0x410A1A: faddp   st(1), st
0x410A1C: or      eax, 0C00h
0x410A21: mov     dword ptr [esp+13Ch+var_12C], eax
0x410A25: fldcw   word ptr [esp+13Ch+var_12C]
0x410A29: fistp   [esp+13Ch+var_12C]
0x410A2D: mov     edi, dword ptr [esp+13Ch+var_12C]
0x410A31: fldcw   word ptr [esp+13Ch+var_134]
0x410A35: call    esi ; GetTickCount
0x410A37: cmp     edi, eax
0x410A39: jbe     short loc_410A49
0x410A3B: push    1
0x410A3D: call    sub_410390
0x410A42: add     esp, 4
0x410A45: test    al, al
0x410A47: jnz     short loc_410A35
0x410A49: mov     eax, [esp+13Ch+var_130]
0x410A4D: mov     edx, [eax]
0x410A4F: push    eax
0x410A50: mov     eax, [edx+8]
0x410A53: call    eax
0x410A55: mov     ecx, [esp+140h+var_4]
0x410A5C: pop     edi
0x410A5D: pop     esi
0x410A5E: xor     ecx, esp
0x410A60: call    @__security_check_cookie@4; __security_check_cookie(x)
0x410A65: add     esp, 138h
0x410A6B: retn
