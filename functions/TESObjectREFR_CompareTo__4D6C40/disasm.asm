0x4D6C40: mov     eax, [esp+arg_0]
0x4D6C44: push    ebx
0x4D6C45: push    edi
0x4D6C46: push    0; int
0x4D6C48: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4D6C4D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D6C52: push    0; int
0x4D6C54: push    eax; void *
0x4D6C55: mov     ebx, ecx
0x4D6C57: call    OblivionDynamicCast
0x4D6C5C: mov     edi, eax
0x4D6C5E: add     esp, 14h
0x4D6C61: test    edi, edi
0x4D6C63: jnz     short loc_4D6C6C
0x4D6C65: pop     edi
0x4D6C66: mov     al, 1
0x4D6C68: pop     ebx
0x4D6C69: retn    4
0x4D6C6C: push    edi; a2
0x4D6C6D: mov     ecx, ebx; this
0x4D6C6F: call    TESForm_CompareAllComponentsTo
0x4D6C74: test    al, al
0x4D6C76: jnz     short loc_4D6C65
0x4D6C78: push    ebp
0x4D6C79: mov     eax, 1Ch
0x4D6C7E: lea     ecx, [edi+1Ch]
0x4D6C81: lea     edx, [ebx+1Ch]
0x4D6C84: push    esi
0x4D6C85: mov     esi, [edx]
0x4D6C87: cmp     esi, [ecx]
0x4D6C89: jnz     short loc_4D6C9D
0x4D6C8B: sub     eax, 4
0x4D6C8E: add     ecx, 4
0x4D6C91: add     edx, 4
0x4D6C94: cmp     eax, 4
0x4D6C97: jnb     short loc_4D6C85
0x4D6C99: test    eax, eax
0x4D6C9B: jz      short loc_4D6CFA
0x4D6C9D: movzx   esi, byte ptr [edx]
0x4D6CA0: movzx   ebp, byte ptr [ecx]
0x4D6CA3: sub     esi, ebp
0x4D6CA5: jnz     short loc_4D6CEC
0x4D6CA7: sub     eax, 1
0x4D6CAA: add     ecx, 1
0x4D6CAD: add     edx, 1
0x4D6CB0: test    eax, eax
0x4D6CB2: jz      short loc_4D6CFA
0x4D6CB4: movzx   esi, byte ptr [edx]
0x4D6CB7: movzx   ebp, byte ptr [ecx]
0x4D6CBA: sub     esi, ebp
0x4D6CBC: jnz     short loc_4D6CEC
0x4D6CBE: sub     eax, 1
0x4D6CC1: add     ecx, 1
0x4D6CC4: add     edx, 1
0x4D6CC7: test    eax, eax
0x4D6CC9: jz      short loc_4D6CFA
0x4D6CCB: movzx   esi, byte ptr [edx]
0x4D6CCE: movzx   ebp, byte ptr [ecx]
0x4D6CD1: sub     esi, ebp
0x4D6CD3: jnz     short loc_4D6CEC
0x4D6CD5: sub     eax, 1
0x4D6CD8: add     ecx, 1
0x4D6CDB: add     edx, 1
0x4D6CDE: test    eax, eax
0x4D6CE0: jz      short loc_4D6CFA
0x4D6CE2: movzx   esi, byte ptr [edx]
0x4D6CE5: movzx   ecx, byte ptr [ecx]
0x4D6CE8: sub     esi, ecx
0x4D6CEA: jz      short loc_4D6CFA
0x4D6CEC: test    esi, esi
0x4D6CEE: mov     eax, 1
0x4D6CF3: jg      short loc_4D6CFC
0x4D6CF5: or      eax, 0FFFFFFFFh
0x4D6CF8: jmp     short loc_4D6CFC
0x4D6CFA: xor     eax, eax
0x4D6CFC: test    eax, eax
0x4D6CFE: pop     esi
0x4D6CFF: pop     ebp
0x4D6D00: jnz     loc_4D6C65
0x4D6D06: mov     edx, [ebx+40h]
0x4D6D09: cmp     edx, [edi+40h]
0x4D6D0C: jnz     loc_4D6C65
0x4D6D12: lea     eax, [edi+44h]
0x4D6D15: push    eax
0x4D6D16: lea     ecx, [ebx+44h]
0x4D6D19: call    ExtraDataList_CompareList
0x4D6D1E: test    al, al
0x4D6D20: jnz     loc_4D6C65
0x4D6D26: fld     dword ptr [ebx+38h]
0x4D6D29: fld     dword ptr [edi+38h]
0x4D6D2C: fucompp
0x4D6D2E: fnstsw  ax
0x4D6D30: test    ah, 44h
0x4D6D33: jp      loc_4D6C65
0x4D6D39: pop     edi
0x4D6D3A: xor     al, al
0x4D6D3C: pop     ebx
0x4D6D3D: retn    4
