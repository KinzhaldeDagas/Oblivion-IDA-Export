0x4DFE70: push    ebx
0x4DFE71: push    ebp
0x4DFE72: push    esi
0x4DFE73: mov     esi, [esp+0Ch+arg_0]
0x4DFE77: xor     bl, bl
0x4DFE79: test    esi, esi
0x4DFE7B: push    edi
0x4DFE7C: mov     edi, ecx
0x4DFE7E: jz      loc_4DFF30
0x4DFE84: mov     eax, [esi]
0x4DFE86: cmp     eax, ds:0B05E20h
0x4DFE8C: jnz     loc_4DFF30
0x4DFE92: mov     eax, [esi+0Ch]
0x4DFE95: add     eax, 0FFFFFFF8h
0x4DFE98: cmp     eax, 2
0x4DFE9B: ja      short loc_4DFF1A
0x4DFE9D: mov     ecx, [esi+8]
0x4DFEA0: push    0; int
0x4DFEA2: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4DFEA7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DFEAC: push    0; int
0x4DFEAE: push    ecx; a1
0x4DFEAF: call    TESForm_LookupByFormID
0x4DFEB4: add     esp, 4
0x4DFEB7: push    eax; void *
0x4DFEB8: call    OblivionDynamicCast
0x4DFEBD: mov     ebp, eax
0x4DFEBF: add     esp, 14h
0x4DFEC2: test    ebp, ebp
0x4DFEC4: jz      short loc_4DFF30
0x4DFEC6: mov     edx, [edi+18h]
0x4DFEC9: mov     eax, [edx]
0x4DFECB: lea     ecx, [edi+18h]
0x4DFECE: call    eax
0x4DFED0: cmp     eax, ebp
0x4DFED2: jnz     short loc_4DFF30
0x4DFED4: mov     ecx, edi; this
0x4DFED6: call    TESObjectREFR_IsPersistent?
0x4DFEDB: test    al, al
0x4DFEDD: jz      short loc_4DFEF5
0x4DFEDF: mov     esi, [esi+0Ch]
0x4DFEE2: add     esi, 0FFFFFFF7h
0x4DFEE5: cmp     esi, 1
0x4DFEE8: ja      short loc_4DFF30
0x4DFEEA: pop     edi
0x4DFEEB: pop     esi
0x4DFEEC: mov     bl, 1
0x4DFEEE: pop     ebp
0x4DFEEF: mov     al, bl
0x4DFEF1: pop     ebx
0x4DFEF2: retn    4
0x4DFEF5: test    dword ptr [edi+8], 8000h
0x4DFEFC: jz      short loc_4DFF0F
0x4DFEFE: cmp     dword ptr [esi+0Ch], 9
0x4DFF02: jnz     short loc_4DFF30
0x4DFF04: pop     edi
0x4DFF05: pop     esi
0x4DFF06: mov     bl, 1
0x4DFF08: pop     ebp
0x4DFF09: mov     al, bl
0x4DFF0B: pop     ebx
0x4DFF0C: retn    4
0x4DFF0F: pop     edi
0x4DFF10: pop     esi
0x4DFF11: xor     bl, bl
0x4DFF13: pop     ebp
0x4DFF14: mov     al, bl
0x4DFF16: pop     ebx
0x4DFF17: retn    4
0x4DFF1A: mov     edx, [edi+18h]
0x4DFF1D: mov     eax, [edx]
0x4DFF1F: lea     ecx, [edi+18h]
0x4DFF22: call    eax
0x4DFF24: mov     edx, [eax]
0x4DFF26: mov     ecx, eax
0x4DFF28: mov     eax, [edx+30h]
0x4DFF2B: push    esi
0x4DFF2C: call    eax
0x4DFF2E: mov     bl, al
0x4DFF30: pop     edi
0x4DFF31: pop     esi
0x4DFF32: pop     ebp
0x4DFF33: mov     al, bl
0x4DFF35: pop     ebx
0x4DFF36: retn    4
