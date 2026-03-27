0x4E0970: sub     esp, 30h
0x4E0973: push    ebx
0x4E0974: push    edi
0x4E0975: mov     edi, [ecx+3Ch]
0x4E0978: xor     ebx, ebx
0x4E097A: xor     eax, eax
0x4E097C: cmp     edi, ebx
0x4E097E: jz      loc_4E0A38
0x4E0984: push    ebp
0x4E0985: push    esi
0x4E0986: mov     esi, [esp+40h+arg_0]
0x4E098A: cmp     esi, ebx
0x4E098C: mov     ebp, 3
0x4E0991: mov     [esp+40h+var_30], bl
0x4E0995: mov     [esp+40h+var_2E], bx
0x4E099A: mov     [esp+40h+var_2C], bx
0x4E099F: mov     [esp+40h+var_28], ebx
0x4E09A3: mov     [esp+40h+var_24], ebx
0x4E09A7: mov     [esp+40h+var_20], ebx
0x4E09AB: jnz     short loc_4E09B1
0x4E09AD: lea     esi, [esp+40h+var_30]
0x4E09B1: push    edi
0x4E09B2: mov     [esi+8], ecx
0x4E09B5: mov     [esi+0Ch], edi
0x4E09B8: call    sub_4A05E0
0x4E09BD: mov     [esi+10h], eax
0x4E09C0: push    offset sub_4DAC00
0x4E09C5: lea     eax, [esp+48h+var_1C]
0x4E09C9: push    eax
0x4E09CA: push    edi
0x4E09CB: mov     [esp+50h+var_14], 0Fh
0x4E09D3: mov     [esp+50h+var_18], 1
0x4E09D8: mov     [esp+50h+var_10], esi
0x4E09DC: call    sub_88A7D0
0x4E09E1: movzx   eax, word ptr [esi+2]
0x4E09E5: movzx   ecx, word ptr [esi+4]
0x4E09E9: add     esp, 10h
0x4E09EC: cmp     ax, bx
0x4E09EF: lea     edx, [eax+ecx]
0x4E09F2: movzx   edx, dx
0x4E09F5: jz      short loc_4E0A1B
0x4E09F7: cmp     cx, bx
0x4E09FA: jz      short loc_4E0A07
0x4E09FC: or      byte ptr [esi], 4
0x4E09FF: lea     ecx, [edx+3]
0x4E0A02: movzx   ebp, cx
0x4E0A05: jmp     short loc_4E0A0F
0x4E0A07: cmp     ax, bx
0x4E0A0A: jz      short loc_4E0A1B
0x4E0A0C: or      byte ptr [esi], 1
0x4E0A0F: cmp     ax, bx
0x4E0A12: jz      short loc_4E0A1B
0x4E0A14: lea     eax, [eax+eax*2]
0x4E0A17: lea     ebp, [ebp+eax*8+0]
0x4E0A1B: test    byte ptr [esi], 2
0x4E0A1E: movzx   eax, dx
0x4E0A21: jz      short loc_4E0A29
0x4E0A23: add     edx, 0FFFFFFFFh
0x4E0A26: movzx   eax, dx
0x4E0A29: lea     ecx, ds:0[eax*8]
0x4E0A30: sub     ecx, eax
0x4E0A32: pop     esi
0x4E0A33: lea     eax, [ebp+ecx*4+0]
0x4E0A37: pop     ebp
0x4E0A38: pop     edi
0x4E0A39: pop     ebx
0x4E0A3A: add     esp, 30h
0x4E0A3D: retn    4
