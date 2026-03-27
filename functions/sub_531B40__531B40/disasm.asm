0x531B40: push    0FFFFFFFFh
0x531B42: push    offset SEH_798CC0
0x531B47: mov     eax, large fs:0
0x531B4D: push    eax
0x531B4E: sub     esp, 0Ch
0x531B51: push    ebx
0x531B52: push    ebp
0x531B53: push    esi
0x531B54: push    edi
0x531B55: mov     eax, ds:0B30AACh
0x531B5A: xor     eax, esp
0x531B5C: push    eax
0x531B5D: lea     eax, [esp+2Ch+var_C]
0x531B61: mov     large fs:0, eax
0x531B67: mov     edi, ecx
0x531B69: mov     [esp+2Ch+var_18], edi
0x531B6D: mov     esi, [esp+2Ch+a2]
0x531B71: xor     ebp, ebp
0x531B73: push    ebp; int
0x531B74: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x531B79: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x531B7E: push    ebp; int
0x531B7F: push    esi; void *
0x531B80: call    OblivionDynamicCast
0x531B85: mov     ebx, eax
0x531B87: add     esp, 14h
0x531B8A: cmp     ebx, ebp
0x531B8C: mov     [esp+2Ch+a2], ebx
0x531B90: jz      loc_531D0F
0x531B96: push    esi; a2
0x531B97: mov     ecx, edi; this
0x531B99: call    TESForm_CopyAllComponentsFrom
0x531B9E: mov     ax, [ebx+23h]
0x531BA2: mov     [edi+23h], ax
0x531BA6: mov     cl, [ebx+25h]
0x531BA9: mov     [edi+25h], cl
0x531BAC: mov     ecx, edi
0x531BAE: call    sub_530690
0x531BB3: add     ebx, 28h ; '('
0x531BB6: cmp     ebx, ebp
0x531BB8: jz      short loc_531C0A
0x531BBA: lea     ebx, [ebx+0]
0x531BC0: mov     edi, [ebx]
0x531BC2: cmp     edi, ebp
0x531BC4: jz      short loc_531C06
0x531BC6: mov     esi, [esp+2Ch+var_18]
0x531BCA: mov     ebx, [ebx+4]
0x531BCD: add     esi, 28h ; '('
0x531BD0: cmp     [esi+4], ebp
0x531BD3: jz      short loc_531BDD
0x531BD5: mov     esi, [esi+4]
0x531BD8: cmp     [esi+4], ebp
0x531BDB: jnz     short loc_531BD5
0x531BDD: cmp     [esi], ebp
0x531BDF: jz      short loc_531C00
0x531BE1: push    8; Size
0x531BE3: call    FormHeapAlloc
0x531BE8: add     esp, 4
0x531BEB: cmp     eax, ebp
0x531BED: jz      short loc_531BF9
0x531BEF: mov     [eax], edi
0x531BF1: mov     [eax+4], ebp
0x531BF4: mov     [esi+4], eax
0x531BF7: jmp     short loc_531C02
0x531BF9: xor     eax, eax
0x531BFB: mov     [esi+4], eax
0x531BFE: jmp     short loc_531C02
0x531C00: mov     [esi], edi
0x531C02: cmp     ebx, ebp
0x531C04: jnz     short loc_531BC0
0x531C06: mov     edi, [esp+2Ch+var_18]
0x531C0A: mov     ecx, edi
0x531C0C: call    sub_530620
0x531C11: mov     ebx, [esp+2Ch+a2]
0x531C15: mov     ecx, ebx
0x531C17: call    sub_530C40
0x531C1C: cmp     eax, ebp
0x531C1E: jz      loc_531CC3
0x531C24: jmp     short loc_531C2A
0x531C26: mov     eax, [esp+2Ch+var_14]
0x531C2A: mov     esi, [eax]
0x531C2C: cmp     esi, ebp
0x531C2E: jz      loc_531CC3
0x531C34: mov     ebx, [eax+4]
0x531C37: push    18h; Size
0x531C39: mov     [esp+30h+var_14], ebx
0x531C3D: call    FormHeapAlloc
0x531C42: add     esp, 4
0x531C45: mov     [esp+2Ch+var_10], eax
0x531C49: cmp     eax, ebp
0x531C4B: mov     [esp+2Ch+var_4], ebp
0x531C4F: jz      short loc_531C5C
0x531C51: mov     ecx, eax
0x531C53: call    sub_52E150
0x531C58: mov     edi, eax
0x531C5A: jmp     short loc_531C5E
0x531C5C: xor     edi, edi
0x531C5E: push    esi
0x531C5F: mov     ecx, edi
0x531C61: mov     [esp+30h+var_4], 0FFFFFFFFh
0x531C69: call    sub_52E110
0x531C6E: mov     ecx, [esp+2Ch+var_18]
0x531C72: call    sub_530C40
0x531C77: cmp     edi, ebp
0x531C79: jz      short loc_531CB3
0x531C7B: mov     esi, eax
0x531C7D: add     eax, 4
0x531C80: cmp     [eax], ebp
0x531C82: jz      short loc_531C8E
0x531C84: mov     esi, [eax]
0x531C86: cmp     [esi+4], ebp
0x531C89: lea     eax, [esi+4]
0x531C8C: jnz     short loc_531C84
0x531C8E: cmp     [esi], ebp
0x531C90: jz      short loc_531CB1
0x531C92: push    8; Size
0x531C94: call    FormHeapAlloc
0x531C99: add     esp, 4
0x531C9C: cmp     eax, ebp
0x531C9E: jz      short loc_531CAA
0x531CA0: mov     [eax], edi
0x531CA2: mov     [eax+4], ebp
0x531CA5: mov     [esi+4], eax
0x531CA8: jmp     short loc_531CB3
0x531CAA: xor     eax, eax
0x531CAC: mov     [esi+4], eax
0x531CAF: jmp     short loc_531CB3
0x531CB1: mov     [esi], edi
0x531CB3: mov     edi, [esp+2Ch+var_18]
0x531CB7: cmp     ebx, ebp
0x531CB9: mov     ebx, [esp+2Ch+a2]
0x531CBD: jnz     loc_531C26
0x531CC3: mov     ecx, ebx
0x531CC5: call    sub_531290
0x531CCA: push    eax
0x531CCB: mov     ecx, edi
0x531CCD: call    sub_531290
0x531CD2: mov     ecx, eax
0x531CD4: call    sub_4FC7A0
0x531CD9: mov     dx, [ebx+20h]
0x531CDD: lea     eax, [ebx+18h]
0x531CE0: push    eax
0x531CE1: mov     ecx, edi
0x531CE3: mov     [edi+20h], dx
0x531CE7: call    sub_530430
0x531CEC: mov     eax, [ebx+30h]
0x531CEF: cmp     eax, ebp
0x531CF1: jz      short loc_531CFB
0x531CF3: push    eax
0x531CF4: mov     ecx, edi
0x531CF6: call    sub_530BA0
0x531CFB: mov     ecx, [ebx+8]
0x531CFE: shr     ecx, 3
0x531D01: and     ecx, 0FFFFFF01h
0x531D07: push    ecx; a2
0x531D08: mov     ecx, edi; this
0x531D0A: call    TESForm_SetIsLinked
0x531D0F: mov     ecx, [esp+2Ch+var_C]
0x531D13: mov     large fs:0, ecx
0x531D1A: pop     ecx
0x531D1B: pop     edi
0x531D1C: pop     esi
0x531D1D: pop     ebp
0x531D1E: pop     ebx
0x531D1F: add     esp, 18h
0x531D22: retn    4
