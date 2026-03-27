0x4F4080: sub     esp, 5Ch
0x4F4083: mov     eax, ds:0B30AACh
0x4F4088: xor     eax, esp
0x4F408A: mov     [esp+5Ch+var_4], eax
0x4F408E: mov     eax, [esp+5Ch+Src]
0x4F4092: push    ebx
0x4F4093: mov     ebx, [esp+60h+arg_4]
0x4F4097: push    ebp
0x4F4098: push    esi
0x4F4099: mov     esi, ecx
0x4F409B: push    edi
0x4F409C: or      ecx, 0FFFFFFFFh
0x4F409F: lea     ebp, [esi+4]
0x4F40A2: mov     dword ptr [esi], 0
0x4F40A8: mov     [esi+504h], ecx
0x4F40AE: mov     [esi+708h], ecx
0x4F40B4: mov     edi, ebp
0x4F40B6: mov     byte ptr [edi], 28h ; '('
0x4F40B9: mov     ecx, [ebx]
0x4F40BB: push    ecx; Size
0x4F40BC: push    eax; Src
0x4F40BD: add     edi, 1
0x4F40C0: push    edi; Dst
0x4F40C1: mov     [esp+78h+var_50], ebx
0x4F40C5: call    _memcpy
0x4F40CA: add     esp, 0Ch
0x4F40CD: add     edi, [ebx]
0x4F40CF: mov     [esp+6Ch+var_48], ebp
0x4F40D3: mov     byte ptr [edi], 29h ; ')'
0x4F40D6: mov     byte ptr [edi+1], 0
0x4F40DA: lea     edi, [esi+204h]
0x4F40E0: mov     [esp+6Ch+var_4C], edi
0x4F40E4: mov     byte ptr [edi], 0
0x4F40E7: mov     [esp+6Ch+var_59], 0
0x4F40EC: lea     esp, [esp+0]
0x4F40F0: push    0; int
0x4F40F2: push    0; char
0x4F40F4: lea     edx, [esp+74h+var_58]
0x4F40F8: push    edx; int
0x4F40F9: lea     eax, [esp+78h+Dst]
0x4F40FD: push    eax; Dst
0x4F40FE: lea     ecx, [esp+7Ch+var_48]
0x4F4102: push    ecx; int
0x4F4103: mov     ecx, esi
0x4F4105: mov     [esp+80h+var_58], 10h
0x4F410D: call    sub_4F3320
0x4F4112: mov     ebx, [esp+6Ch+var_58]
0x4F4116: mov     ebp, eax
0x4F4118: test    ebp, ebp
0x4F411A: mov     [esp+6Ch+var_54], ebp
0x4F411E: jz      loc_4F42BB
0x4F4124: cmp     ebx, 10h
0x4F4127: jge     loc_4F42A4
0x4F412D: mov     eax, ebx
0x4F412F: sub     eax, 0
0x4F4132: jz      loc_4F4278
0x4F4138: sub     eax, 1
0x4F413B: jz      loc_4F41FC
0x4F4141: sub     eax, 9
0x4F4144: jnz     short loc_4F4152
0x4F4146: cmp     [esp+6Ch+var_59], 0
0x4F414B: jnz     short loc_4F4152
0x4F414D: mov     ebx, 0Fh
0x4F4152: cmp     dword ptr [esi+504h], 0FFFFFFFFh
0x4F4159: jz      short loc_4F41D1
0x4F415B: jmp     short loc_4F4160
0x4F415D: align 10h
0x4F4160: mov     ecx, [esi+504h]
0x4F4166: mov     eax, [esi+ecx*4+404h]
0x4F416D: add     ecx, 0FFFFFFFFh
0x4F4170: mov     [esi+504h], ecx
0x4F4176: mov     dl, ds:0B0A12Ch[eax*8]
0x4F417D: cmp     dl, ds:0B0A12Ch[ebx*8]
0x4F4184: jl      short loc_4F41BD
0x4F4186: lea     ecx, ds:0B0A12Dh[eax*8]
0x4F418D: mov     eax, ecx
0x4F418F: mov     byte ptr [edi], 20h ; ' '
0x4F4192: add     edi, 1
0x4F4195: lea     ebp, [eax+1]
0x4F4198: mov     dl, [eax]
0x4F419A: add     eax, 1
0x4F419D: test    dl, dl
0x4F419F: jnz     short loc_4F4198
0x4F41A1: sub     eax, ebp
0x4F41A3: mov     ebp, eax
0x4F41A5: push    ebp; Size
0x4F41A6: push    ecx; Src
0x4F41A7: push    edi; Dst
0x4F41A8: call    _memcpy
0x4F41AD: add     esp, 0Ch
0x4F41B0: add     edi, ebp
0x4F41B2: cmp     dword ptr [esi+504h], 0FFFFFFFFh
0x4F41B9: jnz     short loc_4F4160
0x4F41BB: jmp     short loc_4F41D1
0x4F41BD: add     dword ptr [esi+504h], 1
0x4F41C4: mov     ecx, [esi+504h]
0x4F41CA: mov     [esi+ecx*4+404h], eax
0x4F41D1: mov     eax, [esi+504h]
0x4F41D7: add     eax, 1
0x4F41DA: cmp     eax, 40h ; '@'
0x4F41DD: jz      loc_4F42FB
0x4F41E3: add     dword ptr [esi+504h], 1
0x4F41EA: mov     eax, [esi+504h]
0x4F41F0: mov     [esi+eax*4+404h], ebx
0x4F41F7: jmp     loc_4F42BB
0x4F41FC: cmp     dword ptr [esi+504h], 0FFFFFFFFh
0x4F4203: jz      loc_4F432B
0x4F4209: mov     ecx, [esi+504h]
0x4F420F: mov     eax, [esi+ecx*4+404h]
0x4F4216: add     ecx, 0FFFFFFFFh
0x4F4219: test    eax, eax
0x4F421B: mov     [esi+504h], ecx
0x4F4221: jz      loc_4F42D3
0x4F4227: jmp     short loc_4F4230
0x4F4229: align 10h
0x4F4230: lea     ecx, ds:0B0A12Dh[eax*8]
0x4F4237: mov     eax, ecx
0x4F4239: mov     byte ptr [edi], 20h ; ' '
0x4F423C: add     edi, 1
0x4F423F: lea     ebp, [eax+1]
0x4F4242: mov     dl, [eax]
0x4F4244: add     eax, 1
0x4F4247: test    dl, dl
0x4F4249: jnz     short loc_4F4242
0x4F424B: sub     eax, ebp
0x4F424D: mov     ebp, eax
0x4F424F: push    ebp; Size
0x4F4250: push    ecx; Src
0x4F4251: push    edi; Dst
0x4F4252: call    _memcpy
0x4F4257: mov     ecx, [esi+504h]
0x4F425D: mov     eax, [esi+ecx*4+404h]
0x4F4264: add     ecx, 0FFFFFFFFh
0x4F4267: add     esp, 0Ch
0x4F426A: add     edi, ebp
0x4F426C: test    eax, eax
0x4F426E: mov     [esi+504h], ecx
0x4F4274: jnz     short loc_4F4230
0x4F4276: jmp     short loc_4F42D3
0x4F4278: mov     ecx, [esi+504h]
0x4F427E: add     ecx, 1
0x4F4281: cmp     ecx, 40h ; '@'
0x4F4284: jz      loc_4F435C
0x4F428A: add     dword ptr [esi+504h], 1
0x4F4291: mov     eax, [esi+504h]
0x4F4297: mov     dword ptr [esi+eax*4+404h], 0
0x4F42A2: jmp     short loc_4F42D3
0x4F42A4: push    ebp; Size
0x4F42A5: lea     edx, [esp+70h+Dst]
0x4F42A9: mov     byte ptr [edi], 20h ; ' '
0x4F42AC: push    edx; Src
0x4F42AD: add     edi, 1
0x4F42B0: push    edi; Dst
0x4F42B1: call    _memcpy
0x4F42B6: add     esp, 0Ch
0x4F42B9: add     edi, ebp
0x4F42BB: cmp     ebx, 10h
0x4F42BE: jnz     short loc_4F42C7
0x4F42C0: mov     [esp+6Ch+var_59], 1
0x4F42C5: jmp     short loc_4F42D3
0x4F42C7: jge     short loc_4F42D3
0x4F42C9: cmp     ebx, 1
0x4F42CC: jle     short loc_4F42D3
0x4F42CE: mov     [esp+6Ch+var_59], 0
0x4F42D3: cmp     [esp+6Ch+var_54], 0
0x4F42D8: jnz     loc_4F40F0
0x4F42DE: mov     byte ptr [edi], 0
0x4F42E1: cmp     dword ptr [esi+504h], 0FFFFFFFFh
0x4F42E8: jz      loc_4F438D
0x4F42EE: mov     dword ptr [esi], 5
0x4F42F4: mov     eax, ds:0B09DD4h
0x4F42F9: jmp     short loc_4F4306
0x4F42FB: mov     dword ptr [esi], 2
0x4F4301: mov     eax, ds:0B09DC8h
0x4F4306: push    eax; ArgList
0x4F4307: push    offset aS; "%s"
0x4F430C: call    sub_40FEC0
0x4F4311: add     esp, 8
0x4F4314: pop     edi
0x4F4315: pop     esi
0x4F4316: pop     ebp
0x4F4317: xor     eax, eax
0x4F4319: pop     ebx
0x4F431A: mov     ecx, [esp+5Ch+var_4]
0x4F431E: xor     ecx, esp
0x4F4320: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F4325: add     esp, 5Ch
0x4F4328: retn    8
0x4F432B: mov     dword ptr [esi], 5
0x4F4331: mov     ecx, ds:0B09DD4h
0x4F4337: push    ecx; ArgList
0x4F4338: push    offset aS; "%s"
0x4F433D: call    sub_40FEC0
0x4F4342: add     esp, 8
0x4F4345: pop     edi
0x4F4346: pop     esi
0x4F4347: pop     ebp
0x4F4348: xor     eax, eax
0x4F434A: pop     ebx
0x4F434B: mov     ecx, [esp+5Ch+var_4]
0x4F434F: xor     ecx, esp
0x4F4351: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F4356: add     esp, 5Ch
0x4F4359: retn    8
0x4F435C: mov     dword ptr [esi], 2
0x4F4362: mov     edx, ds:0B09DC8h
0x4F4368: push    edx; ArgList
0x4F4369: push    offset aS; "%s"
0x4F436E: call    sub_40FEC0
0x4F4373: add     esp, 8
0x4F4376: pop     edi
0x4F4377: pop     esi
0x4F4378: pop     ebp
0x4F4379: xor     eax, eax
0x4F437B: pop     ebx
0x4F437C: mov     ecx, [esp+5Ch+var_4]
0x4F4380: xor     ecx, esp
0x4F4382: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F4387: add     esp, 5Ch
0x4F438A: retn    8
0x4F438D: mov     ecx, [esp+6Ch+var_50]
0x4F4391: mov     eax, [esp+6Ch+var_4C]
0x4F4395: sub     edi, esi
0x4F4397: sub     edi, 204h
0x4F439D: mov     [ecx], edi
0x4F439F: mov     ecx, [esp+6Ch+var_4]
0x4F43A3: pop     edi
0x4F43A4: pop     esi
0x4F43A5: pop     ebp
0x4F43A6: pop     ebx
0x4F43A7: xor     ecx, esp
0x4F43A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F43AE: add     esp, 5Ch
0x4F43B1: retn    8
