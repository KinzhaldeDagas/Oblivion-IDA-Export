0x8F6720: push    ebp
0x8F6721: mov     ebp, esp
0x8F6723: and     esp, 0FFFFFFF0h
0x8F6726: sub     esp, 0Ch
0x8F6729: mov     eax, [ebp+arg_C]
0x8F672C: mov     edx, [ebp+arg_8]
0x8F672F: push    esi
0x8F6730: mov     esi, ecx
0x8F6732: mov     [esi+8], eax
0x8F6735: lea     eax, [esi+30h]
0x8F6738: mov     word ptr [esi+6], 1
0x8F673E: mov     dword ptr [esi], offset off_A9B510
0x8F6744: lea     ecx, [eax+0Ch]
0x8F6747: mov     [eax], ecx
0x8F6749: mov     dword ptr [eax+4], 0
0x8F6750: mov     dword ptr [eax+8], 80000001h
0x8F6757: mov     ecx, [edx]
0x8F6759: xorps   xmm0, xmm0
0x8F675C: push    eax
0x8F675D: mov     [esi+0Ch], ecx
0x8F6760: movaps  xmmword ptr [esi+10h], xmm0
0x8F6764: movaps  xmmword ptr [esi+20h], xmm0
0x8F6768: call    sub_934270
0x8F676D: add     esp, 4
0x8F6770: mov     eax, esi
0x8F6772: pop     esi
0x8F6773: mov     esp, ebp
0x8F6775: pop     ebp
0x8F6776: retn    10h
