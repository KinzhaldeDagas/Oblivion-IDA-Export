0x8F3560: mov     eax, [esp+arg_4]
0x8F3564: dec     eax
0x8F3565: js      short locret_8F3596
0x8F3567: mov     edx, [esp+arg_0]
0x8F356B: push    esi
0x8F356C: lea     esi, [eax+1]
0x8F356F: mov     eax, [esp+4+arg_8]
0x8F3573: push    edi
0x8F3574: movzx   edi, word ptr [edx]
0x8F3577: movaps  xmm0, xmmword ptr [edi+ecx+10h]
0x8F357C: movaps  xmmword ptr [eax], xmm0
0x8F357F: movzx   edi, word ptr [edx]
0x8F3582: or      edi, 3F000000h
0x8F3588: mov     [eax+0Ch], edi
0x8F358B: add     eax, 10h
0x8F358E: add     edx, 2
0x8F3591: dec     esi
0x8F3592: jnz     short loc_8F3574
0x8F3594: pop     edi
0x8F3595: pop     esi
0x8F3596: retn    0Ch
