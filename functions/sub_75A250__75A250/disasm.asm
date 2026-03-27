0x75A250: sub     esp, 24h
0x75A253: mov     eax, [esp+24h+arg_4]
0x75A257: push    esi
0x75A258: mov     esi, [eax+24h]
0x75A25B: test    esi, esi
0x75A25D: mov     edx, ecx
0x75A25F: push    edi
0x75A260: mov     edi, [eax+5Ch]
0x75A263: mov     [esp+2Ch+var_20], edx
0x75A267: jz      loc_75A356
0x75A26D: movzx   ecx, word ptr [eax+48h]
0x75A271: test    cx, cx
0x75A274: mov     eax, [edx+18h]
0x75A277: mov     [esp+2Ch+var_24], 0
0x75A27F: push    ebx
0x75A280: mov     ebx, [eax+10h]
0x75A283: push    ebp
0x75A284: mov     ebp, [eax+8]
0x75A287: mov     [esp+34h+var_18], ebx
0x75A28B: mov     bl, [eax+14h]
0x75A28E: mov     eax, [eax+0Ch]
0x75A291: mov     [esp+34h+var_1C], bl
0x75A295: mov     [esp+34h+var_14], eax
0x75A299: jbe     loc_75A354
0x75A29F: add     edi, 10h
0x75A2A2: movzx   ebx, cx
0x75A2A5: jmp     short loc_75A2AB
0x75A2A7: mov     edx, [esp+34h+var_20]
0x75A2AB: fld     dword ptr [edi-4]
0x75A2AE: fdiv    dword ptr [edi]
0x75A2B0: fstp    [esp+34h+arg_4]
0x75A2B4: fld     dword ptr [edx+1Ch]
0x75A2B7: fstp    [esp+34h+var_24]
0x75A2BB: fld     [esp+34h+arg_4]
0x75A2BF: fld     [esp+34h+var_24]
0x75A2C3: fcom    st(1)
0x75A2C5: fnstsw  ax
0x75A2C7: fstp    st(1)
0x75A2C9: test    ah, 5
0x75A2CC: jnp     short loc_75A2D4
0x75A2CE: fstp    [esp+34h+arg_4]
0x75A2D2: jmp     short loc_75A2D6
0x75A2D4: fstp    st
0x75A2D6: fld     dword ptr [edx+20h]
0x75A2D9: fstp    [esp+34h+var_24]
0x75A2DD: fld     [esp+34h+arg_4]
0x75A2E1: fld     [esp+34h+var_24]
0x75A2E5: fcom    st(1)
0x75A2E7: fnstsw  ax
0x75A2E9: fstp    st(1)
0x75A2EB: test    ah, 41h
0x75A2EE: jz      short loc_75A2F6
0x75A2F0: fstp    [esp+34h+arg_4]
0x75A2F4: jmp     short loc_75A2F8
0x75A2F6: fstp    st
0x75A2F8: mov     ecx, dword ptr [esp+34h+var_1C]
0x75A2FC: fld     [esp+34h+arg_4]
0x75A300: mov     eax, [esp+34h+var_18]
0x75A304: push    ecx; char
0x75A305: mov     ecx, [esp+38h+var_14]
0x75A309: lea     edx, [esp+38h+var_24]
0x75A30D: push    edx; int
0x75A30E: push    ebp; int
0x75A30F: push    eax; int
0x75A310: push    ecx; int
0x75A311: push    ecx
0x75A312: lea     edx, [esp+4Ch+var_10]
0x75A316: fstp    [esp+4Ch+var_4C]; float
0x75A319: push    edx; int
0x75A31A: mov     [esp+50h+var_24], 0
0x75A322: call    sub_6BE040
0x75A327: mov     eax, [esp+50h+var_10]
0x75A32B: mov     ecx, [esp+50h+var_C]
0x75A32F: mov     edx, [esp+50h+var_8]
0x75A333: mov     [esi], eax
0x75A335: mov     eax, [esp+50h+var_4]
0x75A339: mov     [esi+4], ecx
0x75A33C: mov     [esi+8], edx
0x75A33F: mov     [esi+0Ch], eax
0x75A342: add     esp, 1Ch
0x75A345: add     esi, 10h
0x75A348: add     edi, 1Ch
0x75A34B: sub     ebx, 1
0x75A34E: jnz     loc_75A2A7
0x75A354: pop     ebp
0x75A355: pop     ebx
0x75A356: pop     edi
0x75A357: pop     esi
0x75A358: add     esp, 24h
0x75A35B: retn    8
