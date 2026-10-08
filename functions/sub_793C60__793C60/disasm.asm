0x793C60: push    0FFFFFFFFh; Constructs the shared CWindMatrices container, allocates four 0x40-byte identity transforms, then records size 4.
0x793C62: push    offset SEH_8C8970
0x793C67: mov     eax, large fs:0
0x793C6D: push    eax
0x793C6E: push    ecx
0x793C6F: push    esi
0x793C70: push    edi
0x793C71: mov     eax, ds:0B30AACh
0x793C76: xor     eax, esp
0x793C78: push    eax
0x793C79: lea     eax, [esp+1Ch+var_C]
0x793C7D: mov     large fs:0, eax
0x793C83: mov     esi, ecx
0x793C85: push    100h; Size
0x793C8A: mov     word ptr [esi], 0
0x793C8F: call    FormHeapAlloc
0x793C94: mov     edi, eax
0x793C96: add     esp, 4
0x793C99: mov     [esp+1Ch+var_10], edi
0x793C9D: test    edi, edi
0x793C9F: mov     [esp+1Ch+var_4], 0
0x793CA7: jz      short loc_793CBA
0x793CA9: push    offset OB_stTransform_ctor_010201A0; Initializes a 0x40-byte row-major SpeedTree transform to identity.
0x793CAE: push    4
0x793CB0: push    40h ; '@'
0x793CB2: push    edi
0x793CB3: call    sub_401080
0x793CB8: jmp     short loc_793CBC
0x793CBA: xor     edi, edi
0x793CBC: push    4; matrixCount
0x793CBE: mov     ecx, esi; this
0x793CC0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x793CC8: mov     [esi+4], edi
0x793CCB: call    OB_CWindMatrices_Resize_010201A0; Oblivion CWindMatrices::Resize. Frees the old global transform array, allocates matrixCount contiguous 0x40-byte stTransform objects, constructs them, then explicitly loads identity into every matrix.
0x793CD0: mov     eax, esi
0x793CD2: mov     ecx, [esp+1Ch+var_C]
0x793CD6: mov     large fs:0, ecx
0x793CDD: pop     ecx
0x793CDE: pop     edi
0x793CDF: pop     esi
0x793CE0: add     esp, 10h
0x793CE3: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
