0x74D120: sub     esp, 18h
0x74D123: push    esi
0x74D124: push    edi
0x74D125: mov     esi, ecx
0x74D127: call    _rand
0x74D12C: mov     [esp+20h+var_18], eax
0x74D130: fild    [esp+20h+var_18]
0x74D134: fdiv    qword ptr ds:0A3D5A8h
0x74D13A: fstp    [esp+20h+var_10]
0x74D13E: call    _rand
0x74D143: mov     [esp+20h+var_18], eax
0x74D147: fild    [esp+20h+var_18]
0x74D14B: fdiv    qword ptr ds:0A3D5A8h
0x74D151: fstp    [esp+20h+var_14]
0x74D155: call    _rand
0x74D15A: mov     [esp+20h+var_18], eax
0x74D15E: fild    [esp+20h+var_18]
0x74D162: mov     edi, [esp+20h+arg_0]
0x74D166: fdiv    qword ptr ds:0A3D5A8h
0x74D16C: fstp    [esp+20h+var_18]
0x74D170: fld     [esp+20h+var_18]
0x74D174: fld     qword ptr ds:0A2FAA0h
0x74D17A: fsub    st(1), st
0x74D17C: fld     dword ptr [esi+54h]
0x74D17F: fmulp   st(2), st
0x74D181: fxch    st(1)
0x74D183: fstp    [esp+20h+var_C]
0x74D187: mov     eax, [esp+20h+var_C]
0x74D18B: fld     [esp+20h+var_14]
0x74D18F: fsub    st, st(1)
0x74D191: fmul    dword ptr [esi+58h]
0x74D194: fstp    [esp+20h+var_8]
0x74D198: mov     ecx, [esp+20h+var_8]
0x74D19C: fsubr   [esp+20h+var_10]
0x74D1A0: fmul    dword ptr [esi+5Ch]
0x74D1A3: mov     esi, [esp+20h+arg_4]
0x74D1A7: mov     [esi], eax
0x74D1A9: mov     [esi+4], ecx
0x74D1AC: fstp    [esp+20h+var_4]
0x74D1B0: mov     edx, [esp+20h+var_4]
0x74D1B4: push    esi
0x74D1B5: lea     eax, [esp+24h+var_C]
0x74D1B9: push    eax
0x74D1BA: mov     ecx, edi
0x74D1BC: mov     [esi+8], edx
0x74D1BF: call    sub_53D4B0
0x74D1C4: mov     ecx, [eax]
0x74D1C6: mov     [esi], ecx
0x74D1C8: mov     edx, [eax+4]
0x74D1CB: mov     [esi+4], edx
0x74D1CE: mov     eax, [eax+8]
0x74D1D1: mov     [esi+8], eax
0x74D1D4: mov     esi, [esp+20h+arg_8]
0x74D1D8: push    esi
0x74D1D9: lea     ecx, [esp+24h+var_C]
0x74D1DD: push    ecx
0x74D1DE: mov     ecx, edi
0x74D1E0: call    sub_7101F0
0x74D1E5: mov     edx, [eax]
0x74D1E7: mov     [esi], edx
0x74D1E9: mov     ecx, [eax+4]
0x74D1EC: mov     [esi+4], ecx
0x74D1EF: mov     edx, [eax+8]
0x74D1F2: pop     edi
0x74D1F3: mov     [esi+8], edx
0x74D1F6: pop     esi
0x74D1F7: add     esp, 18h
0x74D1FA: retn    0Ch
