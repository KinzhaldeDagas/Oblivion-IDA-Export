0x4F7280: fld     qword ptr ds:0A3D360h
0x4F7286: push    esi
0x4F7287: mov     esi, [esp+4+arg_0]
0x4F728B: test    esi, esi
0x4F728D: push    edi
0x4F728E: mov     edi, [esp+8+arg_C]
0x4F7292: fstp    qword ptr [edi]
0x4F7294: jz      loc_4F731D
0x4F729A: mov     eax, [esi]
0x4F729C: mov     edx, [eax+190h]
0x4F72A2: mov     ecx, esi
0x4F72A4: call    edx
0x4F72A6: test    al, al
0x4F72A8: jz      short loc_4F731D
0x4F72AA: push    1; a2
0x4F72AC: mov     ecx, esi; this
0x4F72AE: call    Actor_GetActorBaseForm
0x4F72B3: cmp     dword ptr [eax+40h], 0
0x4F72B7: jnz     short loc_4F72C8
0x4F72B9: cmp     dword ptr [eax+3Ch], 0
0x4F72BD: jnz     short loc_4F72C8
0x4F72BF: push    0; a2
0x4F72C1: mov     ecx, esi; this
0x4F72C3: call    Actor_GetActorBaseForm
0x4F72C8: mov     edx, [esp+8+arg_4]
0x4F72CC: xor     ecx, ecx
0x4F72CE: test    edx, edx
0x4F72D0: jz      short loc_4F72DA
0x4F72D2: cmp     byte ptr [edx+4], 6
0x4F72D6: jnz     short loc_4F72DA
0x4F72D8: mov     ecx, edx
0x4F72DA: test    eax, eax
0x4F72DC: jz      short loc_4F72FF
0x4F72DE: test    ecx, ecx
0x4F72E0: jz      short loc_4F72FF
0x4F72E2: cmp     esi, ds:0B333C4h
0x4F72E8: setz    dl
0x4F72EB: push    edx
0x4F72EC: push    ecx
0x4F72ED: lea     ecx, [eax+24h]
0x4F72F0: call    TESActorBaseData_GetFactionRank
0x4F72F5: mov     [esp+8+arg_C], eax
0x4F72F9: fild    [esp+8+arg_C]
0x4F72FD: fstp    qword ptr [edi]
0x4F72FF: cmp     byte ptr ds:0B361ACh, 0
0x4F7306: jz      short loc_4F731D
0x4F7308: fld     qword ptr [edi]
0x4F730A: sub     esp, 8
0x4F730D: fstp    [esp+10h+var_10]
0x4F7310: push    offset aGetfactionra_0; "GetFactionRank >> %0.2f"
0x4F7315: call    Interface_ConsolePrint
0x4F731A: add     esp, 0Ch
0x4F731D: pop     edi
0x4F731E: mov     al, 1
0x4F7320: pop     esi
0x4F7321: retn
