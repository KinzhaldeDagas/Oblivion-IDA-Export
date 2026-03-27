0x8ED450: push    ebp
0x8ED451: mov     ebp, esp
0x8ED453: and     esp, 0FFFFFFF0h
0x8ED456: sub     esp, 8
0x8ED459: mov     ecx, [ebp+arg_4]
0x8ED45C: dec     ecx
0x8ED45D: push    esi
0x8ED45E: push    edi
0x8ED45F: js      short loc_8ED478
0x8ED461: mov     esi, [ebp+arg_8]
0x8ED464: and     ecx, 0FFFFFFFh
0x8ED46A: xorps   xmm0, xmm0
0x8ED46D: shl     ecx, 2
0x8ED470: lea     edi, [esi+10h]
0x8ED473: movaps  xmmword ptr [esi], xmm0
0x8ED476: rep movsd
0x8ED478: pop     edi
0x8ED479: pop     esi
0x8ED47A: mov     esp, ebp
0x8ED47C: pop     ebp
0x8ED47D: retn    0Ch
