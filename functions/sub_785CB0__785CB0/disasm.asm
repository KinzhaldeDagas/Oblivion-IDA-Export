0x785CB0: push    0FFFFFFFFh; stBezierSpline/profile copy constructor wrapper: zeroes vector/storage fields, then copies from an existing parsed profile.
0x785CB2: push    offset SEH_785CB0
0x785CB7: mov     eax, large fs:0
0x785CBD: push    eax
0x785CBE: push    ecx
0x785CBF: push    esi
0x785CC0: mov     eax, ds:0B30AACh
0x785CC5: xor     eax, esp
0x785CC7: push    eax
0x785CC8: lea     eax, [esp+18h+var_C]
0x785CCC: mov     large fs:0, eax
0x785CD2: mov     esi, ecx
0x785CD4: mov     [esp+18h+var_10], esi
0x785CD8: xor     eax, eax
0x785CDA: mov     [esi+10h], eax
0x785CDD: mov     [esi+14h], eax
0x785CE0: mov     [esi+18h], eax
0x785CE3: mov     [esp+18h+var_4], eax
0x785CE7: mov     [esi+20h], eax
0x785CEA: mov     [esi+24h], eax
0x785CED: mov     [esi+28h], eax
0x785CF0: mov     [esi+30h], eax
0x785CF3: mov     [esi+34h], eax
0x785CF6: mov     [esi+38h], eax
0x785CF9: mov     [esi+40h], eax
0x785CFC: mov     [esi+44h], eax
0x785CFF: mov     [esi+48h], eax
0x785D02: mov     [esi+50h], eax
0x785D05: mov     [esi+54h], eax
0x785D08: mov     [esi+58h], eax
0x785D0B: mov     eax, [esp+18h+source]
0x785D0F: push    eax; source
0x785D10: mov     byte ptr [esp+1Ch+var_4], 4
0x785D15: call    OB_StBezierSpline_CopyFrom_010201A0; stBezierSpline/profile copy helper used when a cached profile already exists.
0x785D1A: mov     eax, esi
0x785D1C: mov     ecx, [esp+18h+var_C]
0x785D20: mov     large fs:0, ecx
0x785D27: pop     ecx
0x785D28: pop     esi
0x785D29: add     esp, 10h
0x785D2C: retn    4
0x9CB0B0: mov     ecx, [ebp-10h]
0x9CB0B3: add     ecx, 0Ch; this
0x9CB0B6: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB0BB: mov     ecx, [ebp-10h]
0x9CB0BE: add     ecx, 1Ch; this
0x9CB0C1: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB0C6: mov     ecx, [ebp-10h]
0x9CB0C9: add     ecx, 2Ch ; ','; this
0x9CB0CC: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CB0D1: mov     ecx, [ebp-10h]
0x9CB0D4: add     ecx, 3Ch ; '<'; this
0x9CB0D7: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB0DC: mov     ecx, [ebp-10h]
0x9CB0DF: add     ecx, 4Ch ; 'L'; this
0x9CB0E2: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB0E7: mov     edx, [esp+arg_4]
0x9CB0EB: lea     eax, [edx-8]
0x9CB0EE: mov     ecx, [edx-0Ch]
0x9CB0F1: xor     ecx, eax
0x9CB0F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB0F8: mov     eax, offset stru_AF3770
0x9CB0FD: jmp     ___CxxFrameHandler3
