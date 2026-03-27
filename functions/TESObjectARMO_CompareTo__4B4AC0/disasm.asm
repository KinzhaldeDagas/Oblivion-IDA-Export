0x4B4AC0: mov     eax, [esp+arg_0]
0x4B4AC4: push    esi
0x4B4AC5: push    edi
0x4B4AC6: push    0; int
0x4B4AC8: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x4B4ACD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B4AD2: push    0; int
0x4B4AD4: push    eax; void *
0x4B4AD5: mov     edi, ecx
0x4B4AD7: call    OblivionDynamicCast
0x4B4ADC: mov     esi, eax
0x4B4ADE: add     esp, 14h
0x4B4AE1: test    esi, esi
0x4B4AE3: jnz     short loc_4B4AEC
0x4B4AE5: pop     edi
0x4B4AE6: mov     al, 1
0x4B4AE8: pop     esi
0x4B4AE9: retn    4
0x4B4AEC: push    esi; a2
0x4B4AED: mov     ecx, edi; this
0x4B4AEF: call    TESForm_CompareAllComponentsTo
0x4B4AF4: test    al, al
0x4B4AF6: jnz     short loc_4B4AE5
0x4B4AF8: movzx   eax, byte ptr [edi+0E4h]
0x4B4AFF: lea     ecx, [esi+0E4h]
0x4B4B05: movzx   esi, byte ptr [ecx]
0x4B4B08: sub     eax, esi
0x4B4B0A: lea     edx, [edi+0E4h]
0x4B4B10: jnz     short loc_4B4B23
0x4B4B12: movzx   eax, byte ptr [edx+1]
0x4B4B16: add     ecx, 1
0x4B4B19: movzx   ecx, byte ptr [ecx]
0x4B4B1C: add     edx, 1
0x4B4B1F: sub     eax, ecx
0x4B4B21: jz      short loc_4B4B39
0x4B4B23: test    eax, eax
0x4B4B25: mov     ecx, 1
0x4B4B2A: jg      short loc_4B4B3B
0x4B4B2C: or      ecx, 0FFFFFFFFh
0x4B4B2F: test    ecx, ecx
0x4B4B31: pop     edi
0x4B4B32: setnz   al
0x4B4B35: pop     esi
0x4B4B36: retn    4
0x4B4B39: xor     ecx, ecx
0x4B4B3B: test    ecx, ecx
0x4B4B3D: pop     edi
0x4B4B3E: setnz   al
0x4B4B41: pop     esi
0x4B4B42: retn    4
