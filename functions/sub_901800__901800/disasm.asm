0x901800: push    ebp
0x901801: mov     ebp, esp
0x901803: and     esp, 0FFFFFFF0h
0x901806: sub     esp, 18h
0x901809: mov     edx, [ebp+arg_8]
0x90180C: push    esi
0x90180D: push    edi
0x90180E: mov     edi, [ebp+arg_C]
0x901811: mov     eax, [edi+3034h]
0x901817: mov     esi, [edi]
0x901819: push    edi
0x90181A: push    edx
0x90181B: mov     edx, [ebp+arg_4]
0x90181E: mov     [esp+28h+var_14], eax
0x901822: mov     eax, [ebp+arg_0]
0x901825: push    eax
0x901826: push    edx
0x901827: call    sub_9011D0
0x90182C: cmp     esi, [edi]
0x90182E: jnb     short loc_901871
0x901830: lea     eax, [esp+20h+var_10]
0x901834: push    eax
0x901835: mov     ecx, esi
0x901837: call    sub_8F7000
0x90183C: movaps  xmm0, xmmword ptr [eax]
0x90183F: movaps  xmm1, xmmword ptr [esi+10h]
0x901843: movaps  xmm2, xmm0
0x901846: shufps  xmm2, xmm0, 0
0x90184A: movaps  xmm0, xmmword ptr [esi]
0x90184D: mulps   xmm2, xmm1
0x901850: addps   xmm0, xmm2
0x901853: movaps  xmmword ptr [esi], xmm0
0x901856: movaps  xmm1, xmmword ptr [esi+10h]
0x90185A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x901861: xorps   xmm1, xmm0
0x901864: movaps  xmmword ptr [esi+10h], xmm1
0x901868: mov     eax, [edi]
0x90186A: add     esi, 30h ; '0'
0x90186D: cmp     esi, eax
0x90186F: jb      short loc_901830
0x901871: fld     dword ptr [edi+3034h]
0x901877: fld     [esp+20h+var_14]
0x90187B: fucompp
0x90187D: fnstsw  ax
0x90187F: test    ah, 44h
0x901882: jnp     short loc_901896
0x901884: movaps  xmm0, xmmword ptr ds:0A9B570h
0x90188B: movaps  xmm1, xmmword ptr [edi+20h]
0x90188F: xorps   xmm1, xmm0
0x901892: movaps  xmmword ptr [edi+20h], xmm1
0x901896: pop     edi
0x901897: pop     esi
0x901898: mov     esp, ebp
0x90189A: pop     ebp
0x90189B: retn    10h
