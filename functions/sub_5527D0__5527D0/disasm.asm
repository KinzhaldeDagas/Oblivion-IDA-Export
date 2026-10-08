0x5527D0: push    0FFFFFFFFh
0x5527D2: push    offset SEH_5527D0
0x5527D7: mov     eax, large fs:0
0x5527DD: push    eax
0x5527DE: push    ecx
0x5527DF: push    esi
0x5527E0: mov     eax, ds:0B30AACh
0x5527E5: xor     eax, esp
0x5527E7: push    eax
0x5527E8: lea     eax, [esp+18h+var_C]
0x5527EC: mov     large fs:0, eax
0x5527F2: mov     esi, ecx
0x5527F4: mov     [esp+18h+var_10], esi
0x5527F8: push    offset FaceGenMatrix_Destruct; a5
0x5527FD: push    offset FaceGenMatrix_Construct; a4
0x552802: push    2; size
0x552804: push    18h; a2
0x552806: push    esi; a1
0x552807: call    ArrayConstructor
0x55280C: lea     ecx, [esi+30h]; this
0x55280F: mov     [esp+18h+var_4], 0
0x552817: call    FaceGenMatrix_Construct; Constructs a 0x18-byte FaceGenMatrix. Embedded vector layout: allocator state +0x08, begin +0x0C, end +0x10, capacity end +0x14.
0x55281C: push    offset FaceGenMatrix_Destruct; a5
0x552821: push    offset FaceGenMatrix_Construct; a4
0x552826: push    2; size
0x552828: push    18h; a2
0x55282A: lea     eax, [esi+48h]
0x55282D: push    eax; a1
0x55282E: mov     byte ptr [esp+2Ch+var_4], 1
0x552833: call    ArrayConstructor
0x552838: mov     eax, esi
0x55283A: mov     ecx, [esp+18h+var_C]
0x55283E: mov     large fs:0, ecx
0x552845: pop     ecx
0x552846: pop     esi
0x552847: add     esp, 10h
0x55284A: retn
0x9BBCC0: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9BBCC5: push    2; int
0x9BBCC7: push    18h; unsigned int
0x9BBCC9: mov     eax, [ebp-10h]
0x9BBCCC: push    eax; void *
0x9BBCCD: call    $LN21
0x9BBCD2: retn
0x9BBCD3: mov     ecx, [ebp-10h]
0x9BBCD6: add     ecx, 30h ; '0'; this
0x9BBCD9: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9BBCDE: mov     edx, [esp+arg_4]
0x9BBCE2: lea     eax, [edx-8]
0x9BBCE5: mov     ecx, [edx-0Ch]
0x9BBCE8: xor     ecx, eax
0x9BBCEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBCEF: mov     eax, offset stru_AE59E4
0x9BBCF4: jmp     ___CxxFrameHandler3
