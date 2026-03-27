0x790350: mov     ecx, [esp+arg_4]
0x790354: mov     edx, [ecx]
0x790356: fld     dword ptr [edx+2Ch]
0x790359: push    esi
0x79035A: push    edi
0x79035B: mov     edi, [esp+8+arg_0]
0x79035F: mov     esi, [edi]
0x790361: fld     dword ptr [esi+2Ch]
0x790364: fcompp
0x790366: fnstsw  ax
0x790368: test    ah, 5
0x79036B: jp      short loc_790371
0x79036D: mov     [ecx], esi
0x79036F: mov     [edi], edx
0x790371: mov     esi, [ecx]
0x790373: push    ebx
0x790374: mov     ebx, [esp+0Ch+arg_8]
0x790378: mov     edx, [ebx]
0x79037A: fld     dword ptr [edx+2Ch]
0x79037D: fld     dword ptr [esi+2Ch]
0x790380: fcompp
0x790382: fnstsw  ax
0x790384: test    ah, 5
0x790387: jp      short loc_79038D
0x790389: mov     [ebx], esi
0x79038B: mov     [ecx], edx
0x79038D: mov     edx, [ecx]
0x79038F: mov     esi, [edi]
0x790391: fld     dword ptr [edx+2Ch]
0x790394: fld     dword ptr [esi+2Ch]
0x790397: pop     ebx
0x790398: fcompp
0x79039A: fnstsw  ax
0x79039C: test    ah, 5
0x79039F: jp      short loc_7903A5
0x7903A1: mov     [ecx], esi
0x7903A3: mov     [edi], edx
0x7903A5: pop     edi
0x7903A6: pop     esi
0x7903A7: retn
