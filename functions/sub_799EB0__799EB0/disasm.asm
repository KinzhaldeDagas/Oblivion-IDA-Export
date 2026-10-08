0x799EB0: push    ebx; CFrondEngine profile setter. Replaces CFrondEngine+0x30, destructing/freeing the old 0x5C profile object when the pointer differs.
0x799EB1: mov     ebx, [esp+4+profile]
0x799EB5: push    esi
0x799EB6: push    edi
0x799EB7: mov     edi, ecx
0x799EB9: mov     esi, [edi+30h]
0x799EBC: cmp     esi, ebx
0x799EBE: jz      short loc_799ED7
0x799EC0: test    esi, esi
0x799EC2: jz      short loc_799ED4
0x799EC4: mov     ecx, esi; this
0x799EC6: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x799ECB: push    esi
0x799ECC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x799ED1: add     esp, 4
0x799ED4: mov     [edi+30h], ebx
0x799ED7: pop     edi
0x799ED8: pop     esi
0x799ED9: pop     ebx
0x799EDA: retn    4
