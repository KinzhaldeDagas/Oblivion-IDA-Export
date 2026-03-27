0x798300: push    ebx
0x798301: push    edi
0x798302: mov     edi, ecx
0x798304: movzx   eax, word ptr [edi+1Ch]
0x798308: movzx   ecx, word ptr [edi+8]
0x79830C: mov     ebx, [edi+18h]
0x79830F: imul    eax, ecx
0x798312: shl     eax, 5
0x798315: test    ebx, ebx
0x798317: jz      short loc_798355
0x798319: mov     ecx, [edi+10h]
0x79831C: test    ecx, ecx
0x79831E: jz      short loc_798355
0x798320: cmp     dword ptr [ecx], 0
0x798323: jz      short loc_798355
0x798325: test    ebx, ebx
0x798327: jz      short loc_798355
0x798329: mov     edx, [ecx]
0x79832B: push    esi
0x79832C: lea     esi, ds:0[eax*4]
0x798333: push    esi; Size
0x798334: push    edx; Src
0x798335: push    ebx; Dst
0x798336: call    _memcpy
0x79833B: sub     esi, [edi+18h]
0x79833E: mov     eax, [esp+18h+arg_0]
0x798342: add     esp, 0Ch
0x798345: add     esi, ebx
0x798347: sar     esi, 2
0x79834A: mov     [eax], esi
0x79834C: mov     eax, [edi+18h]
0x79834F: pop     esi
0x798350: pop     edi
0x798351: pop     ebx
0x798352: retn    4
0x798355: pop     edi
0x798356: mov     eax, ebx
0x798358: pop     ebx
0x798359: retn    4
