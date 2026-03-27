0x41CAC0: push    ebx
0x41CAC1: mov     ebx, [esp+4+arg_0]
0x41CAC5: test    ebx, ebx
0x41CAC7: push    ebp
0x41CAC8: jz      Magic_BoundItemSlotOverlap___Return_0
0x41CACE: mov     ebp, [esp+8+arg_4]
0x41CAD2: test    ebp, ebp
0x41CAD4: jz      Magic_BoundItemSlotOverlap___Return_0
0x41CADA: mov     ecx, [ebx+1Ch]
0x41CADD: mov     eax, [ecx+58h]
0x41CAE0: mov     edx, eax
0x41CAE2: shr     edx, 11h
0x41CAE5: test    dl, 1
0x41CAE8: push    esi
0x41CAE9: jz      loc_41CB81
0x41CAEF: mov     edx, [ebp+1Ch]
0x41CAF2: mov     edx, [edx+58h]
0x41CAF5: shr     edx, 11h
0x41CAF8: test    dl, 1
0x41CAFB: jz      loc_41CB81
0x41CB01: test    eax, 70000h
0x41CB06: jz      short loc_41CB0D
0x41CB08: mov     eax, [ecx+60h]
0x41CB0B: jmp     short loc_41CB0F
0x41CB0D: xor     eax, eax
0x41CB0F: mov     ecx, TESDataHandler
0x41CB15: push    eax
0x41CB16: call    TESDataHandler_LookupFormByID
0x41CB1B: mov     esi, eax
0x41CB1D: mov     eax, [ebp+1Ch]
0x41CB20: test    dword ptr [eax+58h], 70000h
0x41CB27: jz      short loc_41CB2E
0x41CB29: mov     eax, [eax+60h]
0x41CB2C: jmp     short loc_41CB30
0x41CB2E: xor     eax, eax
0x41CB30: mov     ecx, TESDataHandler
0x41CB36: push    edi
0x41CB37: push    eax
0x41CB38: call    TESDataHandler_LookupFormByID
0x41CB3D: push    0; int
0x41CB3F: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x41CB44: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41CB49: push    0; int
0x41CB4B: push    esi; void *
0x41CB4C: mov     edi, eax
0x41CB4E: call    OblivionDynamicCast
0x41CB53: push    0; int
0x41CB55: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x41CB5A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41CB5F: push    0; int
0x41CB61: push    edi; void *
0x41CB62: mov     esi, eax
0x41CB64: call    OblivionDynamicCast
0x41CB69: add     esp, 28h
0x41CB6C: test    esi, esi
0x41CB6E: pop     edi
0x41CB6F: jz      short loc_41CB81
0x41CB71: test    eax, eax
0x41CB73: jz      short loc_41CB81
0x41CB75: push    eax
0x41CB76: mov     ecx, esi
0x41CB78: call    TESBipedModelForm_SlotOverlap
0x41CB7D: pop     esi
0x41CB7E: pop     ebp
0x41CB7F: pop     ebx
0x41CB80: retn
0x41CB81: mov     eax, [ebx+1Ch]
0x41CB84: test    byte ptr [eax+5Ah], 1
0x41CB88: jz      short Magic_BoundItemSlotOverlap___Return_0_
0x41CB8A: mov     ecx, [ebp+1Ch]
0x41CB8D: test    byte ptr [ecx+5Ah], 1
0x41CB91: jz      short Magic_BoundItemSlotOverlap___Return_0_
0x41CB93: pop     esi
0x41CB94: pop     ebp
0x41CB95: mov     al, 1
0x41CB97: pop     ebx
0x41CB98: retn
