0x5586C0: push    0FFFFFFFFh
0x5586C2: push    offset SEH_5586C0
0x5586C7: mov     eax, large fs:0
0x5586CD: push    eax
0x5586CE: push    ecx
0x5586CF: mov     eax, ds:0B30AACh
0x5586D4: xor     eax, esp
0x5586D6: push    eax
0x5586D7: lea     eax, [esp+14h+var_C]
0x5586DB: mov     large fs:0, eax
0x5586E1: mov     eax, ecx
0x5586E3: xor     ecx, ecx
0x5586E5: mov     [eax+4], ecx
0x5586E8: mov     [eax+8], ecx
0x5586EB: mov     [eax+0Ch], ecx
0x5586EE: mov     [eax+14h], ecx
0x5586F1: mov     [eax+18h], ecx
0x5586F4: mov     [eax+1Ch], ecx
0x5586F7: mov     [eax+24h], ecx
0x5586FA: mov     [eax+28h], ecx
0x5586FD: mov     [eax+2Ch], ecx
0x558700: mov     [eax+34h], ecx
0x558703: mov     [eax+38h], ecx
0x558706: mov     [eax+3Ch], ecx
0x558709: mov     [eax+44h], ecx
0x55870C: mov     [eax+48h], ecx
0x55870F: mov     [eax+4Ch], ecx
0x558712: mov     [eax+54h], ecx
0x558715: mov     [eax+58h], ecx
0x558718: mov     [eax+5Ch], ecx
0x55871B: mov     [eax+64h], ecx
0x55871E: mov     [eax+68h], ecx
0x558721: mov     [eax+6Ch], ecx
0x558724: mov     [eax+74h], ecx
0x558727: mov     [eax+78h], ecx
0x55872A: mov     [eax+7Ch], ecx
0x55872D: mov     [eax+84h], ecx
0x558733: mov     [eax+88h], ecx
0x558739: mov     [eax+8Ch], ecx
0x55873F: mov     [eax+94h], ecx
0x558745: mov     [eax+98h], ecx
0x55874B: mov     [eax+9Ch], ecx
0x558751: mov     ecx, [esp+14h+var_C]
0x558755: mov     large fs:0, ecx
0x55875C: pop     ecx
0x55875D: add     esp, 10h
0x558760: retn
0x557AB0: push    ecx
0x557AB1: push    esi
0x557AB2: mov     esi, ecx
0x557AB4: mov     eax, [esi+4]
0x557AB7: test    eax, eax
0x557AB9: jz      short loc_557AD7
0x557ABB: mov     ecx, [esp+8+var_4]
0x557ABF: mov     edx, [esi+8]
0x557AC2: push    ecx
0x557AC3: push    esi
0x557AC4: push    edx
0x557AC5: push    eax
0x557AC6: call    sub_557030
0x557ACB: mov     eax, [esi+4]
0x557ACE: push    eax
0x557ACF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x557AD4: add     esp, 14h
0x557AD7: mov     dword ptr [esi+4], 0
0x557ADE: mov     dword ptr [esi+8], 0
0x557AE5: mov     dword ptr [esi+0Ch], 0
0x557AEC: pop     esi
0x557AED: pop     ecx
0x557AEE: retn
0x557AF0: push    ecx
0x557AF1: push    esi
0x557AF2: mov     esi, ecx
0x557AF4: mov     eax, [esi+4]
0x557AF7: test    eax, eax
0x557AF9: jz      short loc_557B17
0x557AFB: mov     ecx, [esp+8+var_4]
0x557AFF: mov     edx, [esi+8]
0x557B02: push    ecx
0x557B03: push    esi
0x557B04: push    edx
0x557B05: push    eax
0x557B06: call    sub_557080
0x557B0B: mov     eax, [esi+4]
0x557B0E: push    eax
0x557B0F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x557B14: add     esp, 14h
0x557B17: mov     dword ptr [esi+4], 0
0x557B1E: mov     dword ptr [esi+8], 0
0x557B25: mov     dword ptr [esi+0Ch], 0
0x557B2C: pop     esi
0x557B2D: pop     ecx
0x557B2E: retn
0x557B70: push    ecx
0x557B71: push    esi
0x557B72: mov     esi, ecx
0x557B74: mov     eax, [esi+4]
0x557B77: test    eax, eax
0x557B79: jz      short loc_557B97
0x557B7B: mov     ecx, [esp+8+var_4]
0x557B7F: mov     edx, [esi+8]
0x557B82: push    ecx
0x557B83: push    esi
0x557B84: push    edx
0x557B85: push    eax
0x557B86: call    sub_5573D0
0x557B8B: mov     eax, [esi+4]
0x557B8E: push    eax
0x557B8F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x557B94: add     esp, 14h
0x557B97: mov     dword ptr [esi+4], 0
0x557B9E: mov     dword ptr [esi+8], 0
0x557BA5: mov     dword ptr [esi+0Ch], 0
0x557BAC: pop     esi
0x557BAD: pop     ecx
0x557BAE: retn
0x9BC720: mov     ecx, [ebp-10h]; Microsoft VisualC 2-14/net runtime
0x9BC723: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BC728: mov     ecx, [ebp-10h]
0x9BC72B: add     ecx, 10h; this
0x9BC72E: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BC733: mov     ecx, [ebp-10h]
0x9BC736: add     ecx, 20h ; ' '; this
0x9BC739: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BC73E: mov     ecx, [ebp-10h]
0x9BC741: add     ecx, 30h ; '0'; this
0x9BC744: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BC749: mov     ecx, [ebp-10h]
0x9BC74C: add     ecx, 40h ; '@'; this
0x9BC74F: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BC754: mov     ecx, [ebp-10h]
0x9BC757: add     ecx, 50h ; 'P'; this
0x9BC75A: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BC75F: mov     ecx, [ebp-10h]
0x9BC762: add     ecx, 60h ; '`'
0x9BC765: jmp     loc_557AB0
0x9BC76A: mov     ecx, [ebp-10h]
0x9BC76D: add     ecx, 70h ; 'p'
0x9BC770: jmp     loc_557AF0
0x9BC775: mov     ecx, [ebp-10h]
0x9BC778: add     ecx, 80h ; '€'
0x9BC77E: jmp     loc_557B70
0x9BC783: mov     edx, [esp+arg_4]
0x9BC787: lea     eax, [edx-4]
0x9BC78A: mov     ecx, [edx-8]
0x9BC78D: xor     ecx, eax
0x9BC78F: call    @__security_check_cookie@4
0x9BC794: mov     eax, offset stru_AE6360
0x9BC799: jmp     ___CxxFrameHandler3
