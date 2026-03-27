0x8F5300: push    edi
0x8F5301: mov     edi, [esp+4+arg_4]
0x8F5305: test    edi, edi
0x8F5307: mov     eax, ecx
0x8F5309: mov     word ptr [eax+6], 1
0x8F530F: mov     dword ptr [eax+8], 0
0x8F5316: mov     dword ptr [eax], offset off_A9B328
0x8F531C: jle     short loc_8F5340
0x8F531E: mov     edx, [esp+4+arg_0]
0x8F5322: push    esi
0x8F5323: lea     esi, [eax+10h]
0x8F5326: mov     ecx, edi
0x8F5328: jmp     short loc_8F5330
0x8F532A: align 10h
0x8F5330: movaps  xmm0, xmmword ptr [edx]
0x8F5333: movaps  xmmword ptr [esi], xmm0
0x8F5336: add     edx, 10h
0x8F5339: add     esi, 10h
0x8F533C: dec     ecx
0x8F533D: jnz     short loc_8F5330
0x8F533F: pop     esi
0x8F5340: mov     [eax+0Ch], edi
0x8F5343: pop     edi
0x8F5344: retn    8
