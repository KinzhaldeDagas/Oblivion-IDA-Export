0x795630: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): Swaps two vector<unsigned short> owners via a temporary deep copy and copy assignments; exception cleanup frees the temporary buffer.
0x795632: push    offset SEH_7974F0
0x795637: mov     eax, large fs:0
0x79563D: push    eax
0x79563E: sub     esp, 10h
0x795641: push    esi
0x795642: push    edi
0x795643: mov     eax, ds:0B30AACh
0x795648: xor     eax, esp
0x79564A: push    eax
0x79564B: lea     eax, [esp+28h+var_C]
0x79564F: mov     large fs:0, eax
0x795655: mov     esi, ecx
0x795657: push    esi; source
0x795658: lea     ecx, [esp+2Ch+source]; this
0x79565C: call    OB_stVectorUShort_CopyCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy constructor for vector<unsigned short>; allocates exact source size and copies its 2-byte elements.
0x795661: mov     edi, [esp+28h+other]
0x795665: push    edi; source
0x795666: mov     ecx, esi; this
0x795668: mov     [esp+2Ch+var_4], 0
0x795670: call    OB_stVectorUShort_CopyAssign_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<unsigned short>, with self/empty/reuse/reallocate paths and exact end repair.
0x795675: lea     eax, [esp+28h+source]
0x795679: push    eax; source
0x79567A: mov     ecx, edi; this
0x79567C: call    OB_stVectorUShort_CopyAssign_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<unsigned short>, with self/empty/reuse/reallocate paths and exact end repair.
0x795681: mov     eax, [esp+28h+source.begin]
0x795685: test    eax, eax
0x795687: jz      short loc_795692
0x795689: push    eax
0x79568A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79568F: add     esp, 4
0x795692: mov     ecx, [esp+28h+var_C]
0x795696: mov     large fs:0, ecx
0x79569D: pop     ecx
0x79569E: pop     edi
0x79569F: pop     esi
0x7956A0: add     esp, 1Ch
0x7956A3: retn    4
0x9CBD60: lea     ecx, [ebp-1Ch]; this
0x9CBD63: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBD68: mov     edx, [esp+arg_4]
0x9CBD6C: lea     eax, [edx-18h]
0x9CBD6F: mov     ecx, [edx-1Ch]
0x9CBD72: xor     ecx, eax
0x9CBD74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBD79: mov     eax, offset stru_AF4CA0
0x9CBD7E: jmp     ___CxxFrameHandler3
