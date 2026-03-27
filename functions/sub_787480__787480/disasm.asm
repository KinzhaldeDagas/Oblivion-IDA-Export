0x787480: sub     esp, 28h
0x787483: push    ebx
0x787484: push    ebp
0x787485: push    esi
0x787486: mov     esi, ecx
0x787488: mov     ebx, [esi+4]
0x78748B: test    ebx, ebx
0x78748D: push    edi
0x78748E: jz      loc_7875B4
0x787494: cmp     dword ptr [esi+60h], 0
0x787498: jz      loc_7875B4
0x78749E: mov     edi, [esi+50h]
0x7874A1: test    edi, edi
0x7874A3: jz      loc_7875B4
0x7874A9: mov     eax, [esi+40h]
0x7874AC: fld     dword ptr [eax]
0x7874AE: lea     ecx, [esp+38h+var_18]
0x7874B2: fstp    [esp+38h+var_18]
0x7874B6: fld     dword ptr [eax+4]
0x7874B9: fstp    [esp+38h+var_14]
0x7874BD: fld     dword ptr [eax+8]
0x7874C0: fstp    [esp+38h+var_10]
0x7874C4: fld     dword ptr [eax+0Ch]
0x7874C7: fstp    [esp+38h+var_24]
0x7874CB: fld     dword ptr [eax+10h]
0x7874CE: fstp    [esp+38h+var_20]
0x7874D2: fld     dword ptr [eax+14h]
0x7874D5: lea     eax, [esp+38h+var_24]
0x7874D9: push    eax
0x7874DA: fstp    [esp+3Ch+var_1C]
0x7874DE: call    sub_786E50
0x7874E3: fld     qword ptr ds:0A2FAA0h
0x7874E9: fmul    st(1), st
0x7874EB: mov     eax, [esi+4Ch]
0x7874EE: test    eax, eax
0x7874F0: fxch    st(1)
0x7874F2: fstp    [esp+38h+var_28]
0x7874F6: fld     [esp+38h+var_24]
0x7874FA: fadd    [esp+38h+var_18]
0x7874FE: fstp    [esp+38h+var_C]
0x787502: fld     [esp+38h+var_14]
0x787506: fadd    [esp+38h+var_20]
0x78750A: fstp    [esp+38h+var_8]
0x78750E: fld     [esp+38h+var_1C]
0x787512: fadd    [esp+38h+var_10]
0x787516: fstp    [esp+38h+var_4]
0x78751A: fld     [esp+38h+var_C]
0x78751E: fmul    st, st(1)
0x787520: fstp    [esp+38h+var_24]
0x787524: mov     ebp, [esp+38h+var_24]
0x787528: fld     [esp+38h+var_8]
0x78752C: fmul    st, st(1)
0x78752E: fstp    [esp+38h+var_20]
0x787532: mov     ecx, [esp+38h+var_20]
0x787536: fmul    [esp+38h+var_4]
0x78753A: fstp    [esp+38h+var_1C]
0x78753E: mov     edx, [esp+38h+var_1C]
0x787542: fld     [esp+38h+var_28]
0x787546: jz      short loc_78756E
0x787548: add     eax, 34h ; '4'
0x78754B: push    eax; int
0x78754C: sub     esp, 10h
0x78754F: mov     eax, esp
0x787551: fstp    [esp+4Ch+var_40]; float
0x787555: mov     [eax], ebp
0x787557: mov     [eax+4], ecx
0x78755A: push    ebx; int
0x78755B: mov     ecx, edi
0x78755D: mov     [eax+8], edx
0x787560: call    sub_7A51C0
0x787565: mov     eax, [esi+4Ch]
0x787568: add     eax, 34h ; '4'
0x78756B: push    eax
0x78756C: jmp     short loc_78758B
0x78756E: push    0; int
0x787570: sub     esp, 10h
0x787573: mov     eax, esp
0x787575: fstp    [esp+4Ch+var_40]; float
0x787579: mov     [eax], ebp
0x78757B: mov     [eax+4], ecx
0x78757E: push    ebx; int
0x78757F: mov     ecx, edi
0x787581: mov     [eax+8], edx
0x787584: call    sub_7A51C0
0x787589: push    0; int
0x78758B: fld     [esp+3Ch+var_28]
0x78758F: mov     ecx, [esp+3Ch+var_20]
0x787593: mov     edx, [esp+3Ch+var_1C]
0x787597: sub     esp, 10h
0x78759A: mov     eax, esp
0x78759C: fstp    [esp+4Ch+var_40]; float
0x7875A0: mov     [eax], ebp
0x7875A2: mov     [eax+4], ecx
0x7875A5: mov     ecx, [esi+50h]
0x7875A8: mov     [eax+8], edx
0x7875AB: mov     eax, [esi+60h]
0x7875AE: push    eax; int
0x7875AF: call    sub_7A51C0
0x7875B4: pop     edi
0x7875B5: pop     esi
0x7875B6: pop     ebp
0x7875B7: pop     ebx
0x7875B8: add     esp, 28h
0x7875BB: retn
