0x52FBA0: push    ebx
0x52FBA1: push    esi
0x52FBA2: mov     esi, ecx
0x52FBA4: mov     ecx, [esp+8+a2]
0x52FBA8: movzx   eax, byte ptr [ecx+4]
0x52FBAC: xor     bl, bl
0x52FBAE: sub     eax, 39h ; '9'
0x52FBB1: jz      short loc_52FC07
0x52FBB3: sub     eax, 1
0x52FBB6: jz      short loc_52FBC5
0x52FBB8: push    ecx; a2
0x52FBB9: mov     ecx, esi; this
0x52FBBB: call    TESForm_LessThan
0x52FBC0: pop     esi
0x52FBC1: pop     ebx
0x52FBC2: retn    4
0x52FBC5: push    0; int
0x52FBC7: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x52FBCC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52FBD1: push    0; int
0x52FBD3: push    ecx; void *
0x52FBD4: call    OblivionDynamicCast
0x52FBD9: add     esp, 14h
0x52FBDC: test    eax, eax
0x52FBDE: jz      short loc_52FC2C
0x52FBE0: push    eax
0x52FBE1: call    TESTopic_static_GetTopicInfoParent?
0x52FBE6: add     esp, 4
0x52FBE9: test    eax, eax
0x52FBEB: jz      short loc_52FC2C
0x52FBED: cmp     eax, esi
0x52FBEF: jnz     short loc_52FBF8
0x52FBF1: pop     esi
0x52FBF2: mov     al, 1
0x52FBF4: pop     ebx
0x52FBF5: retn    4
0x52FBF8: mov     edx, [esi]
0x52FBFA: push    eax
0x52FBFB: mov     eax, [edx+34h]
0x52FBFE: mov     ecx, esi
0x52FC00: call    eax
0x52FC02: pop     esi
0x52FC03: pop     ebx
0x52FC04: retn    4
0x52FC07: push    0; int
0x52FC09: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x52FC0E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52FC13: push    0; int
0x52FC15: push    ecx; void *
0x52FC16: call    OblivionDynamicCast
0x52FC1B: add     esp, 14h
0x52FC1E: test    eax, eax
0x52FC20: jz      short loc_52FC2C
0x52FC22: mov     ecx, [esi+0Ch]
0x52FC25: cmp     ecx, [eax+0Ch]
0x52FC28: mov     al, 1
0x52FC2A: jb      short loc_52FC2E
0x52FC2C: mov     al, bl
0x52FC2E: pop     esi
0x52FC2F: pop     ebx
0x52FC30: retn    4
