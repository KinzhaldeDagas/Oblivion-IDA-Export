0x785E00: push    0FFFFFFFFh; Oblivion compact stVec-vector resize(count) wrapper. Constructs the default zero/size-3 stVec fill value, delegates to the vector resize/fill implementation, then destroys the temporary.
0x785E02: push    offset SEH_785E00
0x785E07: mov     eax, large fs:0
0x785E0D: push    eax
0x785E0E: sub     esp, 18h
0x785E11: push    esi
0x785E12: mov     eax, ds:0B30AACh
0x785E17: xor     eax, esp
0x785E19: push    eax
0x785E1A: lea     eax, [esp+2Ch+var_C]
0x785E1E: mov     large fs:0, eax
0x785E24: mov     esi, ecx
0x785E26: lea     ecx, [esp+2Ch+var_24]; this
0x785E2A: call    OB_stVec_ctor_zero3_010201A0; Oblivion stVec default constructor: zeros all five float slots and sets logical size to 3. Exact body corroborated after binary observation by RT4.1 LibVector Vec.cpp stVec().
0x785E2F: mov     edx, [eax]
0x785E31: sub     esp, 18h
0x785E34: mov     ecx, esp
0x785E36: mov     [ecx], edx
0x785E38: mov     edx, [eax+4]
0x785E3B: mov     [ecx+4], edx
0x785E3E: mov     edx, [eax+8]
0x785E41: mov     [ecx+8], edx
0x785E44: mov     edx, [eax+0Ch]
0x785E47: mov     [ecx+0Ch], edx
0x785E4A: mov     edx, [eax+10h]
0x785E4D: mov     eax, [eax+14h]
0x785E50: mov     [ecx+10h], edx
0x785E53: mov     [ecx+14h], eax
0x785E56: mov     ecx, [esp+44h+count]
0x785E5A: push    ecx; newSize
0x785E5B: mov     ecx, esi; this
0x785E5D: mov     [esp+48h+var_4], 0
0x785E65: call    OB_stVector_stVec_ResizeFill_010201A0; Oblivion 1.2.0.416: vector<stVec>::resize(newSize,value), with the 24-byte value passed by value; grows through insert-fill or shrinks through checked erase.
0x785E6A: lea     ecx, [esp+2Ch+var_24]; this
0x785E6E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x785E76: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x785E7B: mov     ecx, [esp+2Ch+var_C]
0x785E7F: mov     large fs:0, ecx
0x785E86: pop     ecx
0x785E87: pop     esi
0x785E88: add     esp, 24h
0x785E8B: retn    4
0x9CB110: lea     ecx, [ebp-24h]; this
0x9CB113: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB118: mov     edx, [esp+arg_4]
0x9CB11C: lea     eax, [edx-1Ch]
0x9CB11F: mov     ecx, [edx-20h]
0x9CB122: xor     ecx, eax
0x9CB124: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB129: mov     eax, offset stru_AF37C4
0x9CB12E: jmp     ___CxxFrameHandler3
