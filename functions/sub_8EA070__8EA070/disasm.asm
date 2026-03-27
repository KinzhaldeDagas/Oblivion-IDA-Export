0x8EA070: push    ebp
0x8EA071: mov     ebp, esp
0x8EA073: mov     eax, [ebp+arg_4]
0x8EA076: xorps   xmm0, xmm0
0x8EA079: mov     byte ptr [eax], 1
0x8EA07C: movaps  xmmword ptr [eax+30h], xmm0
0x8EA080: movaps  xmmword ptr [eax+10h], xmm0
0x8EA084: movaps  xmmword ptr [eax+20h], xmm0
0x8EA088: movaps  xmmword ptr [eax+40h], xmm0
0x8EA08C: movaps  xmmword ptr [eax+50h], xmm0
0x8EA090: movaps  xmmword ptr [eax+60h], xmm0
0x8EA094: and     esp, 0FFFFFFF0h
0x8EA097: movaps  xmmword ptr [eax+70h], xmm0
0x8EA09B: add     eax, 80h ; '€'
0x8EA0A0: mov     esp, ebp
0x8EA0A2: pop     ebp
0x8EA0A3: retn    8
