0x693BB0: push    0FFFFFFFFh
0x693BB2: push    offset SEH_8C8970
0x693BB7: mov     eax, large fs:0
0x693BBD: push    eax
0x693BBE: push    ecx
0x693BBF: push    esi
0x693BC0: push    edi
0x693BC1: mov     eax, ds:0B30AACh
0x693BC6: xor     eax, esp
0x693BC8: push    eax
0x693BC9: lea     eax, [esp+1Ch+var_C]
0x693BCD: mov     large fs:0, eax
0x693BD3: mov     edi, ecx
0x693BD5: push    40h ; '@'; Size
0x693BD7: call    FormHeapAlloc
0x693BDC: mov     esi, eax
0x693BDE: add     esp, 4
0x693BE1: mov     [esp+1Ch+var_10], esi
0x693BE5: test    esi, esi
0x693BE7: mov     [esp+1Ch+var_4], 0
0x693BEF: jz      short loc_693C10
0x693BF1: mov     eax, [edi+0Ch]
0x693BF4: mov     ecx, [edi+8]
0x693BF7: mov     edx, [edi+24h]
0x693BFA: push    eax; int
0x693BFB: push    ecx; int
0x693BFC: push    edx; int
0x693BFD: mov     ecx, esi; this
0x693BFF: call    ValueModifierEffect_constr
0x693C04: mov     dword ptr [esi], offset ??_7FrenzyEffect@@6B@; const FrenzyEffect::`vftable'
0x693C0A: mov     byte ptr [esi+3Ch], 0
0x693C0E: jmp     short loc_693C12
0x693C10: xor     esi, esi
0x693C12: mov     al, [edi+3Ch]
0x693C15: mov     [esi+3Ch], al
0x693C18: mov     edx, [edi]
0x693C1A: mov     eax, [edx+2Ch]
0x693C1D: push    esi
0x693C1E: mov     ecx, edi
0x693C20: mov     [esp+20h+var_4], 0FFFFFFFFh
0x693C28: call    eax
0x693C2A: mov     eax, esi
0x693C2C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x693C30: mov     large fs:0, ecx
0x693C37: pop     ecx
0x693C38: pop     edi
0x693C39: pop     esi
0x693C3A: add     esp, 10h
0x693C3D: retn
