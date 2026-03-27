0x77A450: push    ebp
0x77A451: push    edi
0x77A452: mov     edi, ecx
0x77A454: xor     ebp, ebp
0x77A456: cmp     [edi+38h], ebp
0x77A459: jbe     short loc_77A48F
0x77A45B: push    esi
0x77A45C: lea     esp, [esp+0]
0x77A460: mov     eax, [edi+44h]
0x77A463: mov     esi, [eax+ebp*4]
0x77A466: test    esi, esi
0x77A468: jz      short loc_77A486
0x77A46A: mov     ecx, [esi+44h]
0x77A46D: test    ecx, ecx
0x77A46F: jz      short loc_77A478
0x77A471: mov     edx, [ecx]
0x77A473: mov     eax, [edx+40h]
0x77A476: call    eax
0x77A478: mov     ecx, [esi+58h]
0x77A47B: test    ecx, ecx
0x77A47D: jz      short loc_77A486
0x77A47F: mov     edx, [ecx]
0x77A481: mov     eax, [edx+58h]
0x77A484: call    eax
0x77A486: add     ebp, 1
0x77A489: cmp     ebp, [edi+38h]
0x77A48C: jb      short loc_77A460
0x77A48E: pop     esi
0x77A48F: mov     byte ptr [edi+1Ch], 0
0x77A493: pop     edi
0x77A494: pop     ebp
0x77A495: retn
