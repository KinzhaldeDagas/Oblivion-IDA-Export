0x6F3210: push    ebp
0x6F3211: mov     ebp, [esp+4+arg_4]
0x6F3215: push    esi
0x6F3216: mov     esi, [esp+8+arg_0]
0x6F321A: cmp     esi, ebp
0x6F321C: jz      short loc_6F324B
0x6F321E: push    ebx
0x6F321F: push    edi
0x6F3220: mov     edi, [esp+10h+source]
0x6F3224: lea     ebx, [edi+20h]
0x6F3227: push    0FFFFFFFFh; count
0x6F3229: push    0; offset
0x6F322B: push    edi; source
0x6F322C: mov     ecx, esi; this
0x6F322E: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F3233: mov     eax, [edi+1Ch]
0x6F3236: push    ebx
0x6F3237: lea     ecx, [esi+20h]
0x6F323A: mov     [esi+1Ch], eax
0x6F323D: call    sub_6F2770
0x6F3242: add     esi, 30h ; '0'
0x6F3245: cmp     esi, ebp
0x6F3247: jnz     short loc_6F3227
0x6F3249: pop     edi
0x6F324A: pop     ebx
0x6F324B: pop     esi
0x6F324C: pop     ebp
0x6F324D: retn
