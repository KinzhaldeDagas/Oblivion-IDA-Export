0x9148E0: push    ebp
0x9148E1: mov     ebp, esp
0x9148E3: and     esp, 0FFFFFFF0h
0x9148E6: sub     esp, 48h
0x9148E9: fld     [ebp+arg_4]
0x9148EC: push    esi
0x9148ED: mov     esi, ecx
0x9148EF: fadd    dword ptr [esi+0Ch]
0x9148F2: push    edi
0x9148F3: mov     edi, [ebp+arg_0]
0x9148F6: lea     eax, [esi+10h]
0x9148F9: fstp    [esp+50h+var_44]
0x9148FD: push    eax
0x9148FE: movss   xmm0, [esp+54h+var_44]
0x914904: shufps  xmm0, xmm0, 0
0x914908: push    edi
0x914909: lea     ecx, [esp+58h+var_20]
0x91490D: movaps  [esp+58h+var_10], xmm0
0x914912: call    sub_88FCC0
0x914917: lea     ecx, [esi+20h]
0x91491A: push    ecx
0x91491B: push    edi
0x91491C: lea     ecx, [esp+58h+var_30]
0x914920: call    sub_88FCC0
0x914925: add     esi, 30h ; '0'
0x914928: push    esi
0x914929: push    edi
0x91492A: lea     ecx, [esp+58h+var_40]
0x91492E: call    sub_88FCC0
0x914933: movaps  xmm0, [esp+50h+var_20]
0x914938: movaps  xmm1, [esp+50h+var_40]
0x91493D: movaps  xmm2, [esp+50h+var_30]
0x914942: mov     eax, [ebp+arg_8]
0x914945: movaps  xmm3, xmm0
0x914948: minps   xmm0, xmm2
0x91494B: minps   xmm0, xmm1
0x91494E: maxps   xmm3, xmm2
0x914951: maxps   xmm3, xmm1
0x914954: movaps  xmm1, xmm0
0x914957: movaps  xmm0, [esp+50h+var_10]
0x91495C: subps   xmm1, xmm0
0x91495F: movaps  xmmword ptr [eax], xmm1
0x914962: movaps  xmmword ptr [eax+10h], xmm3
0x914966: movaps  xmm1, xmmword ptr [eax+10h]
0x91496A: pop     edi
0x91496B: addps   xmm1, xmm0
0x91496E: movaps  xmmword ptr [eax+10h], xmm1
0x914972: pop     esi
0x914973: mov     esp, ebp
0x914975: pop     ebp
0x914976: retn    0Ch
