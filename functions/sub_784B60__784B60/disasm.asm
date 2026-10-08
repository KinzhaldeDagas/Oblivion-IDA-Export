0x784B60: push    0FFFFFFFFh; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x784B62: push    offset SEH_784B60
0x784B67: mov     eax, large fs:0
0x784B6D: push    eax
0x784B6E: push    ecx
0x784B6F: push    ebx
0x784B70: push    esi
0x784B71: mov     eax, ds:0B30AACh
0x784B76: xor     eax, esp
0x784B78: push    eax
0x784B79: lea     eax, [esp+1Ch+var_C]
0x784B7D: mov     large fs:0, eax
0x784B83: mov     esi, ecx
0x784B85: mov     [esp+1Ch+var_10], esi
0x784B89: lea     ecx, [esi+4Ch]; this
0x784B8C: mov     [esp+1Ch+var_4], 3
0x784B94: call    OB_stVector24_Destroy_010201A0; Oblivion 1.2.0.416: destroys all 0x18-byte elements, frees backing storage, and nulls begin/end/capacity.
0x784B99: lea     ecx, [esi+3Ch]; this
0x784B9C: mov     byte ptr [esp+1Ch+var_4], 2
0x784BA1: call    OB_stVector24_Destroy_010201A0; Oblivion 1.2.0.416: destroys all 0x18-byte elements, frees backing storage, and nulls begin/end/capacity.
0x784BA6: mov     eax, [esi+30h]
0x784BA9: xor     ebx, ebx
0x784BAB: cmp     eax, ebx
0x784BAD: jz      short loc_784BB8
0x784BAF: push    eax
0x784BB0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x784BB5: add     esp, 4
0x784BB8: lea     ecx, [esi+1Ch]; this
0x784BBB: mov     [esi+30h], ebx
0x784BBE: mov     [esi+34h], ebx
0x784BC1: mov     [esi+38h], ebx
0x784BC4: mov     byte ptr [esp+1Ch+var_4], bl
0x784BC8: call    OB_stVector24_Destroy_010201A0; Oblivion 1.2.0.416: destroys all 0x18-byte elements, frees backing storage, and nulls begin/end/capacity.
0x784BCD: lea     ecx, [esi+0Ch]; this
0x784BD0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x784BD8: call    OB_stVector24_Destroy_010201A0; Oblivion 1.2.0.416: destroys all 0x18-byte elements, frees backing storage, and nulls begin/end/capacity.
0x784BDD: mov     ecx, [esp+1Ch+var_C]
0x784BE1: mov     large fs:0, ecx
0x784BE8: pop     ecx
0x784BE9: pop     esi
0x784BEA: pop     ebx
0x784BEB: add     esp, 10h
0x784BEE: retn
0x9CAF50: mov     ecx, [ebp-10h]
0x9CAF53: add     ecx, 0Ch; this
0x9CAF56: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CAF5B: mov     ecx, [ebp-10h]
0x9CAF5E: add     ecx, 1Ch; this
0x9CAF61: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CAF66: mov     ecx, [ebp-10h]
0x9CAF69: add     ecx, 2Ch ; ','; this
0x9CAF6C: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CAF71: mov     ecx, [ebp-10h]
0x9CAF74: add     ecx, 3Ch ; '<'; this
0x9CAF77: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CAF7C: mov     edx, [esp+arg_4]
0x9CAF80: lea     eax, [edx-0Ch]
0x9CAF83: mov     ecx, [edx-10h]
0x9CAF86: xor     ecx, eax
0x9CAF88: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAF8D: mov     eax, offset stru_AF3580
0x9CAF92: jmp     ___CxxFrameHandler3
