0x7A3860: push    0FFFFFFFFh; Oblivion compact CTreeEngine destructor. Destroys embedded SIdvLeafInfo, releases generated billboard-leaf and branch-info vector storage, clears the branch-texture small string/random state, and then runs the shared base destructor. No later root-support storage exists in this build.
0x7A3862: push    offset ??1CTreeEngine@@UAE@XZ_SEH
0x7A3867: mov     eax, large fs:0
0x7A386D: push    eax
0x7A386E: push    ecx
0x7A386F: push    ebx
0x7A3870: push    esi
0x7A3871: mov     eax, ds:0B30AACh
0x7A3876: xor     eax, esp
0x7A3878: push    eax
0x7A3879: lea     eax, [esp+1Ch+var_C]
0x7A387D: mov     large fs:0, eax
0x7A3883: mov     esi, ecx
0x7A3885: mov     [esp+1Ch+var_10], esi
0x7A3889: lea     ecx, [esi+84h]; this
0x7A388F: mov     [esp+1Ch+var_4], 4
0x7A3897: call    OB_SIdvLeafInfo_dtor_010201A0; SIdvLeafInfo destruction frees rocking/vertex/texcoord tables, then destroys and frees the typed compact leaf-texture vector.
0x7A389C: mov     eax, [esi+78h]
0x7A389F: xor     ebx, ebx
0x7A38A1: cmp     eax, ebx
0x7A38A3: jz      short loc_7A38AE
0x7A38A5: push    eax
0x7A38A6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A38AB: add     esp, 4
0x7A38AE: mov     [esi+78h], ebx
0x7A38B1: mov     [esi+7Ch], ebx
0x7A38B4: mov     [esi+80h], ebx
0x7A38BA: mov     eax, [esi+64h]
0x7A38BD: cmp     eax, ebx
0x7A38BF: jz      short loc_7A38CA
0x7A38C1: push    eax
0x7A38C2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A38C7: add     esp, 4
0x7A38CA: mov     [esi+64h], ebx
0x7A38CD: mov     [esi+68h], ebx
0x7A38D0: mov     [esi+6Ch], ebx
0x7A38D3: cmp     dword ptr [esi+3Ch], 10h
0x7A38D7: jb      short loc_7A38E5
0x7A38D9: mov     eax, [esi+28h]
0x7A38DC: push    eax
0x7A38DD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A38E2: add     esp, 4
0x7A38E5: mov     dword ptr [esi+3Ch], 0Fh
0x7A38EC: mov     [esi+38h], ebx
0x7A38EF: lea     ecx, [esi+20h]; this
0x7A38F2: mov     [esi+28h], bl
0x7A38F5: mov     byte ptr [esp+1Ch+var_4], bl
0x7A38F9: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x7A38FE: mov     ecx, esi; this
0x7A3900: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7A3908: call    OB_CIdvCamera_dtor_010201A0; Oblivion CIdvCamera base destructor. Restores the CIdvCamera vftable; both CTreeEngine and CBillboardLeaf destructors call this shared base cleanup.
0x7A390D: mov     ecx, [esp+1Ch+var_C]
0x7A3911: mov     large fs:0, ecx
0x7A3918: pop     ecx
0x7A3919: pop     esi
0x7A391A: pop     ebx
0x7A391B: add     esp, 10h
0x7A391E: retn
0x9CC920: mov     ecx, [ebp-10h]; this
0x9CC923: jmp     OB_CIdvCamera_dtor_010201A0; Oblivion CIdvCamera base destructor. Restores the CIdvCamera vftable; both CTreeEngine and CBillboardLeaf destructors call this shared base cleanup.
0x9CC928: mov     ecx, [ebp-10h]
0x9CC92B: add     ecx, 20h ; ' '; this
0x9CC92E: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC933: mov     ecx, [ebp-10h]
0x9CC936: add     ecx, 24h ; '$'; this
0x9CC939: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC93E: mov     ecx, [ebp-10h]
0x9CC941: add     ecx, 60h ; '`'; this
0x9CC944: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC949: mov     ecx, [ebp-10h]
0x9CC94C: add     ecx, 74h ; 't'; this
0x9CC94F: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC954: mov     edx, [esp+arg_4]
0x9CC958: lea     eax, [edx-0Ch]
0x9CC95B: mov     ecx, [edx-10h]
0x9CC95E: xor     ecx, eax
0x9CC960: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC965: mov     eax, offset stru_AF5CA4
0x9CC96A: jmp     ___CxxFrameHandler3
