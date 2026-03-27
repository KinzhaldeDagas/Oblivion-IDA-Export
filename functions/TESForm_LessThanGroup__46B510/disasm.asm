0x46B510: mov     eax, [esp+arg_0]
0x46B514: push    ebx
0x46B515: xor     bl, bl
0x46B517: test    eax, eax
0x46B519: jz      short TESForm_LessThanGroup___def_46B52D; jumptable 0046B52D default case
0x46B51B: mov     edx, [eax]
0x46B51D: cmp     edx, ds:0B05E20h
0x46B523: jnz     short TESForm_LessThanGroup___def_46B52D; jumptable 0046B52D default case
0x46B525: mov     edx, [eax+0Ch]
0x46B528: cmp     edx, 7; switch 8 cases
0x46B52B: ja      short TESForm_LessThanGroup___def_46B52D; jumptable 0046B52D default case
0x46B52D: jmp     ds:jpt_46B52D[edx*4]; switch jump
0x46B534: mov     eax, [eax+8]; jumptable 0046B52D case 0
0x46B537: push    esi
0x46B538: movzx   esi, byte ptr [ecx+4]
0x46B53C: push    eax
0x46B53D: call    TESForm_GetFormTypeFromChunkType
0x46B542: add     esp, 4
0x46B545: cmp     esi, eax
0x46B547: pop     esi
0x46B548: jge     short TESForm_LessThanGroup___def_46B52D; jumptable 0046B52D default case
0x46B54A: mov     bl, 1
0x46B54C: mov     al, bl
0x46B54E: pop     ebx
0x46B54F: retn    4
0x46B552: cmp     byte ptr [ecx+4], 30h ; '0'; jumptable 0046B52D cases 2,3,6
0x46B556: jmp     short loc_46B562
0x46B558: cmp     byte ptr [ecx+4], 35h ; '5'; jumptable 0046B52D cases 1,4,5
0x46B55C: jmp     short loc_46B562
0x46B55E: cmp     byte ptr [ecx+4], 39h ; '9'; jumptable 0046B52D case 7
0x46B562: jnb     short TESForm_LessThanGroup___def_46B52D; jumptable 0046B52D default case
0x46B564: mov     bl, 1
0x46B566: mov     al, bl; jumptable 0046B52D default case
0x46B568: pop     ebx
0x46B569: retn    4
