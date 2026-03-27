0x960650: sub     esp, 30h
0x960653: mov     eax, [esp+30h+arg_10]
0x960657: mov     ecx, [esp+30h+arg_8]
0x96065B: fld     dword ptr [eax]
0x96065D: fsub    dword ptr [ecx]
0x96065F: push    esi
0x960660: push    edi
0x960661: fstp    [esp+38h+var_30]
0x960665: fld     dword ptr [eax+4]
0x960668: fsub    dword ptr [ecx+4]
0x96066B: fstp    [esp+38h+var_2C]
0x96066F: fld     dword ptr [eax+8]
0x960672: fsub    dword ptr [ecx+8]
0x960675: fstp    [esp+38h+var_28]
0x960679: fld     [esp+38h+var_30]
0x96067D: fld     st
0x96067F: fld     dword ptr ds:0B3F9A8h
0x960685: fucompp
0x960687: fnstsw  ax
0x960689: fld     [esp+38h+var_28]
0x96068D: test    ah, 44h
0x960690: fld     [esp+38h+var_2C]
0x960694: jp      short loc_9606BC
0x960696: fld     st
0x960698: fld     dword ptr ds:0B3F9ACh
0x96069E: fucompp
0x9606A0: fnstsw  ax
0x9606A2: test    ah, 44h
0x9606A5: jp      short loc_9606BC
0x9606A7: fld     st(1)
0x9606A9: fld     dword ptr ds:0B3F9B0h
0x9606AF: fucompp
0x9606B1: fnstsw  ax
0x9606B3: test    ah, 44h
0x9606B6: jnp     loc_960742
0x9606BC: fld     [esp+38h+arg_0]
0x9606C0: mov     esi, [esp+38h+arg_C]
0x9606C4: mov     eax, [esi+20h]
0x9606C7: fld     st
0x9606C9: mov     ecx, [esi+24h]
0x9606CC: fmulp   st(4), st
0x9606CE: mov     edx, [esi+28h]
0x9606D1: fxch    st(3)
0x9606D3: mov     edi, [esp+38h+arg_4]
0x9606D7: fstp    [esp+38h+var_30]
0x9606DB: mov     [esp+38h+var_24], eax
0x9606DF: mov     eax, [esi+2Ch]
0x9606E2: fmul    st, st(2)
0x9606E4: mov     [esp+38h+var_20], ecx
0x9606E8: mov     ecx, [esi+30h]
0x9606EB: mov     [esp+38h+var_18], eax
0x9606EF: mov     eax, [esp+38h+var_30]
0x9606F3: fstp    [esp+38h+var_2C]
0x9606F7: mov     [esp+38h+var_1C], edx
0x9606FB: mov     edx, [esi+34h]
0x9606FE: fmulp   st(1), st
0x960700: mov     [esp+38h+var_14], ecx
0x960704: mov     ecx, [esp+38h+var_2C]
0x960708: mov     [esp+38h+var_C], eax
0x96070C: fstp    [esp+38h+var_28]
0x960710: mov     [esp+38h+var_10], edx
0x960714: mov     edx, [esp+38h+var_28]
0x960718: mov     [esp+38h+var_8], ecx
0x96071C: lea     eax, [esp+38h+arg_4]
0x960720: push    eax
0x960721: lea     ecx, [esp+3Ch+arg_10]
0x960725: push    ecx
0x960726: mov     [esp+40h+var_4], edx
0x96072A: lea     edx, [esp+40h+arg_C]
0x96072E: push    edx
0x96072F: lea     eax, [esp+44h+var_24]
0x960733: push    eax
0x960734: lea     ecx, [edi+20h]
0x960737: push    ecx
0x960738: call    sub_9708E0
0x96073D: add     esp, 14h
0x960740: jmp     short loc_96076A
0x960742: mov     esi, [esp+38h+arg_C]
0x960746: fstp    st(2)
0x960748: mov     edi, [esp+38h+arg_4]
0x96074C: fstp    st
0x96074E: lea     edx, [esp+38h+arg_4]
0x960752: fstp    st
0x960754: push    edx
0x960755: lea     eax, [esp+3Ch+arg_C]
0x960759: push    eax
0x96075A: lea     ecx, [esi+20h]
0x96075D: push    ecx
0x96075E: lea     edx, [edi+20h]
0x960761: push    edx
0x960762: call    sub_96FCD0
0x960767: add     esp, 10h
0x96076A: fstp    [esp+38h+arg_C]
0x96076E: fld     dword ptr [edi+38h]
0x960771: pop     edi
0x960772: fadd    dword ptr [esi+38h]
0x960775: pop     esi
0x960776: fstp    [esp+30h+arg_4]
0x96077A: fld     [esp+30h+arg_4]
0x96077E: fld     [esp+30h+arg_C]
0x960782: fld     st(1)
0x960784: fmulp   st(2), st
0x960786: fxch    st(1)
0x960788: fstp    [esp+30h+arg_C]
0x96078C: fld     [esp+30h+arg_C]
0x960790: fcompp
0x960792: fnstsw  ax
0x960794: test    ah, 1
0x960797: jnz     short loc_9607A2
0x960799: mov     eax, 1
0x96079E: add     esp, 30h
0x9607A1: retn
0x9607A2: xor     eax, eax
0x9607A4: add     esp, 30h
0x9607A7: retn
