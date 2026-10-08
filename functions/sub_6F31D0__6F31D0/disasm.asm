0x6F31D0: push    ebp
0x6F31D1: mov     ebp, [esp+4+arg_4]
0x6F31D5: push    esi
0x6F31D6: mov     esi, [esp+8+arg_0]
0x6F31DA: cmp     esi, ebp
0x6F31DC: jz      short loc_6F3205
0x6F31DE: push    ebx
0x6F31DF: push    edi
0x6F31E0: mov     edi, [esp+10h+source]
0x6F31E4: lea     ebx, [edi+1Ch]
0x6F31E7: push    0FFFFFFFFh; count
0x6F31E9: push    0; offset
0x6F31EB: push    edi; source
0x6F31EC: mov     ecx, esi; this
0x6F31EE: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F31F3: push    ebx
0x6F31F4: lea     ecx, [esi+1Ch]
0x6F31F7: call    sub_6F2610
0x6F31FC: add     esi, 2Ch ; ','
0x6F31FF: cmp     esi, ebp
0x6F3201: jnz     short loc_6F31E7
0x6F3203: pop     edi
0x6F3204: pop     ebx
0x6F3205: pop     esi
0x6F3206: pop     ebp
0x6F3207: retn
