0x557BB0: push    0FFFFFFFFh
0x557BB2: push    offset SEH_557BB0
0x557BB7: mov     eax, large fs:0
0x557BBD: push    eax
0x557BBE: sub     esp, 20h
0x557BC1: push    ebp
0x557BC2: push    esi
0x557BC3: push    edi
0x557BC4: mov     eax, ds:0B30AACh
0x557BC9: xor     eax, esp
0x557BCB: push    eax
0x557BCC: lea     eax, [esp+3Ch+var_C]
0x557BD0: mov     large fs:0, eax
0x557BD6: mov     esi, ecx
0x557BD8: mov     [esp+3Ch+var_2C], esi
0x557BDC: push    offset FaceGenEgtBasisBank_Destruct; a5
0x557BE1: push    offset FaceGenEgtBasisBank_Construct; a4
0x557BE6: push    2; size
0x557BE8: push    10h; a2
0x557BEA: lea     edi, [esi+4]
0x557BED: push    edi; a1
0x557BEE: call    ArrayConstructor
0x557BF3: mov     edx, [esp+3Ch+Src]
0x557BF7: mov     eax, edx
0x557BF9: mov     [esp+3Ch+var_4], 0
0x557C01: mov     [esp+3Ch+sourceString.capacity], 0Fh
0x557C09: mov     [esp+3Ch+sourceString.size], 0
0x557C11: mov     byte ptr [esp+3Ch+sourceString.storage], 0
0x557C16: lea     ebp, [eax+1]
0x557C19: lea     esp, [esp+0]
0x557C20: mov     cl, [eax]
0x557C22: add     eax, 1
0x557C25: test    cl, cl
0x557C27: jnz     short loc_557C20
0x557C29: sub     eax, ebp
0x557C2B: push    eax; count
0x557C2C: push    edx; source
0x557C2D: lea     ecx, [esp+44h+sourceString]; this
0x557C31: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x557C36: lea     eax, [esi+14h]
0x557C39: push    eax; bank1
0x557C3A: push    edi; bank0
0x557C3B: lea     ecx, [esp+44h+sourceString]
0x557C3F: push    esi; coordinateMetadata
0x557C40: push    ecx; sourceString
0x557C41: mov     byte ptr [esp+4Ch+var_4], 1
0x557C46: call    BSFaceGenEgtData_LoadFile; Load FREGT003 texture-morph data. Validate the magic, read the 56-byte descriptor, and materialize two banks of 64-byte RGB basis records. The descriptor supplies image dimensions and independent bank counts.
0x557C4B: add     esp, 10h
0x557C4E: cmp     [esp+3Ch+sourceString.capacity], 10h
0x557C53: jb      short loc_557C62
0x557C55: mov     edx, dword ptr [esp+3Ch+sourceString.storage]
0x557C59: push    edx
0x557C5A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x557C5F: add     esp, 4
0x557C62: mov     eax, esi
0x557C64: mov     ecx, [esp+3Ch+var_C]
0x557C68: mov     large fs:0, ecx
0x557C6F: pop     ecx
0x557C70: pop     edi
0x557C71: pop     esi
0x557C72: pop     ebp
0x557C73: add     esp, 2Ch
0x557C76: retn    4
0x9BC6A0: push    offset FaceGenEgtBasisBank_Destruct; void (__thiscall *)(void *)
0x9BC6A5: push    2; int
0x9BC6A7: push    10h; unsigned int
0x9BC6A9: mov     eax, [ebp-2Ch]
0x9BC6AC: add     eax, 4
0x9BC6AF: push    eax; void *
0x9BC6B0: call    $LN21
0x9BC6B5: retn
0x9BC6B6: lea     ecx, [ebp-28h]; this
0x9BC6B9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9BC6BE: mov     edx, [esp+arg_4]
0x9BC6C2: lea     eax, [edx-2Ch]
0x9BC6C5: mov     ecx, [edx-30h]
0x9BC6C8: xor     ecx, eax
0x9BC6CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC6CF: mov     eax, offset stru_AE6300
0x9BC6D4: jmp     ___CxxFrameHandler3
