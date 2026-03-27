0x8C03F0: push    ebp
0x8C03F1: mov     ebp, esp
0x8C03F3: and     esp, 0FFFFFFF0h
0x8C03F6: push    0FFFFFFFFh
0x8C03F8: push    offset SEH_8C2D80
0x8C03FD: mov     eax, large fs:0
0x8C0403: push    eax
0x8C0404: sub     esp, 8
0x8C0407: push    ebx
0x8C0408: push    esi
0x8C0409: push    edi
0x8C040A: mov     eax, ds:0B30AACh
0x8C040F: xor     eax, esp
0x8C0411: push    eax
0x8C0412: lea     eax, [esp+24h+var_C]
0x8C0416: mov     large fs:0, eax
0x8C041C: mov     ebx, [ebp+arg_4]
0x8C041F: mov     edi, ecx
0x8C0421: mov     ecx, [ebp+arg_0]
0x8C0424: test    ecx, ecx
0x8C0426: mov     esi, [edi+4]
0x8C0429: jnz     short loc_8C045F
0x8C042B: mov     ecx, ds:0BA7D98h
0x8C0431: mov     eax, [ecx]
0x8C0433: mov     edx, [eax+10h]
0x8C0436: push    29h ; ')'
0x8C0438: push    30h ; '0'
0x8C043A: call    edx
0x8C043C: mov     word ptr [eax+4], 30h ; '0'
0x8C0442: mov     [esp+24h+var_14], eax
0x8C0446: mov     ecx, eax
0x8C0448: mov     [esp+24h+var_4], 0
0x8C0450: call    sub_910E00
0x8C0455: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C045D: mov     ecx, eax
0x8C045F: movaps  xmm0, xmmword ptr [esi+10h]
0x8C0463: movaps  xmmword ptr [ecx+10h], xmm0
0x8C0467: movaps  xmm0, xmmword ptr [esi+20h]
0x8C046B: movaps  xmmword ptr [ecx+20h], xmm0
0x8C046F: fld     dword ptr [esi+0Ch]
0x8C0472: fstp    dword ptr [ecx+0Ch]
0x8C0475: fld     dword ptr [ebx+10h]
0x8C0478: fstp    [esp+24h+var_14]
0x8C047C: fld1
0x8C047E: fcomp   [esp+24h+var_14]
0x8C0482: fnstsw  ax
0x8C0484: test    ah, 44h
0x8C0487: jnp     short loc_8C04BA
0x8C0489: movss   xmm1, [esp+24h+var_14]
0x8C048F: movaps  xmm2, xmmword ptr [ecx+10h]
0x8C0493: xorps   xmm0, xmm0
0x8C0496: movss   xmm0, xmm1
0x8C049A: movaps  xmm1, xmm0
0x8C049D: shufps  xmm1, xmm0, 0
0x8C04A1: mulps   xmm1, xmm2
0x8C04A4: movaps  xmmword ptr [ecx+10h], xmm1
0x8C04A8: movaps  xmm1, xmm0
0x8C04AB: shufps  xmm1, xmm0, 0
0x8C04AF: movaps  xmm0, xmmword ptr [ecx+20h]
0x8C04B3: mulps   xmm1, xmm0
0x8C04B6: movaps  xmmword ptr [ecx+20h], xmm1
0x8C04BA: push    ebx
0x8C04BB: push    ecx
0x8C04BC: mov     ecx, edi
0x8C04BE: call    sub_8A07B0
0x8C04C3: mov     ecx, [esp+24h+var_C]
0x8C04C7: mov     large fs:0, ecx
0x8C04CE: pop     ecx
0x8C04CF: pop     edi
0x8C04D0: pop     esi
0x8C04D1: pop     ebx
0x8C04D2: mov     esp, ebp
0x8C04D4: pop     ebp
0x8C04D5: retn    8
