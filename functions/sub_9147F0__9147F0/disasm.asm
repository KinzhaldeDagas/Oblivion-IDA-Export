0x9147F0: push    ebp
0x9147F1: mov     ebp, esp
0x9147F3: and     esp, 0FFFFFFF0h
0x9147F6: sub     esp, 2Ch
0x9147F9: mov     edx, [ecx]
0x9147FB: push    esi
0x9147FC: mov     esi, [ebp+arg_8]
0x9147FF: mov     eax, [esi+4]
0x914802: mov     [esp+30h+var_C], eax
0x914806: lea     eax, [esp+30h+var_2C+0Ch]
0x91480A: push    eax
0x91480B: mov     eax, [ebp+arg_0]
0x91480E: push    eax
0x91480F: lea     eax, [esp+38h+var_2C+0Bh]
0x914813: push    eax
0x914814: call    dword ptr [edx+14h]
0x914817: cmp     byte ptr [eax], 0
0x91481A: jz      short loc_91486E
0x91481C: movaps  xmm0, xmmword ptr [esp+30h+var_2C+0Ch]
0x914821: mov     ecx, [ebp+arg_4]
0x914824: mov     eax, [ecx+8]
0x914827: mov     edx, [ecx+4]
0x91482A: movaps  xmm1, xmm0
0x91482D: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x914831: mov     [esp+30h+var_10], edx
0x914835: movaps  xmm2, xmmword ptr [eax+20h]
0x914839: movaps  xmm3, xmmword ptr [eax+10h]
0x91483D: mulps   xmm2, xmm1
0x914840: movaps  xmm1, xmm0
0x914843: shufps  xmm1, xmm0, 55h ; 'U'
0x914847: mulps   xmm3, xmm1
0x91484A: movaps  xmm1, xmm0
0x91484D: shufps  xmm1, xmm0, 0
0x914851: movaps  xmm0, xmmword ptr [eax]
0x914854: mov     eax, [esi]
0x914856: lea     edx, [esp+30h+var_2C+0Ch]
0x91485A: mulps   xmm0, xmm1
0x91485D: push    edx
0x91485E: addps   xmm0, xmm3
0x914861: push    ecx
0x914862: addps   xmm0, xmm2
0x914865: mov     ecx, esi
0x914867: movaps  xmmword ptr [esp+38h+var_2C+0Ch], xmm0
0x91486C: call    dword ptr [eax]
0x91486E: pop     esi
0x91486F: mov     esp, ebp
0x914871: pop     ebp
0x914872: retn    0Ch
