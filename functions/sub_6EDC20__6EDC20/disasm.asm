0x6EDC20: push    0FFFFFFFFh
0x6EDC22: push    offset SEH_6EDC20
0x6EDC27: mov     eax, large fs:0
0x6EDC2D: push    eax
0x6EDC2E: push    ecx
0x6EDC2F: push    esi
0x6EDC30: push    edi
0x6EDC31: mov     eax, ds:0B30AACh
0x6EDC36: xor     eax, esp
0x6EDC38: push    eax
0x6EDC39: lea     eax, [esp+1Ch+var_C]
0x6EDC3D: mov     large fs:0, eax
0x6EDC43: mov     esi, ecx
0x6EDC45: mov     [esp+1Ch+var_10], esi
0x6EDC49: mov     edi, [esp+1Ch+arg_0]
0x6EDC4D: push    edi
0x6EDC4E: call    sub_552160
0x6EDC53: xor     eax, eax
0x6EDC55: push    0FFFFFFFFh; count
0x6EDC57: lea     ecx, [esi+18h]; this
0x6EDC5A: push    eax; offset
0x6EDC5B: add     edi, 18h
0x6EDC5E: mov     dword ptr [ecx+18h], 0Fh
0x6EDC65: mov     [ecx+14h], eax
0x6EDC68: push    edi; source
0x6EDC69: mov     [esp+28h+var_4], eax
0x6EDC6D: mov     [ecx+4], al
0x6EDC70: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6EDC75: mov     eax, esi
0x6EDC77: mov     ecx, [esp+1Ch+var_C]
0x6EDC7B: mov     large fs:0, ecx
0x6EDC82: pop     ecx
0x6EDC83: pop     edi
0x6EDC84: pop     esi
0x6EDC85: add     esp, 10h
0x6EDC88: retn    4
0x9C8430: mov     ecx, [ebp-10h]; this
0x9C8433: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9C8438: mov     edx, [esp+arg_4]
0x9C843C: lea     eax, [edx-0Ch]
0x9C843F: mov     ecx, [edx-10h]
0x9C8442: xor     ecx, eax
0x9C8444: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8449: mov     eax, offset stru_AF06CC
0x9C844E: jmp     ___CxxFrameHandler3
