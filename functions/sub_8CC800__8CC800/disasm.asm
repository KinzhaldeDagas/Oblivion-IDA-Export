0x8CC800: push    ebp
0x8CC801: mov     ebp, esp
0x8CC803: and     esp, 0FFFFFFF0h
0x8CC806: sub     esp, 44h
0x8CC809: push    ebx
0x8CC80A: mov     ebx, [ebp+arg_4]
0x8CC80D: mov     eax, [ebx+14h]
0x8CC810: xor     edx, edx
0x8CC812: cmp     eax, edx
0x8CC814: push    esi
0x8CC815: push    edi
0x8CC816: jz      loc_8CC942
0x8CC81C: mov     ecx, large fs:2Ch
0x8CC823: mov     eax, ds:0BA9DE4h
0x8CC828: mov     eax, [ecx+eax*4]
0x8CC82B: mov     ecx, [eax+19Ch]
0x8CC831: cmp     ecx, edx
0x8CC833: mov     edi, [ebp+arg_0]
0x8CC836: mov     esi, [edi+2A4h]
0x8CC83C: mov     [esp+50h+var_30], edx
0x8CC840: mov     [esp+50h+var_2C], edx
0x8CC844: mov     [esp+50h+var_28], 80000000h
0x8CC84C: mov     [esp+50h+var_34], eax
0x8CC850: jnz     short loc_8CC858
0x8CC852: mov     ecx, ds:0BA7D9Ch
0x8CC858: mov     eax, [ecx+20h]
0x8CC85B: lea     edx, ds:10h[esi*8]
0x8CC862: and     edx, 0FFFFFFF0h
0x8CC865: mov     [esp+50h+var_38], eax
0x8CC869: add     eax, edx
0x8CC86B: cmp     eax, [ecx+2Ch]
0x8CC86E: ja      short loc_8CC879
0x8CC870: mov     [ecx+20h], eax
0x8CC873: mov     eax, [esp+50h+var_38]
0x8CC877: jmp     short loc_8CC87F
0x8CC879: mov     eax, [ecx]
0x8CC87B: push    edx
0x8CC87C: call    dword ptr [eax+0Ch]
0x8CC87F: mov     ecx, [ebx+14h]
0x8CC882: mov     [esp+50h+var_30], eax
0x8CC886: mov     [esp+50h+var_24], eax
0x8CC88A: lea     eax, [esp+50h+var_20]
0x8CC88E: push    eax
0x8CC88F: mov     eax, [edi+74h]
0x8CC892: or      esi, 80000000h
0x8CC898: mov     [esp+54h+var_28], esi
0x8CC89C: fld     dword ptr [eax+8]
0x8CC89F: fmul    dword ptr ds:0A3D65Ch
0x8CC8A5: mov     eax, [ebx+1Ch]
0x8CC8A8: mov     edx, [ecx]
0x8CC8AA: push    ecx
0x8CC8AB: fstp    [esp+58h+var_58]
0x8CC8AE: push    eax
0x8CC8AF: call    dword ptr [edx+0Ch]
0x8CC8B2: mov     ecx, [edi+64h]
0x8CC8B5: mov     edx, [ecx]
0x8CC8B7: lea     eax, [esp+50h+var_30]
0x8CC8BB: push    eax
0x8CC8BC: lea     eax, [esp+54h+var_20]
0x8CC8C0: push    eax
0x8CC8C1: add     ebx, 28h ; '('
0x8CC8C4: push    ebx
0x8CC8C5: call    dword ptr [edx+8]
0x8CC8C8: mov     eax, [esp+50h+var_2C]
0x8CC8CC: test    eax, eax
0x8CC8CE: jle     short loc_8CC8ED
0x8CC8D0: mov     ecx, [edi+78h]
0x8CC8D3: test    ecx, ecx
0x8CC8D5: jz      short loc_8CC8DC
0x8CC8D7: add     ecx, 8
0x8CC8DA: jmp     short loc_8CC8DE
0x8CC8DC: xor     ecx, ecx
0x8CC8DE: push    ecx
0x8CC8DF: mov     ecx, [esp+54h+var_30]
0x8CC8E3: push    eax
0x8CC8E4: push    ecx
0x8CC8E5: mov     ecx, [edi+68h]
0x8CC8E8: call    sub_8D8370
0x8CC8ED: mov     esi, [esp+50h+var_34]
0x8CC8F1: mov     ecx, [esi+19Ch]
0x8CC8F7: test    ecx, ecx
0x8CC8F9: mov     eax, [esp+50h+var_24]
0x8CC8FD: jnz     short loc_8CC905
0x8CC8FF: mov     ecx, ds:0BA7D9Ch
0x8CC905: cmp     eax, [ecx+28h]
0x8CC908: mov     [ecx+20h], eax
0x8CC90B: jnz     short loc_8CC913
0x8CC90D: mov     edx, [ecx]
0x8CC90F: push    eax
0x8CC910: call    dword ptr [edx+10h]
0x8CC913: mov     edx, [esp+50h+var_28]
0x8CC917: test    edx, edx
0x8CC919: js      short loc_8CC942
0x8CC91B: mov     eax, [esi+19Ch]
0x8CC921: test    eax, eax
0x8CC923: jnz     short loc_8CC92A
0x8CC925: mov     eax, ds:0BA7D9Ch
0x8CC92A: mov     ecx, [esp+50h+var_30]
0x8CC92E: and     edx, 3FFFFFFFh
0x8CC934: push    14h
0x8CC936: shl     edx, 3
0x8CC939: push    edx
0x8CC93A: push    ecx
0x8CC93B: mov     ecx, eax
0x8CC93D: call    sub_8A75D0
0x8CC942: pop     edi
0x8CC943: pop     esi
0x8CC944: pop     ebx
0x8CC945: mov     esp, ebp
0x8CC947: pop     ebp
0x8CC948: retn
