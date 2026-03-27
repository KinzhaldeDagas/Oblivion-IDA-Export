0x57F490: sub     esp, 18h
0x57F493: test    byte ptr ds:0B3A6F4h, 1
0x57F49A: push    esi; a3
0x57F49B: mov     esi, ecx
0x57F49D: jnz     short loc_57F4A6
0x57F49F: or      dword ptr ds:0B3A6F4h, 1
0x57F4A6: mov     ecx, [esi+1Ch]
0x57F4A9: mov     eax, [ecx+24h]
0x57F4AC: mov     edx, [eax+54h]
0x57F4AF: add     eax, 54h ; 'T'
0x57F4B2: mov     [esi+20h], edx
0x57F4B5: mov     edx, [eax+4]
0x57F4B8: mov     [esi+24h], edx
0x57F4BB: mov     eax, [eax+8]
0x57F4BE: mov     [esi+28h], eax
0x57F4C1: fild    dword ptr ds:0B06C4Ch
0x57F4C7: fstp    [esp+1Ch+var_18]
0x57F4CB: fld     [esp+1Ch+var_18]
0x57F4CF: fst     [esp+1Ch+var_14]
0x57F4D3: fild    dword ptr ds:0B06C50h
0x57F4D9: fstp    [esp+1Ch+var_18]
0x57F4DD: fld     [esp+1Ch+var_18]
0x57F4E1: fst     [esp+1Ch+var_18]
0x57F4E5: fld     [esp+1Ch+var_14]
0x57F4E9: fld     [esp+1Ch+var_18]
0x57F4ED: fcom    st(1)
0x57F4EF: fnstsw  ax
0x57F4F1: fld     dword ptr ds:0A688A8h
0x57F4F7: test    ah, 5
0x57F4FA: fld     qword ptr ds:0A68D70h
0x57F500: jp      short loc_57F510
0x57F502: fxch    st(3)
0x57F504: fdivrp  st(2), st
0x57F506: fxch    st(1)
0x57F508: fmul    st, st(2)
0x57F50A: fstp    [esp+1Ch+var_18]
0x57F50E: jmp     short loc_57F518
0x57F510: fstp    st(3)
0x57F512: fstp    st(1)
0x57F514: fst     [esp+1Ch+var_18]
0x57F518: fxch    st(3)
0x57F51A: fstp    [esp+1Ch+var_14]
0x57F51E: fxch    st(1)
0x57F520: fstp    [esp+1Ch+var_10]
0x57F524: fld     [esp+1Ch+var_14]
0x57F528: fld     [esp+1Ch+var_10]
0x57F52C: fcom    st(1)
0x57F52E: fnstsw  ax
0x57F530: test    ah, 5
0x57F533: jp      short loc_57F53D
0x57F535: fstp    st(3)
0x57F537: fdivrp  st(2), st
0x57F539: fmulp   st(1), st
0x57F53B: jmp     short loc_57F543
0x57F53D: fstp    st(1)
0x57F53F: fstp    st
0x57F541: fstp    st
0x57F543: fstp    [esp+1Ch+var_14]
0x57F547: fld     [esp+1Ch+var_18]
0x57F54B: fmul    [esp+1Ch+arg_0]
0x57F54F: fld     [esp+1Ch+var_14]
0x57F553: fld     qword ptr ds:0A2FAA0h
0x57F559: fmul    st(1), st
0x57F55B: fxch    st(2)
0x57F55D: fsubrp  st(1), st
0x57F55F: fstp    dword ptr [esi+20h]
0x57F562: fild    dword ptr ds:0B06C4Ch
0x57F568: fstp    [esp+1Ch+var_18]
0x57F56C: fld     [esp+1Ch+var_18]
0x57F570: fst     [esp+1Ch+var_10]
0x57F574: fild    dword ptr ds:0B06C50h
0x57F57A: fstp    [esp+1Ch+var_18]
0x57F57E: fld     [esp+1Ch+var_18]
0x57F582: fst     [esp+1Ch+arg_0]
0x57F586: fld     [esp+1Ch+arg_0]
0x57F58A: fld     [esp+1Ch+var_10]
0x57F58E: fcom    st(1)
0x57F590: fnstsw  ax
0x57F592: fld     dword ptr ds:0A68D78h
0x57F598: test    ah, 5
0x57F59B: fld     qword ptr ds:0A688A0h
0x57F5A1: jp      short loc_57F5B1
0x57F5A3: fxch    st(3)
0x57F5A5: fdivrp  st(2), st
0x57F5A7: fxch    st(1)
0x57F5A9: fmul    st, st(2)
0x57F5AB: fstp    [esp+1Ch+var_14]
0x57F5AF: jmp     short loc_57F5B9
0x57F5B1: fstp    st(3)
0x57F5B3: fstp    st(1)
0x57F5B5: fst     [esp+1Ch+var_14]
0x57F5B9: fxch    st(3)
0x57F5BB: fstp    [esp+1Ch+var_10]
0x57F5BF: fxch    st(1)
0x57F5C1: fstp    [esp+1Ch+arg_0]
0x57F5C5: fld     [esp+1Ch+arg_0]
0x57F5C9: fld     [esp+1Ch+var_10]
0x57F5CD: fcom    st(1)
0x57F5CF: fnstsw  ax
0x57F5D1: test    ah, 5
0x57F5D4: jp      short loc_57F5DE
0x57F5D6: fstp    st(3)
0x57F5D8: fdivrp  st(2), st
0x57F5DA: fmulp   st(1), st
0x57F5DC: jmp     short loc_57F5E4
0x57F5DE: fstp    st(1)
0x57F5E0: fstp    st
0x57F5E2: fstp    st
0x57F5E4: fstp    [esp+1Ch+arg_0]
0x57F5E8: push    1; a3
0x57F5EA: fmul    [esp+20h+arg_0]
0x57F5EE: fld     [esp+20h+var_14]
0x57F5F2: fmul    [esp+20h+arg_4]
0x57F5F6: fsubp   st(1), st
0x57F5F8: fstp    dword ptr [esi+28h]
0x57F5FB: mov     eax, [ecx+24h]
0x57F5FE: mov     ecx, [esi+20h]
0x57F601: fldz
0x57F603: mov     [eax+54h], ecx
0x57F606: mov     edx, [esi+24h]
0x57F609: add     eax, 54h ; 'T'
0x57F60C: mov     [eax+4], edx
0x57F60F: mov     ecx, [esi+28h]
0x57F612: mov     [eax+8], ecx
0x57F615: mov     edx, [esi+1Ch]
0x57F618: push    ecx
0x57F619: mov     ecx, [edx+24h]; this
0x57F61C: fstp    [esp+24h+a2]; a2
0x57F61F: call    NiAVObject_UpdateNiAVObject
0x57F624: fild    dword ptr ds:0B06C4Ch
0x57F62A: fstp    [esp+1Ch+var_18]
0x57F62E: fld     [esp+1Ch+var_18]
0x57F632: fst     [esp+1Ch+arg_0]
0x57F636: fild    dword ptr ds:0B06C50h
0x57F63C: fstp    [esp+1Ch+var_18]
0x57F640: fld     [esp+1Ch+var_18]
0x57F644: fst     [esp+1Ch+arg_4]
0x57F648: fld     [esp+1Ch+arg_0]
0x57F64C: fld     [esp+1Ch+arg_4]
0x57F650: fcom    st(1)
0x57F652: fnstsw  ax
0x57F654: test    ah, 5
0x57F657: jp      short loc_57F663
0x57F659: fdivp   st(1), st
0x57F65B: fmul    qword ptr ds:0A68D70h
0x57F661: jmp     short loc_57F66D
0x57F663: fstp    st(1)
0x57F665: fstp    st
0x57F667: fld     dword ptr ds:0A688A8h
0x57F66D: fstp    [esp+1Ch+arg_0]
0x57F671: fld     st(1)
0x57F673: fdiv    [esp+1Ch+arg_0]
0x57F677: fld     dword ptr [esi+20h]
0x57F67A: fadd    qword ptr ds:0A30E48h
0x57F680: fmulp   st(1), st
0x57F682: fld     st(2)
0x57F684: fld     qword ptr ds:0A2FAA0h
0x57F68A: fmul    st(1), st
0x57F68C: fxch    st(2)
0x57F68E: faddp   st(1), st
0x57F690: fstp    [esp+1Ch+var_C]
0x57F694: fldz
0x57F696: fstp    [esp+1Ch+var_8]
0x57F69A: fxch    st(2)
0x57F69C: fstp    [esp+1Ch+arg_4]
0x57F6A0: fst     [esp+1Ch+arg_0]
0x57F6A4: fld     [esp+1Ch+arg_0]
0x57F6A8: fld     [esp+1Ch+arg_4]
0x57F6AC: fcom    st(1)
0x57F6AE: fnstsw  ax
0x57F6B0: test    ah, 5
0x57F6B3: jp      short loc_57F6BF
0x57F6B5: fdivp   st(1), st
0x57F6B7: fmul    qword ptr ds:0A688A0h
0x57F6BD: jmp     short loc_57F6C9
0x57F6BF: fstp    st(1)
0x57F6C1: fstp    st
0x57F6C3: fld     dword ptr ds:0A68D78h
0x57F6C9: fstp    [esp+1Ch+arg_0]
0x57F6CD: fld     st
0x57F6CF: fmulp   st(2), st
0x57F6D1: fdiv    [esp+1Ch+arg_0]
0x57F6D5: fmul    dword ptr [esi+28h]
0x57F6D8: fsubp   st(1), st
0x57F6DA: fstp    [esp+1Ch+var_4]
0x57F6DE: fld     [esp+1Ch+var_C]
0x57F6E2: fld     dword ptr ds:0B3A6E8h
0x57F6E8: fucompp
0x57F6EA: fnstsw  ax
0x57F6EC: test    ah, 44h
0x57F6EF: jp      short loc_57F717
0x57F6F1: fld     dword ptr ds:0B3A6ECh
0x57F6F7: fcomp   qword ptr ds:0A2FC68h
0x57F6FD: fnstsw  ax
0x57F6FF: test    ah, 44h
0x57F702: jp      short loc_57F717
0x57F704: fld     [esp+1Ch+var_4]
0x57F708: fld     dword ptr ds:0B3A6F0h
0x57F70E: fucompp
0x57F710: fnstsw  ax
0x57F712: test    ah, 44h
0x57F715: jnp     short loc_57F78C
0x57F717: mov     eax, [esp+1Ch+var_8]
0x57F71B: push    ebx
0x57F71C: mov     ebx, [esp+20h+var_4]
0x57F720: push    edi
0x57F721: mov     edi, [esp+24h+var_C]
0x57F725: mov     ds:0B3A6E8h, edi
0x57F72B: mov     ds:0B3A6ECh, eax
0x57F730: mov     ds:0B3A6F0h, ebx
0x57F736: mov     ecx, [esi+1Ch]
0x57F739: push    0FABh
0x57F73E: call    Tile_GetFloat
0x57F743: fmul    qword ptr ds:0A68FD0h
0x57F749: cmp     byte ptr [esi+8], 2
0x57F74D: mov     [esi+2Ch], edi
0x57F750: fstp    [esp+24h+var_8]
0x57F754: mov     ecx, [esp+24h+var_8]
0x57F758: mov     [esi+30h], ecx
0x57F75B: pop     edi
0x57F75C: mov     [esi+34h], ebx
0x57F75F: mov     byte ptr [esi+0B9h], 1
0x57F766: pop     ebx
0x57F767: jnz     short loc_57F78C
0x57F769: mov     edx, [esi+1Ch]
0x57F76C: fld     dword ptr ds:0A379B4h
0x57F772: mov     eax, [edx+24h]
0x57F775: and     word ptr [eax+18h], 0FFFEh
0x57F77B: push    ecx
0x57F77C: mov     ecx, [esi+1Ch]; this
0x57F77F: fstp    [esp+20h+var_20]; a3
0x57F782: push    0FA1h; a2
0x57F787: call    Tile_SetFloat
0x57F78C: pop     esi
0x57F78D: add     esp, 18h
0x57F790: retn    8
