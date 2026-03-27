0x7915C0: push    0FFFFFFFFh
0x7915C2: push    offset SEH_7915C0
0x7915C7: mov     eax, large fs:0
0x7915CD: push    eax
0x7915CE: push    ecx
0x7915CF: mov     eax, ds:0B30AACh
0x7915D4: xor     eax, esp
0x7915D6: push    eax
0x7915D7: lea     eax, [esp+14h+var_C]
0x7915DB: mov     large fs:0, eax
0x7915E1: mov     eax, ecx
0x7915E3: mov     ecx, [esp+14h+arg_0]
0x7915E7: fldz
0x7915E9: mov     [eax], ecx
0x7915EB: fst     dword ptr [eax+4]
0x7915EE: xor     ecx, ecx
0x7915F0: mov     [eax+0Ch], ecx
0x7915F3: mov     [eax+10h], ecx
0x7915F6: mov     [eax+14h], ecx
0x7915F9: fst     dword ptr [eax+28h]
0x7915FC: or      edx, 0FFFFFFFFh
0x7915FF: fstp    dword ptr [eax+2Ch]
0x791602: mov     [eax+18h], ecx
0x791605: mov     [eax+1Ch], edx
0x791608: mov     [eax+20h], cx
0x79160C: mov     [eax+24h], edx
0x79160F: mov     [eax+34h], ecx
0x791612: mov     [eax+38h], ecx
0x791615: mov     [eax+3Ch], ecx
0x791618: mov     ecx, [esp+14h+var_C]
0x79161C: mov     large fs:0, ecx
0x791623: pop     ecx
0x791624: add     esp, 10h
0x791627: retn    4
