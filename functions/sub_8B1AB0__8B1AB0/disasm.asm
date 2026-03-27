0x8B1AB0: push    esi
0x8B1AB1: mov     esi, [esp+4+arg_4]
0x8B1AB5: fld     dword ptr [esi+14h]
0x8B1AB8: fcomp   dword ptr [ecx+24h]
0x8B1ABB: fnstsw  ax
0x8B1ABD: test    ah, 5
0x8B1AC0: jp      short loc_8B1AF2
0x8B1AC2: movaps  xmm0, xmmword ptr [esi]
0x8B1AC5: movaps  xmmword ptr [ecx+10h], xmm0
0x8B1AC9: mov     eax, [esi+10h]
0x8B1ACC: mov     [ecx+20h], eax
0x8B1ACF: mov     edx, [esi+14h]
0x8B1AD2: mov     eax, [esp+4+arg_0]
0x8B1AD6: mov     [ecx+24h], edx
0x8B1AD9: mov     edx, [eax+0Ch]
0x8B1ADC: test    edx, edx
0x8B1ADE: jz      short loc_8B1AE9
0x8B1AE0: mov     eax, edx
0x8B1AE2: mov     edx, [eax+0Ch]
0x8B1AE5: test    edx, edx
0x8B1AE7: jnz     short loc_8B1AE0
0x8B1AE9: mov     [ecx+30h], eax
0x8B1AEC: mov     eax, [esi+14h]
0x8B1AEF: mov     [ecx+4], eax
0x8B1AF2: pop     esi
0x8B1AF3: retn    8
