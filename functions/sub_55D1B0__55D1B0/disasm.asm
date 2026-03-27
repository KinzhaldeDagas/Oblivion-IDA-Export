0x55D1B0: sub     esp, 4Ch
0x55D1B3: push    ebx
0x55D1B4: push    ebp
0x55D1B5: push    esi
0x55D1B6: mov     esi, ecx
0x55D1B8: movzx   ebx, word ptr [esi+0B6h]
0x55D1BF: xor     ebp, ebp
0x55D1C1: test    ebx, ebx
0x55D1C3: mov     [esp+58h+var_1C], 0
0x55D1CB: mov     [esp+58h+var_18], 0
0x55D1D3: mov     [esp+58h+var_14], 0
0x55D1D8: mov     [esp+58h+var_3C], ebx
0x55D1DC: jbe     loc_55D4AE
0x55D1E2: movzx   eax, word ptr [esi+0B6h]
0x55D1E9: cmp     eax, ebp
0x55D1EB: mov     [esp+58h+var_4], 0
0x55D1F0: jbe     loc_55D4A3
0x55D1F6: mov     ecx, [esi+0B0h]
0x55D1FC: mov     ecx, [ecx+ebp*4]
0x55D1FF: test    ecx, ecx
0x55D201: jz      loc_55D4A3
0x55D207: mov     edx, [ecx]
0x55D209: mov     eax, [edx+10h]
0x55D20C: call    eax
0x55D20E: test    eax, eax
0x55D210: mov     [esp+58h+var_20], eax
0x55D214: jz      loc_55D4A3
0x55D21A: cmp     dword ptr [eax+0B4h], 0
0x55D221: jz      loc_55D4A3
0x55D227: push    eax
0x55D228: call    sub_550800
0x55D22D: add     esp, 4
0x55D230: test    eax, eax
0x55D232: mov     [esp+58h+var_10], eax
0x55D236: jz      loc_55D4A3
0x55D23C: mov     ecx, [esp+58h+var_20]
0x55D240: push    ecx
0x55D241: call    sub_5508A0
0x55D246: add     esp, 4
0x55D249: test    eax, eax
0x55D24B: mov     [esp+58h+var_C], eax
0x55D24F: jz      loc_55D4A3
0x55D255: mov     edx, [esp+58h+var_20]
0x55D259: mov     ecx, [edx+0B4h]
0x55D25F: push    1
0x55D261: call    sub_728AB0
0x55D266: test    al, al
0x55D268: jz      loc_55D4A3
0x55D26E: mov     ecx, [esp+58h+var_20]
0x55D272: mov     ecx, [ecx+0B4h]
0x55D278: lea     eax, [esp+58h+var_1C]
0x55D27C: push    eax
0x55D27D: call    sub_728B60
0x55D282: cmp     [esp+58h+arg_0], 0
0x55D287: mov     eax, [esp+58h+var_20]
0x55D28B: mov     edx, [eax+0B4h]
0x55D291: movzx   ecx, word ptr [edx+8]
0x55D295: mov     [esp+58h+var_8], ecx
0x55D299: jnz     short loc_55D2A4
0x55D29B: cmp     byte ptr [esi+104h], 0
0x55D2A2: jz      short loc_55D2BE
0x55D2A4: lea     edx, [esp+58h+var_1C]
0x55D2A8: push    edx
0x55D2A9: push    eax
0x55D2AA: call    sub_5508F0
0x55D2AF: add     esp, 8
0x55D2B2: mov     [esp+58h+var_4], 1
0x55D2B7: mov     byte ptr [esi+104h], 0
0x55D2BE: mov     [esp+58h+var_49], 0
0x55D2C3: xor     bl, bl
0x55D2C5: call    sub_55CBF0
0x55D2CA: mov     ecx, [eax]
0x55D2CC: mov     edx, [eax+4]
0x55D2CF: mov     eax, [eax+8]
0x55D2D2: mov     [esp+58h+var_38], ecx
0x55D2D6: fld     [esp+58h+var_38]
0x55D2DA: fsub    dword ptr [esi+88h]
0x55D2E0: mov     [esp+58h+var_34], edx
0x55D2E4: mov     [esp+58h+var_30], eax
0x55D2E8: lea     ecx, [esp+58h+var_2C]
0x55D2EC: fstp    [esp+58h+var_2C]
0x55D2F0: fld     [esp+58h+var_34]
0x55D2F4: fsub    dword ptr [esi+8Ch]
0x55D2FA: fstp    [esp+58h+var_28]
0x55D2FE: fld     [esp+58h+var_30]
0x55D302: fsub    dword ptr [esi+90h]
0x55D308: fstp    [esp+58h+var_24]
0x55D30C: call    sub_404C90
0x55D311: cmp     ds:0B333B8h, bl
0x55D317: fstp    [esp+58h+var_40]
0x55D31B: fld     dword ptr ds:0B120CCh
0x55D321: fstp    [esp+58h+var_44]
0x55D325: fld     dword ptr ds:0B120D4h
0x55D32B: fstp    [esp+58h+var_48]
0x55D32F: jz      short loc_55D34B
0x55D331: fld     [esp+58h+var_44]
0x55D335: fld     qword ptr ds:0A3C770h
0x55D33B: fmul    st(1), st
0x55D33D: fxch    st(1)
0x55D33F: fstp    [esp+58h+var_44]
0x55D343: fmul    [esp+58h+var_48]
0x55D347: fstp    [esp+58h+var_48]
0x55D34B: fld     [esp+58h+var_40]
0x55D34F: mov     [esp+58h+var_4A], 0
0x55D354: fld     [esp+58h+var_48]
0x55D358: fadd    qword ptr ds:0A3F3E8h
0x55D35E: fcompp
0x55D360: fnstsw  ax
0x55D362: test    ah, 1
0x55D365: jz      short loc_55D379
0x55D367: cmp     byte ptr [esi+112h], 0
0x55D36E: jnz     short loc_55D379
0x55D370: call    InterfaceManager_IsMenuMode
0x55D375: test    al, al
0x55D377: jz      short loc_55D3E4
0x55D379: fld     [esp+58h+var_40]
0x55D37D: fld     [esp+58h+var_44]
0x55D381: fadd    qword ptr ds:0A3F3E8h
0x55D387: fcompp
0x55D389: fnstsw  ax
0x55D38B: test    ah, 1
0x55D38E: jz      short loc_55D3A2
0x55D390: cmp     byte ptr [esi+112h], 0
0x55D397: jnz     short loc_55D3A2
0x55D399: call    InterfaceManager_IsMenuMode
0x55D39E: test    al, al
0x55D3A0: jz      short loc_55D3A7
0x55D3A2: mov     [esp+58h+var_4A], 1
0x55D3A7: lea     ecx, [esp+58h+var_20]
0x55D3AB: push    ecx
0x55D3AC: mov     ecx, esi
0x55D3AE: call    sub_55CAA0
0x55D3B3: cmp     [esp+58h+var_4A], 0
0x55D3B8: mov     bl, 1
0x55D3BA: jz      short loc_55D3E4
0x55D3BC: lea     edx, [esp+58h+var_20]
0x55D3C0: push    edx
0x55D3C1: mov     ecx, esi
0x55D3C3: call    sub_55C850
0x55D3C8: lea     eax, [esp+58h+var_20]
0x55D3CC: push    eax
0x55D3CD: mov     ecx, esi
0x55D3CF: call    sub_55C900
0x55D3D4: lea     ecx, [esp+58h+var_20]
0x55D3D8: push    ecx
0x55D3D9: mov     ecx, esi
0x55D3DB: call    sub_55CB50
0x55D3E0: mov     [esp+58h+var_49], bl
0x55D3E4: mov     edx, [esi]
0x55D3E6: mov     eax, [edx+9Ch]
0x55D3EC: mov     ecx, esi
0x55D3EE: call    eax
0x55D3F0: mov     edx, [eax]
0x55D3F2: mov     ecx, eax
0x55D3F4: mov     eax, [edx+98h]
0x55D3FA: call    eax
0x55D3FC: test    al, al
0x55D3FE: jz      short loc_55D44E
0x55D400: cmp     [esp+58h+var_49], 0
0x55D405: jnz     loc_55D490
0x55D40B: mov     edx, [esi]
0x55D40D: mov     eax, [edx+9Ch]
0x55D413: mov     ecx, esi
0x55D415: call    eax
0x55D417: mov     edx, [eax]
0x55D419: mov     ecx, eax
0x55D41B: mov     eax, [edx+5Ch]
0x55D41E: push    0
0x55D420: call    eax
0x55D422: fcomp   dword ptr ds:0A2FAA8h
0x55D428: fnstsw  ax
0x55D42A: test    ah, 41h
0x55D42D: jnz     short loc_55D490
0x55D42F: mov     ecx, [esi+1Ch]
0x55D432: mov     edx, [ecx]
0x55D434: mov     eax, [edx+98h]
0x55D43A: call    eax
0x55D43C: test    al, al
0x55D43E: jz      short loc_55D490
0x55D440: lea     ecx, [esp+58h+var_20]
0x55D444: push    ecx
0x55D445: mov     ecx, esi
0x55D447: call    sub_55C900
0x55D44C: jmp     short loc_55D490
0x55D44E: test    bl, bl
0x55D450: jnz     short loc_55D490
0x55D452: fld     [esp+58h+var_40]
0x55D456: fld     dword ptr ds:0B120CCh
0x55D45C: fsub    qword ptr ds:0A3F3E8h
0x55D462: fcompp
0x55D464: fnstsw  ax
0x55D466: test    ah, 5
0x55D469: jp      short loc_55D490
0x55D46B: mov     edx, [esi]
0x55D46D: mov     eax, [edx+9Ch]
0x55D473: mov     ecx, esi
0x55D475: call    eax
0x55D477: fldz
0x55D479: mov     edx, [eax]
0x55D47B: push    0
0x55D47D: push    1
0x55D47F: push    1
0x55D481: push    1
0x55D483: push    1
0x55D485: push    ecx
0x55D486: mov     ecx, eax
0x55D488: fstp    [esp+70h+var_70]
0x55D48B: mov     eax, [edx+78h]
0x55D48E: call    eax
0x55D490: mov     ecx, [esp+58h+var_20]
0x55D494: mov     ecx, [ecx+0B4h]
0x55D49A: call    sub_728B20
0x55D49F: mov     ebx, [esp+58h+var_3C]
0x55D4A3: add     ebp, 1
0x55D4A6: cmp     ebp, ebx
0x55D4A8: jb      loc_55D1E2
0x55D4AE: pop     esi
0x55D4AF: pop     ebp
0x55D4B0: pop     ebx
0x55D4B1: add     esp, 4Ch
0x55D4B4: retn    4
