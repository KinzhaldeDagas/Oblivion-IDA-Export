0x65D4E0: sub     esp, 8
0x65D4E3: mov     eax, [ecx-5Ch]
0x65D4E6: mov     edx, [eax+26Ch]
0x65D4EC: push    esi
0x65D4ED: lea     esi, [ecx-5Ch]
0x65D4F0: push    edi
0x65D4F1: mov     ecx, esi
0x65D4F3: xor     edi, edi
0x65D4F5: call    edx
0x65D4F7: fstp    [esp+10h+var_8]
0x65D4FB: mov     eax, [esi]
0x65D4FD: mov     edx, [eax+0ECh]
0x65D503: mov     ecx, esi
0x65D505: call    edx
0x65D507: fmul    [esp+10h+var_8]
0x65D50B: mov     eax, ds:0B333C4h
0x65D510: push    ecx
0x65D511: fstp    dword ptr [esp+14h+var_8]
0x65D515: fld     dword ptr [esp+14h+var_8]
0x65D519: fstp    [esp+14h+var_14]; float
0x65D51C: push    eax; int
0x65D51D: call    GetActorWithinReach??
0x65D522: add     esp, 8
0x65D525: test    eax, eax
0x65D527: jnz     short loc_65D532
0x65D529: call    sub_579540
0x65D52E: test    eax, eax
0x65D530: jz      short loc_65D543
0x65D532: mov     edx, [eax]
0x65D534: pop     edi
0x65D535: mov     ecx, eax
0x65D537: mov     eax, [edx+124h]
0x65D53D: pop     esi
0x65D53E: add     esp, 8
0x65D541: jmp     eax
0x65D543: mov     eax, edi
0x65D545: pop     edi
0x65D546: pop     esi
0x65D547: add     esp, 8
0x65D54A: retn
