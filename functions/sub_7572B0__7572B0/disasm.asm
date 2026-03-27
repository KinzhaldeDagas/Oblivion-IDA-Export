0x7572B0: sub     esp, 0Ch
0x7572B3: push    esi
0x7572B4: push    edi
0x7572B5: mov     esi, ecx
0x7572B7: call    sub_75E800
0x7572BC: mov     dword ptr [esi], offset ??_7NiPSysGravityFieldModifier@@6B@; const NiPSysGravityFieldModifier::`vftable'
0x7572C2: fld     dword ptr ds:0B258DCh
0x7572C8: fchs
0x7572CA: lea     ecx, [esi+3Ch]
0x7572CD: fstp    [esp+14h+var_C]
0x7572D1: mov     eax, [esp+14h+var_C]
0x7572D5: fld     dword ptr ds:0B258E0h
0x7572DB: fchs
0x7572DD: fstp    [esp+14h+var_8]
0x7572E1: mov     edx, [esp+14h+var_8]
0x7572E5: fld     dword ptr ds:0B258E4h
0x7572EB: mov     [esi+30h], eax
0x7572EE: fchs
0x7572F0: mov     [ecx], eax
0x7572F2: fstp    [esp+14h+var_4]
0x7572F6: mov     edi, [esp+14h+var_4]
0x7572FA: mov     [esi+34h], edx
0x7572FD: mov     [ecx+4], edx
0x757300: mov     [esi+38h], edi
0x757303: mov     [ecx+8], edi
0x757306: call    sub_43F350
0x75730B: fstp    st
0x75730D: pop     edi
0x75730E: mov     eax, esi
0x757310: pop     esi
0x757311: add     esp, 0Ch
0x757314: retn
