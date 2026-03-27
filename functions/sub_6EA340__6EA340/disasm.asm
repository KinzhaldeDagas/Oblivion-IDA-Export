0x6EA340: test    byte ptr [ecx+0Ch], 1
0x6EA344: jz      short loc_6EA34D
0x6EA346: fld     dword ptr [ecx+20h]
0x6EA349: fstp    [esp+arg_0]
0x6EA34D: fld     [esp+arg_0]
0x6EA351: fld     st
0x6EA353: fld     dword ptr ds:0A79F00h
0x6EA359: fucompp
0x6EA35B: fnstsw  ax
0x6EA35D: test    ah, 44h
0x6EA360: jp      short loc_6EA3A7
0x6EA362: mov     edx, ds:0B3EBA0h
0x6EA368: fstp    st
0x6EA36A: mov     eax, [esp+arg_8]
0x6EA36E: mov     [eax], edx
0x6EA370: mov     edx, ds:0B3EBA4h
0x6EA376: mov     [eax+4], edx
0x6EA379: mov     edx, ds:0B3EBA8h
0x6EA37F: mov     [eax+8], edx
0x6EA382: mov     edx, ds:0B3EBACh
0x6EA388: mov     [eax+0Ch], edx
0x6EA38B: mov     edx, [eax]
0x6EA38D: mov     [ecx+30h], edx
0x6EA390: mov     edx, [eax+4]
0x6EA393: mov     [ecx+34h], edx
0x6EA396: mov     edx, [eax+8]
0x6EA399: mov     [ecx+38h], edx
0x6EA39C: mov     eax, [eax+0Ch]
0x6EA39F: mov     [ecx+3Ch], eax
0x6EA3A2: xor     al, al
0x6EA3A4: retn    0Ch
0x6EA3A7: mov     eax, [ecx+18h]
0x6EA3AA: mov     edx, [eax]
0x6EA3AC: mov     edx, [edx+58h]
0x6EA3AF: push    esi
0x6EA3B0: lea     esi, [ecx+30h]
0x6EA3B3: mov     ecx, [esp+4+arg_4]
0x6EA3B7: push    esi
0x6EA3B8: push    ecx
0x6EA3B9: push    ecx
0x6EA3BA: mov     ecx, eax
0x6EA3BC: fstp    [esp+10h+var_10]
0x6EA3BF: call    edx
0x6EA3C1: test    al, al
0x6EA3C3: mov     eax, [esp+4+arg_8]
0x6EA3C7: jnz     short loc_6EA408
0x6EA3C9: mov     ecx, ds:0B3EBA0h
0x6EA3CF: mov     [eax], ecx
0x6EA3D1: mov     edx, ds:0B3EBA4h
0x6EA3D7: mov     [eax+4], edx
0x6EA3DA: mov     ecx, ds:0B3EBA8h
0x6EA3E0: mov     [eax+8], ecx
0x6EA3E3: mov     edx, ds:0B3EBACh
0x6EA3E9: mov     [eax+0Ch], edx
0x6EA3EC: mov     ecx, [eax]
0x6EA3EE: mov     [esi], ecx
0x6EA3F0: mov     edx, [eax+4]
0x6EA3F3: mov     [esi+4], edx
0x6EA3F6: mov     ecx, [eax+8]
0x6EA3F9: mov     [esi+8], ecx
0x6EA3FC: mov     edx, [eax+0Ch]
0x6EA3FF: mov     [esi+0Ch], edx
0x6EA402: xor     al, al
0x6EA404: pop     esi
0x6EA405: retn    0Ch
0x6EA408: mov     ecx, [esi]
0x6EA40A: mov     [eax], ecx
0x6EA40C: mov     edx, [esi+4]
0x6EA40F: mov     [eax+4], edx
0x6EA412: mov     ecx, [esi+8]
0x6EA415: mov     [eax+8], ecx
0x6EA418: mov     edx, [esi+0Ch]
0x6EA41B: mov     [eax+0Ch], edx
0x6EA41E: mov     al, 1
0x6EA420: pop     esi
0x6EA421: retn    0Ch
