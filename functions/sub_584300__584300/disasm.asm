0x584300: push    esi
0x584301: mov     esi, [esp+4+arg_0]
0x584305: push    esi
0x584306: call    sub_583CF0
0x58430B: push    14h; Size
0x58430D: call    FormHeapAlloc
0x584312: fldz
0x584314: xor     ecx, ecx
0x584316: add     esp, 8
0x584319: cmp     eax, ecx
0x58431B: jz      short loc_584333
0x58431D: fst     dword ptr [eax+4]
0x584320: mov     [eax+0Ch], ecx
0x584323: fld     dword ptr ds:0A37080h
0x584329: mov     [eax+10h], ecx
0x58432C: mov     [eax], ecx
0x58432E: fstp    dword ptr [eax+8]
0x584331: mov     ecx, eax
0x584333: fld     [esp+4+arg_4]
0x584337: mov     [ecx], esi
0x584339: fcom    st(1)
0x58433B: pop     esi
0x58433C: fnstsw  ax
0x58433E: test    ah, 41h
0x584341: jnz     short loc_584347
0x584343: fstp    st(1)
0x584345: jmp     short loc_584349
0x584347: fstp    st
0x584349: fstp    [esp+arg_0]
0x58434D: fld     [esp+arg_0]
0x584351: fstp    dword ptr [ecx+8]
0x584354: mov     eax, ds:0B3A6E0h
0x584359: mov     edx, [eax+130h]
0x58435F: mov     eax, [edx+0Ch]
0x584362: mov     [ecx+0Ch], eax
0x584365: mov     edx, ds:0B3A6E0h
0x58436B: mov     eax, [edx+130h]
0x584371: mov     edx, [eax+0Ch]
0x584374: mov     [edx+10h], ecx
0x584377: mov     eax, ds:0B3A6E0h
0x58437C: mov     edx, [eax+130h]
0x584382: mov     [edx+0Ch], ecx
0x584385: retn
