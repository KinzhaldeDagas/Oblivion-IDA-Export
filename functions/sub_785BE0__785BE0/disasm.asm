0x785BE0: push    0FFFFFFFFh; Oblivion 1.2.0.416: default spline constructor sets min=0, max=1, variance=0 and empties five owned vectors. RT4.1 source corroborates defaults/member roles but uses a different stack/heap spill layout; Oblivion's 92-byte vector layout is authoritative.
0x785BE2: push    offset SEH_785BE0
0x785BE7: mov     eax, large fs:0
0x785BED: push    eax
0x785BEE: push    ecx
0x785BEF: mov     eax, ds:0B30AACh
0x785BF4: xor     eax, esp
0x785BF6: push    eax
0x785BF7: lea     eax, [esp+14h+var_C]
0x785BFB: mov     large fs:0, eax
0x785C01: mov     eax, ecx
0x785C03: fldz
0x785C05: xor     ecx, ecx
0x785C07: fst     dword ptr [eax]
0x785C09: mov     [eax+10h], ecx
0x785C0C: fld1
0x785C0E: mov     [eax+14h], ecx
0x785C11: fstp    dword ptr [eax+4]
0x785C14: mov     [eax+18h], ecx
0x785C17: fstp    dword ptr [eax+8]
0x785C1A: mov     [eax+20h], ecx
0x785C1D: mov     [eax+24h], ecx
0x785C20: mov     [eax+28h], ecx
0x785C23: mov     [eax+30h], ecx
0x785C26: mov     [eax+34h], ecx
0x785C29: mov     [eax+38h], ecx
0x785C2C: mov     [eax+40h], ecx
0x785C2F: mov     [eax+44h], ecx
0x785C32: mov     [eax+48h], ecx
0x785C35: mov     [eax+50h], ecx
0x785C38: mov     [eax+54h], ecx
0x785C3B: mov     [eax+58h], ecx
0x785C3E: mov     ecx, [esp+14h+var_C]
0x785C42: mov     large fs:0, ecx
0x785C49: pop     ecx
0x785C4A: add     esp, 10h
0x785C4D: retn
0x9CB060: mov     ecx, [ebp-10h]
0x9CB063: add     ecx, 0Ch; this
0x9CB066: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB06B: mov     ecx, [ebp-10h]
0x9CB06E: add     ecx, 1Ch; this
0x9CB071: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB076: mov     ecx, [ebp-10h]
0x9CB079: add     ecx, 2Ch ; ','; this
0x9CB07C: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CB081: mov     ecx, [ebp-10h]
0x9CB084: add     ecx, 3Ch ; '<'; this
0x9CB087: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB08C: mov     edx, [esp+arg_4]
0x9CB090: lea     eax, [edx-4]
0x9CB093: mov     ecx, [edx-8]
0x9CB096: xor     ecx, eax
0x9CB098: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB09D: mov     eax, offset stru_AF374C
0x9CB0A2: jmp     ___CxxFrameHandler3
