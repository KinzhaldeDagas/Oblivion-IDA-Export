0x75C250: sub     esp, 0Ch
0x75C253: push    esi
0x75C254: mov     esi, ecx
0x75C256: call    sub_75E800
0x75C25B: mov     dword ptr [esi], offset ??_7NiPSysAirFieldModifier@@6B@; const NiPSysAirFieldModifier::`vftable'
0x75C261: fld     dword ptr ds:0B258D0h
0x75C267: fchs
0x75C269: lea     eax, [esp+10h+var_C]
0x75C26D: fstp    [esp+10h+var_C]
0x75C271: push    eax
0x75C272: fld     dword ptr ds:0B258D4h
0x75C278: mov     ecx, esi
0x75C27A: fchs
0x75C27C: fstp    [esp+14h+var_8]
0x75C280: fld     dword ptr ds:0B258D8h
0x75C286: fchs
0x75C288: fstp    [esp+14h+var_4]
0x75C28C: call    sub_75C1C0
0x75C291: mov     ecx, ds:0B28B54h
0x75C297: fld     dword ptr ds:0A32048h
0x75C29D: mov     [esi+30h], ecx
0x75C2A0: mov     edx, ds:0B28B58h
0x75C2A6: mov     [esi+34h], edx
0x75C2A9: mov     eax, ds:0B28B5Ch
0x75C2AE: fstp    dword ptr [esi+3Ch]
0x75C2B1: mov     [esi+38h], eax
0x75C2B4: mov     eax, esi
0x75C2B6: pop     esi
0x75C2B7: add     esp, 0Ch
0x75C2BA: retn
