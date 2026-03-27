0x929620: mov     eax, [esp+arg_4]
0x929624: test    eax, eax
0x929626: jz      short loc_929643
0x929628: fld     dword ptr [ecx+34h]
0x92962B: mov     word ptr [eax+6], 1
0x929631: fstp    dword ptr [eax+0Ch]
0x929634: mov     dword ptr [eax+8], 0
0x92963B: mov     dword ptr [eax], offset ??_7hkTriangleShape@@6B@; const hkTriangleShape::`vftable'
0x929641: jmp     short loc_929645
0x929643: xor     eax, eax
0x929645: mov     edx, [esp+arg_0]
0x929649: push    esi
0x92964A: mov     esi, [ecx+1Ch]
0x92964D: lea     edx, [edx+edx*2]
0x929650: shl     edx, 2
0x929653: mov     esi, [edx+esi]
0x929656: shl     esi, 4
0x929659: push    edi
0x92965A: mov     edi, [ecx+10h]
0x92965D: movaps  xmm0, xmmword ptr [esi+edi]
0x929661: add     esi, edi
0x929663: movaps  xmmword ptr [eax+10h], xmm0
0x929667: mov     esi, [ecx+1Ch]
0x92966A: mov     esi, [esi+edx+4]
0x92966E: mov     edi, [ecx+10h]
0x929671: shl     esi, 4
0x929674: movaps  xmm0, xmmword ptr [esi+edi]
0x929678: add     esi, edi
0x92967A: movaps  xmmword ptr [eax+20h], xmm0
0x92967E: mov     esi, [ecx+1Ch]
0x929681: mov     edx, [esi+edx+8]
0x929685: mov     esi, [ecx+10h]
0x929688: shl     edx, 4
0x92968B: movaps  xmm0, xmmword ptr [edx+esi]
0x92968F: add     edx, esi
0x929691: pop     edi
0x929692: movaps  xmmword ptr [eax+30h], xmm0
0x929696: pop     esi
0x929697: retn    8
