0x6F6110: push    0FFFFFFFFh
0x6F6112: push    offset SEH_6F6110
0x6F6117: mov     eax, large fs:0
0x6F611D: push    eax
0x6F611E: push    ecx
0x6F611F: push    ebx
0x6F6120: push    esi
0x6F6121: mov     eax, ds:0B30AACh
0x6F6126: xor     eax, esp
0x6F6128: push    eax
0x6F6129: lea     eax, [esp+1Ch+var_C]
0x6F612D: mov     large fs:0, eax
0x6F6133: mov     esi, ecx
0x6F6135: sub     esp, 1Ch
0x6F6138: mov     ecx, esp; this
0x6F613A: mov     [esp+38h+var_10], esp
0x6F613E: xor     ebx, ebx
0x6F6140: push    0FFFFFFFFh; count
0x6F6142: push    ebx; offset
0x6F6143: lea     eax, [esp+40h+source]
0x6F6147: mov     dword ptr [ecx+18h], 0Fh
0x6F614E: mov     [ecx+14h], ebx
0x6F6151: push    eax; source
0x6F6152: mov     [esp+44h+var_4], ebx
0x6F6156: mov     [ecx+4], bl
0x6F6159: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F615E: mov     ecx, esi; this
0x6F6160: call    ??0FutBinaryFileC@@QAE@XZ; FutBinaryFileC::FutBinaryFileC(void)
0x6F6165: cmp     [esp+1Ch+source.capacity], 10h
0x6F616A: mov     dword ptr [esi], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F6170: mov     [esi+40h], ebx
0x6F6173: jb      short loc_6F6182
0x6F6175: mov     ecx, dword ptr [esp+1Ch+source.storage]
0x6F6179: push    ecx
0x6F617A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F617F: add     esp, 4
0x6F6182: mov     eax, esi
0x6F6184: mov     ecx, [esp+1Ch+var_C]
0x6F6188: mov     large fs:0, ecx
0x6F618F: pop     ecx
0x6F6190: pop     esi
0x6F6191: pop     ebx
0x6F6192: add     esp, 10h
0x6F6195: retn    1Ch
0x9C8C60: lea     ecx, [ebp+4]; this
0x9C8C63: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8C68: mov     edx, dword ptr [esp+source.storage]
0x9C8C6C: lea     eax, [edx-0Ch]
0x9C8C6F: mov     ecx, [edx-10h]
0x9C8C72: xor     ecx, eax
0x9C8C74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8C79: mov     eax, offset stru_AF1574
0x9C8C7E: jmp     ___CxxFrameHandler3
