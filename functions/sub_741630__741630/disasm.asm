0x741630: sub     esp, 10h
0x741633: push    esi
0x741634: mov     esi, ecx
0x741636: lea     eax, [esi+0DCh]
0x74163C: push    eax
0x74163D: lea     ecx, [esp+18h+var_C]
0x741641: push    ecx
0x741642: lea     ecx, [esi+64h]
0x741645: call    sub_7101F0
0x74164A: fld     dword ptr [esi+8Ch]
0x741650: fmul    [esp+14h+var_8]
0x741654: mov     edx, [esp+14h+var_C]
0x741658: fld     dword ptr [esi+88h]
0x74165E: mov     eax, [esp+14h+var_8]
0x741662: fmul    [esp+14h+var_C]
0x741666: mov     ecx, [esp+14h+var_4]
0x74166A: faddp   st(1), st
0x74166C: fld     dword ptr [esi+90h]
0x741672: mov     [esi+0ECh], edx
0x741678: fmul    [esp+14h+var_4]
0x74167C: mov     [esi+0F0h], eax
0x741682: mov     [esi+0F4h], ecx
0x741688: faddp   st(1), st
0x74168A: fstp    [esp+14h+var_10]
0x74168E: fld     [esp+14h+var_10]
0x741692: fld     dword ptr [esi+0E8h]
0x741698: fmul    dword ptr [esi+94h]
0x74169E: faddp   st(1), st
0x7416A0: fstp    [esp+14h+var_10]
0x7416A4: fld     [esp+14h+var_10]
0x7416A8: fstp    dword ptr [esi+0F8h]
0x7416AE: pop     esi
0x7416AF: add     esp, 10h
0x7416B2: retn
