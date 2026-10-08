0x7A4B80: push    ebx; Checked leaf-texture vector erase: shifts the tail by deep assignment, destroys the vacated suffix, updates end, and returns {owner,current}.
0x7A4B81: push    ebp
0x7A4B82: mov     ebp, [esp+8+firstOwner]
0x7A4B86: test    ebp, ebp
0x7A4B88: push    esi
0x7A4B89: mov     esi, ecx
0x7A4B8B: jz      short loc_7A4B93
0x7A4B8D: cmp     ebp, [esp+0Ch+lastOwner]
0x7A4B91: jz      short loc_7A4B98
0x7A4B93: call    __invalid_parameter_noinfo
0x7A4B98: mov     ebx, [esp+0Ch+first]
0x7A4B9C: mov     ecx, [esp+0Ch+last]
0x7A4BA0: cmp     ebx, ecx
0x7A4BA2: jz      short loc_7A4BDD
0x7A4BA4: mov     eax, [esi+8]
0x7A4BA7: push    edi
0x7A4BA8: mov     byte ptr [esp+10h+firstOwner], 0
0x7A4BAD: mov     edx, [esp+10h+firstOwner]
0x7A4BB1: push    edx
0x7A4BB2: mov     edx, [esp+14h+result]
0x7A4BB6: push    edx
0x7A4BB7: mov     edx, [esp+18h+result]
0x7A4BBB: push    edx
0x7A4BBC: push    ebx; destinationFirst
0x7A4BBD: push    eax; last
0x7A4BBE: push    ecx; first
0x7A4BBF: call    OB_SIdvLeafTexture_CopyAssignRangeForward_010201A0; Forward deep-copy assignment over existing 0x54-byte SIdvLeafTexture records; returns the destination end.
0x7A4BC4: mov     ecx, [esi+8]
0x7A4BC7: mov     edi, eax
0x7A4BC9: mov     eax, [esp+28h+result]
0x7A4BCD: push    eax
0x7A4BCE: push    esi
0x7A4BCF: push    ecx; last
0x7A4BD0: push    edi; first
0x7A4BD1: call    OB_SIdvLeafTexture_DestroyRange_010201A0; Destroys [first,last) compact SIdvLeafTexture records at 0x54 stride, releasing each owned filename.
0x7A4BD6: add     esp, 28h
0x7A4BD9: mov     [esi+8], edi
0x7A4BDC: pop     edi
0x7A4BDD: mov     eax, [esp+0Ch+result]
0x7A4BE1: pop     esi
0x7A4BE2: mov     [eax], ebp
0x7A4BE4: pop     ebp
0x7A4BE5: mov     [eax+4], ebx
0x7A4BE8: pop     ebx
0x7A4BE9: retn    14h
