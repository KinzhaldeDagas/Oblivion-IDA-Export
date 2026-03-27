0x6CB640: sub     esp, 50h
0x6CB643: mov     eax, ds:0B24260h
0x6CB648: fld     dword ptr ds:0A79E10h
0x6CB64E: push    ebx
0x6CB64F: mov     ebx, [esp+54h+arg_0]
0x6CB653: mov     [ebx], eax
0x6CB655: push    ebp
0x6CB656: mov     ebp, ecx
0x6CB658: mov     ecx, ds:0B24264h
0x6CB65E: mov     [ebx+4], ecx
0x6CB661: mov     edx, ds:0B24268h
0x6CB667: mov     [ebx+8], edx
0x6CB66A: mov     eax, ds:0B3CBA4h
0x6CB66F: mov     [ebx+0Ch], eax
0x6CB672: mov     ecx, ds:0B3CBA8h
0x6CB678: mov     [ebx+10h], ecx
0x6CB67B: mov     edx, ds:0B3CBACh
0x6CB681: mov     [ebx+14h], edx
0x6CB684: mov     eax, ds:0B3CBB0h
0x6CB689: fstp    dword ptr [ebx+1Ch]
0x6CB68C: fld1
0x6CB68E: mov     [ebx+18h], eax
0x6CB691: fstp    [esp+58h+var_50]
0x6CB695: push    edi
0x6CB696: fld     dword ptr ds:0A7DEB4h
0x6CB69C: fchs
0x6CB69E: fstp    [esp+5Ch+arg_0]
0x6CB6A2: fld     dword ptr [ebp+1Ch]
0x6CB6A5: fld     [esp+5Ch+arg_0]
0x6CB6A9: fld     st
0x6CB6AB: fucomp  st(2)
0x6CB6AD: fnstsw  ax
0x6CB6AF: fstp    st(1)
0x6CB6B1: test    ah, 44h
0x6CB6B4: jnp     short loc_6CB6EC
0x6CB6B6: mov     ecx, [esp+5Ch+arg_4]
0x6CB6BA: fld     dword ptr [ecx+1Ch]
0x6CB6BD: fld     st(1)
0x6CB6BF: fucompp
0x6CB6C1: fnstsw  ax
0x6CB6C3: test    ah, 44h
0x6CB6C6: jnp     short loc_6CB6EC
0x6CB6C8: fstp    st
0x6CB6CA: push    ecx
0x6CB6CB: fld     dword ptr [ecx+1Ch]
0x6CB6CE: mov     ecx, ebx
0x6CB6D0: fmul    dword ptr [ebp+1Ch]
0x6CB6D3: fstp    [esp+60h+arg_0]
0x6CB6D7: fld     [esp+60h+arg_0]
0x6CB6DB: fstp    [esp+60h+var_60]; float
0x6CB6DE: call    sub_471560
0x6CB6E3: fld     dword ptr [ebx+1Ch]
0x6CB6E6: fstp    [esp+5Ch+var_50]
0x6CB6EA: jmp     short loc_6CB6EF
0x6CB6EC: fstp    dword ptr [ebx+1Ch]
0x6CB6EF: fld     dword ptr ds:0A7DEB4h
0x6CB6F5: push    esi
0x6CB6F6: fchs
0x6CB6F8: mov     ecx, 9
0x6CB6FD: fstp    [esp+60h+arg_0]
0x6CB701: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6CB706: fld     dword ptr [ebp+10h]
0x6CB709: lea     edi, [esp+60h+var_24]
0x6CB70D: fld     [esp+60h+arg_0]
0x6CB711: rep movsd
0x6CB713: fld     st
0x6CB715: fucomp  st(2)
0x6CB717: fnstsw  ax
0x6CB719: fstp    st(1)
0x6CB71B: test    ah, 44h
0x6CB71E: mov     edi, [esp+60h+arg_4]
0x6CB722: jnp     short loc_6CB76A
0x6CB724: fld     dword ptr [edi+10h]
0x6CB727: fld     st(1)
0x6CB729: fucompp
0x6CB72B: fnstsw  ax
0x6CB72D: test    ah, 44h
0x6CB730: jnp     short loc_6CB76A
0x6CB732: lea     ecx, [edi+0Ch]
0x6CB735: fstp    st
0x6CB737: push    ecx
0x6CB738: lea     edx, [esp+64h+var_34]
0x6CB73C: lea     esi, [ebp+0Ch]
0x6CB73F: push    edx
0x6CB740: mov     ecx, esi
0x6CB742: call    sub_714CF0
0x6CB747: lea     ecx, [esp+60h+var_34]
0x6CB74B: call    sub_715340
0x6CB750: lea     eax, [esp+60h+var_34]
0x6CB754: push    eax
0x6CB755: mov     ecx, ebx
0x6CB757: call    sub_471430
0x6CB75C: lea     ecx, [esp+60h+var_24]
0x6CB760: push    ecx
0x6CB761: mov     ecx, esi
0x6CB763: call    sub_47C600
0x6CB768: jmp     short loc_6CB76D
0x6CB76A: fstp    dword ptr [ebx+10h]
0x6CB76D: fld     dword ptr ds:0A7DEB4h
0x6CB773: pop     esi
0x6CB774: fchs
0x6CB776: fstp    [esp+5Ch+arg_0]
0x6CB77A: fld     dword ptr [ebp+0]
0x6CB77D: fld     [esp+5Ch+arg_0]
0x6CB781: fld     st
0x6CB783: fucomp  st(2)
0x6CB785: fnstsw  ax
0x6CB787: fstp    st(1)
0x6CB789: test    ah, 44h
0x6CB78C: jnp     short loc_6CB804
0x6CB78E: fld     dword ptr [edi]
0x6CB790: fld     st(1)
0x6CB792: fucompp
0x6CB794: fnstsw  ax
0x6CB796: test    ah, 44h
0x6CB799: jnp     short loc_6CB804
0x6CB79B: push    edi
0x6CB79C: fstp    st
0x6CB79E: lea     edx, [esp+60h+var_34]
0x6CB7A2: push    edx
0x6CB7A3: lea     ecx, [esp+64h+var_24]
0x6CB7A7: call    sub_7101F0
0x6CB7AC: fld     dword ptr [eax]
0x6CB7AE: fld     [esp+5Ch+var_50]
0x6CB7B2: mov     ecx, ebx
0x6CB7B4: fld     st
0x6CB7B6: fmulp   st(2), st
0x6CB7B8: fxch    st(1)
0x6CB7BA: fstp    [esp+5Ch+var_4C]
0x6CB7BE: fld     dword ptr [eax+4]
0x6CB7C1: fmul    st, st(1)
0x6CB7C3: fstp    [esp+5Ch+var_48]
0x6CB7C7: fmul    dword ptr [eax+8]
0x6CB7CA: lea     eax, [esp+5Ch+var_40]
0x6CB7CE: push    eax
0x6CB7CF: fstp    [esp+60h+var_44]
0x6CB7D3: fld     dword ptr [ebp+0]
0x6CB7D6: fadd    [esp+60h+var_4C]
0x6CB7DA: fstp    [esp+60h+var_40]
0x6CB7DE: fld     dword ptr [ebp+4]
0x6CB7E1: fadd    [esp+60h+var_48]
0x6CB7E5: fstp    [esp+60h+var_3C]
0x6CB7E9: fld     dword ptr [ebp+8]
0x6CB7EC: fadd    [esp+60h+var_44]
0x6CB7F0: fstp    [esp+60h+var_38]
0x6CB7F4: call    sub_471390
0x6CB7F9: pop     edi
0x6CB7FA: pop     ebp
0x6CB7FB: mov     eax, ebx
0x6CB7FD: pop     ebx
0x6CB7FE: add     esp, 50h
0x6CB801: retn    8
0x6CB804: pop     edi
0x6CB805: fstp    dword ptr [ebx]
0x6CB807: pop     ebp
0x6CB808: mov     eax, ebx
0x6CB80A: pop     ebx
0x6CB80B: add     esp, 50h
0x6CB80E: retn    8
