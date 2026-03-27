0x8AFDC0: push    ebp
0x8AFDC1: mov     ebp, esp
0x8AFDC3: and     esp, 0FFFFFFF0h
0x8AFDC6: push    0FFFFFFFFh
0x8AFDC8: push    offset SEH_8AFDC0
0x8AFDCD: mov     eax, large fs:0
0x8AFDD3: push    eax
0x8AFDD4: sub     esp, 12Ch
0x8AFDDA: mov     eax, ds:0B30AACh
0x8AFDDF: xor     eax, esp
0x8AFDE1: mov     [esp+138h+var_14], eax
0x8AFDE8: push    esi
0x8AFDE9: push    edi
0x8AFDEA: mov     eax, ds:0B30AACh
0x8AFDEF: xor     eax, esp
0x8AFDF1: push    eax
0x8AFDF2: lea     eax, [esp+144h+var_C]
0x8AFDF9: mov     large fs:0, eax
0x8AFDFF: fldz
0x8AFE01: xor     edi, edi
0x8AFE03: fst     [esp+144h+var_114]
0x8AFE07: mov     [esp+144h+var_130], edi
0x8AFE0B: fst     [esp+144h+var_104]
0x8AFE0F: fld     [ebp+arg_4]
0x8AFE12: fld     st
0x8AFE14: fadd    st, st(1)
0x8AFE16: fld     [ebp+arg_0]
0x8AFE19: fcomp   st(1)
0x8AFE1B: fnstsw  ax
0x8AFE1D: test    ah, 41h
0x8AFE20: jp      short loc_8AFE2D
0x8AFE22: fadd    qword ptr ds:0A2F928h
0x8AFE28: fstp    [ebp+arg_0]
0x8AFE2B: jmp     short loc_8AFE2F
0x8AFE2D: fstp    st
0x8AFE2F: fld     st
0x8AFE31: push    14h; Size
0x8AFE33: fld     qword ptr ds:0A39088h
0x8AFE39: fmul    st(1), st
0x8AFE3B: fxch    st(1)
0x8AFE3D: fstp    [esp+148h+var_12C]
0x8AFE41: fxch    st(2)
0x8AFE43: fst     [esp+148h+var_120]
0x8AFE47: fst     [esp+148h+var_11C]
0x8AFE4B: fld     [ebp+arg_0]
0x8AFE4E: fsubrp  st(2), st
0x8AFE50: fxch    st(1)
0x8AFE52: fstp    [esp+148h+var_134]
0x8AFE56: fld     [esp+148h+var_134]
0x8AFE5A: fmulp   st(2), st
0x8AFE5C: fxch    st(1)
0x8AFE5E: fstp    [esp+148h+var_118]
0x8AFE62: fst     [esp+148h+var_110]
0x8AFE66: fstp    [esp+148h+var_10C]
0x8AFE6A: fld     [esp+148h+var_12C]
0x8AFE6E: fstp    [esp+148h+var_108]
0x8AFE72: call    FormHeapAlloc
0x8AFE77: add     esp, 4
0x8AFE7A: mov     [esp+144h+var_134], eax
0x8AFE7E: cmp     eax, edi
0x8AFE80: mov     [esp+144h+var_4], edi
0x8AFE87: jz      short loc_8AFE99
0x8AFE89: lea     ecx, [esp+144h+var_130]
0x8AFE8D: push    ecx
0x8AFE8E: mov     ecx, eax
0x8AFE90: call    sub_563BB0
0x8AFE95: mov     esi, eax
0x8AFE97: jmp     short loc_8AFE9B
0x8AFE99: xor     esi, esi
0x8AFE9B: cmp     esi, edi
0x8AFE9D: mov     [esp+144h+var_4], 0FFFFFFFFh
0x8AFEA8: jz      loc_8AFF7A
0x8AFEAE: lea     ecx, [esp+144h+var_100]
0x8AFEB2: mov     dword ptr [esi+10h], 9
0x8AFEB9: call    sub_8A5790
0x8AFEBE: fldz
0x8AFEC0: mov     esi, [esi+8]
0x8AFEC3: fstp    [esp+144h+var_50]
0x8AFECA: fld     dword ptr ds:0A3F424h
0x8AFED0: mov     eax, 40009h
0x8AFED5: push    1Ch; Size
0x8AFED7: fstp    [esp+148h+var_44]
0x8AFEDE: mov     [esp+148h+var_4], 1
0x8AFEE9: mov     [esp+148h+var_30], 7
0x8AFEF1: mov     [esp+148h+var_100], eax
0x8AFEF5: mov     [esp+148h+var_E0], eax
0x8AFEF9: mov     [esp+148h+var_FC], esi
0x8AFEFD: mov     [esp+148h+var_DC], esi
0x8AFF01: call    FormHeapAlloc
0x8AFF06: add     esp, 4
0x8AFF09: mov     [esp+144h+var_134], eax
0x8AFF0D: cmp     eax, edi
0x8AFF0F: mov     byte ptr [esp+144h+var_4], 2
0x8AFF17: jz      short loc_8AFF29
0x8AFF19: lea     edx, [esp+144h+var_100]
0x8AFF1D: push    edx
0x8AFF1E: mov     ecx, eax
0x8AFF20: call    sub_533290
0x8AFF25: mov     esi, eax
0x8AFF27: jmp     short loc_8AFF2B
0x8AFF29: xor     esi, esi
0x8AFF2B: mov     eax, [esp+144h+var_EC]
0x8AFF2F: test    eax, eax
0x8AFF31: mov     [esp+144h+var_4], 0FFFFFFFFh
0x8AFF3C: js      short loc_8AFF76
0x8AFF3E: mov     ecx, ds:0BA9DE4h
0x8AFF44: mov     edx, large fs:2Ch
0x8AFF4B: mov     ecx, [edx+ecx*4]
0x8AFF4E: mov     ecx, [ecx+19Ch]
0x8AFF54: cmp     ecx, edi
0x8AFF56: jnz     short loc_8AFF5E
0x8AFF58: mov     ecx, ds:0BA7D9Ch
0x8AFF5E: mov     edx, [esp+144h+var_F4]
0x8AFF62: and     eax, 3FFFFFFFh
0x8AFF67: add     eax, eax
0x8AFF69: add     eax, eax
0x8AFF6B: push    14h
0x8AFF6D: add     eax, eax
0x8AFF6F: push    eax
0x8AFF70: push    edx
0x8AFF71: call    sub_8A75D0
0x8AFF76: mov     eax, esi
0x8AFF78: jmp     short loc_8AFF7C
0x8AFF7A: mov     eax, edi
0x8AFF7C: mov     ecx, [esp+144h+var_C]
0x8AFF83: mov     large fs:0, ecx
0x8AFF8A: pop     ecx
0x8AFF8B: pop     edi
0x8AFF8C: pop     esi
0x8AFF8D: mov     ecx, [esp+138h+var_14]
0x8AFF94: xor     ecx, esp
0x8AFF96: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AFF9B: mov     esp, ebp
0x8AFF9D: pop     ebp
0x8AFF9E: retn
