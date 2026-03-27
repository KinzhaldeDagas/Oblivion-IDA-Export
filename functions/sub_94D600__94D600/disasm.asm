0x94D600: push    ebp
0x94D601: mov     ebp, esp
0x94D603: and     esp, 0FFFFFFF0h
0x94D606: movaps  xmm0, xmmword ptr [ecx+80h]
0x94D60D: movaps  xmm1, xmmword ptr [ecx+60h]
0x94D611: mov     eax, [ebp+arg_0]
0x94D614: movaps  xmm2, xmm0
0x94D617: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94D61B: movaps  xmm3, xmm1
0x94D61E: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94D622: mulps   xmm3, xmm2
0x94D625: movaps  xmm2, xmm0
0x94D628: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94D62C: movaps  xmm0, xmm1
0x94D62F: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94D633: mulps   xmm0, xmm2
0x94D636: movaps  xmm2, xmm0
0x94D639: movaps  xmm0, xmmword ptr [ecx+70h]
0x94D63D: movaps  xmmword ptr [eax], xmm0
0x94D640: movaps  xmm0, xmmword ptr [ecx+70h]
0x94D644: movaps  xmmword ptr [eax+10h], xmm0
0x94D648: movaps  xmm0, xmmword ptr [ecx+70h]
0x94D64C: movaps  xmmword ptr [eax+20h], xmm0
0x94D650: movaps  xmm0, xmmword ptr [ecx+70h]
0x94D654: movaps  xmmword ptr [eax+30h], xmm0
0x94D658: movaps  xmm1, xmmword ptr [ecx+90h]
0x94D65F: subps   xmm2, xmm3
0x94D662: movaps  xmm0, xmm1
0x94D665: mulps   xmm0, xmm2
0x94D668: movaps  xmm2, xmmword ptr [ecx+80h]
0x94D66F: mulps   xmm1, xmm2
0x94D672: movaps  xmm2, xmmword ptr [eax]
0x94D675: addps   xmm2, xmm0
0x94D678: addps   xmm2, xmm1
0x94D67B: movaps  xmmword ptr [eax], xmm2
0x94D67E: movaps  xmm2, xmmword ptr [eax+10h]
0x94D682: addps   xmm2, xmm0
0x94D685: movaps  xmmword ptr [eax+10h], xmm2
0x94D689: movaps  xmm2, xmmword ptr [eax+10h]
0x94D68D: subps   xmm2, xmm1
0x94D690: movaps  xmmword ptr [eax+10h], xmm2
0x94D694: movaps  xmm2, xmmword ptr [eax+20h]
0x94D698: subps   xmm2, xmm0
0x94D69B: movaps  xmmword ptr [eax+20h], xmm2
0x94D69F: movaps  xmm2, xmmword ptr [eax+20h]
0x94D6A3: addps   xmm2, xmm1
0x94D6A6: movaps  xmmword ptr [eax+20h], xmm2
0x94D6AA: movaps  xmm2, xmmword ptr [eax+30h]
0x94D6AE: subps   xmm2, xmm0
0x94D6B1: movaps  xmmword ptr [eax+30h], xmm2
0x94D6B5: movaps  xmm0, xmmword ptr [eax+30h]
0x94D6B9: subps   xmm0, xmm1
0x94D6BC: movaps  xmmword ptr [eax+30h], xmm0
0x94D6C0: mov     esp, ebp
0x94D6C2: pop     ebp
0x94D6C3: retn    4
