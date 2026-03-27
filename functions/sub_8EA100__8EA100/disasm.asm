0x8EA100: push    ebp
0x8EA101: mov     ebp, esp
0x8EA103: and     esp, 0FFFFFFF0h
0x8EA106: sub     esp, 0Ch
0x8EA109: push    esi
0x8EA10A: mov     esi, [ebp+arg_0]
0x8EA10D: add     ecx, 10h
0x8EA110: push    ecx
0x8EA111: lea     ecx, [esi+10h]
0x8EA114: call    sub_89DF00
0x8EA119: xorps   xmm0, xmm0
0x8EA11C: movaps  xmmword ptr [esi+0D0h], xmm0
0x8EA123: movaps  xmmword ptr [esi+0E0h], xmm0
0x8EA12A: pop     esi
0x8EA12B: mov     esp, ebp
0x8EA12D: pop     ebp
0x8EA12E: retn    4
